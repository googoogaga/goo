/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast */

EXT(Ynot,"goo/boot","not");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSastYsequential,"eval/ast","sequential");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSastYmodule_uses_c_files_setter,"eval/ast","module-uses-c-files-setter");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(Yfun_refs,"goo/boot","fun-refs");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DEF(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
DEF(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
DEF(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YevalSastYbinding_prop,"eval/ast","binding-prop");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
DEF(YevalSastYmodule_exports_setter,"eval/ast","module-exports-setter");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYmodule_name_setter,"eval/ast","module-name-setter");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalSastYinsert_and_mangle_globalX,"eval/ast","insert-and-mangle-global!");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
EXT(YtT,"goo/boot","t*");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DYNDEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSastYnamespace_error,"eval/ast","namespace-error");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
DEF(YevalSastYLnamespace_errorG,"eval/ast","<namespace-error>");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
DEF(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
DEF(YevalSastYPmodule_exports_setter,"eval/ast","%module-exports-setter");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
DEF(YevalSastYimport_and_mangle_globalX,"eval/ast","import-and-mangle-global!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSastYbinding_prop_setter,"eval/ast","binding-prop-setter");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
DEF(YevalSastYmodule_uses_c_libraries_setter,"eval/ast","module-uses-c-libraries-setter");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSastYmodule_uses_c_includes_setter,"eval/ast","module-uses-c-includes-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YevalSastYftype,"eval/ast","ftype");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DEF(YevalSastYfunctions,"eval/ast","functions");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
DEF(YevalSastYobjectify,"eval/ast","objectify");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
DEF(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYA,"goo/math","+");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
DEF(YevalSastYarguments,"eval/ast","arguments");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
DEF(YevalSastYreloader_do_dynamic_binding,"eval/ast","reloader-do-dynamic-binding");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yunexec,"goo/boot","unexec");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_741);
DEFLIT(lit_500);
DEFLIT(lit_630);
DEFLIT(lit_757);
DEFLIT(lit_1043);
DEFLIT(lit_140);
DEFLIT(lit_585);
DEFLIT(lit_815);
DEFLIT(lit_29);
DEFLIT(lit_222);
DEFLIT(lit_716);
DEFLIT(lit_676);
DEFLIT(lit_95);
DEFLIT(lit_985);
DEFLIT(lit_736);
DEFLIT(lit_246);
DEFLIT(lit_476);
DEFLIT(lit_634);
DEFLIT(lit_950);
DEFLIT(lit_1072);
DEFLIT(lit_247);
DEFLIT(lit_262);
DEFLIT(lit_175);
DEFLIT(lit_735);
DEFLIT(lit_417);
DEFLIT(lit_874);
DEFLIT(lit_74);
DEFLIT(lit_205);
DEFLIT(lit_154);
DEFLIT(lit_368);
DEFLIT(lit_225);
DEFLIT(lit_569);
DEFLIT(lit_176);
DEFLIT(lit_413);
DEFLIT(lit_71);
DEFLIT(lit_860);
DEFLIT(lit_40);
DEFLIT(lit_566);
DEFLIT(lit_727);
DEFLIT(lit_784);
DEFLIT(lit_215);
DEFLIT(lit_801);
DEFLIT(lit_412);
DEFLIT(lit_1023);
DEFLIT(lit_467);
DEFLIT(lit_383);
DEFLIT(lit_707);
DEFLIT(lit_475);
DEFLIT(lit_633);
DEFLIT(lit_608);
DEFLIT(lit_120);
DEFLIT(lit_1025);
DEFLIT(lit_1027);
DEFLIT(lit_131);
DEFLIT(lit_832);
DEFLIT(lit_56);
DEFLIT(lit_650);
DEFLIT(lit_217);
DEFLIT(lit_453);
DEFLIT(lit_826);
DEFLIT(lit_901);
DEFLIT(lit_474);
DEFLIT(lit_657);
DEFLIT(lit_27);
DEFLIT(lit_648);
DEFLIT(lit_616);
DEFLIT(lit_405);
DEFLIT(lit_936);
DEFLIT(lit_273);
DEFLIT(lit_738);
DEFLIT(lit_799);
DEFLIT(lit_1016);
DEFLIT(lit_283);
DEFLIT(lit_285);
DEFLIT(lit_132);
DEFLIT(lit_706);
DEFLIT(lit_462);
DEFLIT(lit_813);
DEFLIT(lit_976);
DEFLIT(lit_179);
DEFLIT(lit_923);
DEFLIT(lit_496);
DEFLIT(lit_336);
DEFLIT(lit_1062);
DEFLIT(lit_142);
DEFLIT(lit_521);
DEFLIT(lit_607);
DEFLIT(lit_279);
DEFLIT(lit_1057);
DEFLIT(lit_206);
DEFLIT(lit_87);
DEFLIT(lit_624);
DEFLIT(lit_822);
DEFLIT(lit_882);
DEFLIT(lit_579);
DEFLIT(lit_642);
DEFLIT(lit_1029);
DEFLIT(lit_1048);
DEFLIT(lit_791);
DEFLIT(lit_324);
DEFLIT(lit_301);
DEFLIT(lit_685);
DEFLIT(lit_6);
DEFLIT(lit_483);
DEFLIT(lit_671);
DEFLIT(lit_292);
DEFLIT(lit_334);
DEFLIT(lit_837);
DEFLIT(lit_1010);
DEFLIT(lit_704);
DEFLIT(lit_138);
DEFLIT(lit_221);
DEFLIT(lit_341);
DEFLIT(lit_742);
DEFLIT(lit_66);
DEFLIT(lit_797);
DEFLIT(lit_357);
DEFLIT(lit_514);
DEFLIT(lit_316);
DEFLIT(lit_669);
DEFLIT(lit_156);
DEFLIT(lit_494);
DEFLIT(lit_448);
DEFLIT(lit_470);
DEFLIT(lit_200);
DEFLIT(lit_99);
DEFLIT(lit_393);
DEFLIT(lit_187);
DEFLIT(lit_377);
DEFLIT(lit_213);
DEFLIT(lit_627);
DEFLIT(lit_466);
DEFLIT(lit_745);
DEFLIT(lit_818);
DEFLIT(lit_190);
DEFLIT(lit_424);
DEFLIT(lit_395);
DEFLIT(lit_717);
DEFLIT(lit_218);
DEFLIT(lit_460);
DEFLIT(lit_987);
DEFLIT(lit_563);
DEFLIT(lit_1011);
DEFLIT(lit_441);
DEFLIT(lit_78);
DEFLIT(lit_982);
DEFLIT(lit_1007);
DEFLIT(lit_800);
DEFLIT(lit_161);
DEFLIT(lit_546);
DEFLIT(lit_1020);
DEFLIT(lit_112);
DEFLIT(lit_238);
DEFLIT(lit_760);
DEFLIT(lit_430);
DEFLIT(lit_824);
DEFLIT(lit_270);
DEFLIT(lit_705);
DEFLIT(lit_195);
DEFLIT(lit_751);
DEFLIT(lit_670);
DEFLIT(lit_1073);
DEFLIT(lit_314);
DEFLIT(lit_773);
DEFLIT(lit_715);
DEFLIT(lit_123);
DEFLIT(lit_163);
DEFLIT(lit_565);
DEFLIT(lit_808);
DEFLIT(lit_615);
DEFLIT(lit_702);
DEFLIT(lit_1003);
DEFLIT(lit_338);
DEFLIT(lit_189);
DEFLIT(lit_871);
DEFLIT(lit_652);
DEFLIT(lit_457);
DEFLIT(lit_714);
DEFLIT(lit_852);
DEFLIT(lit_865);
DEFLIT(lit_49);
DEFLIT(lit_509);
DEFLIT(lit_841);
DEFLIT(lit_1018);
DEFLIT(lit_208);
DEFLIT(lit_504);
DEFLIT(lit_571);
DEFLIT(lit_408);
DEFLIT(lit_83);
DEFLIT(lit_337);
DEFLIT(lit_879);
DEFLIT(lit_690);
DEFLIT(lit_454);
DEFLIT(lit_570);
DEFLIT(lit_520);
DEFLIT(lit_129);
DEFLIT(lit_723);
DEFLIT(lit_597);
DEFLIT(lit_318);
DEFLIT(lit_756);
DEFLIT(lit_928);
DEFLIT(lit_663);
DEFLIT(lit_12);
DEFLIT(lit_450);
DEFLIT(lit_964);
DEFLIT(lit_185);
DEFLIT(lit_1049);
DEFLIT(lit_991);
DEFLIT(lit_180);
DEFLIT(lit_184);
DEFLIT(lit_322);
DEFLIT(lit_399);
DEFLIT(lit_16);
DEFLIT(lit_955);
DEFLIT(lit_805);
DEFLIT(lit_194);
DEFLIT(lit_873);
DEFLIT(lit_1019);
DEFLIT(lit_790);
DEFLIT(lit_117);
DEFLIT(lit_568);
DEFLIT(lit_632);
DEFLIT(lit_289);
DEFLIT(lit_974);
DEFLIT(lit_1071);
DEFLIT(lit_339);
DEFLIT(lit_243);
DEFLIT(lit_378);
DEFLIT(lit_591);
DEFLIT(lit_872);
DEFLIT(lit_719);
DEFLIT(lit_599);
DEFLIT(lit_3);
DEFLIT(lit_562);
DEFLIT(lit_583);
DEFLIT(lit_640);
DEFLIT(lit_958);
DEFLIT(lit_1015);
DEFLIT(lit_280);
DEFLIT(lit_858);
DEFLIT(lit_689);
DEFLIT(lit_575);
DEFLIT(lit_63);
DEFLIT(lit_665);
DEFLIT(lit_750);
DEFLIT(lit_389);
DEFLIT(lit_1040);
DEFLIT(lit_862);
DEFLIT(lit_932);
DEFLIT(lit_266);
DEFLIT(lit_922);
DEFLIT(lit_124);
DEFLIT(lit_1001);
DEFLIT(lit_688);
DEFLIT(lit_170);
DEFLIT(lit_274);
DEFLIT(lit_919);
DEFLIT(lit_365);
DEFLIT(lit_212);
DEFLIT(lit_561);
DEFLIT(lit_519);
DEFLIT(lit_25);
DEFLIT(lit_370);
DEFLIT(lit_113);
DEFLIT(lit_236);
DEFLIT(lit_523);
DEFLIT(lit_769);
DEFLIT(lit_747);
DEFLIT(lit_36);
DEFLIT(lit_929);
DEFLIT(lit_983);
DEFLIT(lit_69);
DEFLIT(lit_461);
DEFLIT(lit_935);
DEFLIT(lit_242);
DEFLIT(lit_385);
DEFLIT(lit_754);
DEFLIT(lit_721);
DEFLIT(lit_381);
DEFLIT(lit_196);
DEFLIT(lit_1034);
DEFLIT(lit_54);
DEFLIT(lit_345);
DEFLIT(lit_866);
DEFLIT(lit_330);
DEFLIT(lit_260);
DEFLIT(lit_143);
DEFLIT(lit_592);
DEFLIT(lit_557);
DEFLIT(lit_269);
DEFLIT(lit_127);
DEFLIT(lit_525);
DEFLIT(lit_425);
DEFLIT(lit_621);
DEFLIT(lit_81);
DEFLIT(lit_181);
DEFLIT(lit_899);
DEFLIT(lit_811);
DEFLIT(lit_272);
DEFLIT(lit_780);
DEFLIT(lit_35);
DEFLIT(lit_172);
DEFLIT(lit_703);
DEFLIT(lit_186);
DEFLIT(lit_905);
DEFLIT(lit_258);
DEFLIT(lit_26);
DEFLIT(lit_595);
DEFLIT(lit_851);
DEFLIT(lit_348);
DEFLIT(lit_145);
DEFLIT(lit_147);
DEFLIT(lit_1050);
DEFLIT(lit_772);
DEFLIT(lit_937);
DEFLIT(lit_787);
DEFLIT(lit_306);
DEFLIT(lit_287);
DEFLIT(lit_631);
DEFLIT(lit_979);
DEFLIT(lit_945);
DEFLIT(lit_559);
DEFLIT(lit_1022);
DEFLIT(lit_980);
DEFLIT(lit_9);
DEFLIT(lit_672);
DEFLIT(lit_877);
DEFLIT(lit_220);
DEFLIT(lit_699);
DEFLIT(lit_418);
DEFLIT(lit_299);
DEFLIT(lit_268);
DEFLIT(lit_167);
DEFLIT(lit_829);
DEFLIT(lit_986);
DEFLIT(lit_257);
DEFLIT(lit_20);
DEFLIT(lit_77);
DEFLIT(lit_792);
DEFLIT(lit_323);
DEFLIT(lit_116);
DEFLIT(lit_786);
DEFLIT(lit_235);
DEFLIT(lit_404);
DEFLIT(lit_61);
DEFLIT(lit_578);
DEFLIT(lit_732);
DEFLIT(lit_28);
DEFLIT(lit_64);
DEFLIT(lit_658);
DEFLIT(lit_437);
DEFLIT(lit_114);
DEFLIT(lit_649);
DEFLIT(lit_816);
DEFLIT(lit_622);
DEFLIT(lit_1061);
DEFLIT(lit_108);
DEFLIT(lit_915);
DEFLIT(lit_581);
DEFLIT(lit_382);
DEFLIT(lit_947);
DEFLIT(lit_734);
DEFLIT(lit_34);
DEFLIT(lit_857);
DEFLIT(lit_391);
DEFLIT(lit_375);
DEFLIT(lit_261);
DEFLIT(lit_429);
DEFLIT(lit_211);
DEFLIT(lit_98);
DEFLIT(lit_18);
DEFLIT(lit_535);
DEFLIT(lit_256);
DEFLIT(lit_712);
DEFLIT(lit_798);
DEFLIT(lit_590);
DEFLIT(lit_139);
DEFLIT(lit_251);
DEFLIT(lit_216);
DEFLIT(lit_458);
DEFLIT(lit_313);
DEFLIT(lit_47);
DEFLIT(lit_743);
DEFLIT(lit_668);
DEFLIT(lit_859);
DEFLIT(lit_141);
DEFLIT(lit_984);
DEFLIT(lit_700);
DEFLIT(lit_946);
DEFLIT(lit_768);
DEFLIT(lit_973);
DEFLIT(lit_7);
DEFLIT(lit_209);
DEFLIT(lit_758);
DEFLIT(lit_613);
DEFLIT(lit_103);
DEFLIT(lit_371);
DEFLIT(lit_249);
DEFLIT(lit_539);
DEFLIT(lit_446);
DEFLIT(lit_199);
DEFLIT(lit_737);
DEFLIT(lit_73);
DEFLIT(lit_298);
DEFLIT(lit_951);
DEFLIT(lit_255);
DEFLIT(lit_352);
DEFLIT(lit_203);
DEFLIT(lit_121);
DEFLIT(lit_896);
DEFLIT(lit_724);
DEFLIT(lit_1069);
DEFLIT(lit_75);
DEFLIT(lit_576);
DEFLIT(lit_1068);
DEFLIT(lit_662);
DEFLIT(lit_1056);
DEFLIT(lit_681);
DEFLIT(lit_239);
DEFLIT(lit_606);
DEFLIT(lit_436);
DEFLIT(lit_533);
DEFLIT(lit_698);
DEFLIT(lit_13);
DEFLIT(lit_110);
DEFLIT(lit_148);
DEFLIT(lit_346);
DEFLIT(lit_838);
DEFLIT(lit_639);
DEFLIT(lit_1053);
DEFLIT(lit_957);
DEFLIT(lit_515);
DEFLIT(lit_827);
DEFLIT(lit_673);
DEFLIT(lit_527);
DEFLIT(lit_953);
DEFLIT(lit_492);
DEFLIT(lit_369);
DEFLIT(lit_843);
DEFLIT(lit_201);
DEFLIT(lit_892);
DEFLIT(lit_308);
DEFLIT(lit_574);
DEFLIT(lit_105);
DEFLIT(lit_925);
DEFLIT(lit_884);
DEFLIT(lit_842);
DEFLIT(lit_625);
DEFLIT(lit_253);
DEFLIT(lit_420);
DEFLIT(lit_1012);
DEFLIT(lit_428);
DEFLIT(lit_237);
DEFLIT(lit_89);
DEFLIT(lit_432);
DEFLIT(lit_744);
DEFLIT(lit_380);
DEFLIT(lit_997);
DEFLIT(lit_596);
DEFLIT(lit_367);
DEFLIT(lit_683);
DEFLIT(lit_614);
DEFLIT(lit_647);
DEFLIT(lit_770);
DEFLIT(lit_794);
DEFLIT(lit_60);
DEFLIT(lit_748);
DEFLIT(lit_107);
DEFLIT(lit_177);
DEFLIT(lit_682);
DEFLIT(lit_870);
DEFLIT(lit_349);
DEFLIT(lit_65);
DEFLIT(lit_426);
DEFLIT(lit_619);
DEFLIT(lit_931);
DEFLIT(lit_970);
DEFLIT(lit_228);
DEFLIT(lit_788);
DEFLIT(lit_1014);
DEFLIT(lit_487);
DEFLIT(lit_550);
DEFLIT(lit_1076);
DEFLIT(lit_0);
DEFLIT(lit_729);
DEFLIT(lit_789);
DEFLIT(lit_67);
DEFLIT(lit_587);
DEFLIT(lit_300);
DEFLIT(lit_234);
DEFLIT(lit_779);
DEFLIT(lit_38);
DEFLIT(lit_1054);
DEFLIT(lit_825);
DEFLIT(lit_781);
DEFLIT(lit_775);
DEFLIT(lit_536);
DEFLIT(lit_111);
DEFLIT(lit_481);
DEFLIT(lit_233);
DEFLIT(lit_767);
DEFLIT(lit_666);
DEFLIT(lit_972);
DEFLIT(lit_990);
DEFLIT(lit_319);
DEFLIT(lit_327);
DEFLIT(lit_1060);
DEFLIT(lit_310);
DEFLIT(lit_372);
DEFLIT(lit_70);
DEFLIT(lit_168);
DEFLIT(lit_849);
DEFLIT(lit_455);
DEFLIT(lit_573);
DEFLIT(lit_293);
DEFLIT(lit_343);
DEFLIT(lit_731);
DEFLIT(lit_191);
DEFLIT(lit_48);
DEFLIT(lit_344);
DEFLIT(lit_600);
DEFLIT(lit_463);
DEFLIT(lit_806);
DEFLIT(lit_903);
DEFLIT(lit_82);
DEFLIT(lit_720);
DEFLIT(lit_540);
DEFLIT(lit_913);
DEFLIT(lit_72);
DEFLIT(lit_552);
DEFLIT(lit_1032);
DEFLIT(lit_543);
DEFLIT(lit_564);
DEFLIT(lit_79);
DEFLIT(lit_30);
DEFLIT(lit_611);
DEFLIT(lit_410);
DEFLIT(lit_878);
DEFLIT(lit_157);
DEFLIT(lit_126);
DEFLIT(lit_582);
DEFLIT(lit_33);
DEFLIT(lit_491);
DEFLIT(lit_122);
DEFLIT(lit_655);
DEFLIT(lit_965);
DEFLIT(lit_941);
DEFLIT(lit_1077);
DEFLIT(lit_398);
DEFLIT(lit_442);
DEFLIT(lit_636);
DEFLIT(lit_447);
DEFLIT(lit_433);
DEFLIT(lit_304);
DEFLIT(lit_118);
DEFLIT(lit_667);
DEFLIT(lit_551);
DEFLIT(lit_479);
DEFLIT(lit_158);
DEFLIT(lit_828);
DEFLIT(lit_538);
DEFLIT(lit_68);
DEFLIT(lit_1052);
DEFLIT(lit_908);
DEFLIT(lit_11);
DEFLIT(lit_839);
DEFLIT(lit_226);
DEFLIT(lit_165);
DEFLIT(lit_930);
DEFLIT(lit_513);
DEFLIT(lit_814);
DEFLIT(lit_2);
DEFLIT(lit_593);
DEFLIT(lit_796);
DEFLIT(lit_188);
DEFLIT(lit_489);
DEFLIT(lit_766);
DEFLIT(lit_1046);
DEFLIT(lit_740);
DEFLIT(lit_265);
DEFLIT(lit_807);
DEFLIT(lit_510);
DEFLIT(lit_967);
DEFLIT(lit_353);
DEFLIT(lit_53);
DEFLIT(lit_943);
DEFLIT(lit_803);
DEFLIT(lit_1031);
DEFLIT(lit_435);
DEFLIT(lit_646);
DEFLIT(lit_342);
DEFLIT(lit_485);
DEFLIT(lit_601);
DEFLIT(lit_106);
DEFLIT(lit_244);
DEFLIT(lit_224);
DEFLIT(lit_93);
DEFLIT(lit_921);
DEFLIT(lit_547);
DEFLIT(lit_542);
DEFLIT(lit_902);
DEFLIT(lit_427);
DEFLIT(lit_362);
DEFLIT(lit_529);
DEFLIT(lit_1038);
DEFLIT(lit_746);
DEFLIT(lit_19);
DEFLIT(lit_162);
DEFLIT(lit_278);
DEFLIT(lit_524);
DEFLIT(lit_1059);
DEFLIT(lit_137);
DEFLIT(lit_864);
DEFLIT(lit_62);
DEFLIT(lit_386);
DEFLIT(lit_909);
DEFLIT(lit_109);
DEFLIT(lit_733);
DEFLIT(lit_85);
DEFLIT(lit_388);
DEFLIT(lit_677);
DEFLIT(lit_332);
DEFLIT(lit_1006);
DEFLIT(lit_623);
DEFLIT(lit_421);
DEFLIT(lit_961);
DEFLIT(lit_214);
DEFLIT(lit_286);
DEFLIT(lit_580);
DEFLIT(lit_397);
DEFLIT(lit_174);
DEFLIT(lit_952);
DEFLIT(lit_836);
DEFLIT(lit_696);
DEFLIT(lit_55);
DEFLIT(lit_101);
DEFLIT(lit_459);
DEFLIT(lit_169);
DEFLIT(lit_660);
DEFLIT(lit_558);
DEFLIT(lit_90);
DEFLIT(lit_104);
DEFLIT(lit_508);
DEFLIT(lit_296);
DEFLIT(lit_231);
DEFLIT(lit_999);
DEFLIT(lit_31);
DEFLIT(lit_604);
DEFLIT(lit_782);
DEFLIT(lit_152);
DEFLIT(lit_254);
DEFLIT(lit_904);
DEFLIT(lit_271);
DEFLIT(lit_885);
DEFLIT(lit_439);
DEFLIT(lit_856);
DEFLIT(lit_407);
DEFLIT(lit_771);
DEFLIT(lit_981);
DEFLIT(lit_831);
DEFLIT(lit_153);
DEFLIT(lit_44);
DEFLIT(lit_532);
DEFLIT(lit_59);
DEFLIT(lit_320);
DEFLIT(lit_847);
DEFLIT(lit_853);
DEFLIT(lit_850);
DEFLIT(lit_1074);
DEFLIT(lit_664);
DEFLIT(lit_486);
DEFLIT(lit_23);
DEFLIT(lit_325);
DEFLIT(lit_765);
DEFLIT(lit_920);
DEFLIT(lit_869);
DEFLIT(lit_553);
DEFLIT(lit_823);
DEFLIT(lit_544);
DEFLIT(lit_403);
DEFLIT(lit_626);
DEFLIT(lit_354);
DEFLIT(lit_875);
DEFLIT(lit_443);
DEFLIT(lit_674);
DEFLIT(lit_713);
DEFLIT(lit_210);
DEFLIT(lit_171);
DEFLIT(lit_1030);
DEFLIT(lit_497);
DEFLIT(lit_1047);
DEFLIT(lit_988);
DEFLIT(lit_549);
DEFLIT(lit_1055);
DEFLIT(lit_725);
DEFLIT(lit_423);
DEFLIT(lit_1063);
DEFLIT(lit_58);
DEFLIT(lit_893);
DEFLIT(lit_282);
DEFLIT(lit_374);
DEFLIT(lit_1);
DEFLIT(lit_347);
DEFLIT(lit_359);
DEFLIT(lit_795);
DEFLIT(lit_402);
DEFLIT(lit_695);
DEFLIT(lit_910);
DEFLIT(lit_924);
DEFLIT(lit_151);
DEFLIT(lit_1017);
DEFLIT(lit_39);
DEFLIT(lit_250);
DEFLIT(lit_503);
DEFLIT(lit_183);
DEFLIT(lit_809);
DEFLIT(lit_643);
DEFLIT(lit_948);
DEFLIT(lit_730);
DEFLIT(lit_944);
DEFLIT(lit_248);
DEFLIT(lit_589);
DEFLIT(lit_80);
DEFLIT(lit_956);
DEFLIT(lit_232);
DEFLIT(lit_938);
DEFLIT(lit_204);
DEFLIT(lit_764);
DEFLIT(lit_555);
DEFLIT(lit_834);
DEFLIT(lit_1036);
DEFLIT(lit_554);
DEFLIT(lit_499);
DEFLIT(lit_659);
DEFLIT(lit_394);
DEFLIT(lit_451);
DEFLIT(lit_749);
DEFLIT(lit_617);
DEFLIT(lit_173);
DEFLIT(lit_863);
DEFLIT(lit_230);
DEFLIT(lit_618);
DEFLIT(lit_755);
DEFLIT(lit_940);
DEFLIT(lit_686);
DEFLIT(lit_722);
DEFLIT(lit_610);
DEFLIT(lit_149);
DEFLIT(lit_1044);
DEFLIT(lit_86);
DEFLIT(lit_84);
DEFLIT(lit_804);
DEFLIT(lit_718);
DEFLIT(lit_978);
DEFLIT(lit_1008);
DEFLIT(lit_135);
DEFLIT(lit_759);
DEFLIT(lit_846);
DEFLIT(lit_710);
DEFLIT(lit_844);
DEFLIT(lit_384);
DEFLIT(lit_387);
DEFLIT(lit_711);
DEFLIT(lit_115);
DEFLIT(lit_219);
DEFLIT(lit_835);
DEFLIT(lit_785);
DEFLIT(lit_198);
DEFLIT(lit_966);
DEFLIT(lit_46);
DEFLIT(lit_302);
DEFLIT(lit_678);
DEFLIT(lit_969);
DEFLIT(lit_166);
DEFLIT(lit_241);
DEFLIT(lit_588);
DEFLIT(lit_651);
DEFLIT(lit_276);
DEFLIT(lit_880);
DEFLIT(lit_577);
DEFLIT(lit_645);
DEFLIT(lit_52);
DEFLIT(lit_959);
DEFLIT(lit_490);
DEFLIT(lit_753);
DEFLIT(lit_968);
DEFLIT(lit_340);
DEFLIT(lit_917);
DEFLIT(lit_155);
DEFLIT(lit_778);
DEFLIT(lit_10);
DEFLIT(lit_400);
DEFLIT(lit_311);
DEFLIT(lit_335);
DEFLIT(lit_229);
DEFLIT(lit_977);
DEFLIT(lit_942);
DEFLIT(lit_396);
DEFLIT(lit_900);
DEFLIT(lit_440);
DEFLIT(lit_949);
DEFLIT(lit_130);
DEFLIT(lit_975);
DEFLIT(lit_469);
DEFLIT(lit_445);
DEFLIT(lit_629);
DEFLIT(lit_406);
DEFLIT(lit_366);
DEFLIT(lit_881);
DEFLIT(lit_883);
DEFLIT(lit_480);
DEFLIT(lit_379);
DEFLIT(lit_840);
DEFLIT(lit_891);
DEFLIT(lit_350);
DEFLIT(lit_1042);
DEFLIT(lit_684);
DEFLIT(lit_609);
DEFLIT(lit_41);
DEFLIT(lit_419);
DEFLIT(lit_502);
DEFLIT(lit_963);
DEFLIT(lit_1004);
DEFLIT(lit_776);
DEFLIT(lit_1035);
DEFLIT(lit_995);
DEFLIT(lit_144);
DEFLIT(lit_321);
DEFLIT(lit_810);
DEFLIT(lit_517);
DEFLIT(lit_146);
DEFLIT(lit_351);
DEFLIT(lit_821);
DEFLIT(lit_709);
DEFLIT(lit_1045);
DEFLIT(lit_207);
DEFLIT(lit_76);
DEFLIT(lit_438);
DEFLIT(lit_1002);
DEFLIT(lit_697);
DEFLIT(lit_1070);
DEFLIT(lit_415);
DEFLIT(lit_934);
DEFLIT(lit_507);
DEFLIT(lit_1028);
DEFLIT(lit_939);
DEFLIT(lit_91);
DEFLIT(lit_473);
DEFLIT(lit_739);
DEFLIT(lit_752);
DEFLIT(lit_1041);
DEFLIT(lit_193);
DEFLIT(lit_635);
DEFLIT(lit_1033);
DEFLIT(lit_360);
DEFLIT(lit_687);
DEFLIT(lit_14);
DEFLIT(lit_701);
DEFLIT(lit_477);
DEFLIT(lit_653);
DEFLIT(lit_160);
DEFLIT(lit_777);
DEFLIT(lit_1078);
DEFLIT(lit_1037);
DEFLIT(lit_675);
DEFLIT(lit_656);
DEFLIT(lit_761);
DEFLIT(lit_312);
DEFLIT(lit_628);
DEFLIT(lit_907);
DEFLIT(lit_996);
DEFLIT(lit_644);
DEFLIT(lit_927);
DEFLIT(lit_284);
DEFLIT(lit_331);
DEFLIT(lit_638);
DEFLIT(lit_830);
DEFLIT(lit_868);
DEFLIT(lit_416);
DEFLIT(lit_290);
DEFLIT(lit_329);
DEFLIT(lit_522);
DEFLIT(lit_1000);
DEFLIT(lit_680);
DEFLIT(lit_307);
DEFLIT(lit_661);
DEFLIT(lit_464);
DEFLIT(lit_1064);
DEFLIT(lit_294);
DEFLIT(lit_277);
DEFLIT(lit_50);
DEFLIT(lit_498);
DEFLIT(lit_620);
DEFLIT(lit_567);
DEFLIT(lit_150);
DEFLIT(lit_926);
DEFLIT(lit_355);
DEFLIT(lit_1021);
DEFLIT(lit_281);
DEFLIT(lit_358);
DEFLIT(lit_333);
DEFLIT(lit_906);
DEFLIT(lit_8);
DEFLIT(lit_888);
DEFLIT(lit_889);
DEFLIT(lit_94);
DEFLIT(lit_88);
DEFLIT(lit_855);
DEFLIT(lit_390);
DEFLIT(lit_694);
DEFLIT(lit_57);
DEFLIT(lit_17);
DEFLIT(lit_933);
DEFLIT(lit_518);
DEFLIT(lit_178);
DEFLIT(lit_42);
DEFLIT(lit_541);
DEFLIT(lit_326);
DEFLIT(lit_911);
DEFLIT(lit_912);
DEFLIT(lit_637);
DEFLIT(lit_895);
DEFLIT(lit_164);
DEFLIT(lit_918);
DEFLIT(lit_894);
DEFLIT(lit_531);
DEFLIT(lit_1065);
DEFLIT(lit_819);
DEFLIT(lit_602);
DEFLIT(lit_691);
DEFLIT(lit_774);
DEFLIT(lit_516);
DEFLIT(lit_886);
DEFLIT(lit_1066);
DEFLIT(lit_223);
DEFLIT(lit_24);
DEFLIT(lit_897);
DEFLIT(lit_876);
DEFLIT(lit_401);
DEFLIT(lit_1039);
DEFLIT(lit_21);
DEFLIT(lit_245);
DEFLIT(lit_511);
DEFLIT(lit_989);
DEFLIT(lit_227);
DEFLIT(lit_288);
DEFLIT(lit_96);
DEFLIT(lit_793);
DEFLIT(lit_202);
DEFLIT(lit_472);
DEFLIT(lit_994);
DEFLIT(lit_295);
DEFLIT(lit_693);
DEFLIT(lit_468);
DEFLIT(lit_478);
DEFLIT(lit_488);
DEFLIT(lit_556);
DEFLIT(lit_192);
DEFLIT(lit_493);
DEFLIT(lit_586);
DEFLIT(lit_392);
DEFLIT(lit_495);
DEFLIT(lit_482);
DEFLIT(lit_263);
DEFLIT(lit_1058);
DEFLIT(lit_845);
DEFLIT(lit_861);
DEFLIT(lit_317);
DEFLIT(lit_51);
DEFLIT(lit_37);
DEFLIT(lit_376);
DEFLIT(lit_305);
DEFLIT(lit_817);
DEFLIT(lit_584);
DEFLIT(lit_820);
DEFLIT(lit_545);
DEFLIT(lit_452);
DEFLIT(lit_264);
DEFLIT(lit_1024);
DEFLIT(lit_548);
DEFLIT(lit_501);
DEFLIT(lit_726);
DEFLIT(lit_594);
DEFLIT(lit_762);
DEFLIT(lit_526);
DEFLIT(lit_1005);
DEFLIT(lit_783);
DEFLIT(lit_159);
DEFLIT(lit_275);
DEFLIT(lit_833);
DEFLIT(lit_252);
DEFLIT(lit_197);
DEFLIT(lit_267);
DEFLIT(lit_528);
DEFLIT(lit_1075);
DEFLIT(lit_32);
DEFLIT(lit_598);
DEFLIT(lit_802);
DEFLIT(lit_328);
DEFLIT(lit_125);
DEFLIT(lit_100);
DEFLIT(lit_530);
DEFLIT(lit_449);
DEFLIT(lit_297);
DEFLIT(lit_848);
DEFLIT(lit_1026);
DEFLIT(lit_4);
DEFLIT(lit_603);
DEFLIT(lit_605);
DEFLIT(lit_641);
DEFLIT(lit_363);
DEFLIT(lit_763);
DEFLIT(lit_954);
DEFLIT(lit_43);
DEFLIT(lit_373);
DEFLIT(lit_679);
DEFLIT(lit_612);
DEFLIT(lit_867);
DEFLIT(lit_444);
DEFLIT(lit_134);
DEFLIT(lit_133);
DEFLIT(lit_993);
DEFLIT(lit_505);
DEFLIT(lit_465);
DEFLIT(lit_414);
DEFLIT(lit_971);
DEFLIT(lit_506);
DEFLIT(lit_887);
DEFLIT(lit_560);
DEFLIT(lit_914);
DEFLIT(lit_456);
DEFLIT(lit_572);
DEFLIT(lit_998);
DEFLIT(lit_5);
DEFLIT(lit_654);
DEFLIT(lit_708);
DEFLIT(lit_992);
DEFLIT(lit_97);
DEFLIT(lit_728);
DEFLIT(lit_534);
DEFLIT(lit_431);
DEFLIT(lit_916);
DEFLIT(lit_962);
DEFLIT(lit_259);
DEFLIT(lit_890);
DEFLIT(lit_315);
DEFLIT(lit_960);
DEFLIT(lit_361);
DEFLIT(lit_422);
DEFLIT(lit_240);
DEFLIT(lit_409);
DEFLIT(lit_303);
DEFLIT(lit_92);
DEFLIT(lit_812);
DEFLIT(lit_692);
DEFLIT(lit_182);
DEFLIT(lit_854);
DEFLIT(lit_1067);
DEFLIT(lit_537);
DEFLIT(lit_309);
DEFLIT(lit_119);
DEFLIT(lit_898);
DEFLIT(lit_291);
DEFLIT(lit_128);
DEFLIT(lit_45);
DEFLIT(lit_364);
DEFLIT(lit_484);
DEFLIT(lit_411);
DEFLIT(lit_136);
DEFLIT(lit_512);
DEFLIT(lit_434);
DEFLIT(lit_356);
DEFLIT(lit_102);
DEFLIT(lit_22);
DEFLIT(lit_15);
DEFLIT(lit_471);
DEFLIT(lit_1009);
DEFLIT(lit_1013);
DEFLIT(lit_1051);

/* FUNCTIONS: */

LOCFOR(fun_x_1429_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_ast_error_3);
LOCFOR(fun_namespace_error_4);
LOCFOR(fun_program_type_5);
LOCFOR(fun_program_type_setter_6);
LOCFOR(fun_program_register_7);
LOCFOR(fun_program_register_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_binding_name_10);
LOCFOR(fun_binding_name_setter_11);
LOCFOR(fun_binding_mangled_name_12);
LOCFOR(fun_binding_mangled_name_setter_13);
LOCFOR(fun_14);
LOCFOR(fun_binding_type_15);
LOCFOR(fun_binding_type_setter_16);
LOCFOR(fun_binding_inferred_type_17);
LOCFOR(fun_binding_inferred_type_setter_18);
LOCFOR(fun_19);
LOCFOR(fun_global_box_value_20);
LOCFOR(fun_global_box_value_setter_21);
LOCFOR(fun_22);
LOCFOR(fun_binding_kind_23);
LOCFOR(fun_binding_kind_setter_24);
LOCFOR(fun_25);
LOCFOR(fun_binding_module_26);
LOCFOR(fun_binding_module_setter_27);
LOCFOR(fun_28);
LOCFOR(fun_binding_freeQ_29);
LOCFOR(fun_binding_freeQ_setter_30);
LOCFOR(fun_31);
LOCFOR(fun_binding_info_32);
LOCFOR(fun_binding_info_setter_33);
LOCFOR(fun_34);
LOCFOR(fun_binding_prop_35);
LOCFOR(fun_binding_prop_setter_36);
LOCFOR(fun_37);
LOCFOR(fun_binding_module_name_38);
FUNFOR(YevalSastYmaybe_log_dependency);
FUNFOR(YevalSastYmacro_expander);
LOCFOR(fun_binding_value_41);
LOCFOR(fun_binding_value_setter_42);
LOCFOR(fun_43);
LOCFOR(fun_binding_mutableQ_44);
LOCFOR(fun_binding_mutableQ_setter_45);
LOCFOR(fun_46);
LOCFOR(fun_binding_dynamic_extentQ_47);
LOCFOR(fun_binding_dynamic_extentQ_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_binding_dottedQ_50);
LOCFOR(fun_binding_dottedQ_setter_51);
LOCFOR(fun_52);
LOCFOR(fun_binding_index_53);
LOCFOR(fun_binding_index_setter_54);
LOCFOR(fun_55);
LOCFOR(fun_compile_time_program_56);
LOCFOR(fun_compile_time_program_setter_57);
LOCFOR(fun_reference_binding_58);
LOCFOR(fun_reference_binding_setter_59);
LOCFOR(fun_reference_called_functionQ_60);
LOCFOR(fun_reference_called_functionQ_setter_61);
LOCFOR(fun_62);
LOCFOR(fun_reference_frame_number_63);
LOCFOR(fun_reference_frame_number_setter_64);
LOCFOR(fun_reference_frame_offset_65);
LOCFOR(fun_reference_frame_offset_setter_66);
LOCFOR(fun_boundQ_reference_67);
LOCFOR(fun_boundQ_reference_setter_68);
LOCFOR(fun_assignment_form_69);
LOCFOR(fun_assignment_form_setter_70);
LOCFOR(fun_assignment_reference_71);
LOCFOR(fun_assignment_reference_setter_72);
LOCFOR(fun_assignment_binding_73);
LOCFOR(fun_assignment_binding_setter_74);
LOCFOR(fun_signature_bindings_75);
LOCFOR(fun_signature_bindings_setter_76);
LOCFOR(fun_77);
LOCFOR(fun_signature_names_78);
LOCFOR(fun_signature_names_setter_79);
LOCFOR(fun_80);
LOCFOR(fun_signature_specs_81);
LOCFOR(fun_signature_specs_setter_82);
LOCFOR(fun_83);
LOCFOR(fun_signature_naryQ_84);
LOCFOR(fun_signature_naryQ_setter_85);
LOCFOR(fun_86);
LOCFOR(fun_signature_arity_87);
LOCFOR(fun_signature_arity_setter_88);
LOCFOR(fun_89);
LOCFOR(fun_signature_value_90);
LOCFOR(fun_signature_value_setter_91);
LOCFOR(fun_92);
LOCFOR(fun_function_binding_93);
LOCFOR(fun_function_binding_setter_94);
LOCFOR(fun_95);
LOCFOR(fun_function_debug_name_96);
LOCFOR(fun_function_debug_name_setter_97);
LOCFOR(fun_98);
LOCFOR(fun_function_signature_99);
LOCFOR(fun_function_signature_setter_100);
FUNFOR(YevalSastYfunction_bindings);
FUNFOR(YevalSastYfunction_specs);
FUNFOR(YevalSastYfunction_naryQ);
FUNFOR(YevalSastYfunction_value);
LOCFOR(fun_function_kind_105);
FUNFOR(YevalSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_107);
LOCFOR(fun_loop_108);
LOCFOR(fun_as_lst_109);
LOCFOR(fun_x_1435_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
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

FUNCODEDEF(fun_x_1429_0) {
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
  P saved_dependentF2450;
  P x_1428F2449;
  P x_1428F2448;
  P x_1428F2447;
  P bodyF2446;
  P dependentF2445;
  P x_1428F2444;
  P x_1429F2443;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1429_0,2);
  x_1429F2443 = T1;
  FUNINIT(x_1429F2443, 2,FREEREF(0),return_);
  x_1428F2444 = FREEREF(0);
  dependentF2445 = YPfalse;
  dependentF2445 = BOXFAB(dependentF2445);
  bodyF2446 = YPfalse;
  bodyF2446 = BOXFAB(bodyF2446);
  T7 = CALL2(1,VARREF(YisaQ),x_1428F2444,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1428F2444,LITREF(lit_5),x_1429F2443);
    x_1428F2447 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1428F2447,x_1429F2443);
    BOXVAL(dependentF2445) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1428F2447);
    x_1428F2448 = T12;
    BOXVAL(bodyF2446) = x_1428F2448;
    x_1428F2449 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1428F2449,x_1429F2443);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1429F2443,LITREF(lit_6),x_1428F2444);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF2450 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T24 = CALL1(1,VARREF(Ylst),saved_dependentF2450);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T31 = BOXVAL(dependentF2445);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T38 = BOXVAL(bodyF2446);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T43 = CALL1(1,VARREF(Ylst),saved_dependentF2450);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T39,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T26,T32,Ynil);
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

FUNCODEDEF(fun_program_register_7) {
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

FUNCODEDEF(fun_program_register_setter_8) {
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

FUNCODEDEF(fun_9) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_name_10) {
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

FUNCODEDEF(fun_binding_name_setter_11) {
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

FUNCODEDEF(fun_binding_mangled_name_12) {
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

FUNCODEDEF(fun_binding_mangled_name_setter_13) {
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

FUNCODEDEF(fun_14) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_type_15) {
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

FUNCODEDEF(fun_binding_type_setter_16) {
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

FUNCODEDEF(fun_binding_inferred_type_17) {
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

FUNCODEDEF(fun_binding_inferred_type_setter_18) {
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

FUNCODEDEF(fun_19) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYast_LbotG));
}

FUNCODEDEF(fun_global_box_value_20) {
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

FUNCODEDEF(fun_global_box_value_setter_21) {
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

FUNCODEDEF(fun_22) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_binding_kind_23) {
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

FUNCODEDEF(fun_binding_kind_setter_24) {
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

FUNCODEDEF(fun_25) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_63));
}

FUNCODEDEF(fun_binding_module_26) {
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

FUNCODEDEF(fun_binding_module_setter_27) {
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

FUNCODEDEF(fun_28) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_freeQ_29) {
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

FUNCODEDEF(fun_binding_freeQ_setter_30) {
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

FUNCODEDEF(fun_31) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_info_32) {
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

FUNCODEDEF(fun_binding_info_setter_33) {
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

FUNCODEDEF(fun_34) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_prop_35) {
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

FUNCODEDEF(fun_binding_prop_setter_36) {
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

FUNCODEDEF(fun_37) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_module_name_38) {
  P b_;
  P modF2451;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF2451 = T1;
  if (modF2451 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),modF2451);
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

FUNCODEDEF(fun_binding_value_41) {
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

FUNCODEDEF(fun_binding_value_setter_42) {
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

FUNCODEDEF(fun_43) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_mutableQ_44) {
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

FUNCODEDEF(fun_binding_mutableQ_setter_45) {
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

FUNCODEDEF(fun_46) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_47) {
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

FUNCODEDEF(fun_binding_dynamic_extentQ_setter_48) {
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

FUNCODEDEF(fun_49) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_binding_dottedQ_50) {
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

FUNCODEDEF(fun_binding_dottedQ_setter_51) {
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

FUNCODEDEF(fun_52) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_index_53) {
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

FUNCODEDEF(fun_binding_index_setter_54) {
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

FUNCODEDEF(fun_55) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compile_time_program_56) {
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

FUNCODEDEF(fun_compile_time_program_setter_57) {
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

FUNCODEDEF(fun_reference_binding_58) {
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

FUNCODEDEF(fun_reference_binding_setter_59) {
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

FUNCODEDEF(fun_reference_called_functionQ_60) {
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

FUNCODEDEF(fun_reference_called_functionQ_setter_61) {
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

FUNCODEDEF(fun_62) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reference_frame_number_63) {
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

FUNCODEDEF(fun_reference_frame_number_setter_64) {
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

FUNCODEDEF(fun_reference_frame_offset_65) {
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

FUNCODEDEF(fun_reference_frame_offset_setter_66) {
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

FUNCODEDEF(fun_boundQ_reference_67) {
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

FUNCODEDEF(fun_boundQ_reference_setter_68) {
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

FUNCODEDEF(fun_assignment_form_69) {
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

FUNCODEDEF(fun_assignment_form_setter_70) {
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

FUNCODEDEF(fun_assignment_reference_71) {
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

FUNCODEDEF(fun_assignment_reference_setter_72) {
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

FUNCODEDEF(fun_assignment_binding_73) {
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

FUNCODEDEF(fun_assignment_binding_setter_74) {
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

FUNCODEDEF(fun_signature_bindings_75) {
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

FUNCODEDEF(fun_signature_bindings_setter_76) {
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

FUNCODEDEF(fun_77) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_names_78) {
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

FUNCODEDEF(fun_signature_names_setter_79) {
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

FUNCODEDEF(fun_80) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_specs_81) {
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

FUNCODEDEF(fun_signature_specs_setter_82) {
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

FUNCODEDEF(fun_83) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_naryQ_84) {
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

FUNCODEDEF(fun_signature_naryQ_setter_85) {
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

FUNCODEDEF(fun_86) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_arity_87) {
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

FUNCODEDEF(fun_signature_arity_setter_88) {
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

FUNCODEDEF(fun_89) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_value_90) {
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

FUNCODEDEF(fun_signature_value_setter_91) {
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

FUNCODEDEF(fun_92) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_binding_93) {
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

FUNCODEDEF(fun_function_binding_setter_94) {
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

FUNCODEDEF(fun_95) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_debug_name_96) {
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

FUNCODEDEF(fun_function_debug_name_setter_97) {
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

FUNCODEDEF(fun_98) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_signature_99) {
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

FUNCODEDEF(fun_function_signature_setter_100) {
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

FUNCODEDEF(fun_function_kind_105) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_235));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1431F2454;
  P x_1430F2453;
  P bF2452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF2452 = T1;
  x_1430F2453 = bF2452;
  x_1431F2454 = VARREF(YisaQ);
  T5 = CALL2(1,x_1431F2454,x_1430F2453,VARREF(YLsymG));
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF2452);
    T4 = T6;
  } else {
    T8 = CALL2(1,x_1431F2454,x_1430F2453,VARREF(YevalSastYLmodule_bindingG));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF2452);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),bF2452);
      T9 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_238),T10,T11);
      T7 = T9;
    } else {
      T7 = LITREF(lit_239);
    }
    T4 = T7;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_107) {
  P dependent_,dependable_,dtype_;
  P nameF2455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF2455 = T1;
  T3 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_242),nameF2455);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_243),nameF2455);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_244),nameF2455);
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

FUNCODEDEF(fun_loop_108) {
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

FUNCODEDEF(fun_as_lst_109) {
  P e_;
  P loopF2456;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_108,1);
  loopF2456 = T1;
  FUNINIT(loopF2456, 1,loopF2456);
  T2 = CALL2(0,loopF2456,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1435_110) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_254),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P return_;
  P DemptyF2467;
  P classF2466;
  P x_1434F2465;
  P x_1434F2464;
  P x_1434F2463;
  P x_1434F2462;
  P x_1434F2461;
  P supersF2460;
  P nameF2459;
  P x_1434F2458;
  P x_1435F2457;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1435_110,2);
  x_1435F2457 = T1;
  FUNINIT(x_1435F2457, 2,FREEREF(0),return_);
  x_1434F2458 = FREEREF(0);
  nameF2459 = YPfalse;
  nameF2459 = BOXFAB(nameF2459);
  supersF2460 = YPfalse;
  supersF2460 = BOXFAB(supersF2460);
  T7 = CALL2(1,VARREF(YisaQ),x_1434F2458,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1434F2458,LITREF(lit_254),x_1435F2457);
    x_1434F2461 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1434F2461,x_1435F2457);
    BOXVAL(nameF2459) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1434F2461);
    x_1434F2462 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1434F2462,x_1435F2457);
    x_1434F2463 = T14;
    BOXVAL(supersF2460) = x_1434F2463;
    x_1434F2464 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1434F2464,x_1435F2457);
    T15 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1434F2462);
    x_1434F2465 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1434F2465,x_1435F2457);
    T13 = T18;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1435F2457,LITREF(lit_6),x_1434F2458);
  }
  T22 = BOXVAL(nameF2459);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_255),T22,LITREF(lit_256));
  classF2466 = T21;
  T25 = BOXVAL(nameF2459);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_257),T25,LITREF(lit_258));
  DemptyF2467 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_259));
  T31 = CALL1(1,VARREF(Ylst),classF2466);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T35 = BOXVAL(supersF2460);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T39 = CALL1(1,VARREF(Ylst),DemptyF2467);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T43 = CALL1(1,VARREF(Ylst),classF2466);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T48 = BOXVAL(nameF2459);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
  T50 = CALL3(1,VARREF(YgooSmacrosYcat),T51,T52,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T56 = CALL1(1,VARREF(Ylst),classF2466);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_267));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
  T54 = CALLN(1,VARREF(YgooSmacrosYcat),7,T55,T56,T57,T58,T59,T60,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T45 = CALL5(1,VARREF(YgooSmacrosYcat),T46,T47,T49,T53,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T69 = CALL1(1,VARREF(Ylst),LITREF(lit_270));
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_271));
  T73 = CALL1(1,VARREF(Ylst),classF2466);
  T71 = CALL3(1,VARREF(YgooSmacrosYcat),T72,T73,Ynil);
  T70 = CALL1(1,VARREF(Ylst),T71);
  T68 = CALL3(1,VARREF(YgooSmacrosYcat),T69,T70,Ynil);
  T67 = CALL1(1,VARREF(Ylst),T68);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_272));
  T75 = CALL1(1,VARREF(Ylst),classF2466);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T74,T75,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T76 = CALL1(1,VARREF(Ylst),DemptyF2467);
  T62 = CALL5(1,VARREF(YgooSmacrosYcat),T63,T64,T65,T76,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T26 = CALLN(1,VARREF(YgooSmacrosYcat),6,T27,T28,T36,T44,T61,Ynil);
  T23 = T26;
  T20 = T23;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_111,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1439_113) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_277),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P return_;
  P x_1438F2472;
  P x_1438F2471;
  P nameF2470;
  P x_1438F2469;
  P x_1439F2468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1439_113,2);
  x_1439F2468 = T1;
  FUNINIT(x_1439F2468, 2,FREEREF(0),return_);
  x_1438F2469 = FREEREF(0);
  nameF2470 = YPfalse;
  nameF2470 = BOXFAB(nameF2470);
  T5 = CALL2(1,VARREF(YisaQ),x_1438F2469,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1438F2469,LITREF(lit_277),x_1439F2468);
    x_1438F2471 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1438F2471,x_1439F2468);
    BOXVAL(nameF2470) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1438F2471);
    x_1438F2472 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1438F2472,x_1439F2468);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1439F2468,LITREF(lit_6),x_1438F2469);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_254));
  T16 = BOXVAL(nameF2470);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,Ynil);
  T3 = T13;
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
  QRET(LITREF(lit_330));
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
  QRET(LITREF(lit_338));
}

FUNCODEDEF(fun_function_kind_150) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_341));
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
  P xF2476;
  P setterF2475;
  P getterF2474;
  P propF2473;
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
    propF2473 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2473);
    getterF2474 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF2473);
    setterF2475 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2474,VARREF(YevalSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2474);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF2474,FREEREF(0));
        xF2476 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF2476,VARREF(YevalSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2476,FREEREF(2));
          T17 = CALL2(1,setterF2475,T18,FREEREF(0));
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
  P x_1441F2477;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1441_211,4);
  x_1441F2477 = T0;
  FUNINIT(x_1441F2477, 4,o_,g_,args_,x_1441F2477);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1441F2477,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1443_213) {
  P x_1442_;
  P xF2480;
  P getterF2479;
  P propF2478;
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
    propF2478 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2478);
    getterF2479 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2479,VARREF(YevalSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2479);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF2479,FREEREF(0));
        xF2480 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF2480,VARREF(YevalSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2480,FREEREF(2));
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
  P x_1443F2481;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1443_213,4);
  x_1443F2481 = T0;
  FUNINIT(x_1443F2481, 4,o_,g_,args_,x_1443F2481);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1443F2481,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_copy_215) {
  P x_;
  P copyF2482;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yclone),x_);
  copyF2482 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF2482);
  T2 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF2482);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_copy_216) {
  P x_;
  P xF2487;
  P yF2486;
  P xF2485;
  P tmpF2484;
  P next_metsF2483;
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
    next_metsF2483 = T3;
    tmpF2484 = next_metsF2483;
    if (tmpF2484 != YPfalse) {
      xF2485 = next_metsF2483;
      yF2486 = Ynil;
      T10 = (P)YPeqQ(xF2485,yF2486);
      T9 = (P)YPbb(T10);
      T8 = T9;
      xF2487 = T8;
      T12 = (P)YPeqQ(xF2487,YPfalse);
      T11 = (P)YPbb(T12);
      T7 = T11;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),next_metsF2483);
      T15 = CALL1(1,VARREF(Ytail),next_metsF2483);
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
  P tmpF2489;
  P tmpF2488;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_63));
  tmpF2488 = T2;
  if (tmpF2488 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
    tmpF2489 = T6;
    if (tmpF2489 != YPfalse) {
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
  P refF2490;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  refF2490 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),refF2490);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_249) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF2495;
  P astF2494;
  P target_envF2493;
  P syntax_envF2492;
  P modF2491;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF2491 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF2491);
  syntax_envF2492 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2491);
  target_envF2493 = T5;
  T7 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF2492,tailQ_);
  astF2494 = T7;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF2494);
  tmpF2495 = rtQ_;
  if (tmpF2495 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2492,target_envF2493);
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
  P loopF2496;
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
      loopF2496 = T8;
      FUNINIT(loopF2496, 1,loopF2496);
      T9 = CALL1(0,loopF2496,eT_);
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
  P eF2497;
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
    eF2497 = T3;
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF2497);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF2497);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF2497);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,Ynil);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,Ynil);
      T10 = CALL1(1,VARREF(Ylst),T11);
      T19 = CALL1(1,VARREF(Ytail),eT_);
      T18 = CALL1(1,VARREF(YevalSastYtransform_defs),T19);
      T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T18,Ynil);
      T7 = CALL1(1,VARREF(Ylst),T8);
      T6 = CALL2(1,VARREF(YgooSmacrosYcat),T7,Ynil);
      T4 = T6;
    } else {
      T21 = CALL1(1,VARREF(Ylst),eF2497);
      T23 = CALL1(1,VARREF(Ytail),eT_);
      T22 = CALL1(1,VARREF(YevalSastYtransform_defs),T23);
      T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
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
  P headF2499;
  P tailQF2498;
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
    tailQF2498 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(YevalSastYobjectify),T9,FREEREF(1),tailQF2498);
    headF2499 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF2499,res_);
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
  P astsF2501;
  P loopF2500;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_254,3);
  loopF2500 = T2;
  FUNINIT(loopF2500, 3,tailQ_,r_,loopF2500);
  T4 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF2500,Ynil,T4);
  T1 = T3;
  astsF2501 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),astsF2501);
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
  P eeTF2502;
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
  eeTF2502 = T1;
  T4 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF2502,r_,tailQ_);
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
  P primF2505;
  P fvfF2504;
  P eeTF2503;
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
  eeTF2503 = T1;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF2504 = T5;
  T7 = CALL1(1,VARREF(YevalSastYbinding_prop),fvfF2504);
  primF2505 = T7;
  if (primF2505 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSastYast_copy),primF2505);
    T9 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T10,eeTF2503,r_,tailQ_);
    T8 = T9;
  } else {
    T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF2504,VARREF(YevalSastYapplication_arguments),eeTF2503,VARREF(YevalSastYapplication_tailQ),tailQ_);
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
  P eeTF2506;
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
  eeTF2506 = T1;
  T4 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF2506,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_262) {
  P f_,eT_,r_,tailQ_;
  P bF2508;
  P vTF2507;
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
  vTF2507 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF2508 = T3;
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
      T18 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_560),f_,eT_);
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
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_565),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_566),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pack_args_264) {
  P eT_,vT_,tT_;
  P lst_typeF2510;
  P varF2509;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
loop:
  T1 = CALL1(1,VARREF(Yhead),vT_);
  varF2509 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF2509);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_260),FREEREF(0),YPfalse);
    lst_typeF2510 = T5;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF2509);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF2510,varF2509);
    CALL2(1,VARREF(Yhead_setter),lst_typeF2510,tT_);
    T8 = CALL1(0,FREEREF(1),eT_);
    T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,FREEREF(0),YPfalse);
    T9 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T6 = CALL2(1,VARREF(YevalSastYarguments),T7,T9);
    T4 = T6;
    T2 = T4;
  } else {
    T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T11 != YPfalse) {
      T12 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_569),FREEREF(2),eT_);
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
  P oF2514;
  P vTF2513;
  P pack_argsF2512;
  P pack_nary_argsF2511;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_263,1);
  pack_nary_argsF2511 = T1;
  T2 = FUNSHELL(1,fun_pack_args_264,4);
  pack_argsF2512 = T2;
  FUNINIT(pack_nary_argsF2511, 1,pack_nary_argsF2511);
  FUNINIT(pack_argsF2512, 4,r_,pack_nary_argsF2511,f_,pack_argsF2512);
  T4 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2513 = T4;
  T7 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T8 = CALL3(0,pack_argsF2512,eT_,vTF2513,T9);
  T10 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF2513,VARREF(YevalSastYfix_let_types),T7,VARREF(YevalSastYfix_let_arguments),T8,VARREF(YevalSastYfix_let_body),T10);
  oF2514 = T6;
  T5 = oF2514;
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
  P opF2515;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF2515 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF2515);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF2515);
    T6 = CALL3(1,VARREF(YevalSastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_574),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_268) {
  P binding_,e_,r_,tailQ_;
  P valF2517;
  P refF2516;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF2516 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF2517 = T3;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF2516,valF2517);
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
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_582),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF2518;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_585));
  tmpF2518 = T2;
  if (tmpF2518 != YPfalse) {
    T4 = tmpF2518;
  } else {
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_586));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_585));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_63));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T12 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_587),T13,new_kind_);
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
  P bindingF2526;
  P bindingF2525;
  P modF2524;
  P foreignQF2523;
  P tmpF2522;
  P modF2521;
  P grF2520;
  P existing_bindingF2519;
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
  existing_bindingF2519 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2520 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module),grF2520);
  modF2521 = T5;
  if (existing_bindingF2519 != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF2519,modF2521);
    tmpF2522 = T11;
    if (tmpF2522 != YPfalse) {
      T12 = tmpF2522;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF2523 = T9;
    T13 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF2519);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF2519);
      if (foreignQF2523 != YPfalse) {
        T15 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF2519);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF2523 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYmodule_name),modF2521);
        T19 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF2519);
        T17 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_590),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF2519,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF2519,kind_);
    T8 = existing_bindingF2519;
    T7 = T8;
  } else {
    T21 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF2524 = T21;
    T23 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF2524);
    bindingF2525 = T23;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2525,grF2520);
    T22 = bindingF2525;
    T20 = T22;
    T7 = T20;
  }
  bindingF2526 = T7;
  T6 = bindingF2526;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_276) {
  P type_,kind_,var_,e_,r_;
  P defnF2529;
  P bindingF2528;
  P nameF2527;
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
  nameF2527 = T1;
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF2527,YPfalse,kind_);
  bindingF2528 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T5 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF2528,VARREF(YevalSastYassignment_form),T6);
  defnF2529 = T5;
  T4 = defnF2529;
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
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_63),var_,e_,r_);
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
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_597),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_279) {
  P x_,r_,tailQ_;
  P expF2530;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_602));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_603));
  } else {
  }
  T3 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T3);
  expF2530 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_604));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF2530);
    T4 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_605));
  } else {
  }
  T1 = expF2530;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF2534;
  P envF2533;
  P tmpF2532;
  P expandF2531;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_279,1);
  expandF2531 = T1;
  FUNINIT(expandF2531, 1,expander_);
  tmpF2532 = env_or_false_;
  if (tmpF2532 != YPfalse) {
    T4 = tmpF2532;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF2533 = T3;
  T7 = CALL4(1,VARREF(YevalSastYast_define_binding),envF2533,name_,YPfalse,LITREF(lit_606));
  bindingF2534 = T7;
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),expandF2531,bindingF2534);
  T6 = bindingF2534;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_281) {
  P name_,e_,r_,rtQ_;
  P bindingF2540;
  P modnameF2539;
  P expanderF2538;
  P ast_expanderF2537;
  P syntax_envF2536;
  P sep_expanderF2535;
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
  sep_expanderF2535 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF2536 = T3;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2535,syntax_envF2536,YPfalse);
  ast_expanderF2537 = T5;
  T7 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF2537);
  expanderF2538 = T7;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF2539 = T9;
  T13 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T12 = CALL4(1,VARREF(YPPmacro),modnameF2539,name_,expanderF2538,T13);
  bindingF2540 = T12;
  T15 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2536,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2540,syntax_envF2536);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2535,r_,YPfalse);
    T18 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF2540,VARREF(YevalSastYassignment_form),T19);
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
  P defnF2543;
  P fF2542;
  P bindingF2541;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_63));
  bindingF2541 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF2542 = T3;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF2541,fF2542);
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T4,fF2542);
  T6 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF2541,VARREF(YevalSastYassignment_form),fF2542);
  defnF2543 = T6;
  T5 = defnF2543;
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
  P defnF2549;
  P formF2548;
  P bodyF2547;
  P new_rF2546;
  P signatureF2545;
  P bindingF2544;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_615));
  bindingF2544 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2545 = T3;
  T6 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2545);
  T5 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T6);
  new_rF2546 = T5;
  T8 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2546,YPtrue);
  bodyF2547 = T8;
  T11 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2544,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T11,VARREF(YevalSastYfunction_signature),signatureF2545,VARREF(YevalSastYfunction_body),bodyF2547);
  formF2548 = T10;
  T12 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_616));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YevalSastYbinding_prop_setter),formF2548,bindingF2544);
  } else {
  }
  T15 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF2544,VARREF(YevalSastYassignment_form),formF2548);
  defnF2549 = T15;
  T14 = defnF2549;
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
  P defnF2553;
  P formF2552;
  P signatureF2551;
  P bindingF2550;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_63));
  bindingF2550 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2551 = T3;
  T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF2550,VARREF(YevalSastYfunction_debug_name),T6,VARREF(YevalSastYfunction_signature),signatureF2551);
  formF2552 = T5;
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF2550,VARREF(YevalSastYassignment_form),formF2552);
  defnF2553 = T8;
  T7 = defnF2553;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_286) {
  P name_,e_,r_;
  P defnF2559;
  P formF2558;
  P callF2557;
  P metF2556;
  P genF2555;
  P bindingF2554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_63));
  bindingF2554 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_622),name_);
  T3 = CALL4(1,VARREF(Ylst),LITREF(lit_621),T4,name_,YPfalse);
  genF2555 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF2556 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_623),genF2555,metF2556);
  callF2557 = T8;
  T10 = CALL3(1,VARREF(YevalSastYobjectify),callF2557,r_,YPfalse);
  formF2558 = T10;
  T12 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF2554,VARREF(YevalSastYassignment_form),formF2558);
  defnF2559 = T12;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF2556);
  T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T13,metF2556);
  T11 = defnF2559;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_287) {
  P tmpF2560;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF2560 = DYNREF(YevalSastYTrecord_sourceQT);
  if (tmpF2560 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_11),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_627),FREEREF(0),T4);
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
  P x_1445F2561;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1445F2561 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_287,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_288,1,x_1445F2561);
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
  P x_1444F2562;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1444F2562 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_289,3,sig_,body_,r_);
  T3 = FUNFAB(fun_290,1,x_1444F2562);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_292) {
  P bF2565;
  P new_rF2564;
  P signatureF2563;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF2563 = T1;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2563);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF2564 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF2564,YPtrue);
  bF2565 = T6;
  T7 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF2563,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bF2565,FREEREF(3));
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
  P sig_,body_,r_,tailQ_;
  P x_1446F2567;
  P methodF2566;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG));
  methodF2566 = T1;
  x_1446F2567 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,methodF2566);
  T4 = FUNFAB(fun_292,4,sig_,r_,body_,methodF2566);
  T5 = FUNFAB(fun_293,1,x_1446F2567);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_295) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF2578;
  P typeF2577;
  P stypeF2576;
  P dottedQF2575;
  P stypeF2574;
  P snameF2573;
  P paramF2572;
  P arityF2571;
  P valueF2570;
  P tmpF2569;
  P sexpr_valueF2568;
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
    sexpr_valueF2568 = T3;
    tmpF2569 = sexpr_valueF2568;
    if (tmpF2569 != YPfalse) {
      T7 = tmpF2569;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF2570 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF2571 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T15 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T16,FREEREF(1));
    T17 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T18 = CALL3(1,VARREF(YevalSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T19 = CALL3(1,VARREF(YevalSastYobjectify),arityF2571,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T14,VARREF(YevalSastYsignature_names),T15,VARREF(YevalSastYsignature_specs),T17,VARREF(YevalSastYsignature_naryQ),T18,VARREF(YevalSastYsignature_arity),T19,VARREF(YevalSastYsignature_value),valueF2570);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T21 = CALL1(1,VARREF(Yhead),params_);
    paramF2572 = T21;
    T23 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF2572);
    snameF2573 = T23;
    T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF2572);
    stypeF2574 = T25;
    T27 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF2574,VARREF(YevalSastYDsexpr_optionals_tag));
    dottedQF2575 = T27;
    if (dottedQF2575 != YPfalse) {
      T29 = VARREF(YevalSastYDsexpr_optionals_type_name);
    } else {
      T29 = stypeF2574;
    }
    stypeF2576 = T29;
    T31 = CALL3(1,VARREF(YevalSastYobjectify),stypeF2576,FREEREF(1),YPfalse);
    typeF2577 = T31;
    T33 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF2573,VARREF(YevalSastYbinding_type),typeF2577,VARREF(YevalSastYbinding_dottedQ),dottedQF2575);
    bindingF2578 = T33;
    T35 = CALL1(1,VARREF(Ytail),params_);
    T36 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF2578,bindings_);
    T37 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF2573,VARREF(Ytail),names_);
    T38 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF2577,VARREF(Ytail),types_);
    a1 = T35;
    a2 = dottedQF2575;
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
  P colF2580;
  P sexpr_paramsF2579;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF2579 = T1;
  T3 = FUNSHELL(1,fun_col_295,3);
  colF2580 = T3;
  FUNINIT(colF2580, 3,sig_,r_,colF2580);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T4 = CALL5(0,colF2580,sexpr_paramsF2579,YPfalse,Ynil,T5,T6);
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
  P findF2581;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(YevalSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_297,5);
    findF2581 = T3;
    FUNINIT(findF2581, 5,i_,r_,FREEREF(0),FREEREF(1),findF2581);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF2581,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_641),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_299) {
  P binding_,r_;
  P loopF2582;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_298,2);
  loopF2582 = T1;
  FUNINIT(loopF2582, 2,loopF2582,binding_);
  T2 = CALL2(0,loopF2582,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_300) {
  P n_,b_,r_;
  P jF2585;
  P iF2584;
  P tup29F2583;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup29F2583 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2583,YPint((P)0));
  iF2584 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2583,YPint((P)1));
  jF2585 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF2584,VARREF(YevalSastYreference_frame_offset),jF2585);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_301) {
  P b_;
  P x_1448F2587;
  P x_1447F2586;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1447F2586 = T1;
  x_1448F2587 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1448F2587,x_1447F2586,LITREF(lit_63));
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1448F2587,x_1447F2586,LITREF(lit_615));
    if (T6 != YPfalse) {
      T5 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1448F2587,x_1447F2586,LITREF(lit_585));
      if (T8 != YPfalse) {
        T7 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T10 = CALL2(1,x_1448F2587,x_1447F2586,LITREF(lit_597));
        if (T10 != YPfalse) {
          T9 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T12 = CALL2(1,x_1448F2587,x_1447F2586,LITREF(lit_606));
          if (T12 != YPfalse) {
            T11 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T14 = CALL2(1,x_1448F2587,x_1447F2586,LITREF(lit_586));
            if (T14 != YPfalse) {
              T13 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T16 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
              T15 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_646),T16);
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
  P LrefGF2588;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF2588 = T1;
  T2 = CALL3(1,VARREF(Ynew),LrefGF2588,VARREF(YevalSastYreference_binding),b_);
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_651),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_305) {
  P name_,r_;
  P bF2591;
  P tmpF2590;
  P grF2589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2589 = T1;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF2589);
  tmpF2590 = T4;
  if (tmpF2590 != YPfalse) {
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
    T9 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),YPtrue,VARREF(YevalSastYbinding_kind),LITREF(lit_63),VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_module),T10);
    bF2591 = T9;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF2591,grF2589);
    T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF2591);
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
  P bindingF2600;
  P modF2599;
  P loaderF2598;
  P grF2597;
  P tmpF2596;
  P varnameF2595;
  P modnameF2594;
  P breakF2593;
  P namestrF2592;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF2592 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF2592,YPchr((P)58));
  breakF2593 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2592,YPint((P)0),breakF2593);
  modnameF2594 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF2593);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF2592);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2592,T8,T9);
  varnameF2595 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF2594);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF2596 = T12;
  if (tmpF2596 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF2595);
    T15 = CALL2(1,VARREF(YgooSmagYG),T16,YPint((P)0));
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T17 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_658),name_);
  } else {
  }
  T19 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2597 = T19;
  T21 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF2597);
  loaderF2598 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF2594);
  T23 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2598,T24);
  modF2599 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF2595);
  T28 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2599);
  T26 = CALL2(1,VARREF(YevalSastYfind_binding),T27,T28);
  bindingF2600 = T26;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2600,grF2597);
  T29 = CALL1(1,VARREF(Ynot),bindingF2600);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_659),varnameF2595,modnameF2594);
  } else {
  }
  T31 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF2600,r_);
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_664),r_,YPfalse);
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
  P functionsF2604;
  P function_formsF2603;
  P new_rF2602;
  P bindingsF2601;
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
  bindingsF2601 = T1;
  T4 = CALL2(1,VARREF(YevalSastYr_extendT),r_,bindingsF2601);
  new_rF2602 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYmap2),VARREF(YevalSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF2603 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSastYobjectify),new_rF2602,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF2603);
  functionsF2604 = T8;
  T10 = FUNFAB(fun_313,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T10,functionsF2604,bindingsF2601);
  T12 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),functionsF2604);
  T13 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2602,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),bindingsF2601,VARREF(YevalSastYlocals_functions),T12,VARREF(YevalSastYlocals_body),T13);
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_315) {
  P name_,body_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = CALL1(1,VARREF(Ylst),name_);
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T3,body_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,YPfalse);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_unwind_protect_316) {
  P protected_form_,cleanup_forms_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(protected_form_, 0);
  ARG(cleanup_forms_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = CALL1(1,VARREF(Ylst),protected_form_);
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
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_686),FREEREF(0));
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
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_684),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_318;
  T4 = FUNFAB(fun_319,1,exit_);
  T5 = FUNFAB(fun_320,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_322) {
  P name_;
  P bindingF2605;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF2605 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2605,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_321,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF2605);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_323) {
  P names_,r_,tailQ_;
  P moduleF2607;
  P envF2606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2606 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2607 = T3;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2607);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF2606,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYnamespace_error),LITREF(lit_681));
  } else {
  }
  T8 = FUNFAB(fun_322,2,envF2606,moduleF2607);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF2609;
  P existingF2608;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,env_);
  existingF2608 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2608,YPfalse);
  tmpF2609 = T5;
  if (tmpF2609 != YPfalse) {
    T6 = tmpF2609;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2608,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T8 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_689),T9,T10);
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
  P used_moduleF2613;
  P loaderF2612;
  P moduleF2611;
  P envF2610;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2610 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2611 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2610);
  loaderF2612 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2612,name_);
  used_moduleF2613 = T7;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2610);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,used_moduleF2613);
  T9 = FUNFAB(fun_325,2,envF2610,moduleF2611);
  T10 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2613);
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
  P modF2615;
  P envF2614;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2614 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2614);
  modF2615 = T3;
  T6 = FUNFAB(fun_327,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2615);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2615);
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
  P modF2617;
  P envF2616;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2616 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2616);
  modF2617 = T3;
  T6 = FUNFAB(fun_329,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2617);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2617);
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
  P used_moduleF2619;
  P loaderF2618;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),FREEREF(0));
  loaderF2618 = T1;
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2618,name_);
  used_moduleF2619 = T3;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T4,used_moduleF2619);
  T5 = FUNFAB(fun_331,1,FREEREF(0));
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2619);
  CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
  T2 = used_moduleF2619;
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
  P swig_modF2627;
  P tmpF2626;
  P x_1450F2625;
  P x_1449F2624;
  P use_c_modF2623;
  P use_modF2622;
  P modF2621;
  P envF2620;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2620 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2620);
  modF2621 = T3;
  T4 = FUNSHELL(1,fun_use_mod_332,1);
  use_modF2622 = T4;
  T5 = fun_use_c_mod_333;
  use_c_modF2623 = T5;
  FUNINIT(use_modF2622, 1,envF2620);
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1449F2624 = T7;
  x_1450F2625 = VARREF(YgooScolsSseqYsuffixQ);
  T11 = CALL2(1,x_1450F2625,x_1449F2624,LITREF(lit_706));
  tmpF2626 = T11;
  if (tmpF2626 != YPfalse) {
    T12 = tmpF2626;
  } else {
    T13 = CALL2(1,x_1450F2625,x_1449F2624,LITREF(lit_707));
    T12 = T13;
  }
  T10 = T12;
  if (T10 != YPfalse) {
    T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T14 = CALL2(0,use_c_modF2623,modF2621,T15);
    T9 = T14;
  } else {
    T17 = CALL2(1,x_1450F2625,x_1449F2624,LITREF(lit_708));
    if (T17 != YPfalse) {
      T23 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T22 = CALL2(1,VARREF(YgooScolsSseqYsplit),T23,YPchr((P)46));
      T21 = CALL1(1,VARREF(YgooSmacrosY1st),T22);
      T20 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T21);
      T19 = CALL1(0,use_modF2622,T20);
      swig_modF2627 = T19;
      T25 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_709));
      T24 = CALL2(0,use_c_modF2623,swig_modF2627,T25);
      T18 = T24;
      T16 = T18;
    } else {
      T26 = CALL1(0,use_modF2622,name_);
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
  P rF2628;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2628 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2628);
  T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T5);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF2630;
  P existingF2629;
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
  existingF2629 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2629,YPfalse);
  tmpF2630 = T6;
  if (tmpF2630 != YPfalse) {
    T7 = tmpF2630;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2629,b_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T11);
    T12 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T9 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_714),T10,T12);
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
  P str_manglerF2635;
  P used_moduleF2634;
  P loaderF2633;
  P moduleF2632;
  P envF2631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2631 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2632 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2631);
  loaderF2633 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2633,name_);
  used_moduleF2634 = T7;
  T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF2635 = T9;
  T10 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2631);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T10,used_moduleF2634);
  T11 = FUNFAB(fun_337,2,str_manglerF2635,envF2631);
  T12 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2634);
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
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_720),pat_);
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
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_722));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
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
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_724),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_725),pat_);
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
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_722));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
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
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T12 = CALL1(1,VARREF(Ytail),pat_);
  T11 = CALL3(1,VARREF(YevalSastYexpand_bind_listT),T12,var_,fail_);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T10,Ynil);
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
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_731));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_565));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,Ynil);
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
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
    T8 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_733));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,Ynil);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_267));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T14,Ynil);
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
      T26 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,Ynil);
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_565));
      T31 = CALL1(1,VARREF(Ylst),Ynil);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T28,Ynil);
      T18 = T20;
    } else {
      if (YPtrue != YPfalse) {
        T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
        T42 = CALL1(1,VARREF(Ylst),var_);
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_734));
        T46 = CALL1(1,VARREF(Ylst),var_);
        T47 = CALL1(1,VARREF(Ylst),fail_);
        T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
        T43 = CALL1(1,VARREF(Ylst),T44);
        T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
        T40 = CALL1(1,VARREF(Ylst),T41);
        T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,Ynil);
        T38 = CALL1(1,VARREF(Ylst),T39);
        T49 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
        T48 = CALL1(1,VARREF(Ylst),T49);
        T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T48,Ynil);
        T35 = CALL1(1,VARREF(Ylst),T36);
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_267));
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

FUNCODEDEF(fun_expand_pattern_346) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_621));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_737));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_738));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,Ynil);
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
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_syntax_if_348) {
  P x_;
  P epatF2643;
  P failF2642;
  P varF2641;
  P elseF2640;
  P thenF2639;
  P valueF2638;
  P varsF2637;
  P patF2636;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF2636 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF2636);
  varsF2637 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF2638 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF2639 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF2640 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2641 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF2642 = T13;
  T15 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF2636,varF2641,failF2642);
  epatF2643 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_741));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_742));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_743));
  T26 = CALL1(1,VARREF(Ylst),failF2642);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_744));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_745));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_746));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_630));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T33,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_742));
  T40 = CALL1(1,VARREF(Ylst),elseF2640);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T37,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T48 = CALL1(1,VARREF(Ylst),varF2641);
  T49 = CALL1(1,VARREF(Ylst),valueF2638);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T55 = fun_347;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF2637);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF2643);
  T57 = CALL1(1,VARREF(Ylst),thenF2639);
  T51 = CALL5(1,VARREF(YgooSmacrosYcat),T52,T53,T56,T57,Ynil);
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
  P rF2644;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2644 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2644);
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
  P loopF2645;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_357,3);
  loopF2645 = T1;
  FUNINIT(loopF2645, 3,name_,r_,loopF2645);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF2645,T3);
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
  P tmpF2646;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2646 = T1;
  if (tmpF2646 != YPfalse) {
    T3 = tmpF2646;
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_776),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_365) {
  P return_;
  P sexpr_nameF2659;
  P special_nameF2658;
  P x_1453F2657;
  P x_1453F2656;
  P x_1453F2655;
  P x_1453F2654;
  P x_1453F2653;
  P x_1453F2652;
  P bodyF2651;
  P paramsF2650;
  P nameF2649;
  P x_1453F2648;
  P x_1454F2647;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1454_364,2);
  x_1454F2647 = T1;
  FUNINIT(x_1454F2647, 2,FREEREF(0),return_);
  x_1453F2648 = FREEREF(0);
  nameF2649 = YPfalse;
  nameF2649 = BOXFAB(nameF2649);
  paramsF2650 = YPfalse;
  paramsF2650 = BOXFAB(paramsF2650);
  bodyF2651 = YPfalse;
  bodyF2651 = BOXFAB(bodyF2651);
  T9 = CALL2(1,VARREF(YisaQ),x_1453F2648,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1453F2648,LITREF(lit_776),x_1454F2647);
    x_1453F2652 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1453F2652,x_1454F2647);
    BOXVAL(nameF2649) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1453F2652);
    x_1453F2653 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1453F2653,x_1454F2647);
    x_1453F2654 = T16;
    BOXVAL(paramsF2650) = x_1453F2654;
    x_1453F2655 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1453F2655,x_1454F2647);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1453F2653);
    x_1453F2656 = T19;
    BOXVAL(bodyF2651) = x_1453F2656;
    x_1453F2657 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1453F2657,x_1454F2647);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1454F2647,LITREF(lit_6),x_1453F2648);
  }
  T25 = BOXVAL(nameF2649);
  T24 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_777),T25);
  special_nameF2658 = T24;
  T28 = BOXVAL(nameF2649);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_778),T28,LITREF(lit_779));
  sexpr_nameF2659 = T27;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T34 = CALL1(1,VARREF(Ylst),special_nameF2658);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_565));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_586));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T45 = CALL1(1,VARREF(Ylst),sexpr_nameF2659);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T47 = CALL1(1,VARREF(Ylst),YPfalse);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_780));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_781));
  T54 = BOXVAL(paramsF2650);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(bodyF2651);
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T57 = CALL1(1,VARREF(Ylst),YPfalse);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),13,T37,T38,T39,T40,T44,T45,T46,T47,T48,T49,T56,T57,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_769));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_565));
  T65 = BOXVAL(nameF2649);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T66 = CALL1(1,VARREF(Ylst),special_nameF2658);
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
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_function),T1,T2,r_,tailQ_);
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
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_name),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_body),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_bind_exit),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_386) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_protected_form),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_unwind_protect),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_387) {
  P x_,r_,tailQ_;
  P bodyF2665;
  P handlerF2664;
  P testF2663;
  P infoF2662;
  P typeF2661;
  P tup30F2660;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup30F2660 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2660,YPint((P)0));
  typeF2661 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2660,YPint((P)1));
  infoF2662 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2660,YPint((P)2));
  testF2663 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2660,YPint((P)3));
  handlerF2664 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2660,YPint((P)4));
  bodyF2665 = T11;
  T12 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF2661,infoF2662,testF2663,handlerF2664,bodyF2665,r_,tailQ_);
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
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_565),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_566),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_389) {
  P x_,r_,tailQ_;
  P nameF2666;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF2666 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_824));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_565));
  T8 = CALL1(1,VARREF(Ylst),nameF2666);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(YevalSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,Ynil);
  T2 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_63),nameF2666,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_390) {
  P x_,r_,tailQ_;
  P typeF2671;
  P setter_nameF2670;
  P ownerF2669;
  P varF2668;
  P nameF2667;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF2667 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF2668 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF2669 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF2667);
  setter_nameF2670 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF2671 = T9;
  T13 = CALL2(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF2667,ownerF2669);
  T14 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF2667,ownerF2669,typeF2671);
  T18 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T18 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),varF2668);
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_651));
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
    T21 = CALL1(1,VARREF(Ylst),T22);
    T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,Ynil);
    T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T25 = CALL1(1,VARREF(Ylst),T26);
    T19 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T20,T25);
    T17 = T19;
  } else {
    T17 = LITREF(lit_828);
  }
  T16 = CALL5(1,VARREF(Ylst),ownerF2669,nameF2667,setter_nameF2670,typeF2671,T17);
  T15 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_827),T16);
  T12 = CALL3(1,VARREF(Ylst),T13,T14,T15);
  T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),T12);
  T10 = CALL3(1,VARREF(YevalSastYobjectify),T11,r_,tailQ_);
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
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_615));
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
  P resF2674;
  P macF2673;
  P astF2672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,tailQ_);
  astF2672 = T1;
  T4 = CALL2(1,VARREF(YisaQ),astF2672,VARREF(YevalSastYLmacro_referenceG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),astF2672);
    macF2673 = T6;
    T9 = CALL1(1,VARREF(YevalSastYbinding_handler),macF2673);
    T8 = CALL3(1,T9,x_,r_,tailQ_);
    resF2674 = T8;
    T7 = resF2674;
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
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_877));
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
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_880));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_emptyQ) {
  P t_;
  P tmpF2675;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF2675 = T1;
  if (tmpF2675 != YPfalse) {
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
  P t2_dependentsF2679;
  P t1_dependentsF2678;
  P t2_bindingsF2677;
  P t1_bindingsF2676;
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
        t1_bindingsF2676 = T6;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF2677 = T8;
        T10 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF2678 = T10;
        T12 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF2679 = T12;
        T13 = FUNFAB(fun_413,1,t1_bindingsF2676);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF2677);
        T14 = FUNFAB(fun_414,1,t1_dependentsF2678);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF2679);
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
  P valueF2680;
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF2680 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF2680;
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
  P savedF2682;
  P successF2681;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF2681 = YPfalse;
  successF2681 = BOXFAB(successF2681);
  savedF2682 = VARREF(YevalSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_419,2,thunk_,successF2681);
  T5 = FUNFAB(fun_420,3,successF2681,module_,savedF2682);
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_897),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_423) {
  P return_;
  P x_1457F2691;
  P x_1457F2690;
  P x_1457F2689;
  P x_1457F2688;
  P x_1457F2687;
  P bodyF2686;
  P moduleF2685;
  P x_1457F2684;
  P x_1458F2683;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1458_422,2);
  x_1458F2683 = T1;
  FUNINIT(x_1458F2683, 2,FREEREF(0),return_);
  x_1457F2684 = FREEREF(0);
  moduleF2685 = YPfalse;
  moduleF2685 = BOXFAB(moduleF2685);
  bodyF2686 = YPfalse;
  bodyF2686 = BOXFAB(bodyF2686);
  T7 = CALL2(1,VARREF(YisaQ),x_1457F2684,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1457F2684,LITREF(lit_897),x_1458F2683);
    x_1457F2687 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1457F2687,x_1458F2683);
    x_1457F2688 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F2688,x_1458F2683);
    BOXVAL(moduleF2685) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1457F2688);
    x_1457F2689 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1457F2689,x_1458F2683);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1457F2687);
    x_1457F2690 = T16;
    BOXVAL(bodyF2686) = x_1457F2690;
    x_1457F2691 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1457F2691,x_1458F2683);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1458F2683,LITREF(lit_6),x_1457F2684);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_891));
  T23 = BOXVAL(moduleF2685);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_781));
  T27 = CALL1(1,VARREF(Ylst),Ynil);
  T28 = BOXVAL(bodyF2686);
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
  P tmpF2692;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2692 = T1;
  if (tmpF2692 != YPfalse) {
    T3 = tmpF2692;
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
  P x_1462F2696;
  P x_1461F2695;
  P tup31F2694;
  P x_1460F2693;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  x_1460F2693 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1460F2693);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup31F2694 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2694,YPint((P)0));
  x_1461F2695 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2694,YPint((P)1));
  x_1462F2696 = T7;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_1461F2695,x_1460F2693);
  T6 = x_1462F2696;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF2701;
  P x_1459F2700;
  P indentF2699;
  P depthF2698;
  P stackF2697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF2697 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF2697);
  depthF2698 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_984),depthF2698);
  indentF2699 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF2697,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF2697);
    T7 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_985),T8,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_986),indentF2699,name_);
  x_1459F2700 = loader_;
  T12 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1459F2700);
  T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,name_);
  T10 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T11,x_1459F2700);
  T14 = FUNFAB(fun_473,2,loader_,name_);
  T15 = FUNFAB(fun_474,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF2701 = T13;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF2701);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_987),indentF2699);
  T9 = modF2701;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF2704;
  P existingF2703;
  P exportsF2702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF2702 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF2702,name_,YPfalse);
  existingF2703 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2703,YPfalse);
  tmpF2704 = T6;
  if (tmpF2704 != YPfalse) {
    T7 = tmpF2704;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2703,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL5(1,VARREF(YevalSastYnamespace_error),LITREF(lit_992),existingF2703,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF2702,name_);
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
  P tmpF2705;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_freeQ),binding_);
  tmpF2705 = T2;
  if (tmpF2705 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_998),T6,T7);
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
  P UF2706;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(v_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF2706 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2706,v_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F2709;
  P add_userF2708;
  P usersF2707;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF2707 = T1;
  T3 = FUNSHELL(0,fun_add_user_482,3);
  add_userF2708 = T3;
  FUNINIT(add_userF2708, 3,usersF2707,add_userF2708,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF2708,modnames_);
  T5 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2709 = T5;
  packer_F2709 = BOXFAB(packer_F2709);
  T7 = FUNFAB(fun_483,1,packer_F2709);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,usersF2707);
  T9 = BOXVAL(packer_F2709);
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
  P modF2710;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF2710 = T1;
  T3 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF2710);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF2711;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF2711 = T1;
  T2 = FUNFAB(fun_486,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF2711);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF2712;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF2712 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF2712,YPchr((P)47));
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
  P bootenvF2714;
  P bootmodF2713;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2713 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2713);
  bootenvF2714 = T3;
  T5 = FUNFAB(fun_489,2,bootenvF2714,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_1016));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF2715;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T2);
  new_envF2715 = T1;
  T0 = new_envF2715;
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
  P new_envF2717;
  P loaderF2716;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T2);
  loaderF2716 = T1;
  T4 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF2716,YPfalse);
  new_envF2717 = T4;
  T5 = FUNFAB(fun_492,2,excluded_,new_envF2717);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF2717;
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
  P x_1463F2718;
  P T0,T1,T2;
LINK_STACK();
loop:
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1463F2718 = DYNREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_494,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_495,1,x_1463F2718);
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
  P fileF2724;
  P modpathF2723;
  P keepmodQF2722;
  P envF2721;
  P moduleF2720;
  P typeF2719;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2719 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2719,VARREF(YevalSastYmodule_name),name_);
  moduleF2720 = T3;
  T5 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2720,loader_,YPfalse);
  envF2721 = T5;
  keepmodQF2722 = YPfalse;
  keepmodQF2722 = BOXFAB(keepmodQF2722);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF2723 = T9;
  T11 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF2723,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF2724 = T11;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2720,envF2721,envF2721);
  T12 = CALL1(1,VARREF(Ynot),fileF2724);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1024),modpathF2723);
  } else {
  }
  T15 = FUNFAB(fun_496,5,envF2721,loader_,fileF2724,keepmodQF2722,moduleF2720);
  T16 = FUNFAB(fun_497,2,keepmodQF2722,moduleF2720);
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
  P moduleF2725;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF2725 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF2725);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2725);
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
  P loaderF2726;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2726 = T1;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF2726);
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
  P envF2730;
  P modF2729;
  P typeF2728;
  P loaderF2727;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2727 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF2727);
  typeF2728 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF2728,VARREF(YevalSastYmodule_name),T6);
  modF2729 = T5;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF2729,loaderF2727,YPtrue);
  envF2730 = T8;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF2729);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF2729,envF2730,envF2730);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF2729);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF2727,modF2729);
  T7 = modF2729;
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
  P bindingF2732;
  P home_envF2731;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF2731 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,home_envF2731);
  bindingF2732 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF2732);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL4(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1040),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2732,T10);
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
  P bindingF2733;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_585),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2733 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2733,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF2734;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_597),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2734 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2734,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF2735;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_615),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF2735 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2735,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF2736;
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
  bindingF2736 = T1;
  if (bindingF2736 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T6,bindingF2736);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1053),name_,T8);
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
  P cloneF2737;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T2,YPfalse,LITREF(lit_586));
  cloneF2737 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T4,cloneF2737);
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
  P bootenvF2739;
  P bootmodF2738;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2738 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2738);
  bootenvF2739 = T4;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF2739);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF2739);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_1065));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF2743;
  P syntax_envF2742;
  P moduleF2741;
  P typeF2740;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2740 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2740,VARREF(YevalSastYmodule_name),name_);
  moduleF2741 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF2741);
  syntax_envF2742 = T5;
  T7 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2741,loader_,YPfalse);
  target_envF2743 = T7;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2741,syntax_envF2742,target_envF2743);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF2743);
  } else {
    T10 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF2743,loader_);
  }
  T6 = moduleF2741;
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
  P loopF2744;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_524,2);
  loopF2744 = T1;
  FUNINIT(loopF2744, 2,f_,loopF2744);
  T2 = CALL1(0,loopF2744,env_);
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
  P loopF2745;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_526,2);
  loopF2745 = T1;
  FUNINIT(loopF2745, 2,f_,loopF2745);
  T2 = CALL1(0,loopF2745,env_);
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
  P T176,T177,T178,T179,T180,T181;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(YevalSastYDgoo_boot_module_name,LITREF(lit_0));
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  lit_2 = YPPlist(1,YPPsym((P)"return"));
  lit_3 = YPPsym((P)"x-1429");
  lit_4 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_5 = YPPsym((P)"with-dependent");
  lit_6 = YPsb((P)"Match Pattern Failure");
  lit_7 = YPPsym((P)"let");
  lit_8 = YPPsym((P)"*current-dependent*");
  lit_9 = YPPsym((P)"set");
  lit_10 = YPPsym((P)"fin");
  lit_11 = YPPsym((P)"seq");
  T2 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1429_0 = YPmet(FUNCODEREF(fun_x_1429_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-dependent"),T3);
  lit_12 = YPPsym((P)"<ast-error>");
  T5 = (P)YPpair(VARREF(YgooSconditionsYLcompiler_errorG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_12),T5);
  VARSET(YevalSastYLast_errorG,T4);
  lit_13 = YPPsym((P)"<simple-ast-error>");
  T8 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T7 = (P)YPpair(VARREF(YevalSastYLast_errorG),T8);
  T6 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_13),T7);
  VARSET(YevalSastYLsimple_ast_errorG,T6);
  lit_14 = YPPsym((P)"ast-error");
  lit_15 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T9 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_error_3 = YPmet(FUNCODEREF(fun_ast_error_3),LITREF(lit_14),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YevalSdependencyYast_error);
  if (T12 != YPfalse) {
    T11 = VARREF(YevalSdependencyYast_error);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_ast_error_3;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YevalSdependencyYast_error,T10);
  lit_16 = YPPsym((P)"<namespace-error>");
  T15 = (P)YPpair(VARREF(YevalSastYLsimple_ast_errorG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_16),T15);
  VARSET(YevalSastYLnamespace_errorG,T14);
  lit_17 = YPPsym((P)"namespace-error");
  lit_18 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T16 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_namespace_error_4 = YPmet(FUNCODEREF(fun_namespace_error_4),LITREF(lit_17),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSastYnamespace_error);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSastYnamespace_error);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_namespace_error_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSastYnamespace_error,T17);
  lit_19 = YPPsym((P)"bot");
  T21 = XCALL1(1,VARREF(Ylst),LITREF(lit_19));
  VARSET(YevalSastYast_LbotG,T21);
  lit_20 = YPPsym((P)"<program>");
  T23 = (P)YPpair(VARREF(YLanyG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_20),T23);
  VARSET(YevalSastYLprogramG,T22);
  lit_21 = YPPsym((P)"program-type");
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_5 = YPmet(FUNCODEREF(fun_program_type_5),LITREF(lit_21),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSastYprogram_type);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYprogram_type);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_program_type_5;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYprogram_type,T25);
  lit_23 = YPPsym((P)"program-type-setter");
  lit_24 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_6 = YPmet(FUNCODEREF(fun_program_type_setter_6),LITREF(lit_23),T29,ENVNUL,PNUL,YPfalse);
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
  lit_25 = YPPsym((P)"program-register");
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_7 = YPmet(FUNCODEREF(fun_program_register_7),LITREF(lit_25),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YevalSastYprogram_register);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSastYprogram_register);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_program_register_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSastYprogram_register,T35);
  lit_27 = YPPsym((P)"program-register-setter");
  lit_28 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_8 = YPmet(FUNCODEREF(fun_program_register_setter_8),LITREF(lit_27),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYprogram_register_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYprogram_register_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_program_register_setter_8;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYprogram_register_setter,T40);
  lit_29 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T45 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T45);
  lit_30 = YPPsym((P)"<computed-program>");
  T47 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T46 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_30),T47);
  VARSET(YevalSastYLcomputed_programG,T46);
  lit_31 = YPPsym((P)"<passive-program>");
  T49 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T48 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_31),T49);
  VARSET(YevalSastYLpassive_programG,T48);
  VARSET(YevalSastYLbinding_nameG,VARREF(YLanyG));
  lit_32 = YPPsym((P)"<binding>");
  T51 = (P)YPpair(VARREF(YLanyG),Ynil);
  T50 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_32),T51);
  VARSET(YevalSastYLbindingG,T50);
  lit_33 = YPPsym((P)"binding-name");
  lit_34 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_10 = YPmet(FUNCODEREF(fun_binding_name_10),LITREF(lit_33),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSastYbinding_name);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSastYbinding_name);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_binding_name_10;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSastYbinding_name,T53);
  lit_35 = YPPsym((P)"binding-name-setter");
  lit_36 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T57 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_11 = YPmet(FUNCODEREF(fun_binding_name_setter_11),LITREF(lit_35),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSastYbinding_name_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSastYbinding_name_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_binding_name_setter_11;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSastYbinding_name_setter,T58);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_name),VARREF(YevalSastYbinding_name_setter),VARREF(YevalSastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_37 = YPPsym((P)"binding-mangled-name");
  lit_38 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_12 = YPmet(FUNCODEREF(fun_binding_mangled_name_12),LITREF(lit_37),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalSastYbinding_mangled_name);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalSastYbinding_mangled_name);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_binding_mangled_name_12;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSastYbinding_mangled_name,T63);
  lit_39 = YPPsym((P)"binding-mangled-name-setter");
  lit_40 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T67 = YPsig(LITREF(lit_40),YPPlist(2,T68,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_13 = YPmet(FUNCODEREF(fun_binding_mangled_name_setter_13),LITREF(lit_39),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYbinding_mangled_name_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYbinding_mangled_name_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_binding_mangled_name_setter_13;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYbinding_mangled_name_setter,T69);
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T75 = fun_14;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_mangled_name),VARREF(YevalSastYbinding_mangled_name_setter),T74,T75);
  lit_42 = YPPsym((P)"binding-type");
  lit_43 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_15 = YPmet(FUNCODEREF(fun_binding_type_15),LITREF(lit_42),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYbinding_type);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYbinding_type);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_binding_type_15;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYbinding_type,T77);
  lit_44 = YPPsym((P)"binding-type-setter");
  lit_45 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_16 = YPmet(FUNCODEREF(fun_binding_type_setter_16),LITREF(lit_44),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSastYbinding_type_setter);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYbinding_type_setter);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_binding_type_setter_16;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYbinding_type_setter,T82);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_type),VARREF(YevalSastYbinding_type_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_46 = YPPsym((P)"binding-inferred-type");
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_17 = YPmet(FUNCODEREF(fun_binding_inferred_type_17),LITREF(lit_46),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSastYbinding_inferred_type);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSastYbinding_inferred_type);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_binding_inferred_type_17;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSastYbinding_inferred_type,T87);
  lit_48 = YPPsym((P)"binding-inferred-type-setter");
  lit_49 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T91 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_18 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_18),LITREF(lit_48),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSastYbinding_inferred_type_setter);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSastYbinding_inferred_type_setter);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_binding_inferred_type_setter_18;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSastYbinding_inferred_type_setter,T92);
  lit_50 = YPPlist(1,YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T97 = fun_19;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_inferred_type),VARREF(YevalSastYbinding_inferred_type_setter),VARREF(YLanyG),T97);
  lit_51 = YPPsym((P)"<global-box>");
  T99 = (P)YPpair(VARREF(YLanyG),Ynil);
  T98 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_51),T99);
  VARSET(YevalSastYLglobal_boxG,T98);
  lit_52 = YPPsym((P)"global-box-value");
  lit_53 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_20 = YPmet(FUNCODEREF(fun_global_box_value_20),LITREF(lit_52),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYglobal_box_value);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYglobal_box_value);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_global_box_value_20;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYglobal_box_value,T101);
  lit_54 = YPPsym((P)"global-box-value-setter");
  lit_55 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T105 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_21 = YPmet(FUNCODEREF(fun_global_box_value_setter_21),LITREF(lit_54),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYglobal_box_value_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYglobal_box_value_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_global_box_value_setter_21;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYglobal_box_value_setter,T106);
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T111 = fun_22;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_boxG),VARREF(YevalSastYglobal_box_value),VARREF(YevalSastYglobal_box_value_setter),VARREF(YLanyG),T111);
  lit_57 = YPPsym((P)"<module-binding>");
  T114 = (P)YPpair(VARREF(YevalSdependencyYLdependableG),Ynil);
  T113 = (P)YPpair(VARREF(YevalSastYLbindingG),T114);
  T112 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_57),T113);
  VARSET(YevalSastYLmodule_bindingG,T112);
  lit_58 = YPPsym((P)"binding-kind");
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_23 = YPmet(FUNCODEREF(fun_binding_kind_23),LITREF(lit_58),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSastYbinding_kind);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSastYbinding_kind);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_binding_kind_23;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSastYbinding_kind,T116);
  lit_60 = YPPsym((P)"binding-kind-setter");
  lit_61 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T120 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_24 = YPmet(FUNCODEREF(fun_binding_kind_setter_24),LITREF(lit_60),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSastYbinding_kind_setter);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSastYbinding_kind_setter);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_binding_kind_setter_24;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYbinding_kind_setter,T121);
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  lit_63 = YPPsym((P)"global");
  T125 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T126 = fun_25;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),VARREF(YevalSastYbinding_kind_setter),VARREF(YLanyG),T126);
  lit_64 = YPPsym((P)"binding-module");
  lit_65 = YPPlist(1,YPPsym((P)"_x"));
  T127 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_26 = YPmet(FUNCODEREF(fun_binding_module_26),LITREF(lit_64),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSastYbinding_module);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSastYbinding_module);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_binding_module_26;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSastYbinding_module,T128);
  lit_66 = YPPsym((P)"binding-module-setter");
  lit_67 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T132 = YPsig(LITREF(lit_67),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_27 = YPmet(FUNCODEREF(fun_binding_module_setter_27),LITREF(lit_66),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSastYbinding_module_setter);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSastYbinding_module_setter);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_binding_module_setter_27;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYbinding_module_setter,T133);
  lit_68 = YPPlist(1,YPPsym((P)"_x"));
  T137 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T138 = fun_28;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_module),VARREF(YevalSastYbinding_module_setter),VARREF(YLanyG),T138);
  lit_69 = YPPsym((P)"binding-free?");
  lit_70 = YPPlist(1,YPPsym((P)"_x"));
  T139 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_29 = YPmet(FUNCODEREF(fun_binding_freeQ_29),LITREF(lit_69),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYbinding_freeQ);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYbinding_freeQ);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_binding_freeQ_29;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYbinding_freeQ,T140);
  lit_71 = YPPsym((P)"binding-free?-setter");
  lit_72 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T144 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_30 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_30),LITREF(lit_71),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYbinding_freeQ_setter);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYbinding_freeQ_setter);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_binding_freeQ_setter_30;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYbinding_freeQ_setter,T145);
  lit_73 = YPPlist(1,YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T150 = fun_31;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),VARREF(YevalSastYbinding_freeQ_setter),VARREF(YLlogG),T150);
  lit_74 = YPPsym((P)"binding-info");
  lit_75 = YPPlist(1,YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_32 = YPmet(FUNCODEREF(fun_binding_info_32),LITREF(lit_74),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSastYbinding_info);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSastYbinding_info);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_binding_info_32;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSastYbinding_info,T152);
  lit_76 = YPPsym((P)"binding-info-setter");
  lit_77 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T156 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_33 = YPmet(FUNCODEREF(fun_binding_info_setter_33),LITREF(lit_76),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYbinding_info_setter);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYbinding_info_setter);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_binding_info_setter_33;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYbinding_info_setter,T157);
  lit_78 = YPPlist(1,YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T162 = fun_34;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_info),VARREF(YevalSastYbinding_info_setter),VARREF(YLanyG),T162);
  lit_79 = YPPsym((P)"binding-prop");
  lit_80 = YPPlist(1,YPPsym((P)"_x"));
  T163 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_prop_35 = YPmet(FUNCODEREF(fun_binding_prop_35),LITREF(lit_79),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSastYbinding_prop);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSastYbinding_prop);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_binding_prop_35;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSastYbinding_prop,T164);
  lit_81 = YPPsym((P)"binding-prop-setter");
  lit_82 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T168 = YPsig(LITREF(lit_82),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_prop_setter_36 = YPmet(FUNCODEREF(fun_binding_prop_setter_36),LITREF(lit_81),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYbinding_prop_setter);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYbinding_prop_setter);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_binding_prop_setter_36;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYbinding_prop_setter,T169);
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T173 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T174 = fun_37;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_prop),VARREF(YevalSastYbinding_prop_setter),VARREF(YLanyG),T174);
  lit_84 = YPPsym((P)"binding-module-name");
  lit_85 = YPPlist(1,YPPsym((P)"b"));
  T175 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_38 = YPmet(FUNCODEREF(fun_binding_module_name_38),LITREF(lit_84),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSastYbinding_module_name);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSastYbinding_module_name);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_binding_module_name_38;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSastYbinding_module_name,T176);
  VARSET(YevalSastYbinding_global_box,VARREF(YevalSastYbinding_info));
  VARSET(YevalSastYbinding_global_box_setter,VARREF(YevalSastYbinding_info_setter));
  VARSET(YevalSastYbinding_locative,VARREF(YevalSastYbinding_info));
  VARSET(YevalSastYbinding_locative_setter,VARREF(YevalSastYbinding_info_setter));
  VARSET(YevalSastYbinding_handler,VARREF(YevalSastYbinding_info));
  T181 = VARSET(YevalSastYbinding_handler_setter,VARREF(YevalSastYbinding_info_setter));
  T180 = T181;
  return T180;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197;
DEFCREGS();
loop:
  lit_86 = YPPsym((P)"maybe-log-dependency");
  lit_87 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T0 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPmet(FUNCODEREF(YevalSastYmaybe_log_dependency),LITREF(lit_86),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T1);
  lit_88 = YPPsym((P)"macro-expander");
  lit_89 = YPPlist(1,YPPsym((P)"macro-binding"));
  T2 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPmet(FUNCODEREF(YevalSastYmacro_expander),LITREF(lit_88),T2,ENVNUL,PNUL,YPfalse);
  T3 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T3);
  lit_90 = YPPsym((P)"<local-binding>");
  T5 = (P)YPpair(VARREF(YevalSastYLbindingG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_90),T5);
  VARSET(YevalSastYLlocal_bindingG,T4);
  lit_91 = YPPsym((P)"binding-value");
  lit_92 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_41 = YPmet(FUNCODEREF(fun_binding_value_41),LITREF(lit_91),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YevalSastYbinding_value);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSastYbinding_value);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_binding_value_41;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSastYbinding_value,T7);
  lit_93 = YPPsym((P)"binding-value-setter");
  lit_94 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_42 = YPmet(FUNCODEREF(fun_binding_value_setter_42),LITREF(lit_93),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YevalSastYbinding_value_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(YevalSastYbinding_value_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_binding_value_setter_42;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSastYbinding_value_setter,T12);
  lit_95 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_43;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T17);
  lit_96 = YPPsym((P)"binding-mutable?");
  lit_97 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_44 = YPmet(FUNCODEREF(fun_binding_mutableQ_44),LITREF(lit_96),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YevalSastYbinding_mutableQ);
  if (T21 != YPfalse) {
    T20 = VARREF(YevalSastYbinding_mutableQ);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_binding_mutableQ_44;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YevalSastYbinding_mutableQ,T19);
  lit_98 = YPPsym((P)"binding-mutable?-setter");
  lit_99 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T23 = YPsig(LITREF(lit_99),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_45 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_45),LITREF(lit_98),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YevalSastYbinding_mutableQ_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YevalSastYbinding_mutableQ_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_binding_mutableQ_setter_45;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YevalSastYbinding_mutableQ_setter,T24);
  lit_100 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_46;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T29);
  lit_101 = YPPsym((P)"binding-dynamic-extent?");
  lit_102 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_47 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_47),LITREF(lit_101),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSastYbinding_dynamic_extentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYbinding_dynamic_extentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_binding_dynamic_extentQ_47;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYbinding_dynamic_extentQ,T31);
  lit_103 = YPPsym((P)"binding-dynamic-extent?-setter");
  lit_104 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T35 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_48 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_48),LITREF(lit_103),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSastYbinding_dynamic_extentQ_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSastYbinding_dynamic_extentQ_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_binding_dynamic_extentQ_setter_48;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T36);
  lit_105 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T41 = fun_49;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T41);
  lit_106 = YPPsym((P)"binding-dotted?");
  lit_107 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_50 = YPmet(FUNCODEREF(fun_binding_dottedQ_50),LITREF(lit_106),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YevalSastYbinding_dottedQ);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYbinding_dottedQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_binding_dottedQ_50;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYbinding_dottedQ,T43);
  lit_108 = YPPsym((P)"binding-dotted?-setter");
  lit_109 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_51 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_51),LITREF(lit_108),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YevalSastYbinding_dottedQ_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalSastYbinding_dottedQ_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_binding_dottedQ_setter_51;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalSastYbinding_dottedQ_setter,T48);
  lit_110 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T53 = fun_52;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T53);
  lit_111 = YPPsym((P)"binding-index");
  lit_112 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_53 = YPmet(FUNCODEREF(fun_binding_index_53),LITREF(lit_111),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYbinding_index);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYbinding_index);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_binding_index_53;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYbinding_index,T55);
  lit_113 = YPPsym((P)"binding-index-setter");
  lit_114 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_54 = YPmet(FUNCODEREF(fun_binding_index_setter_54),LITREF(lit_113),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YevalSastYbinding_index_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(YevalSastYbinding_index_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_binding_index_setter_54;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YevalSastYbinding_index_setter,T60);
  lit_115 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_55;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T65);
  lit_116 = YPPsym((P)"<compile-time>");
  T67 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_116),T67);
  VARSET(YevalSastYLcompile_timeG,T66);
  lit_117 = YPPsym((P)"compile-time-program");
  lit_118 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_56 = YPmet(FUNCODEREF(fun_compile_time_program_56),LITREF(lit_117),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYcompile_time_program);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYcompile_time_program);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_compile_time_program_56;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYcompile_time_program,T69);
  lit_119 = YPPsym((P)"compile-time-program-setter");
  lit_120 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_57 = YPmet(FUNCODEREF(fun_compile_time_program_setter_57),LITREF(lit_119),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSastYcompile_time_program_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYcompile_time_program_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_compile_time_program_setter_57;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYcompile_time_program_setter,T74);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_121 = YPPsym((P)"<reference>");
  T79 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T78 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_121),T79);
  VARSET(YevalSastYLreferenceG,T78);
  lit_122 = YPPsym((P)"<real-reference>");
  T81 = (P)YPpair(VARREF(YevalSastYLreferenceG),Ynil);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_122),T81);
  VARSET(YevalSastYLreal_referenceG,T80);
  lit_123 = YPPsym((P)"reference-binding");
  lit_124 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_58 = YPmet(FUNCODEREF(fun_reference_binding_58),LITREF(lit_123),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYreference_binding);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYreference_binding);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_reference_binding_58;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYreference_binding,T83);
  lit_125 = YPPsym((P)"reference-binding-setter");
  lit_126 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_59 = YPmet(FUNCODEREF(fun_reference_binding_setter_59),LITREF(lit_125),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYreference_binding_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYreference_binding_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_reference_binding_setter_59;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYreference_binding_setter,T88);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_127 = YPPsym((P)"<local-reference>");
  T93 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_127),T93);
  VARSET(YevalSastYLlocal_referenceG,T92);
  lit_128 = YPPsym((P)"reference-called-function?");
  lit_129 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_60 = YPmet(FUNCODEREF(fun_reference_called_functionQ_60),LITREF(lit_128),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSastYreference_called_functionQ);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYreference_called_functionQ);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_reference_called_functionQ_60;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYreference_called_functionQ,T95);
  lit_130 = YPPsym((P)"reference-called-function?-setter");
  lit_131 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T99 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_61 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_61),LITREF(lit_130),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSastYreference_called_functionQ_setter);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSastYreference_called_functionQ_setter);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_reference_called_functionQ_setter_61;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSastYreference_called_functionQ_setter,T100);
  lit_132 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T105 = fun_62;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T105);
  lit_133 = YPPsym((P)"reference-frame-number");
  lit_134 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_63 = YPmet(FUNCODEREF(fun_reference_frame_number_63),LITREF(lit_133),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYreference_frame_number);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYreference_frame_number);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_reference_frame_number_63;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYreference_frame_number,T107);
  lit_135 = YPPsym((P)"reference-frame-number-setter");
  lit_136 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T111 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_64 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_64),LITREF(lit_135),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYreference_frame_number_setter);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYreference_frame_number_setter);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_reference_frame_number_setter_64;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYreference_frame_number_setter,T112);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_137 = YPPsym((P)"reference-frame-offset");
  lit_138 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_65 = YPmet(FUNCODEREF(fun_reference_frame_offset_65),LITREF(lit_137),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YevalSastYreference_frame_offset);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYreference_frame_offset);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_reference_frame_offset_65;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYreference_frame_offset,T117);
  lit_139 = YPPsym((P)"reference-frame-offset-setter");
  lit_140 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_140),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_66 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_66),LITREF(lit_139),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YevalSastYreference_frame_offset_setter);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSastYreference_frame_offset_setter);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_reference_frame_offset_setter_66;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYreference_frame_offset_setter,T122);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_141 = YPPsym((P)"<module-binding-reference>");
  T127 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T126 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_141),T127);
  VARSET(YevalSastYLmodule_binding_referenceG,T126);
  lit_142 = YPPsym((P)"<global-reference>");
  T129 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_142),T129);
  VARSET(YevalSastYLglobal_referenceG,T128);
  lit_143 = YPPsym((P)"<runtime-reference>");
  T131 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T130 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_143),T131);
  VARSET(YevalSastYLruntime_referenceG,T130);
  lit_144 = YPPsym((P)"<dynamic-reference>");
  T133 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T132 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_144),T133);
  VARSET(YevalSastYLdynamic_referenceG,T132);
  lit_145 = YPPsym((P)"<predefined-reference>");
  T135 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T134 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_145),T135);
  VARSET(YevalSastYLpredefined_referenceG,T134);
  lit_146 = YPPsym((P)"<static-module-binding-reference>");
  T137 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T136 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_146),T137);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T136);
  lit_147 = YPPsym((P)"<macro-reference>");
  T139 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T138 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_147),T139);
  VARSET(YevalSastYLmacro_referenceG,T138);
  lit_148 = YPPsym((P)"<magic-reference>");
  T141 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_148),T141);
  VARSET(YevalSastYLmagic_referenceG,T140);
  lit_149 = YPPsym((P)"<bound?>");
  T143 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T142 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_149),T143);
  VARSET(YevalSastYLboundQG,T142);
  lit_150 = YPPsym((P)"bound?-reference");
  lit_151 = YPPlist(1,YPPsym((P)"_x"));
  T144 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_67 = YPmet(FUNCODEREF(fun_boundQ_reference_67),LITREF(lit_150),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYboundQ_reference);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYboundQ_reference);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_boundQ_reference_67;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYboundQ_reference,T145);
  lit_152 = YPPsym((P)"bound?-reference-setter");
  lit_153 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_68 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_68),LITREF(lit_152),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YevalSastYboundQ_reference_setter);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSastYboundQ_reference_setter);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_boundQ_reference_setter_68;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSastYboundQ_reference_setter,T150);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_154 = YPPsym((P)"<assignment>");
  T155 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_154),T155);
  VARSET(YevalSastYLassignmentG,T154);
  lit_155 = YPPsym((P)"assignment-form");
  lit_156 = YPPlist(1,YPPsym((P)"_x"));
  T156 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_69 = YPmet(FUNCODEREF(fun_assignment_form_69),LITREF(lit_155),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYassignment_form);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYassignment_form);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_assignment_form_69;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYassignment_form,T157);
  lit_157 = YPPsym((P)"assignment-form-setter");
  lit_158 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_158),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_70 = YPmet(FUNCODEREF(fun_assignment_form_setter_70),LITREF(lit_157),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSastYassignment_form_setter);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYassignment_form_setter);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_assignment_form_setter_70;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYassignment_form_setter,T162);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_159 = YPPsym((P)"<local-assignment>");
  T167 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T166 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_159),T167);
  VARSET(YevalSastYLlocal_assignmentG,T166);
  lit_160 = YPPsym((P)"assignment-reference");
  lit_161 = YPPlist(1,YPPsym((P)"_x"));
  T168 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_71 = YPmet(FUNCODEREF(fun_assignment_reference_71),LITREF(lit_160),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYassignment_reference);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYassignment_reference);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_assignment_reference_71;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYassignment_reference,T169);
  lit_162 = YPPsym((P)"assignment-reference-setter");
  lit_163 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T173 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_72 = YPmet(FUNCODEREF(fun_assignment_reference_setter_72),LITREF(lit_162),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSastYassignment_reference_setter);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSastYassignment_reference_setter);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_assignment_reference_setter_72;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSastYassignment_reference_setter,T174);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_164 = YPPsym((P)"<global-assignment>");
  T179 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T178 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_164),T179);
  VARSET(YevalSastYLglobal_assignmentG,T178);
  lit_165 = YPPsym((P)"assignment-binding");
  lit_166 = YPPlist(1,YPPsym((P)"_x"));
  T180 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_73 = YPmet(FUNCODEREF(fun_assignment_binding_73),LITREF(lit_165),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSastYassignment_binding);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSastYassignment_binding);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_assignment_binding_73;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSastYassignment_binding,T181);
  lit_167 = YPPsym((P)"assignment-binding-setter");
  lit_168 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T185 = YPsig(LITREF(lit_168),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_74 = YPmet(FUNCODEREF(fun_assignment_binding_setter_74),LITREF(lit_167),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSastYassignment_binding_setter);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSastYassignment_binding_setter);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_assignment_binding_setter_74;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSastYassignment_binding_setter,T186);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_169 = YPPsym((P)"<runtime-assignment>");
  T191 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T190 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_169),T191);
  VARSET(YevalSastYLruntime_assignmentG,T190);
  lit_170 = YPPsym((P)"<dynamic-assignment>");
  T193 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T192 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_170),T193);
  VARSET(YevalSastYLdynamic_assignmentG,T192);
  lit_171 = YPPsym((P)"<definition>");
  T197 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T196 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_171),T197);
  T195 = VARSET(YevalSastYLdefinitionG,T196);
  T194 = T195;
  return T194;
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
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230;
DEFCREGS();
loop:
  lit_172 = YPPsym((P)"<variable-definition>");
  T1 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_172),T1);
  VARSET(YevalSastYLvariable_definitionG,T0);
  lit_173 = YPPsym((P)"<dynamic-definition>");
  T3 = (P)YPpair(VARREF(YevalSastYLvariable_definitionG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_173),T3);
  VARSET(YevalSastYLdynamic_definitionG,T2);
  lit_174 = YPPsym((P)"<ast-generic-definition>");
  T5 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_174),T5);
  VARSET(YevalSastYLast_generic_definitionG,T4);
  lit_175 = YPPsym((P)"<ast-function-definition>");
  T7 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T6 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_175),T7);
  VARSET(YevalSastYLast_function_definitionG,T6);
  lit_176 = YPPsym((P)"<ast-method-definition>");
  T9 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T8 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_176),T9);
  VARSET(YevalSastYLast_method_definitionG,T8);
  lit_177 = YPPsym((P)"<ast-primitive-definition>");
  T11 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_177),T11);
  VARSET(YevalSastYLast_primitive_definitionG,T10);
  lit_178 = YPPsym((P)"<ast-macro-definition>");
  T13 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_178),T13);
  VARSET(YevalSastYLast_macro_definitionG,T12);
  lit_179 = YPPsym((P)"<ast-signature>");
  T15 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_179),T15);
  VARSET(YevalSastYLast_signatureG,T14);
  lit_180 = YPPsym((P)"signature-bindings");
  lit_181 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_181),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_75 = YPmet(FUNCODEREF(fun_signature_bindings_75),LITREF(lit_180),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSastYsignature_bindings);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSastYsignature_bindings);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_signature_bindings_75;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSastYsignature_bindings,T17);
  lit_182 = YPPsym((P)"signature-bindings-setter");
  lit_183 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_183),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_76 = YPmet(FUNCODEREF(fun_signature_bindings_setter_76),LITREF(lit_182),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YevalSastYsignature_bindings_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YevalSastYsignature_bindings_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_signature_bindings_setter_76;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YevalSastYsignature_bindings_setter,T22);
  lit_184 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T27 = fun_77;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T27);
  lit_185 = YPPsym((P)"signature-names");
  lit_186 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_78 = YPmet(FUNCODEREF(fun_signature_names_78),LITREF(lit_185),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YevalSastYsignature_names);
  if (T31 != YPfalse) {
    T30 = VARREF(YevalSastYsignature_names);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_signature_names_78;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YevalSastYsignature_names,T29);
  lit_187 = YPPsym((P)"signature-names-setter");
  lit_188 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T33 = YPsig(LITREF(lit_188),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_79 = YPmet(FUNCODEREF(fun_signature_names_setter_79),LITREF(lit_187),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSastYsignature_names_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSastYsignature_names_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_signature_names_setter_79;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSastYsignature_names_setter,T34);
  lit_189 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_189),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T39 = fun_80;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T39);
  lit_190 = YPPsym((P)"signature-specs");
  lit_191 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_191),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_81 = YPmet(FUNCODEREF(fun_signature_specs_81),LITREF(lit_190),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSastYsignature_specs);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSastYsignature_specs);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_signature_specs_81;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSastYsignature_specs,T41);
  lit_192 = YPPsym((P)"signature-specs-setter");
  lit_193 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T45 = YPsig(LITREF(lit_193),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_82 = YPmet(FUNCODEREF(fun_signature_specs_setter_82),LITREF(lit_192),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSastYsignature_specs_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSastYsignature_specs_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_signature_specs_setter_82;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSastYsignature_specs_setter,T46);
  lit_194 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_194),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T51 = fun_83;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T51);
  lit_195 = YPPsym((P)"signature-nary?");
  lit_196 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_84 = YPmet(FUNCODEREF(fun_signature_naryQ_84),LITREF(lit_195),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSastYsignature_naryQ);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSastYsignature_naryQ);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_signature_naryQ_84;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSastYsignature_naryQ,T53);
  lit_197 = YPPsym((P)"signature-nary?-setter");
  lit_198 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T57 = YPsig(LITREF(lit_198),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_85 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_85),LITREF(lit_197),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSastYsignature_naryQ_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSastYsignature_naryQ_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_signature_naryQ_setter_85;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSastYsignature_naryQ_setter,T58);
  lit_199 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T63 = fun_86;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T63);
  lit_200 = YPPsym((P)"signature-arity");
  lit_201 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_87 = YPmet(FUNCODEREF(fun_signature_arity_87),LITREF(lit_200),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSastYsignature_arity);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSastYsignature_arity);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_signature_arity_87;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSastYsignature_arity,T65);
  lit_202 = YPPsym((P)"signature-arity-setter");
  lit_203 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T69 = YPsig(LITREF(lit_203),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_88 = YPmet(FUNCODEREF(fun_signature_arity_setter_88),LITREF(lit_202),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSastYsignature_arity_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSastYsignature_arity_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_signature_arity_setter_88;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSastYsignature_arity_setter,T70);
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_89;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T75);
  lit_205 = YPPsym((P)"signature-value");
  lit_206 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_90 = YPmet(FUNCODEREF(fun_signature_value_90),LITREF(lit_205),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYsignature_value);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYsignature_value);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_signature_value_90;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYsignature_value,T77);
  lit_207 = YPPsym((P)"signature-value-setter");
  lit_208 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_208),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_91 = YPmet(FUNCODEREF(fun_signature_value_setter_91),LITREF(lit_207),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSastYsignature_value_setter);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYsignature_value_setter);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_signature_value_setter_91;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYsignature_value_setter,T82);
  lit_209 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T87 = fun_92;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T87);
  lit_210 = YPPsym((P)"<ast-function>");
  T90 = (P)YPpair(VARREF(YevalSdependencyYLdependentG),Ynil);
  T89 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),T90);
  T88 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_210),T89);
  VARSET(YevalSastYLast_functionG,T88);
  lit_211 = YPPsym((P)"function-binding");
  lit_212 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_93 = YPmet(FUNCODEREF(fun_function_binding_93),LITREF(lit_211),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSastYfunction_binding);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSastYfunction_binding);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_function_binding_93;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSastYfunction_binding,T92);
  lit_213 = YPPsym((P)"function-binding-setter");
  lit_214 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_214),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_94 = YPmet(FUNCODEREF(fun_function_binding_setter_94),LITREF(lit_213),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSastYfunction_binding_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSastYfunction_binding_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_function_binding_setter_94;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSastYfunction_binding_setter,T97);
  lit_215 = YPPlist(1,YPPsym((P)"_x"));
  T101 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T102 = fun_95;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T102);
  lit_216 = YPPsym((P)"function-debug-name");
  lit_217 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_96 = YPmet(FUNCODEREF(fun_function_debug_name_96),LITREF(lit_216),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YevalSastYfunction_debug_name);
  if (T106 != YPfalse) {
    T105 = VARREF(YevalSastYfunction_debug_name);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_function_debug_name_96;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YevalSastYfunction_debug_name,T104);
  lit_218 = YPPsym((P)"function-debug-name-setter");
  lit_219 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_219),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_97 = YPmet(FUNCODEREF(fun_function_debug_name_setter_97),LITREF(lit_218),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSastYfunction_debug_name_setter);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSastYfunction_debug_name_setter);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_function_debug_name_setter_97;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSastYfunction_debug_name_setter,T109);
  lit_220 = YPPlist(1,YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T114 = fun_98;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T114);
  lit_221 = YPPsym((P)"function-signature");
  lit_222 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_99 = YPmet(FUNCODEREF(fun_function_signature_99),LITREF(lit_221),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSastYfunction_signature);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSastYfunction_signature);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_function_signature_99;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSastYfunction_signature,T116);
  lit_223 = YPPsym((P)"function-signature-setter");
  lit_224 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T120 = YPsig(LITREF(lit_224),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_100 = YPmet(FUNCODEREF(fun_function_signature_setter_100),LITREF(lit_223),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSastYfunction_signature_setter);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSastYfunction_signature_setter);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_function_signature_setter_100;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYfunction_signature_setter,T121);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_225 = YPPsym((P)"function-bindings");
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T125 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPmet(FUNCODEREF(YevalSastYfunction_bindings),LITREF(lit_225),T125,ENVNUL,PNUL,YPfalse);
  T126 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T126);
  lit_227 = YPPsym((P)"function-specs");
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T127 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPmet(FUNCODEREF(YevalSastYfunction_specs),LITREF(lit_227),T127,ENVNUL,PNUL,YPfalse);
  T128 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T128);
  lit_229 = YPPsym((P)"function-nary?");
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPmet(FUNCODEREF(YevalSastYfunction_naryQ),LITREF(lit_229),T129,ENVNUL,PNUL,YPfalse);
  T130 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T130);
  lit_231 = YPPsym((P)"function-value");
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T131 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPmet(FUNCODEREF(YevalSastYfunction_value),LITREF(lit_231),T131,ENVNUL,PNUL,YPfalse);
  T132 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T132);
  lit_233 = YPPsym((P)"function-kind");
  lit_234 = YPPlist(1,YPPsym((P)"x"));
  lit_235 = YPsb((P)"FUN");
  T133 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_105 = YPmet(FUNCODEREF(fun_function_kind_105),LITREF(lit_233),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YevalSastYfunction_kind);
  if (T136 != YPfalse) {
    T135 = VARREF(YevalSastYfunction_kind);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_function_kind_105;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YevalSastYfunction_kind,T134);
  lit_236 = YPPsym((P)"function-display-name");
  lit_237 = YPPlist(1,YPPsym((P)"f"));
  lit_238 = YPsb((P)"%s:%s");
  lit_239 = YPsb((P)"anonymous function");
  T138 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPmet(FUNCODEREF(YevalSastYfunction_display_name),LITREF(lit_236),T138,ENVNUL,PNUL,YPfalse);
  T139 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T139);
  lit_240 = YPPsym((P)"invalidate-dependent");
  lit_241 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  lit_242 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_243 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_244 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T140 = YPsig(LITREF(lit_241),YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_107 = YPmet(FUNCODEREF(fun_invalidate_dependent_107),LITREF(lit_240),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSdependencyYinvalidate_dependent);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSdependencyYinvalidate_dependent);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_invalidate_dependent_107;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSdependencyYinvalidate_dependent,T141);
  lit_245 = YPPsym((P)"<programs>");
  T146 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T145 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_245),T146);
  VARSET(YevalSastYLprogramsG,T145);
  lit_246 = YPPsym((P)"as-lst");
  lit_247 = YPPlist(1,YPPsym((P)"e"));
  lit_248 = YPPsym((P)"loop");
  lit_249 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T148 = YPsig(LITREF(lit_249),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_108 = YPmet(FUNCODEREF(fun_loop_108),LITREF(lit_248),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_109 = YPmet(FUNCODEREF(fun_as_lst_109),LITREF(lit_246),T147,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YevalSastYas_lst);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSastYas_lst);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_as_lst_109;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSastYas_lst,T149);
  lit_250 = YPPlist(1,YPPsym((P)"exp"));
  lit_251 = YPPlist(1,YPPsym((P)"return"));
  lit_252 = YPPsym((P)"x-1435");
  lit_253 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_254 = YPPsym((P)"def-list");
  lit_255 = YPsb((P)"<");
  lit_256 = YPsb((P)">");
  lit_257 = YPsb((P)"$");
  lit_258 = YPsb((P)"-empty");
  lit_259 = YPPsym((P)"dc");
  lit_260 = YPPsym((P)"<lst>");
  lit_261 = YPPsym((P)"dv");
  lit_262 = YPPsym((P)"new");
  lit_263 = YPPsym((P)"df");
  lit_264 = YPPsym((P)"h");
  lit_265 = YPPsym((P)"t");
  lit_266 = YPPsym((P)"head");
  lit_267 = YPPsym((P)"tail");
  lit_268 = YPPsym((P)"dm");
  lit_269 = YPPsym((P)"empty");
  lit_270 = YPPsym((P)"e");
  lit_271 = YPPsym((P)"t=");
  lit_272 = YPPsym((P)"=>");
  T155 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1435_110 = YPmet(FUNCODEREF(fun_x_1435_110),LITREF(lit_252),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T156 = fun_112;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-list"),T156);
  lit_273 = YPPlist(1,YPPsym((P)"exp"));
  lit_274 = YPPlist(1,YPPsym((P)"return"));
  lit_275 = YPPsym((P)"x-1439");
  lit_276 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_277 = YPPsym((P)"def-programs");
  T159 = YPsig(LITREF(lit_276),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1439_113 = YPmet(FUNCODEREF(fun_x_1439_113),LITREF(lit_275),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_274),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T160 = fun_115;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T160);
  lit_278 = YPPsym((P)"<ast-embodied-function>");
  T162 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T161 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_278),T162);
  VARSET(YevalSastYLast_embodied_functionG,T161);
  lit_279 = YPPsym((P)"function-body");
  lit_280 = YPPlist(1,YPPsym((P)"_x"));
  T163 = YPsig(LITREF(lit_280),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_116 = YPmet(FUNCODEREF(fun_function_body_116),LITREF(lit_279),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSastYfunction_body);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSastYfunction_body);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_function_body_116;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSastYfunction_body,T164);
  lit_281 = YPPsym((P)"function-body-setter");
  lit_282 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T168 = YPsig(LITREF(lit_282),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_117 = YPmet(FUNCODEREF(fun_function_body_setter_117),LITREF(lit_281),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYfunction_body_setter);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYfunction_body_setter);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_function_body_setter_117;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYfunction_body_setter,T169);
  lit_283 = YPPlist(1,YPPsym((P)"_x"));
  T173 = YPsig(LITREF(lit_283),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T174 = fun_118;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T174);
  lit_284 = YPPsym((P)"function-index");
  lit_285 = YPPlist(1,YPPsym((P)"_x"));
  T175 = YPsig(LITREF(lit_285),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_119 = YPmet(FUNCODEREF(fun_function_index_119),LITREF(lit_284),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSastYfunction_index);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSastYfunction_index);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_function_index_119;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSastYfunction_index,T176);
  lit_286 = YPPsym((P)"function-index-setter");
  lit_287 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T180 = YPsig(LITREF(lit_287),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_120 = YPmet(FUNCODEREF(fun_function_index_setter_120),LITREF(lit_286),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSastYfunction_index_setter);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSastYfunction_index_setter);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_function_index_setter_120;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSastYfunction_index_setter,T181);
  lit_288 = YPPlist(1,YPPsym((P)"_x"));
  T185 = YPsig(LITREF(lit_288),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T186 = fun_121;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T186);
  lit_289 = YPPsym((P)"function-temporaries");
  lit_290 = YPPlist(1,YPPsym((P)"_x"));
  T187 = YPsig(LITREF(lit_290),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_122 = YPmet(FUNCODEREF(fun_function_temporaries_122),LITREF(lit_289),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSastYfunction_temporaries);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSastYfunction_temporaries);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_function_temporaries_122;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSastYfunction_temporaries,T188);
  lit_291 = YPPsym((P)"function-temporaries-setter");
  lit_292 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T192 = YPsig(LITREF(lit_292),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_123 = YPmet(FUNCODEREF(fun_function_temporaries_setter_123),LITREF(lit_291),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSastYfunction_temporaries_setter);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSastYfunction_temporaries_setter);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_function_temporaries_setter_123;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSastYfunction_temporaries_setter,T193);
  lit_293 = YPPlist(1,YPPsym((P)"_x"));
  T197 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T198 = fun_124;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T198);
  lit_294 = YPPsym((P)"function-registers");
  lit_295 = YPPlist(1,YPPsym((P)"_x"));
  T199 = YPsig(LITREF(lit_295),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_125 = YPmet(FUNCODEREF(fun_function_registers_125),LITREF(lit_294),T199,ENVNUL,PNUL,YPfalse);
  T202 = BOUNDP(YevalSastYfunction_registers);
  if (T202 != YPfalse) {
    T201 = VARREF(YevalSastYfunction_registers);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_function_registers_125;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T203);
  VARSET(YevalSastYfunction_registers,T200);
  lit_296 = YPPsym((P)"function-registers-setter");
  lit_297 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T204 = YPsig(LITREF(lit_297),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_126 = YPmet(FUNCODEREF(fun_function_registers_setter_126),LITREF(lit_296),T204,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(YevalSastYfunction_registers_setter);
  if (T207 != YPfalse) {
    T206 = VARREF(YevalSastYfunction_registers_setter);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_function_registers_setter_126;
  T205 = XCALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(YevalSastYfunction_registers_setter,T205);
  lit_298 = YPPlist(1,YPPsym((P)"_x"));
  T209 = YPsig(LITREF(lit_298),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T209,ENVNUL,PNUL,YPfalse);
  T210 = fun_127;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T210);
  lit_299 = YPPsym((P)"function-data-refs");
  lit_300 = YPPlist(1,YPPsym((P)"_x"));
  T211 = YPsig(LITREF(lit_300),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_128 = YPmet(FUNCODEREF(fun_function_data_refs_128),LITREF(lit_299),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(YevalSastYfunction_data_refs);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSastYfunction_data_refs);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_function_data_refs_128;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSastYfunction_data_refs,T212);
  lit_301 = YPPsym((P)"function-data-refs-setter");
  lit_302 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T216 = YPsig(LITREF(lit_302),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_129 = YPmet(FUNCODEREF(fun_function_data_refs_setter_129),LITREF(lit_301),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YevalSastYfunction_data_refs_setter);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSastYfunction_data_refs_setter);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_function_data_refs_setter_129;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YevalSastYfunction_data_refs_setter,T217);
  lit_303 = YPPlist(1,YPPsym((P)"_x"));
  T221 = YPsig(LITREF(lit_303),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T221,ENVNUL,PNUL,YPfalse);
  T222 = fun_130;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_data_refs),VARREF(YevalSastYfunction_data_refs_setter),VARREF(YgooScolsSvecYLvecG),T222);
  lit_304 = YPPsym((P)"function-self-recursive?");
  lit_305 = YPPlist(1,YPPsym((P)"_x"));
  T225 = YPsig(LITREF(lit_305),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T224 = fun_function_self_recursiveQ_131 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_131),LITREF(lit_304),T225,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSastYfunction_self_recursiveQ);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSastYfunction_self_recursiveQ);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_function_self_recursiveQ_131;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  T226 = VARSET(YevalSastYfunction_self_recursiveQ,T227);
  T223 = T226;
  return T223;
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
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220;
DEFCREGS();
loop:
  lit_306 = YPPsym((P)"function-self-recursive?-setter");
  lit_307 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_307),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_132 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_132),LITREF(lit_306),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYfunction_self_recursiveQ_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYfunction_self_recursiveQ_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_function_self_recursiveQ_setter_132;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYfunction_self_recursiveQ_setter,T1);
  lit_308 = YPPlist(1,YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_308),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T6 = fun_133;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_self_recursiveQ),VARREF(YevalSastYfunction_self_recursiveQ_setter),VARREF(YLanyG),T6);
  lit_309 = YPPsym((P)"function-source");
  lit_310 = YPPlist(1,YPPsym((P)"_x"));
  T7 = YPsig(LITREF(lit_310),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_134 = YPmet(FUNCODEREF(fun_function_source_134),LITREF(lit_309),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYfunction_source);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYfunction_source);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_function_source_134;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYfunction_source,T8);
  lit_311 = YPPsym((P)"function-source-setter");
  lit_312 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_312),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_135 = YPmet(FUNCODEREF(fun_function_source_setter_135),LITREF(lit_311),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSastYfunction_source_setter);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYfunction_source_setter);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_function_source_setter_135;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYfunction_source_setter,T13);
  lit_313 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_313),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T18 = fun_136;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T18);
  lit_314 = YPPsym((P)"function-frame-len");
  lit_315 = YPPlist(1,YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_315),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_137 = YPmet(FUNCODEREF(fun_function_frame_len_137),LITREF(lit_314),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSastYfunction_frame_len);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSastYfunction_frame_len);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_function_frame_len_137;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSastYfunction_frame_len,T20);
  lit_316 = YPPsym((P)"function-frame-len-setter");
  lit_317 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_317),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_138 = YPmet(FUNCODEREF(fun_function_frame_len_setter_138),LITREF(lit_316),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSastYfunction_frame_len_setter);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYfunction_frame_len_setter);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_function_frame_len_setter_138;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYfunction_frame_len_setter,T25);
  lit_318 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_318),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T30 = fun_139;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T30);
  lit_319 = YPPsym((P)"<free-environment>");
  T33 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T32 = (P)YPpair(VARREF(YLlstG),T33);
  T31 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_319),T32);
  VARSET(YevalSastYLfree_environmentG,T31);
  T34 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T34);
  lit_320 = YPPsym((P)"free-environment");
  lit_321 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T35 = YPsig(LITREF(lit_321),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_320),T35,ENVNUL,PNUL,YPfalse);
  T36 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T36);
  lit_322 = YPPlist(1,YPPsym((P)"e"));
  T38 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T37 = YPsig(LITREF(lit_322),YPPlist(1,T38),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_141 = YPmet(FUNCODEREF(fun_empty_141),LITREF(lit_269),T37,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooScolsScolYempty);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooScolsScolYempty);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_empty_141;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooScolsScolYempty,T39);
  lit_323 = YPPsym((P)"<ast-method>");
  T44 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T43 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_323),T44);
  VARSET(YevalSastYLast_methodG,T43);
  lit_324 = YPPsym((P)"function-free");
  lit_325 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPsig(LITREF(lit_325),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_142 = YPmet(FUNCODEREF(fun_function_free_142),LITREF(lit_324),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSastYfunction_free);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSastYfunction_free);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_function_free_142;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSastYfunction_free,T46);
  lit_326 = YPPsym((P)"function-free-setter");
  lit_327 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_327),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_143 = YPmet(FUNCODEREF(fun_function_free_setter_143),LITREF(lit_326),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSastYfunction_free_setter);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSastYfunction_free_setter);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_function_free_setter_143;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSastYfunction_free_setter,T51);
  lit_328 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPsig(LITREF(lit_328),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T56 = fun_144;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T56);
  lit_329 = YPPlist(1,YPPsym((P)"x"));
  lit_330 = YPsb((P)"MET");
  T57 = YPsig(LITREF(lit_329),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_145 = YPmet(FUNCODEREF(fun_function_kind_145),LITREF(lit_233),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSastYfunction_kind);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSastYfunction_kind);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_function_kind_145;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSastYfunction_kind,T58);
  lit_331 = YPPsym((P)"<ast-primitive>");
  T63 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_331),T63);
  VARSET(YevalSastYLast_primitiveG,T62);
  lit_332 = YPPsym((P)"function-adjectives");
  lit_333 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_333),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_146 = YPmet(FUNCODEREF(fun_function_adjectives_146),LITREF(lit_332),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSastYfunction_adjectives);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSastYfunction_adjectives);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_function_adjectives_146;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSastYfunction_adjectives,T65);
  lit_334 = YPPsym((P)"function-adjectives-setter");
  lit_335 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T69 = YPsig(LITREF(lit_335),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_147 = YPmet(FUNCODEREF(fun_function_adjectives_setter_147),LITREF(lit_334),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSastYfunction_adjectives_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSastYfunction_adjectives_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_function_adjectives_setter_147;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSastYfunction_adjectives_setter,T70);
  lit_336 = YPPlist(1,YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_336),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_148;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T75);
  lit_337 = YPPlist(1,YPPsym((P)"x"));
  lit_338 = YPsb((P)"PRM");
  T76 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_149 = YPmet(FUNCODEREF(fun_function_kind_149),LITREF(lit_233),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYfunction_kind);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYfunction_kind);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_function_kind_149;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYfunction_kind,T77);
  lit_339 = YPPsym((P)"<ast-generic>");
  T82 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T81 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_339),T82);
  VARSET(YevalSastYLast_genericG,T81);
  lit_340 = YPPlist(1,YPPsym((P)"x"));
  lit_341 = YPsb((P)"GEN");
  T83 = YPsig(LITREF(lit_340),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_150 = YPmet(FUNCODEREF(fun_function_kind_150),LITREF(lit_233),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalSastYfunction_kind);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSastYfunction_kind);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_function_kind_150;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSastYfunction_kind,T84);
  lit_342 = YPPsym((P)"<alternative>");
  T89 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T88 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_342),T89);
  VARSET(YevalSastYLalternativeG,T88);
  lit_343 = YPPsym((P)"alternative-condition");
  lit_344 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_344),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_151 = YPmet(FUNCODEREF(fun_alternative_condition_151),LITREF(lit_343),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSastYalternative_condition);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYalternative_condition);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_alternative_condition_151;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYalternative_condition,T91);
  lit_345 = YPPsym((P)"alternative-condition-setter");
  lit_346 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T95 = YPsig(LITREF(lit_346),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_152 = YPmet(FUNCODEREF(fun_alternative_condition_setter_152),LITREF(lit_345),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYalternative_condition_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYalternative_condition_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_alternative_condition_setter_152;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYalternative_condition_setter,T96);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_347 = YPPsym((P)"alternative-consequent");
  lit_348 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_348),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_153 = YPmet(FUNCODEREF(fun_alternative_consequent_153),LITREF(lit_347),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYalternative_consequent);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYalternative_consequent);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_alternative_consequent_153;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYalternative_consequent,T101);
  lit_349 = YPPsym((P)"alternative-consequent-setter");
  lit_350 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T105 = YPsig(LITREF(lit_350),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_154 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_154),LITREF(lit_349),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYalternative_consequent_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYalternative_consequent_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_alternative_consequent_setter_154;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYalternative_consequent_setter,T106);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_351 = YPPsym((P)"alternative-alternant");
  lit_352 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_352),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_155 = YPmet(FUNCODEREF(fun_alternative_alternant_155),LITREF(lit_351),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSastYalternative_alternant);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSastYalternative_alternant);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_alternative_alternant_155;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSastYalternative_alternant,T111);
  lit_353 = YPPsym((P)"alternative-alternant-setter");
  lit_354 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_354),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_156 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_156),LITREF(lit_353),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSastYalternative_alternant_setter);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSastYalternative_alternant_setter);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_alternative_alternant_setter_156;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSastYalternative_alternant_setter,T116);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_355 = YPPsym((P)"<sequential>");
  T122 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T121 = (P)YPpair(VARREF(YLlstG),T122);
  T120 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_355),T121);
  VARSET(YevalSastYLsequentialG,T120);
  T123 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T123);
  lit_356 = YPPsym((P)"sequential");
  lit_357 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T124 = YPsig(LITREF(lit_357),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_356),T124,ENVNUL,PNUL,YPfalse);
  T125 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T125);
  lit_358 = YPPlist(1,YPPsym((P)"e"));
  T127 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T126 = YPsig(LITREF(lit_358),YPPlist(1,T127),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_158 = YPmet(FUNCODEREF(fun_empty_158),LITREF(lit_269),T126,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YgooScolsScolYempty);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooScolsScolYempty);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_empty_158;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooScolsScolYempty,T128);
  lit_359 = YPPsym((P)"<constant>");
  T133 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T132 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_359),T133);
  VARSET(YevalSastYLconstantG,T132);
  lit_360 = YPPsym((P)"constant-value");
  lit_361 = YPPlist(1,YPPsym((P)"_x"));
  T134 = YPsig(LITREF(lit_361),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_159 = YPmet(FUNCODEREF(fun_constant_value_159),LITREF(lit_360),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSastYconstant_value);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYconstant_value);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_constant_value_159;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYconstant_value,T135);
  lit_362 = YPPsym((P)"constant-value-setter");
  lit_363 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T139 = YPsig(LITREF(lit_363),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_160 = YPmet(FUNCODEREF(fun_constant_value_setter_160),LITREF(lit_362),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYconstant_value_setter);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYconstant_value_setter);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_constant_value_setter_160;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYconstant_value_setter,T140);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_364 = YPPsym((P)"constant-index");
  lit_365 = YPPlist(1,YPPsym((P)"_x"));
  T144 = YPsig(LITREF(lit_365),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_161 = YPmet(FUNCODEREF(fun_constant_index_161),LITREF(lit_364),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYconstant_index);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYconstant_index);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_constant_index_161;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYconstant_index,T145);
  lit_366 = YPPsym((P)"constant-index-setter");
  lit_367 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_367),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_162 = YPmet(FUNCODEREF(fun_constant_index_setter_162),LITREF(lit_366),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YevalSastYconstant_index_setter);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSastYconstant_index_setter);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_constant_index_setter_162;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSastYconstant_index_setter,T150);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_368 = YPPsym((P)"<raw-constant>");
  T155 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_368),T155);
  VARSET(YevalSastYLraw_constantG,T154);
  lit_369 = YPPsym((P)"<immediate-constant>");
  T157 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T156 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_369),T157);
  VARSET(YevalSastYLimmediate_constantG,T156);
  lit_370 = YPPsym((P)"<application>");
  T159 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T158 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_370),T159);
  VARSET(YevalSastYLapplicationG,T158);
  lit_371 = YPPsym((P)"application-arguments");
  lit_372 = YPPlist(1,YPPsym((P)"_x"));
  T160 = YPsig(LITREF(lit_372),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_163 = YPmet(FUNCODEREF(fun_application_arguments_163),LITREF(lit_371),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYapplication_arguments);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYapplication_arguments);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_application_arguments_163;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYapplication_arguments,T161);
  lit_373 = YPPsym((P)"application-arguments-setter");
  lit_374 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T165 = YPsig(LITREF(lit_374),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_164 = YPmet(FUNCODEREF(fun_application_arguments_setter_164),LITREF(lit_373),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSastYapplication_arguments_setter);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYapplication_arguments_setter);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_application_arguments_setter_164;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYapplication_arguments_setter,T166);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_375 = YPPsym((P)"application-tail?");
  lit_376 = YPPlist(1,YPPsym((P)"_x"));
  T170 = YPsig(LITREF(lit_376),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_165 = YPmet(FUNCODEREF(fun_application_tailQ_165),LITREF(lit_375),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSastYapplication_tailQ);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYapplication_tailQ);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_application_tailQ_165;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYapplication_tailQ,T171);
  lit_377 = YPPsym((P)"application-tail?-setter");
  lit_378 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T175 = YPsig(LITREF(lit_378),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_166 = YPmet(FUNCODEREF(fun_application_tailQ_setter_166),LITREF(lit_377),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSastYapplication_tailQ_setter);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSastYapplication_tailQ_setter);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_application_tailQ_setter_166;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSastYapplication_tailQ_setter,T176);
  lit_379 = YPPlist(1,YPPsym((P)"_x"));
  T180 = YPsig(LITREF(lit_379),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T181 = fun_167;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T181);
  lit_380 = YPPsym((P)"<regular-application>");
  T183 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T182 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_380),T183);
  VARSET(YevalSastYLregular_applicationG,T182);
  lit_381 = YPPsym((P)"application-function");
  lit_382 = YPPlist(1,YPPsym((P)"_x"));
  T184 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_168 = YPmet(FUNCODEREF(fun_application_function_168),LITREF(lit_381),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSastYapplication_function);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSastYapplication_function);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_application_function_168;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSastYapplication_function,T185);
  lit_383 = YPPsym((P)"application-function-setter");
  lit_384 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T189 = YPsig(LITREF(lit_384),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_169 = YPmet(FUNCODEREF(fun_application_function_setter_169),LITREF(lit_383),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSastYapplication_function_setter);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSastYapplication_function_setter);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_application_function_setter_169;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSastYapplication_function_setter,T190);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_385 = YPPsym((P)"application-known?");
  lit_386 = YPPlist(1,YPPsym((P)"_x"));
  T194 = YPsig(LITREF(lit_386),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_170 = YPmet(FUNCODEREF(fun_application_knownQ_170),LITREF(lit_385),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalSastYapplication_knownQ);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSastYapplication_knownQ);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_application_knownQ_170;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSastYapplication_knownQ,T195);
  lit_387 = YPPsym((P)"application-known?-setter");
  lit_388 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T199 = YPsig(LITREF(lit_388),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_171 = YPmet(FUNCODEREF(fun_application_knownQ_setter_171),LITREF(lit_387),T199,ENVNUL,PNUL,YPfalse);
  T202 = BOUNDP(YevalSastYapplication_knownQ_setter);
  if (T202 != YPfalse) {
    T201 = VARREF(YevalSastYapplication_knownQ_setter);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_application_knownQ_setter_171;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T203);
  VARSET(YevalSastYapplication_knownQ_setter,T200);
  lit_389 = YPPlist(1,YPPsym((P)"_x"));
  T204 = YPsig(LITREF(lit_389),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T204,ENVNUL,PNUL,YPfalse);
  T205 = fun_172;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T205);
  lit_390 = YPPsym((P)"<method-application>");
  T207 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T206 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_390),T207);
  VARSET(YevalSastYLmethod_applicationG,T206);
  lit_391 = YPPsym((P)"application-next-methods");
  lit_392 = YPPlist(1,YPPsym((P)"_x"));
  T208 = YPsig(LITREF(lit_392),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_173 = YPmet(FUNCODEREF(fun_application_next_methods_173),LITREF(lit_391),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSastYapplication_next_methods);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSastYapplication_next_methods);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_application_next_methods_173;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSastYapplication_next_methods,T209);
  lit_393 = YPPsym((P)"application-next-methods-setter");
  lit_394 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T215 = YPsig(LITREF(lit_394),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T214 = fun_application_next_methods_setter_174 = YPmet(FUNCODEREF(fun_application_next_methods_setter_174),LITREF(lit_393),T215,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YevalSastYapplication_next_methods_setter);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSastYapplication_next_methods_setter);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_application_next_methods_setter_174;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T220);
  T216 = VARSET(YevalSastYapplication_next_methods_setter,T217);
  T213 = T216;
  return T213;
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
  P T192,T193,T194,T195,T196,T197,T198,T199;
DEFCREGS();
loop:
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_395 = YPPsym((P)"<predefined-application>");
  T1 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_395),T1);
  VARSET(YevalSastYLpredefined_applicationG,T0);
  lit_396 = YPPsym((P)"application-binding");
  lit_397 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_397),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_175 = YPmet(FUNCODEREF(fun_application_binding_175),LITREF(lit_396),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSastYapplication_binding);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSastYapplication_binding);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_application_binding_175;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSastYapplication_binding,T3);
  lit_398 = YPPsym((P)"application-binding-setter");
  lit_399 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T7 = YPsig(LITREF(lit_399),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_176 = YPmet(FUNCODEREF(fun_application_binding_setter_176),LITREF(lit_398),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYapplication_binding_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYapplication_binding_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_application_binding_setter_176;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYapplication_binding_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_400 = YPPsym((P)"<fix-let>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_400),T13);
  VARSET(YevalSastYLfix_letG,T12);
  lit_401 = YPPsym((P)"fix-let-bindings");
  lit_402 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_402),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_177 = YPmet(FUNCODEREF(fun_fix_let_bindings_177),LITREF(lit_401),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSastYfix_let_bindings);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSastYfix_let_bindings);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_fix_let_bindings_177;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSastYfix_let_bindings,T15);
  lit_403 = YPPsym((P)"fix-let-bindings-setter");
  lit_404 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_404),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_178 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_178),LITREF(lit_403),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSastYfix_let_bindings_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSastYfix_let_bindings_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_fix_let_bindings_setter_178;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSastYfix_let_bindings_setter,T20);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_405 = YPPsym((P)"fix-let-types");
  lit_406 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_406),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_179 = YPmet(FUNCODEREF(fun_fix_let_types_179),LITREF(lit_405),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSastYfix_let_types);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYfix_let_types);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_fix_let_types_179;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYfix_let_types,T25);
  lit_407 = YPPsym((P)"fix-let-types-setter");
  lit_408 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_408),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_180 = YPmet(FUNCODEREF(fun_fix_let_types_setter_180),LITREF(lit_407),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSastYfix_let_types_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSastYfix_let_types_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_fix_let_types_setter_180;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSastYfix_let_types_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_409 = YPPsym((P)"fix-let-arguments");
  lit_410 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_410),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_181 = YPmet(FUNCODEREF(fun_fix_let_arguments_181),LITREF(lit_409),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YevalSastYfix_let_arguments);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSastYfix_let_arguments);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_fix_let_arguments_181;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSastYfix_let_arguments,T35);
  lit_411 = YPPsym((P)"fix-let-arguments-setter");
  lit_412 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_412),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_182 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_182),LITREF(lit_411),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYfix_let_arguments_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYfix_let_arguments_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_fix_let_arguments_setter_182;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYfix_let_arguments_setter,T40);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_413 = YPPsym((P)"fix-let-body");
  lit_414 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_414),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_183 = YPmet(FUNCODEREF(fun_fix_let_body_183),LITREF(lit_413),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYfix_let_body);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYfix_let_body);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_fix_let_body_183;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYfix_let_body,T45);
  lit_415 = YPPsym((P)"fix-let-body-setter");
  lit_416 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_416),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_184 = YPmet(FUNCODEREF(fun_fix_let_body_setter_184),LITREF(lit_415),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YevalSastYfix_let_body_setter);
  if (T52 != YPfalse) {
    T51 = VARREF(YevalSastYfix_let_body_setter);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_fix_let_body_setter_184;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YevalSastYfix_let_body_setter,T50);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_417 = YPPsym((P)"<low-let>");
  T55 = (P)YPpair(VARREF(YevalSastYLfix_letG),Ynil);
  T54 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_417),T55);
  VARSET(YevalSastYLlow_letG,T54);
  lit_418 = YPPsym((P)"<fab-list>");
  T58 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T57 = (P)YPpair(VARREF(YLlstG),T58);
  T56 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_418),T57);
  VARSET(YevalSastYLfab_listG,T56);
  T59 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T59);
  lit_419 = YPPsym((P)"fab-list");
  lit_420 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T60 = YPsig(LITREF(lit_420),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_419),T60,ENVNUL,PNUL,YPfalse);
  T61 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T61);
  lit_421 = YPPlist(1,YPPsym((P)"e"));
  T63 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T62 = YPsig(LITREF(lit_421),YPPlist(1,T63),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_186 = YPmet(FUNCODEREF(fun_empty_186),LITREF(lit_269),T62,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooScolsScolYempty);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsScolYempty);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_empty_186;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsScolYempty,T64);
  lit_422 = YPPsym((P)"<arguments>");
  T70 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T69 = (P)YPpair(VARREF(YLlstG),T70);
  T68 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_422),T69);
  VARSET(YevalSastYLargumentsG,T68);
  T71 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T71);
  lit_423 = YPPsym((P)"arguments");
  lit_424 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T72 = YPsig(LITREF(lit_424),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_423),T72,ENVNUL,PNUL,YPfalse);
  T73 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T73);
  lit_425 = YPPlist(1,YPPsym((P)"e"));
  T75 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T74 = YPsig(LITREF(lit_425),YPPlist(1,T75),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_188 = YPmet(FUNCODEREF(fun_empty_188),LITREF(lit_269),T74,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScolsScolYempty);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsScolYempty);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_empty_188;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsScolYempty,T76);
  lit_426 = YPPsym((P)"<locals>");
  T81 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_426),T81);
  VARSET(YevalSastYLlocalsG,T80);
  lit_427 = YPPsym((P)"locals-bindings");
  lit_428 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_428),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_189 = YPmet(FUNCODEREF(fun_locals_bindings_189),LITREF(lit_427),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYlocals_bindings);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYlocals_bindings);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_locals_bindings_189;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYlocals_bindings,T83);
  lit_429 = YPPsym((P)"locals-bindings-setter");
  lit_430 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_430),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_190 = YPmet(FUNCODEREF(fun_locals_bindings_setter_190),LITREF(lit_429),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYlocals_bindings_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYlocals_bindings_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_locals_bindings_setter_190;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYlocals_bindings_setter,T88);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_431 = YPPsym((P)"locals-functions");
  lit_432 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_432),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_191 = YPmet(FUNCODEREF(fun_locals_functions_191),LITREF(lit_431),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSastYlocals_functions);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYlocals_functions);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_locals_functions_191;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYlocals_functions,T93);
  lit_433 = YPPsym((P)"locals-functions-setter");
  lit_434 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T97 = YPsig(LITREF(lit_434),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_192 = YPmet(FUNCODEREF(fun_locals_functions_setter_192),LITREF(lit_433),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSastYlocals_functions_setter);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSastYlocals_functions_setter);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_locals_functions_setter_192;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSastYlocals_functions_setter,T98);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_435 = YPPsym((P)"locals-body");
  lit_436 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_436),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_193 = YPmet(FUNCODEREF(fun_locals_body_193),LITREF(lit_435),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYlocals_body);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYlocals_body);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_locals_body_193;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYlocals_body,T103);
  lit_437 = YPPsym((P)"locals-body-setter");
  lit_438 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_438),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_194 = YPmet(FUNCODEREF(fun_locals_body_setter_194),LITREF(lit_437),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSastYlocals_body_setter);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYlocals_body_setter);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_locals_body_setter_194;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYlocals_body_setter,T108);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_439 = YPPsym((P)"<bind-exit>");
  T113 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T112 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_439),T113);
  VARSET(YevalSastYLbind_exitG,T112);
  lit_440 = YPPsym((P)"bind-exit-main-fun");
  lit_441 = YPPlist(1,YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_441),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_195 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_195),LITREF(lit_440),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSastYbind_exit_main_fun);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYbind_exit_main_fun);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_bind_exit_main_fun_195;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYbind_exit_main_fun,T115);
  lit_442 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_443 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T119 = YPsig(LITREF(lit_443),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_196 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_196),LITREF(lit_442),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYbind_exit_main_fun_setter);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYbind_exit_main_fun_setter);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_bind_exit_main_fun_setter_196;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYbind_exit_main_fun_setter,T120);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_444 = YPPsym((P)"<unwind-protect>");
  T125 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T124 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_444),T125);
  VARSET(YevalSastYLunwind_protectG,T124);
  lit_445 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_446 = YPPlist(1,YPPsym((P)"_x"));
  T126 = YPsig(LITREF(lit_446),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_197 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_197),LITREF(lit_445),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalSastYunwind_protect_protected_thunk);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalSastYunwind_protect_protected_thunk);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_unwind_protect_protected_thunk_197;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalSastYunwind_protect_protected_thunk,T127);
  lit_447 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_448 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_448),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_198 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_198),LITREF(lit_447),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYunwind_protect_protected_thunk_setter);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYunwind_protect_protected_thunk_setter);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_unwind_protect_protected_thunk_setter_198;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T132);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_449 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_450 = YPPlist(1,YPPsym((P)"_x"));
  T136 = YPsig(LITREF(lit_450),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_199 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_199),LITREF(lit_449),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSastYunwind_protect_cleanup_thunk);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_unwind_protect_cleanup_thunk_199;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T137);
  lit_451 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_452 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_452),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_200 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_200),LITREF(lit_451),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk_setter);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSastYunwind_protect_cleanup_thunk_setter);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_unwind_protect_cleanup_thunk_setter_200;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T142);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_453 = YPPsym((P)"<monitor>");
  T147 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T146 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_453),T147);
  VARSET(YevalSastYLmonitorG,T146);
  lit_454 = YPPsym((P)"monitor-type");
  lit_455 = YPPlist(1,YPPsym((P)"_x"));
  T148 = YPsig(LITREF(lit_455),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_201 = YPmet(FUNCODEREF(fun_monitor_type_201),LITREF(lit_454),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YevalSastYmonitor_type);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSastYmonitor_type);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_monitor_type_201;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSastYmonitor_type,T149);
  lit_456 = YPPsym((P)"monitor-type-setter");
  lit_457 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T153 = YPsig(LITREF(lit_457),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_202 = YPmet(FUNCODEREF(fun_monitor_type_setter_202),LITREF(lit_456),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YevalSastYmonitor_type_setter);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSastYmonitor_type_setter);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_monitor_type_setter_202;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSastYmonitor_type_setter,T154);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_458 = YPPsym((P)"monitor-info");
  lit_459 = YPPlist(1,YPPsym((P)"_x"));
  T158 = YPsig(LITREF(lit_459),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_203 = YPmet(FUNCODEREF(fun_monitor_info_203),LITREF(lit_458),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YevalSastYmonitor_info);
  if (T161 != YPfalse) {
    T160 = VARREF(YevalSastYmonitor_info);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_monitor_info_203;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YevalSastYmonitor_info,T159);
  lit_460 = YPPsym((P)"monitor-info-setter");
  lit_461 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T163 = YPsig(LITREF(lit_461),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_204 = YPmet(FUNCODEREF(fun_monitor_info_setter_204),LITREF(lit_460),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSastYmonitor_info_setter);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSastYmonitor_info_setter);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_monitor_info_setter_204;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSastYmonitor_info_setter,T164);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_462 = YPPsym((P)"monitor-test");
  lit_463 = YPPlist(1,YPPsym((P)"_x"));
  T168 = YPsig(LITREF(lit_463),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_205 = YPmet(FUNCODEREF(fun_monitor_test_205),LITREF(lit_462),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYmonitor_test);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYmonitor_test);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_monitor_test_205;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYmonitor_test,T169);
  lit_464 = YPPsym((P)"monitor-test-setter");
  lit_465 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T173 = YPsig(LITREF(lit_465),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_206 = YPmet(FUNCODEREF(fun_monitor_test_setter_206),LITREF(lit_464),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSastYmonitor_test_setter);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSastYmonitor_test_setter);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_monitor_test_setter_206;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSastYmonitor_test_setter,T174);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_466 = YPPsym((P)"monitor-handler");
  lit_467 = YPPlist(1,YPPsym((P)"_x"));
  T178 = YPsig(LITREF(lit_467),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_207 = YPmet(FUNCODEREF(fun_monitor_handler_207),LITREF(lit_466),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalSastYmonitor_handler);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSastYmonitor_handler);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_monitor_handler_207;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSastYmonitor_handler,T179);
  lit_468 = YPPsym((P)"monitor-handler-setter");
  lit_469 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T183 = YPsig(LITREF(lit_469),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_208 = YPmet(FUNCODEREF(fun_monitor_handler_setter_208),LITREF(lit_468),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalSastYmonitor_handler_setter);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSastYmonitor_handler_setter);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_monitor_handler_setter_208;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalSastYmonitor_handler_setter,T184);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_470 = YPPsym((P)"monitor-main-thunk");
  lit_471 = YPPlist(1,YPPsym((P)"_x"));
  T188 = YPsig(LITREF(lit_471),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_209 = YPmet(FUNCODEREF(fun_monitor_main_thunk_209),LITREF(lit_470),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YevalSastYmonitor_main_thunk);
  if (T191 != YPfalse) {
    T190 = VARREF(YevalSastYmonitor_main_thunk);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_monitor_main_thunk_209;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YevalSastYmonitor_main_thunk,T189);
  lit_472 = YPPsym((P)"monitor-main-thunk-setter");
  lit_473 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T193 = YPsig(LITREF(lit_473),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_210 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_210),LITREF(lit_472),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YevalSastYmonitor_main_thunk_setter);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSastYmonitor_main_thunk_setter);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_monitor_main_thunk_setter_210;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSastYmonitor_main_thunk_setter,T194);
  T199 = XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T198 = T199;
  return T198;
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
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286;
DEFCREGS();
loop:
  lit_474 = YPPsym((P)"ast-walk!");
  lit_475 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  lit_476 = YPPsym((P)"x-1441");
  lit_477 = YPPlist(1,YPPsym((P)"x-1440"));
  T1 = YPsig(LITREF(lit_477),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1441_211 = YPmet(FUNCODEREF(fun_x_1441_211),LITREF(lit_476),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_475),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_212 = YPmet(FUNCODEREF(fun_ast_walkX_212),LITREF(lit_474),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YevalSastYast_walkX);
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYast_walkX);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_ast_walkX_212;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YevalSastYast_walkX,T2);
  lit_478 = YPPsym((P)"ast-walk");
  lit_479 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  lit_480 = YPPsym((P)"x-1443");
  lit_481 = YPPlist(1,YPPsym((P)"x-1442"));
  T7 = YPsig(LITREF(lit_481),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1443_213 = YPmet(FUNCODEREF(fun_x_1443_213),LITREF(lit_480),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(LITREF(lit_479),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_214 = YPmet(FUNCODEREF(fun_ast_walk_214),LITREF(lit_478),T6,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYast_walk);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYast_walk);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_ast_walk_214;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYast_walk,T8);
  lit_482 = YPPsym((P)"ast-copy");
  lit_483 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_483),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_215 = YPmet(FUNCODEREF(fun_ast_copy_215),LITREF(lit_482),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSastYast_copy);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYast_copy);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_ast_copy_215;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYast_copy,T13);
  lit_484 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_484),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_216 = YPmet(FUNCODEREF(fun_ast_copy_216),LITREF(lit_482),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalSastYast_copy);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYast_copy);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_ast_copy_216;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYast_copy,T18);
  lit_485 = YPPsym((P)"<static-environment>");
  T23 = (P)YPpair(VARREF(YLanyG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_485),T23);
  VARSET(YevalSastYLstatic_environmentG,T22);
  lit_486 = YPPsym((P)"environment-next");
  lit_487 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_487),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_217 = YPmet(FUNCODEREF(fun_environment_next_217),LITREF(lit_486),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSastYenvironment_next);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYenvironment_next);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_environment_next_217;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYenvironment_next,T25);
  lit_488 = YPPsym((P)"environment-next-setter");
  lit_489 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_489),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_218 = YPmet(FUNCODEREF(fun_environment_next_setter_218),LITREF(lit_488),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSastYenvironment_next_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSastYenvironment_next_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_environment_next_setter_218;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSastYenvironment_next_setter,T30);
  lit_490 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_490),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T35 = fun_219;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T35);
  lit_491 = YPPsym((P)"environment-bindings");
  lit_492 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_492),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_220 = YPmet(FUNCODEREF(fun_environment_bindings_220),LITREF(lit_491),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSastYenvironment_bindings);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSastYenvironment_bindings);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_environment_bindings_220;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSastYenvironment_bindings,T37);
  lit_493 = YPPsym((P)"environment-bindings-setter");
  lit_494 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_494),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_221 = YPmet(FUNCODEREF(fun_environment_bindings_setter_221),LITREF(lit_493),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSastYenvironment_bindings_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSastYenvironment_bindings_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_environment_bindings_setter_221;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSastYenvironment_bindings_setter,T42);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_495 = YPPsym((P)"<static-global-environment>");
  T47 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T46 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_495),T47);
  VARSET(YevalSastYLstatic_global_environmentG,T46);
  lit_496 = YPPsym((P)"environment-module");
  lit_497 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_497),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_222 = YPmet(FUNCODEREF(fun_environment_module_222),LITREF(lit_496),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YevalSastYenvironment_module);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalSastYenvironment_module);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_environment_module_222;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalSastYenvironment_module,T49);
  lit_498 = YPPsym((P)"environment-module-setter");
  lit_499 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_499),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_223 = YPmet(FUNCODEREF(fun_environment_module_setter_223),LITREF(lit_498),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YevalSastYenvironment_module_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalSastYenvironment_module_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_environment_module_setter_223;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalSastYenvironment_module_setter,T54);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_500 = YPPsym((P)"environment-module-loader");
  lit_501 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_224 = YPmet(FUNCODEREF(fun_environment_module_loader_224),LITREF(lit_500),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YevalSastYenvironment_module_loader);
  if (T61 != YPfalse) {
    T60 = VARREF(YevalSastYenvironment_module_loader);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_environment_module_loader_224;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YevalSastYenvironment_module_loader,T59);
  lit_502 = YPPsym((P)"environment-module-loader-setter");
  lit_503 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_503),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_225 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_225),LITREF(lit_502),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSastYenvironment_module_loader_setter);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYenvironment_module_loader_setter);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_environment_module_loader_setter_225;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYenvironment_module_loader_setter,T64);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_504 = YPPsym((P)"environment-uses-modules");
  lit_505 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_505),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_226 = YPmet(FUNCODEREF(fun_environment_uses_modules_226),LITREF(lit_504),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYenvironment_uses_modules);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYenvironment_uses_modules);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_environment_uses_modules_226;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYenvironment_uses_modules,T69);
  lit_506 = YPPsym((P)"environment-uses-modules-setter");
  lit_507 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_507),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_227 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_227),LITREF(lit_506),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSastYenvironment_uses_modules_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYenvironment_uses_modules_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_environment_uses_modules_setter_227;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYenvironment_uses_modules_setter,T74);
  lit_508 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_508),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T79 = fun_228;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T79);
  lit_509 = YPPsym((P)"environment-allows-foreign-names?");
  lit_510 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_510),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_229 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_229),LITREF(lit_509),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSastYenvironment_allows_foreign_namesQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_environment_allows_foreign_namesQ_229;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T81);
  lit_511 = YPPsym((P)"environment-allows-foreign-names?-setter");
  lit_512 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_512),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_230 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_230),LITREF(lit_511),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ_setter);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_environment_allows_foreign_namesQ_setter_230;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T86);
  lit_513 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_513),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T91 = fun_231;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T91);
  lit_514 = YPPsym((P)"<static-empty-environment>");
  T93 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_514),T93);
  VARSET(YevalSastYLstatic_empty_environmentG,T92);
  T94 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T94);
  lit_515 = YPPsym((P)"<static-local-environment>");
  T96 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T95 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_515),T96);
  VARSET(YevalSastYLstatic_local_environmentG,T95);
  lit_516 = YPPsym((P)"env-object-name");
  lit_517 = YPPlist(1,YPPsym((P)"x"));
  lit_518 = YPPlist(1,YPPsym((P)"return"));
  lit_519 = YPPlist(1,YPPsym((P)"binding"));
  T99 = YPsig(LITREF(lit_519),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(LITREF(lit_518),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(LITREF(lit_517),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_234 = YPmet(FUNCODEREF(fun_env_object_name_234),LITREF(lit_516),T97,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSastYenv_object_name);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSastYenv_object_name);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_env_object_name_234;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSastYenv_object_name,T100);
  lit_520 = YPPsym((P)"objectify");
  lit_521 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T104 = YPsig(LITREF(lit_521),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_235 = YPmet(FUNCODEREF(fun_objectify_235),LITREF(lit_520),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YevalSastYobjectify);
  if (T107 != YPfalse) {
    T106 = VARREF(YevalSastYobjectify);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_objectify_235;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YevalSastYobjectify,T105);
  lit_522 = YPPsym((P)"objectify-list");
  lit_523 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T109 = YPsig(LITREF(lit_523),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_236 = YPmet(FUNCODEREF(fun_objectify_list_236),LITREF(lit_522),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YevalSastYobjectify_list);
  if (T112 != YPfalse) {
    T111 = VARREF(YevalSastYobjectify_list);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_objectify_list_236;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YevalSastYobjectify_list,T110);
  lit_524 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T114 = YPsig(LITREF(lit_524),YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_237 = YPmet(FUNCODEREF(fun_objectify_list_237),LITREF(lit_522),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSastYobjectify_list);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYobjectify_list);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_objectify_list_237;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYobjectify_list,T115);
  lit_525 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T119 = YPsig(LITREF(lit_525),YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_238 = YPmet(FUNCODEREF(fun_objectify_list_238),LITREF(lit_522),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYobjectify_list);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYobjectify_list);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_objectify_list_238;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYobjectify_list,T120);
  lit_526 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T124 = YPsig(LITREF(lit_526),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_239 = YPmet(FUNCODEREF(fun_objectify_239),LITREF(lit_520),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYobjectify);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYobjectify);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_objectify_239;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYobjectify,T125);
  lit_527 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T129 = YPsig(LITREF(lit_527),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_240 = YPmet(FUNCODEREF(fun_objectify_240),LITREF(lit_520),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSastYobjectify);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYobjectify);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_objectify_240;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYobjectify,T130);
  lit_528 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T134 = YPsig(LITREF(lit_528),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_241 = YPmet(FUNCODEREF(fun_objectify_241),LITREF(lit_520),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSastYobjectify);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYobjectify);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_objectify_241;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYobjectify,T135);
  lit_529 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T140 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T139 = YPsig(LITREF(lit_529),YPPlist(3,T140,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_242 = YPmet(FUNCODEREF(fun_objectify_242),LITREF(lit_520),T139,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSastYobjectify);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSastYobjectify);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_objectify_242;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSastYobjectify,T141);
  lit_530 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T145 = YPsig(LITREF(lit_530),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_243 = YPmet(FUNCODEREF(fun_objectify_243),LITREF(lit_520),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSastYobjectify);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSastYobjectify);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_objectify_243;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSastYobjectify,T146);
  lit_531 = YPPsym((P)"objectify-quotation");
  lit_532 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T150 = YPsig(LITREF(lit_532),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_244 = YPmet(FUNCODEREF(fun_objectify_quotation_244),LITREF(lit_531),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSastYobjectify_quotation);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_objectify_quotation_244;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSastYobjectify_quotation,T151);
  lit_533 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T155 = YPsig(LITREF(lit_533),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_245 = YPmet(FUNCODEREF(fun_objectify_quotation_245),LITREF(lit_531),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSastYobjectify_quotation);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_objectify_quotation_245;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYobjectify_quotation,T156);
  lit_534 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T160 = YPsig(LITREF(lit_534),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_246 = YPmet(FUNCODEREF(fun_objectify_quotation_246),LITREF(lit_531),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYobjectify_quotation);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_objectify_quotation_246;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYobjectify_quotation,T161);
  lit_535 = YPPsym((P)"objectify-raw");
  lit_536 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T165 = YPsig(LITREF(lit_536),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_247 = YPmet(FUNCODEREF(fun_objectify_raw_247),LITREF(lit_535),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSastYobjectify_raw);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYobjectify_raw);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_objectify_raw_247;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYobjectify_raw,T166);
  lit_537 = YPPsym((P)"objectify-bound?");
  lit_538 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T170 = YPsig(LITREF(lit_538),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_248 = YPmet(FUNCODEREF(fun_objectify_boundQ_248),LITREF(lit_537),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSastYobjectify_boundQ);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYobjectify_boundQ);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_objectify_boundQ_248;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYobjectify_boundQ,T171);
  lit_539 = YPPsym((P)"objectify-compile-time");
  lit_540 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T175 = YPsig(LITREF(lit_540),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_249 = YPmet(FUNCODEREF(fun_objectify_compile_time_249),LITREF(lit_539),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSastYobjectify_compile_time);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSastYobjectify_compile_time);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_objectify_compile_time_249;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSastYobjectify_compile_time,T176);
  lit_541 = YPPsym((P)"objectify-alternative");
  lit_542 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T180 = YPsig(LITREF(lit_542),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_250 = YPmet(FUNCODEREF(fun_objectify_alternative_250),LITREF(lit_541),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSastYobjectify_alternative);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSastYobjectify_alternative);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_objectify_alternative_250;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSastYobjectify_alternative,T181);
  lit_543 = YPPsym((P)"sequentialize");
  lit_544 = YPPlist(1,YPPsym((P)"e*"));
  lit_545 = YPPlist(1,YPPsym((P)"e*"));
  T186 = YPsig(LITREF(lit_545),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_251 = YPmet(FUNCODEREF(fun_loop_251),LITREF(lit_248),T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(LITREF(lit_544),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_252 = YPmet(FUNCODEREF(fun_sequentialize_252),LITREF(lit_543),T185,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSastYsequentialize);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSastYsequentialize);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_sequentialize_252;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSastYsequentialize,T187);
  lit_546 = YPPsym((P)"transform-defs");
  lit_547 = YPPlist(1,YPPsym((P)"e*"));
  T191 = YPsig(LITREF(lit_547),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_253 = YPmet(FUNCODEREF(fun_transform_defs_253),LITREF(lit_546),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSastYtransform_defs);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSastYtransform_defs);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_transform_defs_253;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSastYtransform_defs,T192);
  lit_548 = YPPsym((P)"objectify-sequential");
  lit_549 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_550 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e*"));
  T197 = YPsig(LITREF(lit_550),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_254 = YPmet(FUNCODEREF(fun_loop_254),LITREF(lit_248),T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(LITREF(lit_549),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_255 = YPmet(FUNCODEREF(fun_objectify_sequential_255),LITREF(lit_548),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSastYobjectify_sequential);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSastYobjectify_sequential);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_objectify_sequential_255;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSastYobjectify_sequential,T198);
  lit_551 = YPPsym((P)"objectify-application");
  lit_552 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_553 = YPPlist(1,YPPsym((P)"e"));
  T203 = YPsig(LITREF(lit_553),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T203,ENVNUL,PNUL,YPfalse);
  T202 = YPsig(LITREF(lit_552),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_257 = YPmet(FUNCODEREF(fun_objectify_application_257),LITREF(lit_551),T202,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSastYobjectify_application);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSastYobjectify_application);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_objectify_application_257;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSastYobjectify_application,T204);
  lit_554 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_555 = YPPlist(1,YPPsym((P)"e"));
  T209 = YPsig(LITREF(lit_555),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T209,ENVNUL,PNUL,YPfalse);
  T208 = YPsig(LITREF(lit_554),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_259 = YPmet(FUNCODEREF(fun_objectify_application_259),LITREF(lit_551),T208,ENVNUL,PNUL,YPfalse);
  T212 = BOUNDP(YevalSastYobjectify_application);
  if (T212 != YPfalse) {
    T211 = VARREF(YevalSastYobjectify_application);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_objectify_application_259;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T213);
  VARSET(YevalSastYobjectify_application,T210);
  lit_556 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_557 = YPPlist(1,YPPsym((P)"e"));
  T215 = YPsig(LITREF(lit_557),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T214 = YPsig(LITREF(lit_556),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_261 = YPmet(FUNCODEREF(fun_objectify_application_261),LITREF(lit_551),T214,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YevalSastYobjectify_application);
  if (T218 != YPfalse) {
    T217 = VARREF(YevalSastYobjectify_application);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_objectify_application_261;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YevalSastYobjectify_application,T216);
  lit_558 = YPPsym((P)"process-closed-application");
  lit_559 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_560 = YPsb((P)"incorrect regular arity");
  T220 = YPsig(LITREF(lit_559),YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_262 = YPmet(FUNCODEREF(fun_process_closed_application_262),LITREF(lit_558),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YevalSastYprocess_closed_application);
  if (T223 != YPfalse) {
    T222 = VARREF(YevalSastYprocess_closed_application);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_process_closed_application_262;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YevalSastYprocess_closed_application,T221);
  lit_561 = YPPsym((P)"process-nary-closed-application");
  lit_562 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_563 = YPPsym((P)"pack-nary-args");
  lit_564 = YPPlist(1,YPPsym((P)"e*"));
  lit_565 = YPPsym((P)"quote");
  lit_566 = YPPsym((P)"%pair");
  lit_567 = YPPsym((P)"pack-args");
  lit_568 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_569 = YPsb((P)"incorrect dotted arity");
  T227 = YPsig(LITREF(lit_564),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_263 = YPmet(FUNCODEREF(fun_pack_nary_args_263),LITREF(lit_563),T227,ENVNUL,PNUL,YPfalse);
  T226 = YPsig(LITREF(lit_568),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_264 = YPmet(FUNCODEREF(fun_pack_args_264),LITREF(lit_567),T226,ENVNUL,PNUL,YPfalse);
  T225 = YPsig(LITREF(lit_562),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_265 = YPmet(FUNCODEREF(fun_process_nary_closed_application_265),LITREF(lit_561),T225,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YevalSastYprocess_nary_closed_application);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSastYprocess_nary_closed_application);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_process_nary_closed_application_265;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSastYprocess_nary_closed_application,T228);
  lit_570 = YPPsym((P)"convert2arguments");
  lit_571 = YPPlist(1,YPPsym((P)"e*"));
  T232 = YPsig(LITREF(lit_571),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_266 = YPmet(FUNCODEREF(fun_convert2arguments_266),LITREF(lit_570),T232,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YevalSastYconvert2arguments);
  if (T235 != YPfalse) {
    T234 = VARREF(YevalSastYconvert2arguments);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_convert2arguments_266;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YevalSastYconvert2arguments,T233);
  lit_572 = YPPsym((P)"objectify-assignment");
  lit_573 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_574 = YPsb((P)"Unsupported Set!: %=");
  T237 = YPsig(LITREF(lit_573),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_267 = YPmet(FUNCODEREF(fun_objectify_assignment_267),LITREF(lit_572),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YevalSastYobjectify_assignment);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_objectify_assignment_267;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSastYobjectify_assignment,T238);
  lit_575 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T242 = YPsig(LITREF(lit_575),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_268 = YPmet(FUNCODEREF(fun_objectify_assignment_268),LITREF(lit_572),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YevalSastYobjectify_assignment);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_objectify_assignment_268;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSastYobjectify_assignment,T243);
  lit_576 = YPPsym((P)"objectify-assignment-using");
  lit_577 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T247 = YPsig(LITREF(lit_577),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_269 = YPmet(FUNCODEREF(fun_objectify_assignment_using_269),LITREF(lit_576),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T250 != YPfalse) {
    T249 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_objectify_assignment_using_269;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YevalSastYobjectify_assignment_using,T248);
  lit_578 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T252 = YPsig(LITREF(lit_578),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_270 = YPmet(FUNCODEREF(fun_objectify_assignment_using_270),LITREF(lit_576),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T255 != YPfalse) {
    T254 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_objectify_assignment_using_270;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YevalSastYobjectify_assignment_using,T253);
  lit_579 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T257 = YPsig(LITREF(lit_579),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_271 = YPmet(FUNCODEREF(fun_objectify_assignment_using_271),LITREF(lit_576),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T260 != YPfalse) {
    T259 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_objectify_assignment_using_271;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YevalSastYobjectify_assignment_using,T258);
  lit_580 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T262 = YPsig(LITREF(lit_580),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_272 = YPmet(FUNCODEREF(fun_objectify_assignment_using_272),LITREF(lit_576),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_objectify_assignment_using_272;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSastYobjectify_assignment_using,T263);
  lit_581 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_582 = YPsb((P)"Unable to assign to static module binding %=");
  T267 = YPsig(LITREF(lit_581),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_273 = YPmet(FUNCODEREF(fun_objectify_assignment_using_273),LITREF(lit_576),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_objectify_assignment_using_273;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSastYobjectify_assignment_using,T268);
  lit_583 = YPPsym((P)"update-binding-kind");
  lit_584 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_585 = YPPsym((P)"runtime");
  lit_586 = YPPsym((P)"magic");
  lit_587 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T272 = YPsig(LITREF(lit_584),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_583),T272,ENVNUL,PNUL,YPfalse);
  T273 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T273);
  lit_588 = YPPsym((P)"ast-define-binding");
  lit_589 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_590 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T274 = YPsig(LITREF(lit_589),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_275 = YPmet(FUNCODEREF(fun_ast_define_binding_275),LITREF(lit_588),T274,ENVNUL,PNUL,YPfalse);
  T277 = BOUNDP(YevalSastYast_define_binding);
  if (T277 != YPfalse) {
    T276 = VARREF(YevalSastYast_define_binding);
  } else {
    T276 = YPfalse;
  }
  T278 = fun_ast_define_binding_275;
  T275 = XCALL2(1,VARREF(YPdefine_method),T276,T278);
  VARSET(YevalSastYast_define_binding,T275);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_591 = YPPsym((P)"objectify-definition");
  lit_592 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T281 = YPsig(LITREF(lit_592),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  T280 = fun_objectify_definition_276 = YPmet(FUNCODEREF(fun_objectify_definition_276),LITREF(lit_591),T281,ENVNUL,PNUL,YPfalse);
  T285 = BOUNDP(YevalSastYobjectify_definition);
  if (T285 != YPfalse) {
    T284 = VARREF(YevalSastYobjectify_definition);
  } else {
    T284 = YPfalse;
  }
  T286 = fun_objectify_definition_276;
  T283 = XCALL2(1,VARREF(YPdefine_method),T284,T286);
  T282 = VARSET(YevalSastYobjectify_definition,T283);
  T279 = T282;
  return T279;
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
  P T304,T305,T306,T307,T308;
DEFCREGS();
loop:
  lit_593 = YPPsym((P)"objectify-variable-definition");
  lit_594 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T0 = YPsig(LITREF(lit_594),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_277 = YPmet(FUNCODEREF(fun_objectify_variable_definition_277),LITREF(lit_593),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYobjectify_variable_definition);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYobjectify_variable_definition);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_objectify_variable_definition_277;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYobjectify_variable_definition,T1);
  lit_595 = YPPsym((P)"objectify-dynamic-definition");
  lit_596 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_597 = YPPsym((P)"dynamic");
  T5 = YPsig(LITREF(lit_596),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_278 = YPmet(FUNCODEREF(fun_objectify_dynamic_definition_278),LITREF(lit_595),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYobjectify_dynamic_definition);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYobjectify_dynamic_definition);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_objectify_dynamic_definition_278;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYobjectify_dynamic_definition,T6);
  lit_598 = YPPsym((P)"%%macro");
  lit_599 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_600 = YPPsym((P)"expand");
  lit_601 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_602 = YPsb((P)"MACRO ");
  lit_603 = YPsb((P)"\n");
  lit_604 = YPsb((P)"  => ");
  lit_605 = YPsb((P)"\n");
  lit_606 = YPPsym((P)"macro");
  T11 = YPsig(LITREF(lit_601),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_279 = YPmet(FUNCODEREF(fun_expand_279),LITREF(lit_600),T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(LITREF(lit_599),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_598),T10,ENVNUL,PNUL,YPfalse);
  T12 = YPPmacro;
  VARSET(YPPmacro,T12);
  lit_607 = YPPsym((P)"objectify-syntax-definition");
  lit_608 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T13 = YPsig(LITREF(lit_608),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_281 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_281),LITREF(lit_607),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YevalSastYobjectify_syntax_definition);
  if (T16 != YPfalse) {
    T15 = VARREF(YevalSastYobjectify_syntax_definition);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_objectify_syntax_definition_281;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YevalSastYobjectify_syntax_definition,T14);
  lit_609 = YPPsym((P)"objectify-function-definition");
  lit_610 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  T18 = YPsig(LITREF(lit_610),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_282 = YPmet(FUNCODEREF(fun_objectify_function_definition_282),LITREF(lit_609),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YevalSastYobjectify_function_definition);
  if (T21 != YPfalse) {
    T20 = VARREF(YevalSastYobjectify_function_definition);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_objectify_function_definition_282;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YevalSastYobjectify_function_definition,T19);
  lit_611 = YPPsym((P)"module-binding");
  lit_612 = YPPlist(1,YPPsym((P)"kind"));
  T23 = YPsig(LITREF(lit_612),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_611),T23,ENVNUL,PNUL,YPfalse);
  T24 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T24);
  lit_613 = YPPsym((P)"objectify-primitive-definition");
  lit_614 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_615 = YPPsym((P)"predefined");
  lit_616 = YPPsym((P)"inline");
  T25 = YPsig(LITREF(lit_614),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_284 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_284),LITREF(lit_613),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSastYobjectify_primitive_definition);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSastYobjectify_primitive_definition);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_objectify_primitive_definition_284;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSastYobjectify_primitive_definition,T26);
  lit_617 = YPPsym((P)"objectify-generic-definition");
  lit_618 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T30 = YPsig(LITREF(lit_618),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_285 = YPmet(FUNCODEREF(fun_objectify_generic_definition_285),LITREF(lit_617),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSastYobjectify_generic_definition);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYobjectify_generic_definition);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_objectify_generic_definition_285;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYobjectify_generic_definition,T31);
  lit_619 = YPPsym((P)"objectify-method-definition");
  lit_620 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_621 = YPPsym((P)"if");
  lit_622 = YPPsym((P)"bound?");
  lit_623 = YPPsym((P)"%define-method");
  T35 = YPsig(LITREF(lit_620),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_286 = YPmet(FUNCODEREF(fun_objectify_method_definition_286),LITREF(lit_619),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSastYobjectify_method_definition);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSastYobjectify_method_definition);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_objectify_method_definition_286;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSastYobjectify_method_definition,T36);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_624 = YPPsym((P)"objectify-function-source");
  lit_625 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_626 = Ynil;
  lit_627 = YPsb((P)"(fun %s %s)");
  T44 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(LITREF(lit_625),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_291 = YPmet(FUNCODEREF(fun_objectify_function_source_291),LITREF(lit_624),T40,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYobjectify_function_source);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYobjectify_function_source);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_objectify_function_source_291;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYobjectify_function_source,T45);
  lit_628 = YPPsym((P)"objectify-function");
  lit_629 = YPPlist(4,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T51 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(LITREF(lit_629),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_294 = YPmet(FUNCODEREF(fun_objectify_function_294),LITREF(lit_628),T49,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYobjectify_function);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYobjectify_function);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_objectify_function_294;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYobjectify_function,T52);
  lit_630 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_630));
  lit_631 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_631));
  lit_632 = YPPsym((P)"objectify-signature");
  lit_633 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  lit_634 = YPPsym((P)"col");
  lit_635 = YPPlist(5,YPPsym((P)"params"),YPPsym((P)"nary?"),YPPsym((P)"bindings"),YPPsym((P)"names"),YPPsym((P)"types"));
  T57 = YPsig(LITREF(lit_635),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_295 = YPmet(FUNCODEREF(fun_col_295),LITREF(lit_634),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(LITREF(lit_633),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_296 = YPmet(FUNCODEREF(fun_objectify_signature_296),LITREF(lit_632),T56,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSastYobjectify_signature);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSastYobjectify_signature);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_objectify_signature_296;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSastYobjectify_signature,T58);
  lit_636 = YPPsym((P)"compute-local-reference-offsets");
  lit_637 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_638 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"r"));
  lit_639 = YPPsym((P)"find");
  lit_640 = YPPlist(2,YPPsym((P)"j"),YPPsym((P)"bindings"));
  lit_641 = YPsb((P)"didn't find local binding %= in %=");
  T65 = YPsig(LITREF(lit_640),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_297 = YPmet(FUNCODEREF(fun_find_297),LITREF(lit_639),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(LITREF(lit_638),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_298 = YPmet(FUNCODEREF(fun_loop_298),LITREF(lit_248),T64,ENVNUL,PNUL,YPfalse);
  T63 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T62 = YPsig(LITREF(lit_637),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),T63,Ynil);
  fun_compute_local_reference_offsets_299 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_299),LITREF(lit_636),T62,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSastYcompute_local_reference_offsets);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSastYcompute_local_reference_offsets);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_compute_local_reference_offsets_299;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSastYcompute_local_reference_offsets,T66);
  lit_642 = YPPsym((P)"objectify-binding");
  lit_643 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T70 = YPsig(LITREF(lit_643),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_300 = YPmet(FUNCODEREF(fun_objectify_binding_300),LITREF(lit_642),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSastYobjectify_binding);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSastYobjectify_binding);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_objectify_binding_300;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSastYobjectify_binding,T71);
  lit_644 = YPPsym((P)"binding-reference-class");
  lit_645 = YPPlist(1,YPPsym((P)"b"));
  lit_646 = YPsb((P)"Unknown binding-kind %=");
  T75 = YPsig(LITREF(lit_645),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_301 = YPmet(FUNCODEREF(fun_binding_reference_class_301),LITREF(lit_644),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSastYbinding_reference_class);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYbinding_reference_class);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_binding_reference_class_301;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYbinding_reference_class,T76);
  lit_647 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T80 = YPsig(LITREF(lit_647),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_302 = YPmet(FUNCODEREF(fun_objectify_binding_302),LITREF(lit_642),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSastYobjectify_binding);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSastYobjectify_binding);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_objectify_binding_302;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSastYobjectify_binding,T81);
  lit_648 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T85 = YPsig(LITREF(lit_648),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_303 = YPmet(FUNCODEREF(fun_objectify_binding_303),LITREF(lit_642),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSastYobjectify_binding);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSastYobjectify_binding);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_objectify_binding_303;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSastYobjectify_binding,T86);
  lit_649 = YPPsym((P)"default-type");
  lit_650 = YPPlist(1,YPPsym((P)"r"));
  lit_651 = YPPsym((P)"<any>");
  T90 = YPsig(LITREF(lit_650),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_304 = YPmet(FUNCODEREF(fun_default_type_304),LITREF(lit_649),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSastYdefault_type);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYdefault_type);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_default_type_304;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYdefault_type,T91);
  lit_652 = YPPsym((P)"objectify-free-global-reference");
  lit_653 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T95 = YPsig(LITREF(lit_653),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_305 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_305),LITREF(lit_652),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYobjectify_free_global_reference);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYobjectify_free_global_reference);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_objectify_free_global_reference_305;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYobjectify_free_global_reference,T96);
  lit_654 = YPPsym((P)"foreign-name?");
  lit_655 = YPPlist(1,YPPsym((P)"name"));
  T100 = YPsig(LITREF(lit_655),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_654),T100,ENVNUL,PNUL,YPfalse);
  T101 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T101);
  lit_656 = YPPsym((P)"objectify-foreign-reference");
  lit_657 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_658 = YPsb((P)"Malformed foreign name %s.\n");
  lit_659 = YPsb((P)"No binding %s in %s.\n");
  T102 = YPsig(LITREF(lit_657),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_307 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_307),LITREF(lit_656),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYobjectify_foreign_reference);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYobjectify_foreign_reference);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_objectify_foreign_reference_307;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYobjectify_foreign_reference,T103);
  lit_660 = YPPsym((P)"objectify-symbol");
  lit_661 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T107 = YPsig(LITREF(lit_661),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_308 = YPmet(FUNCODEREF(fun_objectify_symbol_308),LITREF(lit_660),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSastYobjectify_symbol);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYobjectify_symbol);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_objectify_symbol_308;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYobjectify_symbol,T108);
  lit_662 = YPPsym((P)"ftype");
  lit_663 = YPPlist(1,YPPsym((P)"r"));
  lit_664 = YPPsym((P)"<fun>");
  T112 = YPsig(LITREF(lit_663),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_309 = YPmet(FUNCODEREF(fun_ftype_309),LITREF(lit_662),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSastYftype);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSastYftype);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_ftype_309;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSastYftype,T113);
  lit_665 = YPPsym((P)"<functions>");
  T119 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T118 = (P)YPpair(VARREF(YLlstG),T119);
  T117 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_665),T118);
  VARSET(YevalSastYLfunctionsG,T117);
  T120 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T120);
  lit_666 = YPPsym((P)"functions");
  lit_667 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T121 = YPsig(LITREF(lit_667),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_666),T121,ENVNUL,PNUL,YPfalse);
  T122 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T122);
  lit_668 = YPPlist(1,YPPsym((P)"e"));
  T124 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T123 = YPsig(LITREF(lit_668),YPPlist(1,T124),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_311 = YPmet(FUNCODEREF(fun_empty_311),LITREF(lit_269),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YgooScolsScolYempty);
  if (T127 != YPfalse) {
    T126 = VARREF(YgooScolsScolYempty);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_empty_311;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YgooScolsScolYempty,T125);
  lit_669 = YPPsym((P)"objectify-locals");
  lit_670 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_671 = YPPlist(1,YPPsym((P)"n"));
  lit_672 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T131 = YPsig(LITREF(lit_671),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_672),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_670),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_314 = YPmet(FUNCODEREF(fun_objectify_locals_314),LITREF(lit_669),T129,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYobjectify_locals);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYobjectify_locals);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_objectify_locals_314;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYobjectify_locals,T132);
  lit_673 = YPPsym((P)"objectify-bind-exit");
  lit_674 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T136 = YPsig(LITREF(lit_674),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_315 = YPmet(FUNCODEREF(fun_objectify_bind_exit_315),LITREF(lit_673),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSastYobjectify_bind_exit);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSastYobjectify_bind_exit);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_objectify_bind_exit_315;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSastYobjectify_bind_exit,T137);
  lit_675 = YPPsym((P)"objectify-unwind-protect");
  lit_676 = YPPlist(4,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T141 = YPsig(LITREF(lit_676),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_316 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_316),LITREF(lit_675),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSastYobjectify_unwind_protect);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSastYobjectify_unwind_protect);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_objectify_unwind_protect_316;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSastYobjectify_unwind_protect,T142);
  lit_677 = YPPsym((P)"objectify-monitor");
  lit_678 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T146 = YPsig(LITREF(lit_678),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_317 = YPmet(FUNCODEREF(fun_objectify_monitor_317),LITREF(lit_677),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSastYobjectify_monitor);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSastYobjectify_monitor);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_objectify_monitor_317;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSastYobjectify_monitor,T147);
  lit_679 = YPPsym((P)"objectify-export");
  lit_680 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_681 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_682 = YPPlist(1,YPPsym((P)"name"));
  lit_683 = YPPlist(1,YPPsym((P)"exit"));
  lit_684 = YPsb((P)"Continue without exporting %s");
  lit_685 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_686 = YPsb((P)"Can't export undefined binding %s.\n");
  T156 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_685),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_683),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_682),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_680),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_323 = YPmet(FUNCODEREF(fun_objectify_export_323),LITREF(lit_679),T151,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYobjectify_export);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYobjectify_export);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_objectify_export_323;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYobjectify_export,T157);
  lit_687 = YPPsym((P)"import-global!");
  lit_688 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"env"));
  lit_689 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T161 = YPsig(LITREF(lit_688),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_687),T161,ENVNUL,PNUL,YPfalse);
  T162 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T162);
  lit_690 = YPPsym((P)"objectify-use/export-module");
  lit_691 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_692 = YPPlist(1,YPPsym((P)"b"));
  T164 = YPsig(LITREF(lit_692),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_325 = YPmet(FUNCODEREF(fun_325),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_691),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_326 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_326),LITREF(lit_690),T163,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSastYobjectify_useSexport_module);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSastYobjectify_useSexport_module);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_objectify_useSexport_module_326;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSastYobjectify_useSexport_module,T165);
  lit_693 = YPPsym((P)"objectify-use-include");
  lit_694 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_695 = YPPlist(1,YPPsym((P)"x"));
  T170 = YPsig(LITREF(lit_695),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_327 = YPmet(FUNCODEREF(fun_327),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_694),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_328 = YPmet(FUNCODEREF(fun_objectify_use_include_328),LITREF(lit_693),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSastYobjectify_use_include);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYobjectify_use_include);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_objectify_use_include_328;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYobjectify_use_include,T171);
  lit_696 = YPPsym((P)"objectify-use-library");
  lit_697 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_698 = YPPlist(1,YPPsym((P)"x"));
  T176 = YPsig(LITREF(lit_698),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_329 = YPmet(FUNCODEREF(fun_329),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_697),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_330 = YPmet(FUNCODEREF(fun_objectify_use_library_330),LITREF(lit_696),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalSastYobjectify_use_library);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSastYobjectify_use_library);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_objectify_use_library_330;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSastYobjectify_use_library,T177);
  lit_699 = YPPsym((P)"objectify-use-module");
  lit_700 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_701 = YPPsym((P)"use-mod");
  lit_702 = YPPlist(1,YPPsym((P)"name"));
  lit_703 = YPPlist(1,YPPsym((P)"b"));
  lit_704 = YPPsym((P)"use-c-mod");
  lit_705 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_706 = YPsb((P)".c");
  lit_707 = YPsb((P)".h");
  lit_708 = YPsb((P)".swig");
  lit_709 = YPsb((P)".c");
  T184 = YPsig(LITREF(lit_703),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_331 = YPmet(FUNCODEREF(fun_331),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(LITREF(lit_702),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_332 = YPmet(FUNCODEREF(fun_use_mod_332),LITREF(lit_701),T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(LITREF(lit_705),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_333 = YPmet(FUNCODEREF(fun_use_c_mod_333),LITREF(lit_704),T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(LITREF(lit_700),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_334 = YPmet(FUNCODEREF(fun_objectify_use_module_334),LITREF(lit_699),T181,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSastYobjectify_use_module);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSastYobjectify_use_module);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_objectify_use_module_334;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSastYobjectify_use_module,T185);
  lit_710 = YPPsym((P)"insert-and-mangle-global!");
  lit_711 = YPPlist(3,YPPsym((P)"binding"),YPPsym((P)"mangle-prefix"),YPPsym((P)"r"));
  T189 = YPsig(LITREF(lit_711),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_335 = YPmet(FUNCODEREF(fun_insert_and_mangle_globalX_335),LITREF(lit_710),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSastYinsert_and_mangle_globalX);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSastYinsert_and_mangle_globalX);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_insert_and_mangle_globalX_335;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSastYinsert_and_mangle_globalX,T190);
  lit_712 = YPPsym((P)"import-and-mangle-global!");
  lit_713 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"mangle-prefix"),YPPsym((P)"env"));
  lit_714 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T194 = YPsig(LITREF(lit_713),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYimport_and_mangle_globalX = YPmet(FUNCODEREF(YevalSastYimport_and_mangle_globalX),LITREF(lit_712),T194,ENVNUL,PNUL,YPfalse);
  T195 = YevalSastYimport_and_mangle_globalX;
  VARSET(YevalSastYimport_and_mangle_globalX,T195);
  lit_715 = YPPsym((P)"objectify-use-mangle-module");
  lit_716 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_717 = YPPlist(1,YPPsym((P)"b"));
  T197 = YPsig(LITREF(lit_717),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(LITREF(lit_716),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_338 = YPmet(FUNCODEREF(fun_objectify_use_mangle_module_338),LITREF(lit_715),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSastYobjectify_use_mangle_module);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSastYobjectify_use_mangle_module);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_objectify_use_mangle_module_338;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSastYobjectify_use_mangle_module,T198);
  lit_718 = YPPsym((P)"expand-bind-list");
  lit_719 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_720 = YPsb((P)"Expected Pattern List %=\n");
  T202 = YPsig(LITREF(lit_719),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_339 = YPmet(FUNCODEREF(fun_expand_bind_list_339),LITREF(lit_718),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSastYexpand_bind_list);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_expand_bind_list_339;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSastYexpand_bind_list,T203);
  lit_721 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_722 = YPPsym((P)"match-empty-list");
  T208 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T207 = YPsig(LITREF(lit_721),YPPlist(3,T208,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_340 = YPmet(FUNCODEREF(fun_expand_bind_list_340),LITREF(lit_718),T207,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSastYexpand_bind_list);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_expand_bind_list_340;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSastYexpand_bind_list,T209);
  lit_723 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_724 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_725 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T213 = YPsig(LITREF(lit_723),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_341 = YPmet(FUNCODEREF(fun_expand_bind_list_341),LITREF(lit_718),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSastYexpand_bind_list);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_expand_bind_list_341;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSastYexpand_bind_list,T214);
  lit_726 = YPPsym((P)"expand-bind-list*");
  lit_727 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T219 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T218 = YPsig(LITREF(lit_727),YPPlist(3,T219,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_342 = YPmet(FUNCODEREF(fun_expand_bind_listT_342),LITREF(lit_726),T218,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_expand_bind_listT_342;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSastYexpand_bind_listT,T220);
  lit_728 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T224 = YPsig(LITREF(lit_728),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_343 = YPmet(FUNCODEREF(fun_expand_bind_listT_343),LITREF(lit_726),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_expand_bind_listT_343;
  T225 = XCALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSastYexpand_bind_listT,T225);
  lit_729 = YPPsym((P)"expand-bind-element");
  lit_730 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_731 = YPPsym((P)"match-atom");
  T229 = YPsig(LITREF(lit_730),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_344 = YPmet(FUNCODEREF(fun_expand_bind_element_344),LITREF(lit_729),T229,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YevalSastYexpand_bind_element);
  if (T232 != YPfalse) {
    T231 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_expand_bind_element_344;
  T230 = XCALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YevalSastYexpand_bind_element,T230);
  lit_732 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_733 = YPPsym((P)"match-unquote");
  lit_734 = YPPsym((P)"match-sublist");
  T234 = YPsig(LITREF(lit_732),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_345 = YPmet(FUNCODEREF(fun_expand_bind_element_345),LITREF(lit_729),T234,ENVNUL,PNUL,YPfalse);
  T237 = BOUNDP(YevalSastYexpand_bind_element);
  if (T237 != YPfalse) {
    T236 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_expand_bind_element_345;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YevalSastYexpand_bind_element,T235);
  lit_735 = YPPsym((P)"expand-pattern");
  lit_736 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_737 = YPPsym((P)"isa?");
  lit_738 = YPsb((P)"Match Pattern Failure");
  T239 = YPsig(LITREF(lit_736),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_346 = YPmet(FUNCODEREF(fun_expand_pattern_346),LITREF(lit_735),T239,ENVNUL,PNUL,YPfalse);
  T242 = BOUNDP(YevalSastYexpand_pattern);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSastYexpand_pattern);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_expand_pattern_346;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSastYexpand_pattern,T240);
  lit_739 = YPPsym((P)"expand-syntax-if");
  lit_740 = YPPlist(1,YPPsym((P)"x"));
  lit_741 = YPPsym((P)"esc");
  lit_742 = YPPsym((P)"return");
  lit_743 = YPPsym((P)"loc");
  lit_744 = YPPsym((P)"msg");
  lit_745 = YPPsym((P)"<str>");
  lit_746 = YPPsym((P)"args");
  lit_747 = YPPlist(1,YPPsym((P)"x"));
  T245 = YPsig(LITREF(lit_747),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T245,ENVNUL,PNUL,YPfalse);
  T244 = YPsig(LITREF(lit_740),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_348 = YPmet(FUNCODEREF(fun_expand_syntax_if_348),LITREF(lit_739),T244,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YevalSastYexpand_syntax_if);
  if (T248 != YPfalse) {
    T247 = VARREF(YevalSastYexpand_syntax_if);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_expand_syntax_if_348;
  T246 = XCALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YevalSastYexpand_syntax_if,T246);
  lit_748 = YPPsym((P)"r-extend*");
  lit_749 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T250 = YPsig(LITREF(lit_749),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_349 = YPmet(FUNCODEREF(fun_r_extendT_349),LITREF(lit_748),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YevalSastYr_extendT);
  if (T253 != YPfalse) {
    T252 = VARREF(YevalSastYr_extendT);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_r_extendT_349;
  T251 = XCALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YevalSastYr_extendT,T251);
  lit_750 = YPPsym((P)"insert-global!");
  lit_751 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  T255 = YPsig(LITREF(lit_751),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_350 = YPmet(FUNCODEREF(fun_insert_globalX_350),LITREF(lit_750),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSastYinsert_globalX);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSastYinsert_globalX);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_insert_globalX_350;
  T256 = XCALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSastYinsert_globalX,T256);
  lit_752 = YPPsym((P)"insert-globals!");
  lit_753 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"r"));
  lit_754 = YPPlist(1,YPPsym((P)"b"));
  T261 = YPsig(LITREF(lit_754),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_351 = YPmet(FUNCODEREF(fun_351),YPfalse,T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(LITREF(lit_753),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_352 = YPmet(FUNCODEREF(fun_insert_globalsX_352),LITREF(lit_752),T260,ENVNUL,PNUL,YPfalse);
  T264 = BOUNDP(YevalSastYinsert_globalsX);
  if (T264 != YPfalse) {
    T263 = VARREF(YevalSastYinsert_globalsX);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_insert_globalsX_352;
  T262 = XCALL2(1,VARREF(YPdefine_method),T263,T265);
  VARSET(YevalSastYinsert_globalsX,T262);
  lit_755 = YPPsym((P)"find-static-global-environment");
  lit_756 = YPPlist(1,YPPsym((P)"r"));
  T266 = YPsig(LITREF(lit_756),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_353 = YPmet(FUNCODEREF(fun_find_static_global_environment_353),LITREF(lit_755),T266,ENVNUL,PNUL,YPfalse);
  T269 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T269 != YPfalse) {
    T268 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_find_static_global_environment_353;
  T267 = XCALL2(1,VARREF(YPdefine_method),T268,T270);
  VARSET(YevalSastYfind_static_global_environment,T267);
  lit_757 = YPPlist(1,YPPsym((P)"r"));
  T271 = YPsig(LITREF(lit_757),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_354 = YPmet(FUNCODEREF(fun_find_static_global_environment_354),LITREF(lit_755),T271,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T274 != YPfalse) {
    T273 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_find_static_global_environment_354;
  T272 = XCALL2(1,VARREF(YPdefine_method),T273,T275);
  VARSET(YevalSastYfind_static_global_environment,T272);
  lit_758 = YPPsym((P)"find-syntax-environment");
  lit_759 = YPPlist(1,YPPsym((P)"r"));
  T276 = YPsig(LITREF(lit_759),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_355 = YPmet(FUNCODEREF(fun_find_syntax_environment_355),LITREF(lit_758),T276,ENVNUL,PNUL,YPfalse);
  T279 = BOUNDP(YevalSastYfind_syntax_environment);
  if (T279 != YPfalse) {
    T278 = VARREF(YevalSastYfind_syntax_environment);
  } else {
    T278 = YPfalse;
  }
  T280 = fun_find_syntax_environment_355;
  T277 = XCALL2(1,VARREF(YPdefine_method),T278,T280);
  VARSET(YevalSastYfind_syntax_environment,T277);
  lit_760 = YPPsym((P)"find-environment-module");
  lit_761 = YPPlist(1,YPPsym((P)"r"));
  T281 = YPsig(LITREF(lit_761),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_356 = YPmet(FUNCODEREF(fun_find_environment_module_356),LITREF(lit_760),T281,ENVNUL,PNUL,YPfalse);
  T284 = BOUNDP(YevalSastYfind_environment_module);
  if (T284 != YPfalse) {
    T283 = VARREF(YevalSastYfind_environment_module);
  } else {
    T283 = YPfalse;
  }
  T285 = fun_find_environment_module_356;
  T282 = XCALL2(1,VARREF(YPdefine_method),T283,T285);
  VARSET(YevalSastYfind_environment_module,T282);
  lit_762 = YPPsym((P)"find-binding");
  lit_763 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_764 = YPPlist(1,YPPsym((P)"bindings"));
  T287 = YPsig(LITREF(lit_764),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_357 = YPmet(FUNCODEREF(fun_loop_357),LITREF(lit_248),T287,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(LITREF(lit_763),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_358 = YPmet(FUNCODEREF(fun_find_binding_358),LITREF(lit_762),T286,ENVNUL,PNUL,YPfalse);
  T290 = BOUNDP(YevalSastYfind_binding);
  if (T290 != YPfalse) {
    T289 = VARREF(YevalSastYfind_binding);
  } else {
    T289 = YPfalse;
  }
  T291 = fun_find_binding_358;
  T288 = XCALL2(1,VARREF(YPdefine_method),T289,T291);
  VARSET(YevalSastYfind_binding,T288);
  lit_765 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T292 = YPsig(LITREF(lit_765),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_359 = YPmet(FUNCODEREF(fun_find_binding_359),LITREF(lit_762),T292,ENVNUL,PNUL,YPfalse);
  T295 = BOUNDP(YevalSastYfind_binding);
  if (T295 != YPfalse) {
    T294 = VARREF(YevalSastYfind_binding);
  } else {
    T294 = YPfalse;
  }
  T296 = fun_find_binding_359;
  T293 = XCALL2(1,VARREF(YPdefine_method),T294,T296);
  VARSET(YevalSastYfind_binding,T293);
  lit_766 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T297 = YPsig(LITREF(lit_766),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_360 = YPmet(FUNCODEREF(fun_find_binding_360),LITREF(lit_762),T297,ENVNUL,PNUL,YPfalse);
  T300 = BOUNDP(YevalSastYfind_binding);
  if (T300 != YPfalse) {
    T299 = VARREF(YevalSastYfind_binding);
  } else {
    T299 = YPfalse;
  }
  T301 = fun_find_binding_360;
  T298 = XCALL2(1,VARREF(YPdefine_method),T299,T301);
  VARSET(YevalSastYfind_binding,T298);
  lit_767 = YPPsym((P)"frame-bindings");
  lit_768 = YPPlist(1,YPPsym((P)"env"));
  T302 = YPsig(LITREF(lit_768),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_361 = YPmet(FUNCODEREF(fun_frame_bindings_361),LITREF(lit_767),T302,ENVNUL,PNUL,YPfalse);
  T305 = BOUNDP(YevalSastYframe_bindings);
  if (T305 != YPfalse) {
    T304 = VARREF(YevalSastYframe_bindings);
  } else {
    T304 = YPfalse;
  }
  T306 = fun_frame_bindings_361;
  T303 = XCALL2(1,VARREF(YPdefine_method),T304,T306);
  VARSET(YevalSastYframe_bindings,T303);
  T308 = VARSET(YevalSastYTmagic_bindingsT,Ynil);
  T307 = T308;
  return T307;
}

P YevalSastY___main_7___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102;
DEFCREGS();
loop:
  lit_769 = YPPsym((P)"register-magic-binding");
  lit_770 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T0 = YPsig(LITREF(lit_770),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_362 = YPmet(FUNCODEREF(fun_register_magic_binding_362),LITREF(lit_769),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYregister_magic_binding);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYregister_magic_binding);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_register_magic_binding_362;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYregister_magic_binding,T1);
  lit_771 = YPPsym((P)"magic-bindings");
  T5 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_363 = YPmet(FUNCODEREF(fun_magic_bindings_363),LITREF(lit_771),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYmagic_bindings);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYmagic_bindings);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_magic_bindings_363;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYmagic_bindings,T6);
  lit_772 = YPPlist(1,YPPsym((P)"exp"));
  lit_773 = YPPlist(1,YPPsym((P)"return"));
  lit_774 = YPPsym((P)"x-1454");
  lit_775 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_776 = YPPsym((P)"define-magic-binding");
  lit_777 = YPsb((P)"special-");
  lit_778 = YPsb((P)"$sexpr-");
  lit_779 = YPsb((P)"-tag");
  lit_780 = YPPsym((P)"binding-handler");
  lit_781 = YPPsym((P)"fun");
  T12 = YPsig(LITREF(lit_775),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1454_364 = YPmet(FUNCODEREF(fun_x_1454_364),LITREF(lit_774),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(LITREF(lit_773),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(LITREF(lit_772),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T13 = fun_366;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T13);
  lit_782 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T14 = YPsig(LITREF(lit_782),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPmet(FUNCODEREF(fun_367),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T16 = fun_367;
  T15 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T16,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T15);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_621),VARREF(YevalSastYspecial_if));
  lit_783 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T17 = YPsig(LITREF(lit_783),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T19 = fun_368;
  T18 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T19,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T18);
  lit_784 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_784),VARREF(YevalSastYspecial_begin));
  lit_785 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_785));
  lit_786 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T20 = YPsig(LITREF(lit_786),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_369 = YPmet(FUNCODEREF(fun_369),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T22 = fun_369;
  T21 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T22,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T21);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_785),VARREF(YevalSastYspecial_Praw));
  lit_787 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T23 = YPsig(LITREF(lit_787),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T25 = fun_370;
  T24 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T25,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T24);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_565),VARREF(YevalSastYspecial_quote));
  lit_788 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T26 = YPsig(LITREF(lit_788),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T28 = fun_371;
  T27 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T28,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T27);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_9),VARREF(YevalSastYspecial_set));
  lit_789 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T29 = YPsig(LITREF(lit_789),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T31 = fun_372;
  T30 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T31,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T30);
  lit_790 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_790),VARREF(YevalSastYspecial_define));
  lit_791 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_791));
  lit_792 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T32 = YPsig(LITREF(lit_792),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T34 = fun_373;
  T33 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T34,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T33);
  lit_793 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_793),VARREF(YevalSastYspecial_define_dynamic));
  lit_794 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T35 = YPsig(LITREF(lit_794),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T37 = fun_374;
  T36 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T37,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T36);
  lit_795 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_795),VARREF(YevalSastYspecial_define_syntax));
  lit_796 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_796));
  lit_797 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T38 = YPsig(LITREF(lit_797),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPmet(FUNCODEREF(fun_375),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T40 = fun_375;
  T39 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T40,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T39);
  lit_798 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_798),VARREF(YevalSastYspecial_define_static_syntax));
  lit_799 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T41 = YPsig(LITREF(lit_799),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T43 = fun_376;
  T42 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T43,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T42);
  lit_800 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_800),VARREF(YevalSastYspecial_define_method));
  lit_801 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T44 = YPsig(LITREF(lit_801),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T46 = fun_377;
  T45 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T46,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T45);
  lit_802 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_802),VARREF(YevalSastYspecial_define_generic));
  lit_803 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T47 = YPsig(LITREF(lit_803),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_378 = YPmet(FUNCODEREF(fun_378),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T49 = fun_378;
  T48 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T49,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T48);
  lit_804 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_804),VARREF(YevalSastYspecial_define_function));
  lit_805 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T50 = YPsig(LITREF(lit_805),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T52 = fun_379;
  T51 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T52,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T51);
  lit_806 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_806),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_622));
  lit_807 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T53 = YPsig(LITREF(lit_807),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T55 = fun_380;
  T54 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T55,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T54);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_622),VARREF(YevalSastYspecial_boundQ));
  lit_808 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPsig(LITREF(lit_808),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T58 = fun_381;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T58,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T57);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_7),VARREF(YevalSastYspecial_let));
  lit_809 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPsig(LITREF(lit_809),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T61 = fun_382;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T61,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T60);
  lit_810 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_810),VARREF(YevalSastYspecial_def));
  lit_811 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T62 = YPsig(LITREF(lit_811),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T64 = fun_383;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T64,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T63);
  lit_812 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_812),VARREF(YevalSastYspecial_locals));
  lit_813 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T65 = YPsig(LITREF(lit_813),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T67 = fun_384;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T67,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T66);
  lit_814 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_814),VARREF(YevalSastYspecial_iterate));
  lit_815 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPsig(LITREF(lit_815),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T70 = fun_385;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T70,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T69);
  lit_816 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_816),VARREF(YevalSastYspecial_bind_exit));
  lit_817 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T71 = YPsig(LITREF(lit_817),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T73 = fun_386;
  T72 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T73,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T72);
  lit_818 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_818),VARREF(YevalSastYspecial_unwind_protect));
  lit_819 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T74 = YPsig(LITREF(lit_819),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T76 = fun_387;
  T75 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T76,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T75);
  lit_820 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_820),VARREF(YevalSastYspecial_monitor));
  lit_821 = YPPsym((P)"pairize");
  lit_822 = YPPlist(1,YPPsym((P)"args"));
  T77 = YPsig(LITREF(lit_822),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_388 = YPmet(FUNCODEREF(fun_pairize_388),LITREF(lit_821),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSastYpairize);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSastYpairize);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_pairize_388;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSastYpairize,T78);
  lit_823 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_824 = YPPsym((P)"fab-class");
  T82 = YPsig(LITREF(lit_823),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T84 = fun_389;
  T83 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T84,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T83);
  lit_825 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_825),VARREF(YevalSastYspecial_define_class));
  lit_826 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_827 = YPPsym((P)"%prop");
  lit_828 = YPPsym((P)"%prop-unbound-error");
  T85 = YPsig(LITREF(lit_826),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T87 = fun_390;
  T86 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T87,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T86);
  lit_829 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_829),VARREF(YevalSastYspecial_prop));
  lit_830 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_830));
  lit_831 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T88 = YPsig(LITREF(lit_831),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T90 = fun_391;
  T89 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T90,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T89);
  lit_832 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_832),VARREF(YevalSastYspecial_compile_time));
  lit_833 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_833));
  lit_834 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T91 = YPsig(LITREF(lit_834),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T93 = fun_392;
  T92 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T93,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T92);
  lit_835 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_835),VARREF(YevalSastYspecial_compile_time_also));
  lit_836 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_836));
  lit_837 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T94 = YPsig(LITREF(lit_837),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T96 = fun_393;
  T95 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T96,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T95);
  lit_838 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_838),VARREF(YevalSastYspecial_define_primitive));
  lit_839 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T99 = YPsig(LITREF(lit_839),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T98 = fun_394 = YPmet(FUNCODEREF(fun_394),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T102 = fun_394;
  T101 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T102,VARREF(YevalSastYbinding_freeQ),YPfalse);
  T100 = VARSET(YevalSastYspecial_quasiquote,T101);
  T97 = T100;
  return T97;
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
  P T160,T161,T162,T163,T164,T165,T166,T167;
DEFCREGS();
loop:
  lit_840 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_840),VARREF(YevalSastYspecial_quasiquote));
  lit_841 = YPPsym((P)"ast-macro-expand");
  lit_842 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_842),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_395 = YPmet(FUNCODEREF(fun_ast_macro_expand_395),LITREF(lit_841),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYast_macro_expand);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYast_macro_expand);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_macro_expand_395;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYast_macro_expand,T1);
  lit_843 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T5 = YPsig(LITREF(lit_843),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T7 = fun_396;
  T6 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T7,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T6);
  lit_844 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_844),VARREF(YevalSastYspecial_macro_expand));
  lit_845 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T8 = YPsig(LITREF(lit_845),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T10 = fun_397;
  T9 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T10,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T9);
  lit_846 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_846),VARREF(YevalSastYspecial_syntax_if));
  lit_847 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_847));
  lit_848 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T11 = YPsig(LITREF(lit_848),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T13 = fun_398;
  T12 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T13,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T12);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_847),VARREF(YevalSastYspecial_export));
  lit_849 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_849));
  lit_850 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T14 = YPsig(LITREF(lit_850),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T16 = fun_399;
  T15 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T16,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T15);
  lit_851 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_851),VARREF(YevalSastYspecial_use_module));
  lit_852 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_852));
  lit_853 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T17 = YPsig(LITREF(lit_853),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T19 = fun_400;
  T18 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T19,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T18);
  lit_854 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_854),VARREF(YevalSastYspecial_use_mangle_module));
  lit_855 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_855));
  lit_856 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T20 = YPsig(LITREF(lit_856),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_401 = YPmet(FUNCODEREF(fun_401),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T22 = fun_401;
  T21 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T22,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T21);
  lit_857 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_857),VARREF(YevalSastYspecial_use_include));
  lit_858 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_858));
  lit_859 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T23 = YPsig(LITREF(lit_859),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T25 = fun_402;
  T24 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T25,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T24);
  lit_860 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_860),VARREF(YevalSastYspecial_use_library));
  lit_861 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_861));
  lit_862 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T26 = YPsig(LITREF(lit_862),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T28 = fun_403;
  T27 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_586),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T28,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T27);
  lit_863 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_863),VARREF(YevalSastYspecial_useSexport_module));
  lit_864 = YPPsym((P)"<transaction>");
  T30 = (P)YPpair(VARREF(YLanyG),Ynil);
  T29 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_864),T30);
  VARSET(YevalSastYLtransactionG,T29);
  lit_865 = YPPsym((P)"transaction-implemented-bindings");
  lit_866 = YPPlist(1,YPPsym((P)"_x"));
  T31 = YPsig(LITREF(lit_866),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_404 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_404),LITREF(lit_865),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YevalSastYtransaction_implemented_bindings);
  if (T34 != YPfalse) {
    T33 = VARREF(YevalSastYtransaction_implemented_bindings);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_transaction_implemented_bindings_404;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YevalSastYtransaction_implemented_bindings,T32);
  lit_867 = YPPsym((P)"transaction-implemented-bindings-setter");
  lit_868 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_868),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_405 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_405),LITREF(lit_867),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSastYtransaction_implemented_bindings_setter);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSastYtransaction_implemented_bindings_setter);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_transaction_implemented_bindings_setter_405;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T37);
  lit_869 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_869),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_406 = YPmet(FUNCODEREF(fun_406),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T42 = fun_406;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T42);
  lit_870 = YPPsym((P)"transaction-dependents");
  lit_871 = YPPlist(1,YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_871),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_407 = YPmet(FUNCODEREF(fun_transaction_dependents_407),LITREF(lit_870),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSastYtransaction_dependents);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSastYtransaction_dependents);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_transaction_dependents_407;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSastYtransaction_dependents,T44);
  lit_872 = YPPsym((P)"transaction-dependents-setter");
  lit_873 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_873),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_408 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_408),LITREF(lit_872),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YevalSastYtransaction_dependents_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalSastYtransaction_dependents_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_transaction_dependents_setter_408;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalSastYtransaction_dependents_setter,T49);
  lit_874 = YPPlist(1,YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_874),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_409 = YPmet(FUNCODEREF(fun_409),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T54 = fun_409;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T54);
  VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  lit_875 = YPPsym((P)"transaction-register-implemented-binding");
  lit_876 = YPPlist(1,YPPsym((P)"b"));
  lit_877 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T55 = YPsig(LITREF(lit_876),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_875),T55,ENVNUL,PNUL,YPfalse);
  T56 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T56);
  lit_878 = YPPsym((P)"transaction-register-dependent");
  lit_879 = YPPlist(1,YPPsym((P)"d"));
  lit_880 = YPsb((P)"Can't register dependent (no subtransaction)");
  T57 = YPsig(LITREF(lit_879),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_878),T57,ENVNUL,PNUL,YPfalse);
  T58 = YevalSastYtransaction_register_dependent;
  VARSET(YevalSastYtransaction_register_dependent,T58);
  lit_881 = YPPsym((P)"transaction-empty?");
  lit_882 = YPPlist(1,YPPsym((P)"t"));
  T59 = YPsig(LITREF(lit_882),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_881),T59,ENVNUL,PNUL,YPfalse);
  T60 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T60);
  lit_883 = YPPsym((P)"merge-transactions!");
  lit_884 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_885 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_886 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T63 = YPsig(LITREF(lit_885),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_886),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_414 = YPmet(FUNCODEREF(fun_414),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(LITREF(lit_884),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_883),T61,ENVNUL,PNUL,YPfalse);
  T64 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T64);
  lit_887 = YPPsym((P)"roll-back-transaction");
  lit_888 = YPPlist(1,YPPsym((P)"t"));
  lit_889 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"junk"));
  lit_890 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"junk"));
  T67 = YPsig(LITREF(lit_889),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(LITREF(lit_890),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_417 = YPmet(FUNCODEREF(fun_417),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(LITREF(lit_888),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_887),T65,ENVNUL,PNUL,YPfalse);
  T68 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T68);
  lit_891 = YPPsym((P)"call-with-subtransaction");
  lit_892 = YPPlist(2,YPPsym((P)"module"),YPPsym((P)"thunk"));
  T71 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_419 = YPmet(FUNCODEREF(fun_419),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(LITREF(lit_892),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_891),T69,ENVNUL,PNUL,YPfalse);
  T72 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T72);
  lit_893 = YPPlist(1,YPPsym((P)"exp"));
  lit_894 = YPPlist(1,YPPsym((P)"return"));
  lit_895 = YPPsym((P)"x-1458");
  lit_896 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_897 = YPPsym((P)"with-subtransaction");
  T75 = YPsig(LITREF(lit_896),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1458_422 = YPmet(FUNCODEREF(fun_x_1458_422),LITREF(lit_895),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_894),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(LITREF(lit_893),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T76 = fun_424;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T76);
  lit_898 = YPPsym((P)"objectify-with-subtransaction");
  lit_899 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T78 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_425 = YPmet(FUNCODEREF(fun_425),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_899),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_898),T77,ENVNUL,PNUL,YPfalse);
  T79 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T79);
  lit_900 = YPPsym((P)"<module-loader>");
  T81 = (P)YPpair(VARREF(YLanyG),Ynil);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_900),T81);
  VARSET(YevalSastYLmodule_loaderG,T80);
  lit_901 = YPPsym((P)"module-loader-modules");
  lit_902 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_902),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_427 = YPmet(FUNCODEREF(fun_module_loader_modules_427),LITREF(lit_901),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYmodule_loader_modules);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYmodule_loader_modules);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_module_loader_modules_427;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYmodule_loader_modules,T83);
  lit_903 = YPPsym((P)"module-loader-modules-setter");
  lit_904 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_904),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_428 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_428),LITREF(lit_903),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYmodule_loader_modules_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYmodule_loader_modules_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_module_loader_modules_setter_428;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYmodule_loader_modules_setter,T88);
  lit_905 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_905),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_429 = YPmet(FUNCODEREF(fun_429),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T93 = fun_429;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T93);
  lit_906 = YPPsym((P)"module-loader-stack");
  lit_907 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_907),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_430 = YPmet(FUNCODEREF(fun_module_loader_stack_430),LITREF(lit_906),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSastYmodule_loader_stack);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYmodule_loader_stack);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_module_loader_stack_430;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYmodule_loader_stack,T95);
  lit_908 = YPPsym((P)"module-loader-stack-setter");
  lit_909 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T99 = YPsig(LITREF(lit_909),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_431 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_431),LITREF(lit_908),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSastYmodule_loader_stack_setter);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSastYmodule_loader_stack_setter);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_module_loader_stack_setter_431;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSastYmodule_loader_stack_setter,T100);
  lit_910 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_910),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T105 = fun_432;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T105);
  lit_911 = YPPsym((P)"<module>");
  T107 = (P)YPpair(VARREF(YLanyG),Ynil);
  T106 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_911),T107);
  VARSET(YevalSastYLmoduleG,T106);
  lit_912 = YPPsym((P)"module-name");
  lit_913 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_913),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_433 = YPmet(FUNCODEREF(fun_module_name_433),LITREF(lit_912),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSastYmodule_name);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSastYmodule_name);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_module_name_433;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSastYmodule_name,T109);
  lit_914 = YPPsym((P)"module-name-setter");
  lit_915 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_915),YPPlist(2,VARREF(YLsymG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_434 = YPmet(FUNCODEREF(fun_module_name_setter_434),LITREF(lit_914),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalSastYmodule_name_setter);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSastYmodule_name_setter);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_module_name_setter_434;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSastYmodule_name_setter,T114);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),VARREF(YevalSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_916 = YPPsym((P)"module-mangled-name");
  lit_917 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_917),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_435 = YPmet(FUNCODEREF(fun_module_mangled_name_435),LITREF(lit_916),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSastYmodule_mangled_name);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSastYmodule_mangled_name);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_module_mangled_name_435;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSastYmodule_mangled_name,T119);
  lit_918 = YPPsym((P)"module-mangled-name-setter");
  lit_919 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T124 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T123 = YPsig(LITREF(lit_919),YPPlist(2,T124,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_436 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_436),LITREF(lit_918),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYmodule_mangled_name_setter);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYmodule_mangled_name_setter);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_module_mangled_name_setter_436;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYmodule_mangled_name_setter,T125);
  lit_920 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPsig(LITREF(lit_920),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_437 = YPmet(FUNCODEREF(fun_437),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T130 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T131 = fun_437;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T130,T131);
  lit_921 = YPPsym((P)"module-mangled-string-name");
  lit_922 = YPPlist(1,YPPsym((P)"_x"));
  T132 = YPsig(LITREF(lit_922),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_438 = YPmet(FUNCODEREF(fun_module_mangled_string_name_438),LITREF(lit_921),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSastYmodule_mangled_string_name);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSastYmodule_mangled_string_name);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_module_mangled_string_name_438;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYmodule_mangled_string_name,T133);
  lit_923 = YPPsym((P)"module-mangled-string-name-setter");
  lit_924 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T138 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T137 = YPsig(LITREF(lit_924),YPPlist(2,T138,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_439 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_439),LITREF(lit_923),T137,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YevalSastYmodule_mangled_string_name_setter);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSastYmodule_mangled_string_name_setter);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_module_mangled_string_name_setter_439;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T139);
  lit_925 = YPPlist(1,YPPsym((P)"_x"));
  T143 = YPsig(LITREF(lit_925),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_440 = YPmet(FUNCODEREF(fun_440),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T144 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T145 = fun_440;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T144,T145);
  lit_926 = YPPsym((P)"module-target-environment");
  lit_927 = YPPlist(1,YPPsym((P)"_x"));
  T146 = YPsig(LITREF(lit_927),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_441 = YPmet(FUNCODEREF(fun_module_target_environment_441),LITREF(lit_926),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSastYmodule_target_environment);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSastYmodule_target_environment);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_module_target_environment_441;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSastYmodule_target_environment,T147);
  lit_928 = YPPsym((P)"module-target-environment-setter");
  lit_929 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_929),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_442 = YPmet(FUNCODEREF(fun_module_target_environment_setter_442),LITREF(lit_928),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSastYmodule_target_environment_setter);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSastYmodule_target_environment_setter);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_module_target_environment_setter_442;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSastYmodule_target_environment_setter,T152);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_930 = YPPsym((P)"module-syntax-environment");
  lit_931 = YPPlist(1,YPPsym((P)"_x"));
  T156 = YPsig(LITREF(lit_931),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_443 = YPmet(FUNCODEREF(fun_module_syntax_environment_443),LITREF(lit_930),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYmodule_syntax_environment);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYmodule_syntax_environment);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_module_syntax_environment_443;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYmodule_syntax_environment,T157);
  lit_932 = YPPsym((P)"module-syntax-environment-setter");
  lit_933 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_933),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_444 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_444),LITREF(lit_932),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSastYmodule_syntax_environment_setter);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYmodule_syntax_environment_setter);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_module_syntax_environment_setter_444;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYmodule_syntax_environment_setter,T162);
  T167 = XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  T166 = T167;
  return T166;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190;
DEFCREGS();
loop:
  lit_934 = YPPsym((P)"%module-exports");
  lit_935 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_935),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_445 = YPmet(FUNCODEREF(fun_Pmodule_exports_445),LITREF(lit_934),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYPmodule_exports);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYPmodule_exports);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_Pmodule_exports_445;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYPmodule_exports,T1);
  lit_936 = YPPsym((P)"%module-exports-setter");
  lit_937 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_937),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_446 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_446),LITREF(lit_936),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYPmodule_exports_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYPmodule_exports_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_Pmodule_exports_setter_446;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYPmodule_exports_setter,T6);
  lit_938 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_938),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_447 = YPmet(FUNCODEREF(fun_447),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T11 = fun_447;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),VARREF(YevalSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T11);
  lit_939 = YPPsym((P)"module-data-processed?");
  lit_940 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_940),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_448 = YPmet(FUNCODEREF(fun_module_data_processedQ_448),LITREF(lit_939),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSastYmodule_data_processedQ);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYmodule_data_processedQ);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_data_processedQ_448;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYmodule_data_processedQ,T13);
  lit_941 = YPPsym((P)"module-data-processed?-setter");
  lit_942 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_942),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_449 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_449),LITREF(lit_941),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalSastYmodule_data_processedQ_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYmodule_data_processedQ_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_module_data_processedQ_setter_449;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYmodule_data_processedQ_setter,T18);
  lit_943 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_943),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_450 = YPmet(FUNCODEREF(fun_450),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T23 = fun_450;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T23);
  lit_944 = YPPsym((P)"module-runtime-data");
  lit_945 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_945),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_451 = YPmet(FUNCODEREF(fun_module_runtime_data_451),LITREF(lit_944),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSastYmodule_runtime_data);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYmodule_runtime_data);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_runtime_data_451;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYmodule_runtime_data,T25);
  lit_946 = YPPsym((P)"module-runtime-data-setter");
  lit_947 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_947),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_452 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_452),LITREF(lit_946),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSastYmodule_runtime_data_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSastYmodule_runtime_data_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_module_runtime_data_setter_452;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSastYmodule_runtime_data_setter,T30);
  lit_948 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_948),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_453 = YPmet(FUNCODEREF(fun_453),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T35 = fun_453;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T35);
  lit_949 = YPPsym((P)"module-transaction");
  lit_950 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_950),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_454 = YPmet(FUNCODEREF(fun_module_transaction_454),LITREF(lit_949),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSastYmodule_transaction);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSastYmodule_transaction);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_module_transaction_454;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSastYmodule_transaction,T37);
  lit_951 = YPPsym((P)"module-transaction-setter");
  lit_952 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_952),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_455 = YPmet(FUNCODEREF(fun_module_transaction_setter_455),LITREF(lit_951),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSastYmodule_transaction_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSastYmodule_transaction_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_module_transaction_setter_455;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSastYmodule_transaction_setter,T42);
  lit_953 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_953),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_456 = YPmet(FUNCODEREF(fun_456),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T47 = fun_456;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T47);
  lit_954 = YPPsym((P)"module-uses-c-files");
  lit_955 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_955),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_457 = YPmet(FUNCODEREF(fun_module_uses_c_files_457),LITREF(lit_954),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YevalSastYmodule_uses_c_files);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalSastYmodule_uses_c_files);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_module_uses_c_files_457;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalSastYmodule_uses_c_files,T49);
  lit_956 = YPPsym((P)"module-uses-c-files-setter");
  lit_957 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_957),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_setter_458 = YPmet(FUNCODEREF(fun_module_uses_c_files_setter_458),LITREF(lit_956),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YevalSastYmodule_uses_c_files_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalSastYmodule_uses_c_files_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_module_uses_c_files_setter_458;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalSastYmodule_uses_c_files_setter,T54);
  lit_958 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_958),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_459 = YPmet(FUNCODEREF(fun_459),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T59 = fun_459;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_files),VARREF(YevalSastYmodule_uses_c_files_setter),VARREF(YgooScolsSvecYLvecG),T59);
  lit_959 = YPPsym((P)"module-uses-c-includes");
  lit_960 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_960),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_460 = YPmet(FUNCODEREF(fun_module_uses_c_includes_460),LITREF(lit_959),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSastYmodule_uses_c_includes);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSastYmodule_uses_c_includes);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_module_uses_c_includes_460;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSastYmodule_uses_c_includes,T61);
  lit_961 = YPPsym((P)"module-uses-c-includes-setter");
  lit_962 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T65 = YPsig(LITREF(lit_962),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_setter_461 = YPmet(FUNCODEREF(fun_module_uses_c_includes_setter_461),LITREF(lit_961),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSastYmodule_uses_c_includes_setter);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSastYmodule_uses_c_includes_setter);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_module_uses_c_includes_setter_461;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSastYmodule_uses_c_includes_setter,T66);
  lit_963 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_963),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_462 = YPmet(FUNCODEREF(fun_462),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T71 = fun_462;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_includes),VARREF(YevalSastYmodule_uses_c_includes_setter),VARREF(YgooScolsSvecYLvecG),T71);
  lit_964 = YPPsym((P)"module-uses-c-libraries");
  lit_965 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_965),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_463 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_463),LITREF(lit_964),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YevalSastYmodule_uses_c_libraries);
  if (T75 != YPfalse) {
    T74 = VARREF(YevalSastYmodule_uses_c_libraries);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_module_uses_c_libraries_463;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YevalSastYmodule_uses_c_libraries,T73);
  lit_966 = YPPsym((P)"module-uses-c-libraries-setter");
  lit_967 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPsig(LITREF(lit_967),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_setter_464 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_setter_464),LITREF(lit_966),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSastYmodule_uses_c_libraries_setter);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSastYmodule_uses_c_libraries_setter);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_module_uses_c_libraries_setter_464;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSastYmodule_uses_c_libraries_setter,T78);
  lit_968 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_968),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_465 = YPmet(FUNCODEREF(fun_465),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T83 = fun_465;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_libraries),VARREF(YevalSastYmodule_uses_c_libraries_setter),VARREF(YgooScolsSvecYLvecG),T83);
  VARSET(YevalSastYmodule_exports_setter,VARREF(YevalSastYPmodule_exports_setter));
  lit_969 = YPPsym((P)"module-exports");
  lit_970 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_970),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_466 = YPmet(FUNCODEREF(fun_module_exports_466),LITREF(lit_969),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSastYmodule_exports);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSastYmodule_exports);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_module_exports_466;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSastYmodule_exports,T85);
  lit_971 = YPPsym((P)"set-module-environments");
  lit_972 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"syntax-env"),YPPsym((P)"target-env"));
  T89 = YPsig(LITREF(lit_972),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_971),T89,ENVNUL,PNUL,YPfalse);
  T90 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T90);
  lit_973 = YPPsym((P)"do-module-loader-modules");
  lit_974 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"loader"));
  lit_975 = YPPlist(1,YPPsym((P)"mod"));
  T92 = YPsig(LITREF(lit_975),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_468 = YPmet(FUNCODEREF(fun_468),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(LITREF(lit_974),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_973),T91,ENVNUL,PNUL,YPfalse);
  T93 = YevalSastYdo_module_loader_modules;
  VARSET(YevalSastYdo_module_loader_modules,T93);
  lit_976 = YPPsym((P)"module-loader-module-type");
  lit_977 = YPPlist(1,YPPsym((P)"loader"));
  T94 = YPsig(LITREF(lit_977),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_470 = YPmet(FUNCODEREF(fun_module_loader_module_type_470),LITREF(lit_976),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_module_loader_module_type_470;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYmodule_loader_module_type,T95);
  lit_978 = YPPsym((P)"register-module!");
  lit_979 = YPPlist(2,YPPsym((P)"module-loader"),YPPsym((P)"mod"));
  T99 = YPsig(LITREF(lit_979),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_978),T99,ENVNUL,PNUL,YPfalse);
  T100 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T100);
  lit_980 = YPPsym((P)"probe-module");
  lit_981 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T101 = YPsig(LITREF(lit_981),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_980),T101,ENVNUL,PNUL,YPfalse);
  T102 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T102);
  lit_982 = YPPsym((P)"load-and-register-module");
  lit_983 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_984 = YPsb((P)"  ");
  lit_985 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_986 = YPsb((P)"%s[Loading module %s...\n");
  lit_987 = YPsb((P)"%s]\n");
  T105 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_473 = YPmet(FUNCODEREF(fun_473),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_474 = YPmet(FUNCODEREF(fun_474),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(LITREF(lit_983),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_982),T103,ENVNUL,PNUL,YPfalse);
  T106 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T106);
  lit_988 = YPPsym((P)"load-module");
  lit_989 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T108 = YPsig(LITREF(lit_989),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T107 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_988),T108,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T107);
  lit_990 = YPPsym((P)"export-binding!");
  lit_991 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"name"),YPPsym((P)"binding"));
  lit_992 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T110 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T109 = YPsig(LITREF(lit_991),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T110,Ynil);
  YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_990),T109,ENVNUL,PNUL,YPfalse);
  T111 = YevalSastYexport_bindingX;
  VARSET(YevalSastYexport_bindingX,T111);
  lit_993 = YPPsym((P)"binding-native-to?");
  lit_994 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"module"));
  T112 = YPsig(LITREF(lit_994),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_993),T112,ENVNUL,PNUL,YPfalse);
  T113 = YevalSastYbinding_native_toQ;
  VARSET(YevalSastYbinding_native_toQ,T113);
  lit_995 = YPPsym((P)"report-undefined-global-bindings");
  lit_996 = YPPlist(1,YPPsym((P)"mod"));
  lit_997 = YPPlist(1,YPPsym((P)"binding"));
  lit_998 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T115 = YPsig(LITREF(lit_997),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_478 = YPmet(FUNCODEREF(fun_478),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(LITREF(lit_996),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_995),T114,ENVNUL,PNUL,YPfalse);
  T116 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T116);
  lit_999 = YPPsym((P)"compute-transitive-users");
  lit_1000 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_1001 = YPPsym((P)"add-user");
  lit_1002 = YPPlist(1,YPPsym((P)"modname"));
  lit_1003 = YPPlist(1,YPPsym((P)"mod"));
  lit_1004 = YPPlist(1,YPPsym((P)"uses-mod"));
  lit_1005 = YPPlist(1,YPPsym((P)"v"));
  T121 = YPsig(LITREF(lit_1004),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_480 = YPmet(FUNCODEREF(fun_480),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(LITREF(lit_1003),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_481 = YPmet(FUNCODEREF(fun_481),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(LITREF(lit_1002),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_482 = YPmet(FUNCODEREF(fun_add_user_482),LITREF(lit_1001),T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(LITREF(lit_1005),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_483 = YPmet(FUNCODEREF(fun_483),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(LITREF(lit_1000),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_999),T117,ENVNUL,PNUL,YPfalse);
  T122 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T122);
  lit_1006 = YPPsym((P)"remove-module-internal!");
  lit_1007 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  T123 = YPsig(LITREF(lit_1007),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_1006),T123,ENVNUL,PNUL,YPfalse);
  T124 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T124);
  lit_1008 = YPPsym((P)"remove-modules-by-name!");
  lit_1009 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_1010 = YPPlist(1,YPPsym((P)"modname"));
  T127 = YPsig(LITREF(lit_1010),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_486 = YPmet(FUNCODEREF(fun_486),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T125 = YPsig(LITREF(lit_1009),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T126,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_1008),T125,ENVNUL,PNUL,YPfalse);
  T128 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T128);
  lit_1011 = YPPsym((P)"module-name-to-relpath");
  lit_1012 = YPPlist(1,YPPsym((P)"name"));
  T129 = YPsig(LITREF(lit_1012),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_1011),T129,ENVNUL,PNUL,YPfalse);
  T130 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T130);
  lit_1013 = YPPsym((P)"install-initial-bindings");
  lit_1014 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_1015 = YPPlist(1,YPPsym((P)"name"));
  lit_1016 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T132 = YPsig(LITREF(lit_1015),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_489 = YPmet(FUNCODEREF(fun_489),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_1014),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_1013),T131,ENVNUL,PNUL,YPfalse);
  T133 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T133);
  lit_1017 = YPPsym((P)"fab-static-global-environment");
  lit_1018 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"module-loader"),YPPsym((P)"allow-foreign-names?"));
  T134 = YPsig(LITREF(lit_1018),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_1017),T134,ENVNUL,PNUL,YPfalse);
  T135 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T135);
  lit_1019 = YPPsym((P)"fab-subset-environment");
  lit_1020 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"src-module"),YPPsym((P)"excluded"));
  lit_1021 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"binding"));
  T137 = YPsig(LITREF(lit_1021),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_492 = YPmet(FUNCODEREF(fun_492),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_1020),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_1019),T136,ENVNUL,PNUL,YPfalse);
  T138 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T138);
  lit_1022 = YPPsym((P)"<runtime-module-loader>");
  T140 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T139 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_1022),T140);
  VARSET(YevalSastYLruntime_module_loaderG,T139);
  DYNDEFSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_1023 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_1024 = YPsb((P)"Unable to find module %s");
  T145 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_496 = YPmet(FUNCODEREF(fun_496),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_497 = YPmet(FUNCODEREF(fun_497),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_1023),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_498 = YPmet(FUNCODEREF(fun_load_module_498),LITREF(lit_988),T141,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSastYload_module);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSastYload_module);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_load_module_498;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSastYload_module,T146);
  T150 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T150);
  lit_1025 = YPPsym((P)"runtime-module-loader");
  T151 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_1025),T151,ENVNUL,PNUL,YPfalse);
  T152 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T152);
  lit_1026 = YPPsym((P)"runtime-module");
  lit_1027 = YPPlist(1,YPPsym((P)"modname"));
  T153 = YPsig(LITREF(lit_1027),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_1026),T153,ENVNUL,PNUL,YPfalse);
  T154 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T154);
  lit_1028 = YPPsym((P)"runtime-environment");
  lit_1029 = YPPlist(1,YPPsym((P)"modname"));
  T155 = YPsig(LITREF(lit_1029),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_1028),T155,ENVNUL,PNUL,YPfalse);
  T156 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T156);
  lit_1030 = YPPsym((P)"runtime-core-environment");
  lit_1031 = YPPlist(1,YPPsym((P)"modname"));
  T157 = YPsig(LITREF(lit_1031),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_1030),T157,ENVNUL,PNUL,YPfalse);
  T158 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T158);
  lit_1032 = YPPsym((P)"unchecked-runtime-environment");
  lit_1033 = YPPlist(1,YPPsym((P)"modname"));
  T159 = YPsig(LITREF(lit_1033),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_1032),T159,ENVNUL,PNUL,YPfalse);
  T160 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T160);
  lit_1034 = YPPsym((P)"reloader-do-create-module");
  lit_1035 = YPPlist(2,YPPsym((P)"modname"),YPPsym((P)"data"));
  T161 = YPsig(LITREF(lit_1035),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_1034),T161,ENVNUL,PNUL,YPfalse);
  T162 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T162);
  lit_1036 = YPPsym((P)"reloader-do-use-module");
  lit_1037 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"uses"));
  T163 = YPsig(LITREF(lit_1037),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_1036),T163,ENVNUL,PNUL,YPfalse);
  T164 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T164);
  lit_1038 = YPPsym((P)"reloader-do-import");
  lit_1039 = YPPlist(4,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"from-mod"),YPPsym((P)"original-name"));
  lit_1040 = YPsb((P)"Can't find %s from %s for %s\n");
  T165 = YPsig(LITREF(lit_1039),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_1038),T165,ENVNUL,PNUL,YPfalse);
  T166 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T166);
  lit_1041 = YPPsym((P)"process-module-data");
  lit_1042 = YPPlist(1,YPPsym((P)"module"));
  T167 = YPsig(LITREF(lit_1042),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_1041),T167,ENVNUL,PNUL,YPfalse);
  T168 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T168);
  lit_1043 = YPPsym((P)"ensure-module-data");
  lit_1044 = YPPlist(1,YPPsym((P)"module"));
  T169 = YPsig(LITREF(lit_1044),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_1043),T169,ENVNUL,PNUL,YPfalse);
  T170 = YevalSastYensure_module_data;
  VARSET(YevalSastYensure_module_data,T170);
  lit_1045 = YPPsym((P)"reloader-do-runtime-binding");
  lit_1046 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T171 = YPsig(LITREF(lit_1046),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_1045),T171,ENVNUL,PNUL,YPfalse);
  T172 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T172);
  lit_1047 = YPPsym((P)"reloader-do-dynamic-binding");
  lit_1048 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T173 = YPsig(LITREF(lit_1048),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_dynamic_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_dynamic_binding),LITREF(lit_1047),T173,ENVNUL,PNUL,YPfalse);
  T174 = YevalSastYreloader_do_dynamic_binding;
  VARSET(YevalSastYreloader_do_dynamic_binding,T174);
  lit_1049 = YPPsym((P)"reloader-do-other-binding");
  lit_1050 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T175 = YPsig(LITREF(lit_1050),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_1049),T175,ENVNUL,PNUL,YPfalse);
  T176 = YevalSastYreloader_do_other_binding;
  VARSET(YevalSastYreloader_do_other_binding,T176);
  lit_1051 = YPPsym((P)"reloader-do-export");
  lit_1052 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"as-name"));
  lit_1053 = YPsb((P)"Can't find %s in %s\n");
  T177 = YPsig(LITREF(lit_1052),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_1051),T177,ENVNUL,PNUL,YPfalse);
  T178 = YevalSastYreloader_do_export;
  VARSET(YevalSastYreloader_do_export,T178);
  lit_1054 = YPPsym((P)"reload-modules");
  T179 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_1054),T179,ENVNUL,PNUL,YPfalse);
  T180 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T180);
  lit_1055 = YPPsym((P)"install-magic-bindings");
  lit_1056 = YPPlist(1,YPPsym((P)"env"));
  lit_1057 = YPPlist(1,YPPsym((P)"binding"));
  T182 = YPsig(LITREF(lit_1057),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_514 = YPmet(FUNCODEREF(fun_514),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(LITREF(lit_1056),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_1055),T181,ENVNUL,PNUL,YPfalse);
  T183 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T183);
  lit_1058 = YPPsym((P)"reload-macros");
  T184 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_1058),T184,ENVNUL,PNUL,YPfalse);
  T185 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T185);
  lit_1059 = YPPsym((P)"install-interpreter-hacks");
  lit_1060 = YPPlist(1,YPPsym((P)"env"));
  T188 = YPsig(LITREF(lit_1060),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T187 = YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_1059),T188,ENVNUL,PNUL,YPfalse);
  T190 = YevalSastYinstall_interpreter_hacks;
  T189 = VARSET(YevalSastYinstall_interpreter_hacks,T190);
  T186 = T189;
  return T186;
}

P YevalSastY___main_10___() {
  P tmpF2748;
  P tmpF2747;
  P tmpF2746;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
DEFCREGS();
loop:
  lit_1061 = YPPsym((P)"init-runtime");
  T0 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_1061),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T1);
  lit_1062 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_1062));
  lit_1063 = YPPsym((P)"fab-syntax-environment");
  lit_1064 = YPPlist(1,YPPsym((P)"module"));
  lit_1065 = YPPsym((P)"goo");
  T2 = YPsig(LITREF(lit_1064),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_1063),T2,ENVNUL,PNUL,YPfalse);
  T3 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T3);
  lit_1066 = YPPsym((P)"fab-g2c-module");
  lit_1067 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T4 = YPsig(LITREF(lit_1067),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_1066),T4,ENVNUL,PNUL,YPfalse);
  T5 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T5);
  lit_1068 = YPPsym((P)"init-g2c-boot-environment");
  lit_1069 = YPPlist(1,YPPsym((P)"env"));
  T6 = YPsig(LITREF(lit_1069),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_1068),T6,ENVNUL,PNUL,YPfalse);
  T7 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T7);
  lit_1070 = YPPsym((P)"init-g2c-regular-environment");
  lit_1071 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T8 = YPsig(LITREF(lit_1071),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_1070),T8,ENVNUL,PNUL,YPfalse);
  T9 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T9);
  lit_1072 = YPPsym((P)"init-ast");
  T10 = YPsig(LITREF(lit_626),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_1072),T10,ENVNUL,PNUL,YPfalse);
  T11 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T11);
  lit_1073 = YPPsym((P)"do-static-global-bindings");
  lit_1074 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  lit_1075 = YPPlist(1,YPPsym((P)"env"));
  T13 = YPsig(LITREF(lit_1075),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_524 = YPmet(FUNCODEREF(fun_loop_524),LITREF(lit_248),T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(LITREF(lit_1074),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_1073),T12,ENVNUL,PNUL,YPfalse);
  T14 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T14);
  lit_1076 = YPPsym((P)"do-named-static-global-bindings");
  lit_1077 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  lit_1078 = YPPlist(1,YPPsym((P)"env"));
  T16 = YPsig(LITREF(lit_1078),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_526 = YPmet(FUNCODEREF(fun_loop_526),LITREF(lit_248),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(LITREF(lit_1077),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_1076),T15,ENVNUL,PNUL,YPfalse);
  T17 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T17);
  tmpF2746 = YPfalse;
  if (tmpF2746 != YPfalse) {
    T18 = VARREF(YevalSastYast_evaluate);
  } else {
    T18 = YPfalse;
  }
  tmpF2747 = YPfalse;
  if (tmpF2747 != YPfalse) {
    T19 = VARREF(YevalSastYinit_environment_for_eval);
  } else {
    T19 = YPfalse;
  }
  tmpF2748 = YPfalse;
  if (tmpF2748 != YPfalse) {
    T20 = VARREF(YevalSastYload_in);
  } else {
    T20 = YPfalse;
  }
  T21 = YPfalse;
  return T21;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {&module_info_evalSsyntax},
  {&module_info_evalSdependency},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"not", &module_info_gooSboot, "not"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, "sexpr-function-definition-adjectives"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"$parse-dependencies", &module_info_evalSdependency, "$parse-dependencies"},
  {"<dependency-type>", &module_info_evalSdependency, "<dependency-type>"},
  {"$empty-dependency", &module_info_evalSdependency, "$empty-dependency"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"$value-optimization-dependency", &module_info_evalSdependency, "$value-optimization-dependency"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"^", &module_info_gooSmath, "^"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"invalidate-dependents", &module_info_evalSdependency, "invalidate-dependents"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<dependable>", &module_info_evalSdependency, "<dependable>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"$name-parse-dependency", &module_info_evalSdependency, "$name-parse-dependency"},
  {"dependency-and", &module_info_evalSdependency, "dependency-and"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"log-dependency", &module_info_evalSdependency, "log-dependency"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"dependency-empty?", &module_info_evalSdependency, "dependency-empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"mod", &module_info_gooSmath, "mod"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"len", &module_info_gooStypes, "len"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"in", &module_info_gooSioSport, "in"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"op", &module_info_gooSmacros, "op"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"clone", &module_info_gooSboot, "clone"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"def", &module_info_gooSboot, "def"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"map", &module_info_gooSmacros, "map"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"@not", &module_info_gooSboot, "@not"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"put", &module_info_gooSioSport, "put"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"close", &module_info_gooSioSport, "close"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"1-", &module_info_gooSmath, "1-"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"<dependent>", &module_info_evalSdependency, "<dependent>"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"set", &module_info_gooSboot, "set"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"if", &module_info_gooSboot, "if"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<pathname-error>", &module_info_gooSsystem, "<pathname-error>"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"t<", &module_info_gooStypes, "t<"},
  {"ct", &module_info_gooSboot, "ct"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"==", &module_info_gooSmacros, "=="},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"dependency-includes-any?", &module_info_evalSdependency, "dependency-includes-any?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"invalidate-dependent", &module_info_evalSdependency, "invalidate-dependent"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"out", &module_info_gooSioSport, "out"},
  {"any?", &module_info_gooStypes, "any?"},
  {"always", &module_info_gooSruntime, "always"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"<directory-error>", &module_info_gooSsystem, "<directory-error>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"items", &module_info_gooScolsScol, "items"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"max", &module_info_gooSmag, "max"},
  {"round/", &module_info_gooSmath, "round/"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"ast-error", &module_info_evalSdependency, "ast-error"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"open", &module_info_gooSioSport, "open"},
  {"when", &module_info_gooSmacros, "when"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"$all-dependency-types", &module_info_evalSdependency, "$all-dependency-types"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"min", &module_info_gooSmag, "min"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"pow", &module_info_gooSmath, "pow"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"$optimizaton-dependencies", &module_info_evalSdependency, "$optimizaton-dependencies"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"@+", &module_info_gooSboot, "@+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"read", &module_info_gooSconditions, "read"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"app", &module_info_gooSmacros, "app"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"pack", &module_info_gooSpacker, "pack"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find-dependency", &module_info_evalSdependency, "find-dependency"},
  {"$e", &module_info_gooSmath, "$e"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%met", &module_info_gooSboot, "%met"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"dependency-includes-all?", &module_info_evalSdependency, "dependency-includes-all?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"do", &module_info_gooSmacros, "do"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"for", &module_info_gooSmacros, "for"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<=", &module_info_gooSmag, "<="},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"error", &module_info_gooSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"<", &module_info_gooSmag, "<"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%im", &module_info_gooSboot, "%im"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"df", &module_info_gooSboot, "df"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"=", &module_info_gooSmath, "="},
  {"get", &module_info_gooSioSport, "get"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"$expansion-parse-dependency", &module_info_evalSdependency, "$expansion-parse-dependency"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"&", &module_info_gooSmath, "&"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"@<", &module_info_gooSboot, "@<"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"dependency-or", &module_info_evalSdependency, "dependency-or"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"round", &module_info_gooSmath, "round"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"log", &module_info_gooSmath, "log"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"detach-dependent", &module_info_evalSdependency, "detach-dependent"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fun", &module_info_gooSboot, "fun"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"esc", &module_info_gooSboot, "esc"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"/", &module_info_gooSmath, "/"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"time", &module_info_gooSsystem, "time"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"pairize", CVAR, &YevalSastYpairize},
  {"remove-modules-by-name!", CVAR, &YevalSastYremove_modules_by_nameX},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"<binding>", CVAR, &YevalSastYLbindingG},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"---main-8---", PVAR, NULL},
  {"sequential", CVAR, &YevalSastYsequential},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"module-loader-module-type", CVAR, &YevalSastYmodule_loader_module_type},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"module-mangled-name-setter", CVAR, &YevalSastYmodule_mangled_name_setter},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"transaction-register-implemented-binding", CVAR, &YevalSastYtransaction_register_implemented_binding},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"module-uses-c-files-setter", CVAR, &YevalSastYmodule_uses_c_files_setter},
  {"call-with-subtransaction", CVAR, &YevalSastYcall_with_subtransaction},
  {"---main-1---", PVAR, NULL},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"report-undefined-global-bindings", CVAR, &YevalSastYreport_undefined_global_bindings},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"binding-inferred-type", CVAR, &YevalSastYbinding_inferred_type},
  {"load-module", CVAR, &YevalSastYload_module},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"find-syntax-environment", CVAR, &YevalSastYfind_syntax_environment},
  {"---main-6---", PVAR, NULL},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"register-module!", CVAR, &YevalSastYregister_moduleX},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"---main-2---", PVAR, NULL},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"function-data-refs", CVAR, &YevalSastYfunction_data_refs},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"binding-locative-setter", CVAR, &YevalSastYbinding_locative_setter},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"function-self-recursive?-setter", CVAR, &YevalSastYfunction_self_recursiveQ_setter},
  {"reloader-do-create-module", CVAR, &YevalSastYreloader_do_create_module},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"---main-10---", PVAR, NULL},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"env-object-name", CVAR, &YevalSastYenv_object_name},
  {"<module-binding>", CVAR, &YevalSastYLmodule_bindingG},
  {"$arguments-empty", CVAR, &YevalSastYDarguments_empty},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"*runtime-module-loader*", CVAR, &YevalSastYTruntime_module_loaderT},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"frame-bindings", CVAR, &YevalSastYframe_bindings},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"binding-info-setter", CVAR, &YevalSastYbinding_info_setter},
  {"export-binding!", CVAR, &YevalSastYexport_bindingX},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"module-loader-modules", CVAR, &YevalSastYmodule_loader_modules},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"environment-next-setter", CVAR, &YevalSastYenvironment_next_setter},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"---main-0---", PVAR, NULL},
  {"module-loader-modules-setter", CVAR, &YevalSastYmodule_loader_modules_setter},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"module-uses-c-files", CVAR, &YevalSastYmodule_uses_c_files},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"$functions-empty", CVAR, &YevalSastYDfunctions_empty},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"binding-prop", CVAR, &YevalSastYbinding_prop},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"<runtime-module-loader>", CVAR, &YevalSastYLruntime_module_loaderG},
  {"<global-box>", CVAR, &YevalSastYLglobal_boxG},
  {"remove-module-internal!", CVAR, &YevalSastYremove_module_internalX},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"load-in", CVAR, &YevalSastYload_in},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"module-exports-setter", CVAR, &YevalSastYmodule_exports_setter},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"compute-transitive-users", CVAR, &YevalSastYcompute_transitive_users},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"reloader-do-runtime-binding", CVAR, &YevalSastYreloader_do_runtime_binding},
  {"module-mangled-name", CVAR, &YevalSastYmodule_mangled_name},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"module-mangled-string-name", CVAR, &YevalSastYmodule_mangled_string_name},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"module-name-setter", CVAR, &YevalSastYmodule_name_setter},
  {"ast-<bot>", CVAR, &YevalSastYast_LbotG},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"insert-and-mangle-global!", CVAR, &YevalSastYinsert_and_mangle_globalX},
  {"roll-back-transaction", CVAR, &YevalSastYroll_back_transaction},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"binding-locative", CVAR, &YevalSastYbinding_locative},
  {"module-transaction", CVAR, &YevalSastYmodule_transaction},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"*now-rt-env*", DVAR, &YevalSastYTnow_rt_envT},
  {"namespace-error", CVAR, &YevalSastYnamespace_error},
  {"binding-name-setter", CVAR, &YevalSastYbinding_name_setter},
  {"set-module-environments", CVAR, &YevalSastYset_module_environments},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"unchecked-runtime-environment", CVAR, &YevalSastYunchecked_runtime_environment},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"module-data-processed?", CVAR, &YevalSastYmodule_data_processedQ},
  {"<module>", CVAR, &YevalSastYLmoduleG},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"binding-info", CVAR, &YevalSastYbinding_info},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"*current-subtransaction*", CVAR, &YevalSastYTcurrent_subtransactionT},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"reloader-do-import", CVAR, &YevalSastYreloader_do_import},
  {"<namespace-error>", CVAR, &YevalSastYLnamespace_errorG},
  {"find-static-global-environment", CVAR, &YevalSastYfind_static_global_environment},
  {"module-target-environment", CVAR, &YevalSastYmodule_target_environment},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"do-named-static-global-bindings", CVAR, &YevalSastYdo_named_static_global_bindings},
  {"environment-uses-modules-setter", CVAR, &YevalSastYenvironment_uses_modules_setter},
  {"module-uses-c-libraries", CVAR, &YevalSastYmodule_uses_c_libraries},
  {"binding-free?-setter", CVAR, &YevalSastYbinding_freeQ_setter},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"%module-exports-setter", CVAR, &YevalSastYPmodule_exports_setter},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"module-target-environment-setter", CVAR, &YevalSastYmodule_target_environment_setter},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"module-runtime-data-setter", CVAR, &YevalSastYmodule_runtime_data_setter},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"load-and-register-module", CVAR, &YevalSastYload_and_register_module},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"define-magic-binding", PVAR, NULL},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"environment-bindings-setter", CVAR, &YevalSastYenvironment_bindings_setter},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"binding-handler-setter", CVAR, &YevalSastYbinding_handler_setter},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"<static-empty-environment>", CVAR, &YevalSastYLstatic_empty_environmentG},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"binding-module-setter", CVAR, &YevalSastYbinding_module_setter},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"global-box-value-setter", CVAR, &YevalSastYglobal_box_value_setter},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"import-and-mangle-global!", CVAR, &YevalSastYimport_and_mangle_globalX},
  {"<binding-name>", CVAR, &YevalSastYLbinding_nameG},
  {"module-name", CVAR, &YevalSastYmodule_name},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"binding-name", CVAR, &YevalSastYbinding_name},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"find-binding", CVAR, &YevalSastYfind_binding},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"install-initial-bindings", CVAR, &YevalSastYinstall_initial_bindings},
  {"transaction-dependents-setter", CVAR, &YevalSastYtransaction_dependents_setter},
  {"module-loader-stack-setter", CVAR, &YevalSastYmodule_loader_stack_setter},
  {"process-module-data", CVAR, &YevalSastYprocess_module_data},
  {"binding-native-to?", CVAR, &YevalSastYbinding_native_toQ},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"$fab-list-empty", CVAR, &YevalSastYDfab_list_empty},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"binding-type-setter", CVAR, &YevalSastYbinding_type_setter},
  {"module-syntax-environment-setter", CVAR, &YevalSastYmodule_syntax_environment_setter},
  {"reloader-do-other-binding", CVAR, &YevalSastYreloader_do_other_binding},
  {"module-data-processed?-setter", CVAR, &YevalSastYmodule_data_processedQ_setter},
  {"transaction-empty?", CVAR, &YevalSastYtransaction_emptyQ},
  {"---main-5---", PVAR, NULL},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"reloader-do-export", CVAR, &YevalSastYreloader_do_export},
  {"with-dependent", PVAR, NULL},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"probe-module", CVAR, &YevalSastYprobe_module},
  {"binding-free?", CVAR, &YevalSastYbinding_freeQ},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"do-module-loader-modules", CVAR, &YevalSastYdo_module_loader_modules},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"def-list", PVAR, NULL},
  {"binding-kind-setter", CVAR, &YevalSastYbinding_kind_setter},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"---main-9---", PVAR, NULL},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"<transaction>", CVAR, &YevalSastYLtransactionG},
  {"runtime-module-loader", CVAR, &YevalSastYruntime_module_loader},
  {"runtime-module", CVAR, &YevalSastYruntime_module},
  {"transaction-implemented-bindings", CVAR, &YevalSastYtransaction_implemented_bindings},
  {"transaction-implemented-bindings-setter", CVAR, &YevalSastYtransaction_implemented_bindings_setter},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"transaction-register-dependent", CVAR, &YevalSastYtransaction_register_dependent},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"merge-transactions!", CVAR, &YevalSastYmerge_transactionsX},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"reloader-do-use-module", CVAR, &YevalSastYreloader_do_use_module},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"binding-prop-setter", CVAR, &YevalSastYbinding_prop_setter},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"$sequential-empty", CVAR, &YevalSastYDsequential_empty},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"fab-static-global-environment", CVAR, &YevalSastYfab_static_global_environment},
  {"fab-subset-environment", CVAR, &YevalSastYfab_subset_environment},
  {"binding-handler", CVAR, &YevalSastYbinding_handler},
  {"binding-mangled-name-setter", CVAR, &YevalSastYbinding_mangled_name_setter},
  {"function-data-refs-setter", CVAR, &YevalSastYfunction_data_refs_setter},
  {"module-uses-c-libraries-setter", CVAR, &YevalSastYmodule_uses_c_libraries_setter},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"module-exports", CVAR, &YevalSastYmodule_exports},
  {"insert-globals!", CVAR, &YevalSastYinsert_globalsX},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"module-uses-c-includes", CVAR, &YevalSastYmodule_uses_c_includes},
  {"module-uses-c-includes-setter", CVAR, &YevalSastYmodule_uses_c_includes_setter},
  {"ftype", CVAR, &YevalSastYftype},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"do-static-global-bindings", CVAR, &YevalSastYdo_static_global_bindings},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"environment-bindings", CVAR, &YevalSastYenvironment_bindings},
  {"import-global!", CVAR, &YevalSastYimport_globalX},
  {"module-name-to-relpath", CVAR, &YevalSastYmodule_name_to_relpath},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"module-transaction-setter", CVAR, &YevalSastYmodule_transaction_setter},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"runtime-environment", CVAR, &YevalSastYruntime_environment},
  {"functions", CVAR, &YevalSastYfunctions},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"binding-module", CVAR, &YevalSastYbinding_module},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"module-runtime-data", CVAR, &YevalSastYmodule_runtime_data},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"global-box-value", CVAR, &YevalSastYglobal_box_value},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"%module-exports", CVAR, &YevalSastYPmodule_exports},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"function-self-recursive?", CVAR, &YevalSastYfunction_self_recursiveQ},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"ensure-module-data", CVAR, &YevalSastYensure_module_data},
  {"<static-local-environment>", CVAR, &YevalSastYLstatic_local_environmentG},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"environment-module-loader", CVAR, &YevalSastYenvironment_module_loader},
  {"environment-module-loader-setter", CVAR, &YevalSastYenvironment_module_loader_setter},
  {"<static-environment>", CVAR, &YevalSastYLstatic_environmentG},
  {"binding-inferred-type-setter", CVAR, &YevalSastYbinding_inferred_type_setter},
  {"environment-allows-foreign-names?", CVAR, &YevalSastYenvironment_allows_foreign_namesQ},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"find-environment-module", CVAR, &YevalSastYfind_environment_module},
  {"$free-environment-empty", CVAR, &YevalSastYDfree_environment_empty},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"environment-next", CVAR, &YevalSastYenvironment_next},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"transaction-dependents", CVAR, &YevalSastYtransaction_dependents},
  {"environment-module", CVAR, &YevalSastYenvironment_module},
  {"environment-module-setter", CVAR, &YevalSastYenvironment_module_setter},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"$empty-static-environment", CVAR, &YevalSastYDempty_static_environment},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"def-programs", PVAR, NULL},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"runtime-core-environment", CVAR, &YevalSastYruntime_core_environment},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"---main-4---", PVAR, NULL},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"binding-type", CVAR, &YevalSastYbinding_type},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"<module-loader>", CVAR, &YevalSastYLmodule_loaderG},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"with-subtransaction", PVAR, NULL},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"binding-module-name", CVAR, &YevalSastYbinding_module_name},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"reload-modules", CVAR, &YevalSastYreload_modules},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"binding-kind", CVAR, &YevalSastYbinding_kind},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"module-mangled-string-name-setter", CVAR, &YevalSastYmodule_mangled_string_name_setter},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"---main-7---", PVAR, NULL},
  {"module-loader-stack", CVAR, &YevalSastYmodule_loader_stack},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"binding-global-box", CVAR, &YevalSastYbinding_global_box},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"arguments", CVAR, &YevalSastYarguments},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"insert-global!", CVAR, &YevalSastYinsert_globalX},
  {"reloader-do-dynamic-binding", CVAR, &YevalSastYreloader_do_dynamic_binding},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"binding-mangled-name", CVAR, &YevalSastYbinding_mangled_name},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"binding-global-box-setter", CVAR, &YevalSastYbinding_global_box_setter},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"<static-global-environment>", CVAR, &YevalSastYLstatic_global_environmentG},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"$goo-boot-module-name", CVAR, &YevalSastYDgoo_boot_module_name},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"module-syntax-environment", CVAR, &YevalSastYmodule_syntax_environment},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"---main-3---", PVAR, NULL},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"environment-uses-modules", CVAR, &YevalSastYenvironment_uses_modules},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"<binding>", "<binding>"},
  {"<alternative>", "<alternative>"},
  {"function-index-setter", "function-index-setter"},
  {"constant-value", "constant-value"},
  {"locals-functions", "locals-functions"},
  {"module-mangled-name-setter", "module-mangled-name-setter"},
  {"function-signature-setter", "function-signature-setter"},
  {"<dynamic-assignment>", "<dynamic-assignment>"},
  {"signature-nary?", "signature-nary?"},
  {"signature-specs", "signature-specs"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"binding-index-setter", "binding-index-setter"},
  {"<real-reference>", "<real-reference>"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"monitor-info", "monitor-info"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"<static-module-binding-reference>", "<static-module-binding-reference>"},
  {"function-data-refs", "function-data-refs"},
  {"program-type-setter", "program-type-setter"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"<bound?>", "<bound?>"},
  {"binding-locative-setter", "binding-locative-setter"},
  {"%%macro", "%%macro"},
  {"function-frame-len", "function-frame-len"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"ast-walk!", "ast-walk!"},
  {"<local-reference>", "<local-reference>"},
  {"function-value", "function-value"},
  {"env-object-name", "env-object-name"},
  {"as-lst", "as-lst"},
  {"<module-binding>", "<module-binding>"},
  {"alternative-condition", "alternative-condition"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"signature-value-setter", "signature-value-setter"},
  {"locals-body", "locals-body"},
  {"function-bindings", "function-bindings"},
  {"binding-info-setter", "binding-info-setter"},
  {"signature-names", "signature-names"},
  {"binding-value-setter", "binding-value-setter"},
  {"<bind-exit>", "<bind-exit>"},
  {"function-free", "function-free"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"bound?-reference", "bound?-reference"},
  {"module-uses-c-includes", "module-uses-c-includes"},
  {"<global-box>", "<global-box>"},
  {"monitor-test", "monitor-test"},
  {"<local-binding>", "<local-binding>"},
  {"function-index", "function-index"},
  {"monitor-handler", "monitor-handler"},
  {"environment-module", "environment-module"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"function-signature", "function-signature"},
  {"module-mangled-name", "module-mangled-name"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"reference-binding", "reference-binding"},
  {"module-uses-c-files", "module-uses-c-files"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"function-registers-setter", "function-registers-setter"},
  {"alternative-consequent", "alternative-consequent"},
  {"function-body-setter", "function-body-setter"},
  {"binding-index", "binding-index"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"function-debug-name", "function-debug-name"},
  {"binding-locative", "binding-locative"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"function-binding", "function-binding"},
  {"program-type", "program-type"},
  {"def-programs", "def-programs"},
  {"load-module", "load-module"},
  {"set-module-environments", "set-module-environments"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"<assignment>", "<assignment>"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"<module>", "<module>"},
  {"alternative-alternant", "alternative-alternant"},
  {"<free-environment>", "<free-environment>"},
  {"binding-info", "binding-info"},
  {"application-known?-setter", "application-known?-setter"},
  {"objectify-quotation", "objectify-quotation"},
  {"binding-value", "binding-value"},
  {"<sequential>", "<sequential>"},
  {"module-target-environment", "module-target-environment"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"module-uses-c-libraries", "module-uses-c-libraries"},
  {"binding-dotted?", "binding-dotted?"},
  {"assignment-binding", "assignment-binding"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"sequentialize", "sequentialize"},
  {"binding-global-box", "binding-global-box"},
  {"program-register-setter", "program-register-setter"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"binding-mutable?", "binding-mutable?"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"<fix-let>", "<fix-let>"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"<ast-method>", "<ast-method>"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"<application>", "<application>"},
  {"<constant>", "<constant>"},
  {"assignment-form", "assignment-form"},
  {"function-source-setter", "function-source-setter"},
  {"application-binding", "application-binding"},
  {"function-registers", "function-registers"},
  {"assignment-reference", "assignment-reference"},
  {"constant-index-setter", "constant-index-setter"},
  {"function-body", "function-body"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"ast-error", "ast-error"},
  {"<global-assignment>", "<global-assignment>"},
  {"<macro-reference>", "<macro-reference>"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"<fab-list>", "<fab-list>"},
  {"module-name", "module-name"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"binding-name", "binding-name"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"find-binding", "find-binding"},
  {"application-known?", "application-known?"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"application-arguments", "application-arguments"},
  {"<arguments>", "<arguments>"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"binding-native-to?", "binding-native-to?"},
  {"<dynamic-definition>", "<dynamic-definition>"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"application-function", "application-function"},
  {"objectify-signature", "objectify-signature"},
  {"binding-type-setter", "binding-type-setter"},
  {"module-binding", "module-binding"},
  {"ast-walk", "ast-walk"},
  {"probe-module", "probe-module"},
  {"<definition>", "<definition>"},
  {"runtime-environment", "runtime-environment"},
  {"<local-assignment>", "<local-assignment>"},
  {"def-list", "def-list"},
  {"program-register", "program-register"},
  {"<ast-function>", "<ast-function>"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"<ast-generic>", "<ast-generic>"},
  {"<predefined-application>", "<predefined-application>"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"binding-module-name", "binding-module-name"},
  {"<compile-time>", "<compile-time>"},
  {"<passive-program>", "<passive-program>"},
  {"module-exports", "module-exports"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"signature-names-setter", "signature-names-setter"},
  {"<ast-signature>", "<ast-signature>"},
  {"ast-define-binding", "ast-define-binding"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"fix-let-types", "fix-let-types"},
  {"environment-bindings", "environment-bindings"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"binding-mangled-name", "binding-mangled-name"},
  {"function-source", "function-source"},
  {"binding-mangled-name-setter", "binding-mangled-name-setter"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"constant-index", "constant-index"},
  {"<locals>", "<locals>"},
  {"module-mangled-string-name-setter", "module-mangled-string-name-setter"},
  {"binding-module", "binding-module"},
  {"application-tail?", "application-tail?"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"reference-called-function?", "reference-called-function?"},
  {"load-in", "load-in"},
  {"global-box-value", "global-box-value"},
  {"function-adjectives", "function-adjectives"},
  {"<program>", "<program>"},
  {"free-environment", "free-environment"},
  {"compile-time-program", "compile-time-program"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"<monitor>", "<monitor>"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"find-environment-module", "find-environment-module"},
  {"signature-bindings", "signature-bindings"},
  {"<magic-reference>", "<magic-reference>"},
  {"<regular-application>", "<regular-application>"},
  {"module-mangled-string-name", "module-mangled-string-name"},
  {"reference-frame-number", "reference-frame-number"},
  {"<low-let>", "<low-let>"},
  {"signature-value", "signature-value"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"locals-bindings", "locals-bindings"},
  {"function-nary?", "function-nary?"},
  {"binding-type", "binding-type"},
  {"function-frame-len-setter", "function-frame-len-setter"},
  {"init-ast", "init-ast"},
  {"<module-loader>", "<module-loader>"},
  {"fix-let-body", "fix-let-body"},
  {"locals-body-setter", "locals-body-setter"},
  {"ast-evaluate", "ast-evaluate"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"binding-kind", "binding-kind"},
  {"monitor-type", "monitor-type"},
  {"function-temporaries", "function-temporaries"},
  {"<computed-program>", "<computed-program>"},
  {"<dynamic-reference>", "<dynamic-reference>"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"function-free-setter", "function-free-setter"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"<reference>", "<reference>"},
  {"<global-reference>", "<global-reference>"},
  {"<raw-constant>", "<raw-constant>"},
  {"<programs>", "<programs>"},
  {"signature-arity", "signature-arity"},
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
