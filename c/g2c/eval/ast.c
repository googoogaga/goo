/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/ast */

EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yx8rSsyntaxYDsexpr_define_function_tag,"x8r/syntax","$sexpr-define-function-tag");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(Yx8rSastYspecial_quasiquote,"x8r/ast","special-quasiquote");
DEF(Yx8rSastYobjectify_definition,"x8r/ast","objectify-definition");
DEF(Yx8rSastYinit_runtime,"x8r/ast","init-runtime");
DEF(Yx8rSastYbinding_module_name_setter,"x8r/ast","binding-module-name-setter");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
DEF(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
DEF(Yx8rSastYload_and_register_module,"x8r/ast","load-and-register-module");
DEF(Yx8rSastYreloader_do_other_binding,"x8r/ast","reloader-do-other-binding");
DEF(Yx8rSastYenvironment_bindings_setter,"x8r/ast","environment-bindings-setter");
DEF(Yx8rSastYbinding_handler,"x8r/ast","binding-handler");
DEF(Yx8rSastYinit_g2c_boot_environment,"x8r/ast","init-g2c-boot-environment");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(Yx8rSastYobjectify_unwind_protect,"x8r/ast","objectify-unwind-protect");
DEF(Yx8rSastYobjectify_monitor,"x8r/ast","objectify-monitor");
DEF(Yx8rSastYregister_moduleX,"x8r/ast","register-module!");
DEF(Yx8rSastYTnow_rt_envT,"x8r/ast","*now-rt-env*");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(Yx8rSastYremove_module_internalX,"x8r/ast","remove-module-internal!");
DEF(Yx8rSastYbinding_info,"x8r/ast","binding-info");
DEF(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
DEF(Yx8rSastYspecial_define_class,"x8r/ast","special-define-class");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(Yx8rSastYast_LbotG,"x8r/ast","ast-<bot>");
DEF(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
DEF(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
DEF(Yx8rSastYDfunctions_empty,"x8r/ast","$functions-empty");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
DEF(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
DEF(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
DEF(Yx8rSastYfunction_specs,"x8r/ast","function-specs");
DEF(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
DEF(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
DEF(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
DEF(Yx8rSastYfunctions,"x8r/ast","functions");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
DEF(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(Yx8rSastYreference_binding_setter,"x8r/ast","reference-binding-setter");
DEF(Yx8rSastYenvironment_uses_modules_setter,"x8r/ast","environment-uses-modules-setter");
EXT(Yx8rSsyntaxYsexpr_variableQ,"x8r/syntax","sexpr-variable?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yx8rSdependencyYLdependentG,"x8r/dependency","<dependent>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(Yx8rSastYobjectify_compile_time,"x8r/ast","objectify-compile-time");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(Yx8rSastYassignment_reference_setter,"x8r/ast","assignment-reference-setter");
EXT(Yx8rSsyntaxYsexpr_make_application,"x8r/syntax","sexpr-make-application");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
DEF(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
DEF(Yx8rSastYmagic_bindings,"x8r/ast","magic-bindings");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yx8rSdependencyYdependency_includes_allQ,"x8r/dependency","dependency-includes-all?");
EXT(Yx8rSsyntaxYsexpr_define_class_parents,"x8r/syntax","sexpr-define-class-parents");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
DEF(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
DEF(Yx8rSastYunwind_protect_cleanup_thunk_setter,"x8r/ast","unwind-protect-cleanup-thunk-setter");
EXT(Yx8rSsyntaxYsexpr_prop_initQ,"x8r/syntax","sexpr-prop-init?");
EXT(Yx8rSsyntaxYDsexpr_def_tag,"x8r/syntax","$sexpr-def-tag");
DEF(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(Yx8rSastYsignature_value,"x8r/ast","signature-value");
DEF(Yx8rSastYruntime_module,"x8r/ast","runtime-module");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yx8rSsyntaxYsexpr_make_anonymous_method,"x8r/syntax","sexpr-make-anonymous-method");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yx8rSdependencyYinvalidate_dependent,"x8r/dependency","invalidate-dependent");
DEF(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
DEF(Yx8rSastYapplication_function_setter,"x8r/ast","application-function-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(Yx8rSastYspecial_let,"x8r/ast","special-let");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSbufYlen_setter,"goo/cols/buf","len-setter");
DEF(Yx8rSastYLast_function_definitionG,"x8r/ast","<ast-function-definition>");
DEF(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yx8rSsyntaxYsexpr_definition_variable,"x8r/syntax","sexpr-definition-variable");
DEF(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yx8rSsyntaxYsexpr_function_signature,"x8r/syntax","sexpr-function-signature");
DEF(Yx8rSastYbinding_locative_setter,"x8r/ast","binding-locative-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yx8rSsyntaxYsexpr_def_value,"x8r/syntax","sexpr-def-value");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
DEF(Yx8rSastYinsert_globalX,"x8r/ast","insert-global!");
DEF(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
DEF(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
DEF(Yx8rSastYTcurrent_subtransactionT,"x8r/ast","*current-subtransaction*");
DEF(Yx8rSastYapplication_next_methods_setter,"x8r/ast","application-next-methods-setter");
DEF(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
DEF(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(Ytail,"goo/boot","tail");
DEF(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
DEF(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
DEF(Yx8rSastYDsexpr_compile_time_also_tag,"x8r/ast","$sexpr-compile-time-also-tag");
DEF(Yx8rSastYDsexpr_optionals_tag,"x8r/ast","$sexpr-optionals-tag");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
DEF(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(Yx8rSastYapplication_next_methods,"x8r/ast","application-next-methods");
DEF(Yx8rSastYmaybe_log_dependency,"x8r/ast","maybe-log-dependency");
EXT(Yx8rSsyntaxYsexpr_iterate_Gloc,"x8r/syntax","sexpr-iterate->loc");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
DEF(Yx8rSastYapplication_binding_setter,"x8r/ast","application-binding-setter");
DEF(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(Yx8rSsyntaxYsexpr_variable_name,"x8r/syntax","sexpr-variable-name");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yx8rSsyntaxYsexpr_syntax_if_value,"x8r/syntax","sexpr-syntax-if-value");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
DEF(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yx8rSdependencyYLdependableG,"x8r/dependency","<dependable>");
DEF(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(Yx8rSsyntaxYsexpr_unquoteQ,"x8r/syntax","sexpr-unquote?");
DEF(Yx8rSastYcompute_local_reference_offsets,"x8r/ast","compute-local-reference-offsets");
EXT(Yx8rSsyntaxYDsexpr_quote_tag,"x8r/syntax","$sexpr-quote-tag");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yx8rSsyntaxYsexpr_variable_type,"x8r/syntax","sexpr-variable-type");
DEF(Yx8rSastYobjectify_function_source,"x8r/ast","objectify-function-source");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
DEF(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yvec,"goo/boot","vec");
DEF(Yx8rSastYmacro_expander,"x8r/ast","macro-expander");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(Yx8rSastYsignature_names,"x8r/ast","signature-names");
DEF(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(Yx8rSsyntaxYDsexpr_if_tag,"x8r/syntax","$sexpr-if-tag");
EXT(Yclass_name,"goo/boot","class-name");
DEF(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Ynil,"goo/boot","nil");
EXT(YPisa,"goo/boot","%isa");
DEF(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLmagG,"goo/boot","<mag>");
DEF(Yx8rSastYreloader_do_create_module,"x8r/ast","reloader-do-create-module");
DEF(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
DEF(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yx8rSsyntaxYsexpr_defQ,"x8r/syntax","sexpr-def?");
EXT(Yx8rSsyntaxYsexpr_sequence_Gbegin,"x8r/syntax","sexpr-sequence->begin");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms,"x8r/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yx8rSsyntaxYsexpr_assignment_variable,"x8r/syntax","sexpr-assignment-variable");
DEF(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(Yx8rSastYobjectify_bind_exit,"x8r/ast","objectify-bind-exit");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(Yx8rSsyntaxYsexpr_function_definition_variable,"x8r/syntax","sexpr-function-definition-variable");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(Yx8rSastYspecial_export,"x8r/ast","special-export");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(Yx8rSdependencyYDname_parse_dependency,"x8r/dependency","$name-parse-dependency");
DEF(Yx8rSastYtransform_defs,"x8r/ast","transform-defs");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(Yx8rSastYspecial_define_method,"x8r/ast","special-define-method");
EXT(YPvnul,"goo/boot","%vnul");
EXT(Yx8rSsyntaxYDsexpr_define_syntax_tag,"x8r/syntax","$sexpr-define-syntax-tag");
DEF(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
DEF(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
DEF(Yx8rSastYspecial_define_function,"x8r/ast","special-define-function");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(Yx8rSastYmodule_name_setter,"x8r/ast","module-name-setter");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yx8rSsyntaxYDsexpr_monitor_tag,"x8r/syntax","$sexpr-monitor-tag");
DEF(Yx8rSastYforeign_nameQ,"x8r/ast","foreign-name?");
DEF(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
DEF(Yx8rSastYmonitor_handler_setter,"x8r/ast","monitor-handler-setter");
DEF(Yx8rSastYfind_static_global_environment,"x8r/ast","find-static-global-environment");
DEF(Yx8rSastYexport_bindingX,"x8r/ast","export-binding!");
EXT(Yx8rSsyntaxYsexpr_isa_prop_inits,"x8r/syntax","sexpr-isa-prop-inits");
DEF(Yx8rSastYenvironment_allows_foreign_namesQ_setter,"x8r/ast","environment-allows-foreign-names?-setter");
DEF(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
EXT(Yx8rSsyntaxYsexpr_if_then,"x8r/syntax","sexpr-if-then");
DEF(Yx8rSastYenvironment_allows_foreign_namesQ,"x8r/ast","environment-allows-foreign-names?");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YLunionG,"goo/boot","<union>");
DEF(Yx8rSastYftype,"x8r/ast","ftype");
EXT(Yx8rSsyntaxYsexpr_function_definition_value,"x8r/syntax","sexpr-function-definition-value");
DEF(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yx8rSsyntaxYeval,"x8r/syntax","eval");
DEF(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
DEF(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
DEF(Yx8rSastYDarguments_empty,"x8r/ast","$arguments-empty");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
DEF(Yx8rSastYspecial_monitor,"x8r/ast","special-monitor");
DEF(Yx8rSastYreloader_do_import,"x8r/ast","reloader-do-import");
DEF(Yx8rSastYprocess_module_data,"x8r/ast","process-module-data");
DEF(Yx8rSastYbinding_kind_setter,"x8r/ast","binding-kind-setter");
DEF(Yx8rSastYDsexpr_optionals_type_name,"x8r/ast","$sexpr-optionals-type-name");
DEF(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yx8rSastYLfunctionsG,"x8r/ast","<functions>");
DEF(Yx8rSastYspecial_boundQ,"x8r/ast","special-bound?");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(Yx8rSastYexpand_bind_listT,"x8r/ast","expand-bind-list*");
DEF(Yx8rSastYruntime_module_loader,"x8r/ast","runtime-module-loader");
DEF(Yx8rSastYfunction_binding_setter,"x8r/ast","function-binding-setter");
DEF(Yx8rSastYLast_generic_definitionG,"x8r/ast","<ast-generic-definition>");
DEF(Yx8rSastYdefault_type,"x8r/ast","default-type");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
DEF(Yx8rSastYreloader_do_export,"x8r/ast","reloader-do-export");
DEF(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(Yx8rSastYTmagic_bindingsT,"x8r/ast","*magic-bindings*");
DEF(Yx8rSastYDsexpr_use_module_tag,"x8r/ast","$sexpr-use-module-tag");
DEF(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(Yx8rSastYfab_subset_environment,"x8r/ast","fab-subset-environment");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(Yx8rSastYspecial_use_module,"x8r/ast","special-use-module");
DEF(Yx8rSastYobjectify_symbol,"x8r/ast","objectify-symbol");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yx8rSsyntaxYsexpr_syntax_if_then,"x8r/syntax","sexpr-syntax-if-then");
EXT(Yx8rSsyntaxYsexpr_block_body,"x8r/syntax","sexpr-block-body");
DEF(Yx8rSastYbinding_reference_class,"x8r/ast","binding-reference-class");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(Yx8rSastYDsexpr_compile_time_tag,"x8r/ast","$sexpr-compile-time-tag");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
DEF(Yx8rSastYmodule_exports_setter,"x8r/ast","module-exports-setter");
DEF(Yx8rSastYconstant_value,"x8r/ast","constant-value");
DEF(Yx8rSastYobjectify_free_global_reference,"x8r/ast","objectify-free-global-reference");
EXT(YLtupG,"goo/boot","<tup>");
DEF(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(Yx8rSastYmodule_runtime_data_setter,"x8r/ast","module-runtime-data-setter");
DEF(Yx8rSastYspecial_iterate,"x8r/ast","special-iterate");
EXT(Yx8rSsyntaxYsexpr_block_name,"x8r/syntax","sexpr-block-name");
DEF(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(Yx8rSastYmodule_transaction,"x8r/ast","module-transaction");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(Yx8rSastYreference_frame_number_setter,"x8r/ast","reference-frame-number-setter");
DEF(Yx8rSastYobjectify_method_definition,"x8r/ast","objectify-method-definition");
DEF(Yx8rSastYmodule_loader_stack,"x8r/ast","module-loader-stack");
EXT(Yx8rSsyntaxYsexpr_if_test,"x8r/syntax","sexpr-if-test");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSbufYlenSfill_setter,"goo/cols/buf","len/fill-setter");
EXT(Yx8rSsyntaxYsexpr_expand_backquote,"x8r/syntax","sexpr-expand-backquote");
DEF(Yx8rSastYimport_globalX,"x8r/ast","import-global!");
DEF(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
DEF(Yx8rSastYobjectify_function,"x8r/ast","objectify-function");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
DEF(Yx8rSastYspecial_Praw,"x8r/ast","special-%raw");
DEF(Yx8rSastYmonitor_test_setter,"x8r/ast","monitor-test-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yx8rSdependencyYdependency_and,"x8r/dependency","dependency-and");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
DEF(Yx8rSastYobjectify_generic_definition,"x8r/ast","objectify-generic-definition");
DEF(Yx8rSastYLstatic_environmentG,"x8r/ast","<static-environment>");
DEF(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
DEF(Yx8rSastYprocess_closed_application,"x8r/ast","process-closed-application");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
DEF(Yx8rSastYDsequential_empty,"x8r/ast","$sequential-empty");
DEF(Yx8rSastYtransaction_emptyQ,"x8r/ast","transaction-empty?");
DEF(Yx8rSastYreload_macros,"x8r/ast","reload-macros");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
DEF(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(Yx8rSastYobjectify_use_module,"x8r/ast","objectify-use-module");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(Yx8rSastYfunction_source,"x8r/ast","function-source");
DEF(Yx8rSastYobjectify_primitive_definition,"x8r/ast","objectify-primitive-definition");
DEF(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
DEF(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
DEF(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(Yx8rSastYupdate_binding_kind,"x8r/ast","update-binding-kind");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
DEF(Yx8rSastYregister_magic_binding,"x8r/ast","register-magic-binding");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(Yx8rSastYLast_embodied_functionG,"x8r/ast","<ast-embodied-function>");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
DEF(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
DEF(Yx8rSastYcompute_transitive_users,"x8r/ast","compute-transitive-users");
EXT(Yx8rSsyntaxYDsexpr_bind_exit_tag,"x8r/syntax","$sexpr-bind-exit-tag");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yx8rSsyntaxYsexpr_operator,"x8r/syntax","sexpr-operator");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(Yx8rSsyntaxYsexpr_definition_value,"x8r/syntax","sexpr-definition-value");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
DEF(Yx8rSastYobjectify_error,"x8r/ast","objectify-error");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(Yx8rSastYfind_syntax_environment,"x8r/ast","find-syntax-environment");
DEF(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathY_,"goo/math","-");
DEF(Yx8rSastYspecial_define_generic,"x8r/ast","special-define-generic");
DEF(Yx8rSastYcall_with_subtransaction,"x8r/ast","call-with-subtransaction");
DEF(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(Yx8rSastYconstant_value_setter,"x8r/ast","constant-value-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(Yx8rSsyntaxYsexpr_def_variable,"x8r/syntax","sexpr-def-variable");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
DEF(Yx8rSastYexpand_pattern,"x8r/ast","expand-pattern");
EXT(YisaQ,"goo/boot","isa?");
DEF(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yx8rSsyntaxYsexpr_isa_parent,"x8r/syntax","sexpr-isa-parent");
DEF(Yx8rSastYmodule_loader_modules,"x8r/ast","module-loader-modules");
EXT(YLflatG,"goo/boot","<flat>");
DEF(Yx8rSastYbinding_freeQ_setter,"x8r/ast","binding-free?-setter");
DEF(Yx8rSastYtransaction_register_dependent,"x8r/ast","transaction-register-dependent");
EXT(Yx8rSsyntaxYDsexpr_syntax_if_tag,"x8r/syntax","$sexpr-syntax-if-tag");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(Yx8rSastYspecial_bind_exit,"x8r/ast","special-bind-exit");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yx8rSsyntaxYsexpr_loc_bound_signatures,"x8r/syntax","sexpr-loc-bound-signatures");
EXT(YPsnul,"goo/boot","%snul");
DEF(Yx8rSastYspecial_def,"x8r/ast","special-def");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Yx8rSsyntaxYDsexpr_prop_tag,"x8r/syntax","$sexpr-prop-tag");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(Yx8rSsyntaxYsexpr_make_macro_function,"x8r/syntax","sexpr-make-macro-function");
DEF(Yx8rSastYmonitor_type_setter,"x8r/ast","monitor-type-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
DEF(Yx8rSastYarguments,"x8r/ast","arguments");
DEF(Yx8rSastYmonitor_info_setter,"x8r/ast","monitor-info-setter");
DEF(Yx8rSastYspecial_define_syntax,"x8r/ast","special-define-syntax");
DEF(Yx8rSastYtransaction_dependents,"x8r/ast","transaction-dependents");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
DEF(Yx8rSastYtransaction_implemented_bindings,"x8r/ast","transaction-implemented-bindings");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(Yx8rSastYmodule_data_processedQ,"x8r/ast","module-data-processed?");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(Yx8rSastYLmethod_applicationG,"x8r/ast","<method-application>");
EXT(Yx8rSsyntaxYDsexpr_define_tag,"x8r/syntax","$sexpr-define-tag");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
DEF(Yx8rSastYobjectify_assignment,"x8r/ast","objectify-assignment");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
DEF(Yx8rSastYobjectify,"x8r/ast","objectify");
EXT(Yx8rSsyntaxYsexpr_fab_setter,"x8r/syntax","sexpr-fab-setter");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
DEF(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yx8rSdependencyYDoptimizaton_dependencies,"x8r/dependency","$optimizaton-dependencies");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yx8rSsyntaxYsexpr_make_begin,"x8r/syntax","sexpr-make-begin");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(Yx8rSastYspecial_begin,"x8r/ast","special-begin");
DEF(Yx8rSastYprocess_nary_closed_application,"x8r/ast","process-nary-closed-application");
DEF(Yx8rSastYinstall_interpreter_hacks,"x8r/ast","install-interpreter-hacks");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(Yx8rSastYPmodule_exports,"x8r/ast","%module-exports");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yx8rSsyntaxYDsexpr_set_tag,"x8r/syntax","$sexpr-set-tag");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yx8rSdependencyYdependency_or,"x8r/dependency","dependency-or");
DEF(Yx8rSastYLbinding_nameG,"x8r/ast","<binding-name>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
DEF(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(Yx8rSastYenvironment_module_loader_setter,"x8r/ast","environment-module-loader-setter");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
DEF(Yx8rSastYspecial_set,"x8r/ast","special-set");
EXT(Yx8rSdependencyYLdependency_typeG,"x8r/dependency","<dependency-type>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
DEF(Yx8rSastYmodule_target_environment_setter,"x8r/ast","module-target-environment-setter");
EXT(YLfunG,"goo/boot","<fun>");
DEF(Yx8rSastYroll_back_transaction,"x8r/ast","roll-back-transaction");
EXT(Yx8rSsyntaxYsexpr_let_Gcombination,"x8r/syntax","sexpr-let->combination");
EXT(Yx8rSsyntaxYDsexpr_define_generic_tag,"x8r/syntax","$sexpr-define-generic-tag");
DEF(Yx8rSastYexpand_syntax_if,"x8r/ast","expand-syntax-if");
DEF(Yx8rSastYfab_syntax_environment,"x8r/ast","fab-syntax-environment");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
DEF(Yx8rSastYDempty_static_environment,"x8r/ast","$empty-static-environment");
DEF(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
DEF(Yx8rSastYenvironment_module_loader,"x8r/ast","environment-module-loader");
EXT(Yx8rSsyntaxYsexpr_loc_raw_body,"x8r/syntax","sexpr-loc-raw-body");
DEF(Yx8rSastYfunction_display_name,"x8r/ast","function-display-name");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yx8rSsyntaxYsexpr_method_signature,"x8r/syntax","sexpr-method-signature");
DEF(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YOlst,"goo/boot","@lst");
DEF(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yx8rSsyntaxYsexpr_prop_owner,"x8r/syntax","sexpr-prop-owner");
DEF(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_variable,"x8r/syntax","sexpr-syntax-definition-variable");
DEF(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
DEF(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
DEF(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(Yx8rSastYsyntax_environment_excluded_bindings,"x8r/ast","syntax-environment-excluded-bindings");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(Yx8rSastYLapplicationG,"x8r/ast","<application>");
DEF(Yx8rSastYreference_frame_offset_setter,"x8r/ast","reference-frame-offset-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(Yx8rSastYcompile_time_program_setter,"x8r/ast","compile-time-program-setter");
EXT(Yx8rSsyntaxYsexpr_unquote_splicingQ,"x8r/syntax","sexpr-unquote-splicing?");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(Yx8rSastYspecial_compile_time,"x8r/ast","special-compile-time");
DEF(Yx8rSastYobjectify_application,"x8r/ast","objectify-application");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(Yx8rSastYfunction_kind,"x8r/ast","function-kind");
EXT(Yx8rSsyntaxYsexpr_function_body,"x8r/syntax","sexpr-function-body");
DEF(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
DEF(Yx8rSastYinit_ast,"x8r/ast","init-ast");
DEF(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
DEF(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(YgooStypesYas,"goo/types","as");
DEF(Yx8rSastYobjectify_assignment_using,"x8r/ast","objectify-assignment-using");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(Yx8rSastYtransaction_dependents_setter,"x8r/ast","transaction-dependents-setter");
DEF(Yx8rSastYspecial_syntax_if,"x8r/ast","special-syntax-if");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(Yx8rSastYLvariable_definitionG,"x8r/ast","<variable-definition>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
DEF(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
DEF(Yx8rSastYspecial_define_primitive,"x8r/ast","special-define-primitive");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yx8rSsyntaxYsexpr_prop_type,"x8r/syntax","sexpr-prop-type");
DEF(Yx8rSastYbinding_name_setter,"x8r/ast","binding-name-setter");
DEF(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(Yx8rSastYalternative_alternant_setter,"x8r/ast","alternative-alternant-setter");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
DEF(Yx8rSastYconvert2arguments,"x8r/ast","convert2arguments");
DEF(Yx8rSastYprogram_register,"x8r/ast","program-register");
DEF(Yx8rSastYruntime_core_environment,"x8r/ast","runtime-core-environment");
DEF(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
DEF(Yx8rSastYsequential,"x8r/ast","sequential");
DEF(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
DEF(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
DEF(Yx8rSastYDsexpr_boundQ_tag,"x8r/ast","$sexpr-bound?-tag");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
DEF(Yx8rSastYensure_module_data,"x8r/ast","ensure-module-data");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
DEF(Yx8rSastYLast_method_definitionG,"x8r/ast","<ast-method-definition>");
DEF(Yx8rSastYmodule_syntax_environment_setter,"x8r/ast","module-syntax-environment-setter");
DEF(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(Yx8rSastYDfab_list_empty,"x8r/ast","$fab-list-empty");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(Yx8rSastYmonitor_main_thunk_setter,"x8r/ast","monitor-main-thunk-setter");
DEF(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
DEF(Yx8rSastYmodule_loader_modules_setter,"x8r/ast","module-loader-modules-setter");
EXT(Yx8rSsyntaxYsexpr_loc_bound_bodies,"x8r/syntax","sexpr-loc-bound-bodies");
DEF(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yx8rSsyntaxYsexpr_text_of_quotation,"x8r/syntax","sexpr-text-of-quotation");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
DEF(Yx8rSastYinstall_magic_bindings,"x8r/ast","install-magic-bindings");
EXT(Yx8rSsyntaxYDsexpr_quasiquote_tag,"x8r/syntax","$sexpr-quasiquote-tag");
EXT(Yx8rSdependencyYDempty_dependency,"x8r/dependency","$empty-dependency");
DEF(Yx8rSastYLtransactionG,"x8r/ast","<transaction>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yx8rSsyntaxYsexpr_syntax_if_else,"x8r/syntax","sexpr-syntax-if-else");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(Yx8rSsyntaxYsexpr_fab_getter,"x8r/syntax","sexpr-fab-getter");
EXT(Yx8rSdependencyYdetach_dependent,"x8r/dependency","detach-dependent");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yx8rSdependencyYDall_dependency_types,"x8r/dependency","$all-dependency-types");
EXT(YgooSmagYG,"goo/mag",">");
DEF(Yx8rSastYspecial_prop,"x8r/ast","special-prop");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(Yx8rSastYalternative_condition_setter,"x8r/ast","alternative-condition-setter");
DEF(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
DEF(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yx8rSdependencyYinvalidate_dependents,"x8r/dependency","invalidate-dependents");
DEF(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yx8rSsyntaxYDsexpr_isa_tag,"x8r/syntax","$sexpr-isa-tag");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(Yx8rSastYalternative_consequent_setter,"x8r/ast","alternative-consequent-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yx8rSsyntaxYsexpr_isa_init_values,"x8r/syntax","sexpr-isa-init-values");
DEF(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
DEF(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
DEF(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
DEF(Yx8rSastYLstatic_local_environmentG,"x8r/ast","<static-local-environment>");
DEF(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
DEF(Yx8rSastYspecial_isa,"x8r/ast","special-isa");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(Yx8rSastYreload_modules,"x8r/ast","reload-modules");
DEF(Yx8rSastYenvironment_next_setter,"x8r/ast","environment-next-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yx8rSsyntaxYsexpr_fab_setter_name,"x8r/syntax","sexpr-fab-setter-name");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yx8rSsyntaxYsexpr_loc_bound_names,"x8r/syntax","sexpr-loc-bound-names");
DEF(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
DEF(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
DEF(Yx8rSastYspecial_macro_expand,"x8r/ast","special-macro-expand");
DEF(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
DEF(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
DEF(Yx8rSastYmerge_transactionsX,"x8r/ast","merge-transactions!");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
DEF(Yx8rSastYspecial_quote,"x8r/ast","special-quote");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
DEF(Yx8rSastYspecial_compile_time_also,"x8r/ast","special-compile-time-also");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(Yx8rSastYDsexpr_define_static_syntax_tag,"x8r/ast","$sexpr-define-static-syntax-tag");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(Yx8rSastYapplication_tailQ_setter,"x8r/ast","application-tail?-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
DEF(Yx8rSastYenvironment_next,"x8r/ast","environment-next");
DEF(Yx8rSastYast_macro_expand,"x8r/ast","ast-macro-expand");
DEF(Yx8rSastYobjectify_function_definition,"x8r/ast","objectify-function-definition");
DEF(Yx8rSastYobjectify_alternative,"x8r/ast","objectify-alternative");
EXT(YLsigG,"goo/boot","<sig>");
DEF(Yx8rSastYpairize,"x8r/ast","pairize");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
DEF(Yx8rSastYspecial_define,"x8r/ast","special-define");
EXT(Yx8rSsyntaxYsexpr_forward_primitiveQ,"x8r/syntax","sexpr-forward-primitive?");
DEF(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(Yx8rSsyntaxYDsexpr_locals_tag,"x8r/syntax","$sexpr-locals-tag");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yx8rSsyntaxYsexpr_signature_value,"x8r/syntax","sexpr-signature-value");
DEF(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(Yx8rSastYobjectify_binding,"x8r/ast","objectify-binding");
EXT(Yx8rSsyntaxYsexpr_prop_name,"x8r/syntax","sexpr-prop-name");
DEF(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(Yx8rSastYTcurrent_dependentT,"x8r/ast","*current-dependent*");
DEF(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(Yx8rSastYobjectify_raw,"x8r/ast","objectify-raw");
DEF(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
DEF(Yx8rSastYfab_list,"x8r/ast","fab-list");
DEF(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooScolsSbufYbuf,"goo/cols/buf","buf");
DEF(Yx8rSastYspecial_if,"x8r/ast","special-if");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(Yx8rSastYassignment_binding_setter,"x8r/ast","assignment-binding-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLanyG,"goo/boot","<any>");
DEF(Yx8rSastYmodule_loader_stack_setter,"x8r/ast","module-loader-stack-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(Yx8rSastYobjectify_useSexport_module,"x8r/ast","objectify-use/export-module");
EXT(Yx8rSsyntaxYDsexpr_macro_expand_tag,"x8r/syntax","$sexpr-macro-expand-tag");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(Yx8rSastYreloader_do_use_module,"x8r/ast","reloader-do-use-module");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(Yx8rSastYmodule_data_processedQ_setter,"x8r/ast","module-data-processed?-setter");
EXT(Yx8rSsyntaxYsexpr_bind_pattern_variables,"x8r/syntax","sexpr-bind-pattern-variables");
DEF(Yx8rSastYtransaction_implemented_bindings_setter,"x8r/ast","transaction-implemented-bindings-setter");
DEF(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
DEF(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
DEF(Yx8rSastYLruntime_module_loaderG,"x8r/ast","<runtime-module-loader>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yx8rSsyntaxYsexpr_operands,"x8r/syntax","sexpr-operands");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YLlogG,"goo/boot","<log>");
DEF(Yx8rSastYDsexpr_Praw_tag,"x8r/ast","$sexpr-%raw-tag");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(Yx8rSastYobjectify_boundQ,"x8r/ast","objectify-bound?");
EXT(Ytype_object,"goo/boot","type-object");
DEF(Yx8rSastYenvironment_module_setter,"x8r/ast","environment-module-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yx8rSsyntaxYsexpr_method_body,"x8r/syntax","sexpr-method-body");
EXT(YLclassG,"goo/boot","<class>");
DEF(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yx8rSsyntaxYsexpr_prop_init,"x8r/syntax","sexpr-prop-init");
DEF(Yx8rSastYinsert_globalsX,"x8r/ast","insert-globals!");
DEF(Yx8rSastYinit_g2c_regular_environment,"x8r/ast","init-g2c-regular-environment");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yx8rSsyntaxYDsexpr_iterate_tag,"x8r/syntax","$sexpr-iterate-tag");
DEF(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
DEF(Yx8rSastYDsexpr_export_tag,"x8r/ast","$sexpr-export-tag");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_protected_form,"x8r/syntax","sexpr-unwind-protect-protected-form");
DEF(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yx8rSdependencyYlog_dependency,"x8r/dependency","log-dependency");
DEF(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(Yx8rSastYreloader_do_runtime_binding,"x8r/ast","reloader-do-runtime-binding");
EXT(YLseqG,"goo/boot","<seq>");
DEF(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(Yx8rSastYobjectify_locals,"x8r/ast","objectify-locals");
DEF(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yx8rSsyntaxYsexpr_isa_init_props,"x8r/syntax","sexpr-isa-init-props");
DEF(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
DEF(Yx8rSastYPmodule_exports_setter,"x8r/ast","%module-exports-setter");
DEF(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
DEF(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
DEF(Yx8rSastYspecial_locals,"x8r/ast","special-locals");
DEF(Yx8rSastYLstatic_empty_environmentG,"x8r/ast","<static-empty-environment>");
EXT(Yx8rSdependencyYdependency_emptyQ,"x8r/dependency","dependency-empty?");
DEF(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(Yx8rSastYspecial_method,"x8r/ast","special-method");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yx8rSdependencyYdependency_includes_anyQ,"x8r/dependency","dependency-includes-any?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(Yx8rSdependencyYDexpansion_parse_dependency,"x8r/dependency","$expansion-parse-dependency");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
DEF(Yx8rSastYfind_binding,"x8r/ast","find-binding");
DEF(Yx8rSastYbinding_index,"x8r/ast","binding-index");
DEF(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(Yx8rSsyntaxYDsexpr_unwind_protect_tag,"x8r/syntax","$sexpr-unwind-protect-tag");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
DEF(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
DEF(Yx8rSastYunwind_protect_protected_thunk_setter,"x8r/ast","unwind-protect-protected-thunk-setter");
DEF(Yx8rSastYDsexpr_define_primitive_tag,"x8r/ast","$sexpr-define-primitive-tag");
EXT(Yx8rSdependencyYfind_dependency,"x8r/dependency","find-dependency");
DEF(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(Yx8rSastYr_extendT,"x8r/ast","r-extend*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yx8rSsyntaxYsexpr_monitor_expand,"x8r/syntax","sexpr-monitor-expand");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yx8rSsyntaxYDsexpr_begin_tag,"x8r/syntax","$sexpr-begin-tag");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(Yx8rSsyntaxYsexpr_if_else,"x8r/syntax","sexpr-if-else");
DEF(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(Yx8rSsyntaxYDsexpr_let_tag,"x8r/syntax","$sexpr-let-tag");
EXT(YgooSmathYT,"goo/math","*");
DEF(Yx8rSastYtransaction_register_implemented_binding,"x8r/ast","transaction-register-implemented-binding");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
DEF(Yx8rSastYbinding_name,"x8r/ast","binding-name");
DEF(Yx8rSastYDfree_environment_empty,"x8r/ast","$free-environment-empty");
DEF(Yx8rSastYapplication_arguments_setter,"x8r/ast","application-arguments-setter");
DEF(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(Yx8rSastYobjectify_sequential,"x8r/ast","objectify-sequential");
DEF(Yx8rSastYexpand_bind_element,"x8r/ast","expand-bind-element");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(Yx8rSastYfree_environment,"x8r/ast","free-environment");
DEF(Yx8rSastYbind_exit_main_fun_setter,"x8r/ast","bind-exit-main-fun-setter");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
DEF(Yx8rSastYexpand_bind_list,"x8r/ast","expand-bind-list");
DEF(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
DEF(Yx8rSastYspecial_unwind_protect,"x8r/ast","special-unwind-protect");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(Yx8rSastYobjectify_export,"x8r/ast","objectify-export");
DEF(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
DEF(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
DEF(Yx8rSastYspecial_define_static_syntax,"x8r/ast","special-define-static-syntax");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(Yx8rSastYbinding_freeQ,"x8r/ast","binding-free?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(Yx8rSastYTmacro_tracingQT,"x8r/ast","*macro-tracing?*");
DEF(Yx8rSastYfab_static_global_environment,"x8r/ast","fab-static-global-environment");
DEF(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
DEF(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yx8rSsyntaxYDsexpr_define_class_tag,"x8r/syntax","$sexpr-define-class-tag");
DEF(Yx8rSastYspecial_useSexport_module,"x8r/ast","special-use/export-module");
EXT(Yx8rSsyntaxYsexpr_syntax_if_pattern,"x8r/syntax","sexpr-syntax-if-pattern");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(Yx8rSastYframe_bindings,"x8r/ast","frame-bindings");
DEF(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
DEF(Yx8rSastYTruntime_module_loaderT,"x8r/ast","*runtime-module-loader*");
DEF(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
DEF(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
EXT(Yclass_props,"goo/boot","class-props");
DEF(Yx8rSastYmodule_transaction_setter,"x8r/ast","module-transaction-setter");
DEF(Yx8rSastYDsexpr_useSexport_module_tag,"x8r/ast","$sexpr-use/export-module-tag");
DEF(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
DEF(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
DEF(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
DEF(Yx8rSastYas_lst,"x8r/ast","as-lst");
DEF(Yx8rSastYLpredefined_referenceG,"x8r/ast","<predefined-reference>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yx8rSdependencyYDparse_dependencies,"x8r/dependency","$parse-dependencies");
EXT(Yx8rSdependencyYDvalue_optimization_dependency,"x8r/dependency","$value-optimization-dependency");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(Yx8rSastYbinding_handler_setter,"x8r/ast","binding-handler-setter");
DEF(Yx8rSastYboundQ_reference_setter,"x8r/ast","bound?-reference-setter");
EXT(Yx8rSsyntaxYsexpr_assignment_value,"x8r/syntax","sexpr-assignment-value");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(Yx8rSastYbinding_mutableQ_setter,"x8r/ast","binding-mutable?-setter");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
DEF(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
DEF(Yx8rSastYmodule_runtime_data,"x8r/ast","module-runtime-data");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(Yx8rSsyntaxYDsexpr_method_tag,"x8r/syntax","$sexpr-method-tag");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_value,"x8r/syntax","sexpr-syntax-definition-value");
DEF(Yx8rSastYobjectify_list,"x8r/ast","objectify-list");
DEF(Yx8rSastYTrecord_sourceQT,"x8r/ast","*record-source?*");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
DEF(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(Yx8rSsyntaxYsexpr_define_classQ,"x8r/syntax","sexpr-define-class?");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(Yx8rSsyntaxYsexpr_prop_init_var,"x8r/syntax","sexpr-prop-init-var");
DEF(Yx8rSastYobjectify_foreign_reference,"x8r/ast","objectify-foreign-reference");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yx8rSsyntaxYDsexpr_define_method_tag,"x8r/syntax","$sexpr-define-method-tag");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(Yx8rSastYobjectify_syntax_definition,"x8r/ast","objectify-syntax-definition");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_125);
DEFLIT(lit_326);
DEFLIT(lit_165);
DEFLIT(lit_436);
DEFLIT(lit_572);
DEFLIT(lit_78);
DEFLIT(lit_224);
DEFLIT(lit_151);
DEFLIT(lit_368);
DEFLIT(lit_570);
DEFLIT(lit_265);
DEFLIT(lit_440);
DEFLIT(lit_241);
DEFLIT(lit_390);
DEFLIT(lit_481);
DEFLIT(lit_543);
DEFLIT(lit_140);
DEFLIT(lit_502);
DEFLIT(lit_45);
DEFLIT(lit_239);
DEFLIT(lit_208);
DEFLIT(lit_381);
DEFLIT(lit_548);
DEFLIT(lit_93);
DEFLIT(lit_445);
DEFLIT(lit_568);
DEFLIT(lit_336);
DEFLIT(lit_359);
DEFLIT(lit_469);
DEFLIT(lit_281);
DEFLIT(lit_146);
DEFLIT(lit_346);
DEFLIT(lit_236);
DEFLIT(lit_554);
DEFLIT(lit_319);
DEFLIT(lit_69);
DEFLIT(lit_56);
DEFLIT(lit_516);
DEFLIT(lit_290);
DEFLIT(lit_495);
DEFLIT(lit_419);
DEFLIT(lit_257);
DEFLIT(lit_401);
DEFLIT(lit_203);
DEFLIT(lit_392);
DEFLIT(lit_68);
DEFLIT(lit_301);
DEFLIT(lit_249);
DEFLIT(lit_240);
DEFLIT(lit_575);
DEFLIT(lit_14);
DEFLIT(lit_131);
DEFLIT(lit_438);
DEFLIT(lit_235);
DEFLIT(lit_525);
DEFLIT(lit_308);
DEFLIT(lit_118);
DEFLIT(lit_171);
DEFLIT(lit_484);
DEFLIT(lit_21);
DEFLIT(lit_169);
DEFLIT(lit_351);
DEFLIT(lit_157);
DEFLIT(lit_190);
DEFLIT(lit_123);
DEFLIT(lit_429);
DEFLIT(lit_425);
DEFLIT(lit_101);
DEFLIT(lit_117);
DEFLIT(lit_329);
DEFLIT(lit_472);
DEFLIT(lit_277);
DEFLIT(lit_266);
DEFLIT(lit_580);
DEFLIT(lit_356);
DEFLIT(lit_198);
DEFLIT(lit_538);
DEFLIT(lit_225);
DEFLIT(lit_595);
DEFLIT(lit_186);
DEFLIT(lit_496);
DEFLIT(lit_581);
DEFLIT(lit_250);
DEFLIT(lit_132);
DEFLIT(lit_437);
DEFLIT(lit_218);
DEFLIT(lit_47);
DEFLIT(lit_564);
DEFLIT(lit_222);
DEFLIT(lit_370);
DEFLIT(lit_465);
DEFLIT(lit_296);
DEFLIT(lit_193);
DEFLIT(lit_180);
DEFLIT(lit_200);
DEFLIT(lit_539);
DEFLIT(lit_62);
DEFLIT(lit_451);
DEFLIT(lit_585);
DEFLIT(lit_367);
DEFLIT(lit_12);
DEFLIT(lit_122);
DEFLIT(lit_349);
DEFLIT(lit_185);
DEFLIT(lit_50);
DEFLIT(lit_463);
DEFLIT(lit_61);
DEFLIT(lit_532);
DEFLIT(lit_584);
DEFLIT(lit_11);
DEFLIT(lit_262);
DEFLIT(lit_565);
DEFLIT(lit_184);
DEFLIT(lit_188);
DEFLIT(lit_72);
DEFLIT(lit_536);
DEFLIT(lit_108);
DEFLIT(lit_17);
DEFLIT(lit_8);
DEFLIT(lit_380);
DEFLIT(lit_313);
DEFLIT(lit_114);
DEFLIT(lit_546);
DEFLIT(lit_227);
DEFLIT(lit_386);
DEFLIT(lit_71);
DEFLIT(lit_33);
DEFLIT(lit_23);
DEFLIT(lit_24);
DEFLIT(lit_129);
DEFLIT(lit_73);
DEFLIT(lit_512);
DEFLIT(lit_459);
DEFLIT(lit_322);
DEFLIT(lit_103);
DEFLIT(lit_258);
DEFLIT(lit_318);
DEFLIT(lit_274);
DEFLIT(lit_82);
DEFLIT(lit_579);
DEFLIT(lit_458);
DEFLIT(lit_18);
DEFLIT(lit_379);
DEFLIT(lit_562);
DEFLIT(lit_591);
DEFLIT(lit_214);
DEFLIT(lit_204);
DEFLIT(lit_474);
DEFLIT(lit_540);
DEFLIT(lit_406);
DEFLIT(lit_553);
DEFLIT(lit_590);
DEFLIT(lit_391);
DEFLIT(lit_247);
DEFLIT(lit_557);
DEFLIT(lit_434);
DEFLIT(lit_39);
DEFLIT(lit_307);
DEFLIT(lit_213);
DEFLIT(lit_335);
DEFLIT(lit_42);
DEFLIT(lit_36);
DEFLIT(lit_373);
DEFLIT(lit_183);
DEFLIT(lit_116);
DEFLIT(lit_135);
DEFLIT(lit_493);
DEFLIT(lit_371);
DEFLIT(lit_285);
DEFLIT(lit_217);
DEFLIT(lit_369);
DEFLIT(lit_97);
DEFLIT(lit_571);
DEFLIT(lit_115);
DEFLIT(lit_449);
DEFLIT(lit_556);
DEFLIT(lit_234);
DEFLIT(lit_164);
DEFLIT(lit_560);
DEFLIT(lit_533);
DEFLIT(lit_423);
DEFLIT(lit_542);
DEFLIT(lit_413);
DEFLIT(lit_340);
DEFLIT(lit_315);
DEFLIT(lit_40);
DEFLIT(lit_324);
DEFLIT(lit_189);
DEFLIT(lit_201);
DEFLIT(lit_248);
DEFLIT(lit_147);
DEFLIT(lit_535);
DEFLIT(lit_522);
DEFLIT(lit_91);
DEFLIT(lit_523);
DEFLIT(lit_500);
DEFLIT(lit_74);
DEFLIT(lit_508);
DEFLIT(lit_219);
DEFLIT(lit_389);
DEFLIT(lit_400);
DEFLIT(lit_120);
DEFLIT(lit_174);
DEFLIT(lit_87);
DEFLIT(lit_339);
DEFLIT(lit_153);
DEFLIT(lit_343);
DEFLIT(lit_113);
DEFLIT(lit_344);
DEFLIT(lit_494);
DEFLIT(lit_480);
DEFLIT(lit_503);
DEFLIT(lit_302);
DEFLIT(lit_244);
DEFLIT(lit_32);
DEFLIT(lit_150);
DEFLIT(lit_119);
DEFLIT(lit_155);
DEFLIT(lit_433);
DEFLIT(lit_84);
DEFLIT(lit_328);
DEFLIT(lit_404);
DEFLIT(lit_567);
DEFLIT(lit_4);
DEFLIT(lit_179);
DEFLIT(lit_520);
DEFLIT(lit_178);
DEFLIT(lit_432);
DEFLIT(lit_163);
DEFLIT(lit_166);
DEFLIT(lit_521);
DEFLIT(lit_121);
DEFLIT(lit_547);
DEFLIT(lit_28);
DEFLIT(lit_158);
DEFLIT(lit_90);
DEFLIT(lit_396);
DEFLIT(lit_102);
DEFLIT(lit_13);
DEFLIT(lit_109);
DEFLIT(lit_354);
DEFLIT(lit_347);
DEFLIT(lit_499);
DEFLIT(lit_431);
DEFLIT(lit_202);
DEFLIT(lit_566);
DEFLIT(lit_1);
DEFLIT(lit_489);
DEFLIT(lit_149);
DEFLIT(lit_317);
DEFLIT(lit_417);
DEFLIT(lit_452);
DEFLIT(lit_418);
DEFLIT(lit_107);
DEFLIT(lit_506);
DEFLIT(lit_44);
DEFLIT(lit_261);
DEFLIT(lit_111);
DEFLIT(lit_365);
DEFLIT(lit_374);
DEFLIT(lit_10);
DEFLIT(lit_303);
DEFLIT(lit_96);
DEFLIT(lit_468);
DEFLIT(lit_252);
DEFLIT(lit_470);
DEFLIT(lit_15);
DEFLIT(lit_143);
DEFLIT(lit_456);
DEFLIT(lit_364);
DEFLIT(lit_3);
DEFLIT(lit_482);
DEFLIT(lit_283);
DEFLIT(lit_519);
DEFLIT(lit_221);
DEFLIT(lit_325);
DEFLIT(lit_128);
DEFLIT(lit_294);
DEFLIT(lit_312);
DEFLIT(lit_29);
DEFLIT(lit_191);
DEFLIT(lit_550);
DEFLIT(lit_279);
DEFLIT(lit_501);
DEFLIT(lit_537);
DEFLIT(lit_280);
DEFLIT(lit_286);
DEFLIT(lit_41);
DEFLIT(lit_563);
DEFLIT(lit_206);
DEFLIT(lit_361);
DEFLIT(lit_77);
DEFLIT(lit_382);
DEFLIT(lit_99);
DEFLIT(lit_309);
DEFLIT(lit_205);
DEFLIT(lit_253);
DEFLIT(lit_332);
DEFLIT(lit_515);
DEFLIT(lit_216);
DEFLIT(lit_529);
DEFLIT(lit_586);
DEFLIT(lit_270);
DEFLIT(lit_453);
DEFLIT(lit_454);
DEFLIT(lit_466);
DEFLIT(lit_455);
DEFLIT(lit_242);
DEFLIT(lit_514);
DEFLIT(lit_291);
DEFLIT(lit_81);
DEFLIT(lit_420);
DEFLIT(lit_215);
DEFLIT(lit_450);
DEFLIT(lit_53);
DEFLIT(lit_342);
DEFLIT(lit_305);
DEFLIT(lit_549);
DEFLIT(lit_161);
DEFLIT(lit_269);
DEFLIT(lit_127);
DEFLIT(lit_34);
DEFLIT(lit_228);
DEFLIT(lit_52);
DEFLIT(lit_377);
DEFLIT(lit_491);
DEFLIT(lit_323);
DEFLIT(lit_388);
DEFLIT(lit_58);
DEFLIT(lit_106);
DEFLIT(lit_110);
DEFLIT(lit_230);
DEFLIT(lit_60);
DEFLIT(lit_172);
DEFLIT(lit_49);
DEFLIT(lit_207);
DEFLIT(lit_76);
DEFLIT(lit_65);
DEFLIT(lit_89);
DEFLIT(lit_447);
DEFLIT(lit_412);
DEFLIT(lit_300);
DEFLIT(lit_444);
DEFLIT(lit_360);
DEFLIT(lit_394);
DEFLIT(lit_446);
DEFLIT(lit_441);
DEFLIT(lit_64);
DEFLIT(lit_593);
DEFLIT(lit_57);
DEFLIT(lit_409);
DEFLIT(lit_152);
DEFLIT(lit_314);
DEFLIT(lit_148);
DEFLIT(lit_485);
DEFLIT(lit_410);
DEFLIT(lit_363);
DEFLIT(lit_478);
DEFLIT(lit_587);
DEFLIT(lit_555);
DEFLIT(lit_577);
DEFLIT(lit_237);
DEFLIT(lit_243);
DEFLIT(lit_293);
DEFLIT(lit_145);
DEFLIT(lit_467);
DEFLIT(lit_27);
DEFLIT(lit_139);
DEFLIT(lit_136);
DEFLIT(lit_355);
DEFLIT(lit_137);
DEFLIT(lit_95);
DEFLIT(lit_414);
DEFLIT(lit_272);
DEFLIT(lit_526);
DEFLIT(lit_246);
DEFLIT(lit_26);
DEFLIT(lit_278);
DEFLIT(lit_471);
DEFLIT(lit_104);
DEFLIT(lit_333);
DEFLIT(lit_345);
DEFLIT(lit_271);
DEFLIT(lit_457);
DEFLIT(lit_197);
DEFLIT(lit_212);
DEFLIT(lit_352);
DEFLIT(lit_311);
DEFLIT(lit_22);
DEFLIT(lit_199);
DEFLIT(lit_545);
DEFLIT(lit_316);
DEFLIT(lit_196);
DEFLIT(lit_576);
DEFLIT(lit_88);
DEFLIT(lit_98);
DEFLIT(lit_334);
DEFLIT(lit_594);
DEFLIT(lit_260);
DEFLIT(lit_154);
DEFLIT(lit_256);
DEFLIT(lit_507);
DEFLIT(lit_46);
DEFLIT(lit_348);
DEFLIT(lit_105);
DEFLIT(lit_583);
DEFLIT(lit_156);
DEFLIT(lit_284);
DEFLIT(lit_415);
DEFLIT(lit_231);
DEFLIT(lit_362);
DEFLIT(lit_142);
DEFLIT(lit_490);
DEFLIT(lit_133);
DEFLIT(lit_25);
DEFLIT(lit_574);
DEFLIT(lit_298);
DEFLIT(lit_0);
DEFLIT(lit_513);
DEFLIT(lit_6);
DEFLIT(lit_59);
DEFLIT(lit_195);
DEFLIT(lit_439);
DEFLIT(lit_38);
DEFLIT(lit_16);
DEFLIT(lit_220);
DEFLIT(lit_181);
DEFLIT(lit_276);
DEFLIT(lit_259);
DEFLIT(lit_582);
DEFLIT(lit_287);
DEFLIT(lit_263);
DEFLIT(lit_159);
DEFLIT(lit_187);
DEFLIT(lit_541);
DEFLIT(lit_331);
DEFLIT(lit_387);
DEFLIT(lit_210);
DEFLIT(lit_19);
DEFLIT(lit_464);
DEFLIT(lit_232);
DEFLIT(lit_528);
DEFLIT(lit_211);
DEFLIT(lit_304);
DEFLIT(lit_558);
DEFLIT(lit_79);
DEFLIT(lit_397);
DEFLIT(lit_338);
DEFLIT(lit_320);
DEFLIT(lit_75);
DEFLIT(lit_48);
DEFLIT(lit_289);
DEFLIT(lit_366);
DEFLIT(lit_176);
DEFLIT(lit_578);
DEFLIT(lit_9);
DEFLIT(lit_226);
DEFLIT(lit_517);
DEFLIT(lit_288);
DEFLIT(lit_233);
DEFLIT(lit_487);
DEFLIT(lit_510);
DEFLIT(lit_527);
DEFLIT(lit_92);
DEFLIT(lit_443);
DEFLIT(lit_327);
DEFLIT(lit_124);
DEFLIT(lit_509);
DEFLIT(lit_403);
DEFLIT(lit_448);
DEFLIT(lit_569);
DEFLIT(lit_144);
DEFLIT(lit_483);
DEFLIT(lit_531);
DEFLIT(lit_54);
DEFLIT(lit_175);
DEFLIT(lit_223);
DEFLIT(lit_385);
DEFLIT(lit_321);
DEFLIT(lit_479);
DEFLIT(lit_2);
DEFLIT(lit_376);
DEFLIT(lit_268);
DEFLIT(lit_20);
DEFLIT(lit_559);
DEFLIT(lit_589);
DEFLIT(lit_393);
DEFLIT(lit_70);
DEFLIT(lit_426);
DEFLIT(lit_592);
DEFLIT(lit_37);
DEFLIT(lit_251);
DEFLIT(lit_358);
DEFLIT(lit_407);
DEFLIT(lit_5);
DEFLIT(lit_162);
DEFLIT(lit_473);
DEFLIT(lit_475);
DEFLIT(lit_476);
DEFLIT(lit_31);
DEFLIT(lit_67);
DEFLIT(lit_561);
DEFLIT(lit_273);
DEFLIT(lit_138);
DEFLIT(lit_86);
DEFLIT(lit_383);
DEFLIT(lit_292);
DEFLIT(lit_170);
DEFLIT(lit_126);
DEFLIT(lit_94);
DEFLIT(lit_378);
DEFLIT(lit_55);
DEFLIT(lit_518);
DEFLIT(lit_551);
DEFLIT(lit_168);
DEFLIT(lit_275);
DEFLIT(lit_141);
DEFLIT(lit_442);
DEFLIT(lit_399);
DEFLIT(lit_408);
DEFLIT(lit_192);
DEFLIT(lit_112);
DEFLIT(lit_477);
DEFLIT(lit_430);
DEFLIT(lit_306);
DEFLIT(lit_411);
DEFLIT(lit_167);
DEFLIT(lit_421);
DEFLIT(lit_427);
DEFLIT(lit_504);
DEFLIT(lit_552);
DEFLIT(lit_424);
DEFLIT(lit_534);
DEFLIT(lit_134);
DEFLIT(lit_353);
DEFLIT(lit_505);
DEFLIT(lit_511);
DEFLIT(lit_100);
DEFLIT(lit_497);
DEFLIT(lit_51);
DEFLIT(lit_254);
DEFLIT(lit_486);
DEFLIT(lit_544);
DEFLIT(lit_488);
DEFLIT(lit_209);
DEFLIT(lit_341);
DEFLIT(lit_492);
DEFLIT(lit_462);
DEFLIT(lit_299);
DEFLIT(lit_573);
DEFLIT(lit_435);
DEFLIT(lit_405);
DEFLIT(lit_182);
DEFLIT(lit_372);
DEFLIT(lit_85);
DEFLIT(lit_238);
DEFLIT(lit_330);
DEFLIT(lit_395);
DEFLIT(lit_245);
DEFLIT(lit_295);
DEFLIT(lit_43);
DEFLIT(lit_267);
DEFLIT(lit_264);
DEFLIT(lit_30);
DEFLIT(lit_428);
DEFLIT(lit_498);
DEFLIT(lit_35);
DEFLIT(lit_66);
DEFLIT(lit_173);
DEFLIT(lit_524);
DEFLIT(lit_255);
DEFLIT(lit_160);
DEFLIT(lit_229);
DEFLIT(lit_80);
DEFLIT(lit_297);
DEFLIT(lit_398);
DEFLIT(lit_83);
DEFLIT(lit_461);
DEFLIT(lit_63);
DEFLIT(lit_422);
DEFLIT(lit_194);
DEFLIT(lit_350);
DEFLIT(lit_7);
DEFLIT(lit_530);
DEFLIT(lit_402);
DEFLIT(lit_416);
DEFLIT(lit_310);
DEFLIT(lit_384);
DEFLIT(lit_282);
DEFLIT(lit_357);
DEFLIT(lit_177);
DEFLIT(lit_130);
DEFLIT(lit_375);
DEFLIT(lit_588);
DEFLIT(lit_460);
DEFLIT(lit_337);

/* FUNCTIONS: */

LOCFOR(fun_x_1414_0);
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
LOCFOR(fun_x_1418_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1422_107);
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
LOCFOR(fun_x_1435_346);
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
LOCFOR(fun_x_1439_401);
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

FUNCODEDEF(fun_x_1414_0) {
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
  P saved_dependentF1568;
  P x_1413F1567;
  P x_1413F1566;
  P x_1413F1565;
  P bodyF1564;
  P dependentF1563;
  P x_1413F1562;
  P x_1414F1561;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1414_0,1);
  x_1414F1561 = T1;
  FUNINIT(x_1414F1561, 1,return_);
  x_1413F1562 = FREEREF(0);
  dependentF1563 = YPfalse;
  dependentF1563 = BOXFAB(dependentF1563);
  bodyF1564 = YPfalse;
  bodyF1564 = BOXFAB(bodyF1564);
  T7 = CALL2(1,VARREF(YisaQ),x_1413F1562,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1413F1562,LITREF(lit_6),x_1414F1561);
    x_1413F1565 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1413F1565,x_1414F1561);
    BOXVAL(dependentF1563) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1413F1565);
    x_1413F1566 = T12;
    BOXVAL(bodyF1564) = x_1413F1566;
    x_1413F1567 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1413F1567,x_1414F1561);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1414F1561,LITREF(lit_7),x_1413F1562);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF1568 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T24 = CALL1(1,VARREF(Ylst),saved_dependentF1568);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T31 = BOXVAL(dependentF1563);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALLN(1,VARREF(YgooSmacrosYcat),4,T28,T29,T30,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T38 = BOXVAL(bodyF1564);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),saved_dependentF1568);
  T40 = CALLN(1,VARREF(YgooSmacrosYcat),4,T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALLN(1,VARREF(YgooSmacrosYcat),4,T34,T35,T39,Ynil);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(Yerror),YPfalse,message_,arguments_);
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
  P bF1569;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_binding),f_);
  bF1569 = T1;
  if (bF1569 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),bF1569);
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),bF1569);
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
  P nameF1570;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(Yx8rSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_display_name),dependent_);
  nameF1570 = T1;
  T3 = CALL2(1,VARREF(Yx8rSdependencyYdependency_includes_anyQ),dtype_,VARREF(Yx8rSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_133),nameF1570);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(Yx8rSdependencyYdependency_includes_anyQ),dtype_,VARREF(Yx8rSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_134),nameF1570);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_135),nameF1570);
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
  P loopF1571;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_102,1);
  loopF1571 = T1;
  FUNINIT(loopF1571, 1,loopF1571);
  T2 = CALL2(0,loopF1571,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1418_104) {
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
  P DemptyF1582;
  P classF1581;
  P x_1417F1580;
  P x_1417F1579;
  P x_1417F1578;
  P x_1417F1577;
  P x_1417F1576;
  P supersF1575;
  P nameF1574;
  P x_1417F1573;
  P x_1418F1572;
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
  T1 = FUNSHELL(0,fun_x_1418_104,1);
  x_1418F1572 = T1;
  FUNINIT(x_1418F1572, 1,return_);
  x_1417F1573 = FREEREF(0);
  nameF1574 = YPfalse;
  nameF1574 = BOXFAB(nameF1574);
  supersF1575 = YPfalse;
  supersF1575 = BOXFAB(supersF1575);
  T7 = CALL2(1,VARREF(YisaQ),x_1417F1573,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1417F1573,LITREF(lit_142),x_1418F1572);
    x_1417F1576 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1417F1576,x_1418F1572);
    BOXVAL(nameF1574) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1417F1576);
    x_1417F1577 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1417F1577,x_1418F1572);
    x_1417F1578 = T14;
    BOXVAL(supersF1575) = x_1417F1578;
    x_1417F1579 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1417F1579,x_1418F1572);
    T15 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1417F1577);
    x_1417F1580 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1417F1580,x_1418F1572);
    T13 = T18;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1418F1572,LITREF(lit_7),x_1417F1573);
  }
  T22 = BOXVAL(nameF1574);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_143),T22,LITREF(lit_144));
  classF1581 = T21;
  T25 = BOXVAL(nameF1574);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_145),T25,LITREF(lit_146));
  DemptyF1582 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_147));
  T31 = CALL1(1,VARREF(Ylst),classF1581);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T35 = BOXVAL(supersF1575);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALLN(1,VARREF(YgooSmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T39 = CALL1(1,VARREF(Ylst),DemptyF1582);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T43 = CALL1(1,VARREF(Ylst),classF1581);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),4,T38,T39,T40,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T56 = CALL1(1,VARREF(Ylst),classF1581);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T60 = CALL1(1,VARREF(Ylst),classF1581);
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
  T80 = CALL1(1,VARREF(Ylst),classF1581);
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
  T99 = CALL1(1,VARREF(Ylst),classF1581);
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
  T110 = CALL1(1,VARREF(Ylst),classF1581);
  T111 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T107 = CALLN(1,VARREF(YgooSmacrosYcat),5,T108,T109,T110,T111,Ynil);
  T106 = CALL1(1,VARREF(Ylst),T107);
  T88 = CALLN(1,VARREF(YgooSmacrosYcat),5,T89,T90,T91,T106,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T114 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T116 = BOXVAL(nameF1574);
  T115 = CALL1(1,VARREF(Ylst),T116);
  T119 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T120 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T118 = CALL3(1,VARREF(YgooSmacrosYcat),T119,T120,Ynil);
  T117 = CALL1(1,VARREF(Ylst),T118);
  T123 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T124 = CALL1(1,VARREF(Ylst),classF1581);
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
  T141 = CALL1(1,VARREF(Ylst),classF1581);
  T139 = CALL3(1,VARREF(YgooSmacrosYcat),T140,T141,Ynil);
  T138 = CALL1(1,VARREF(Ylst),T139);
  T136 = CALL3(1,VARREF(YgooSmacrosYcat),T137,T138,Ynil);
  T135 = CALL1(1,VARREF(Ylst),T136);
  T142 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T143 = CALL1(1,VARREF(Ylst),classF1581);
  T134 = CALLN(1,VARREF(YgooSmacrosYcat),4,T135,T142,T143,Ynil);
  T133 = CALL1(1,VARREF(Ylst),T134);
  T144 = CALL1(1,VARREF(Ylst),DemptyF1582);
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

FUNCODEDEF(fun_x_1422_107) {
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
  P x_1421F1587;
  P x_1421F1586;
  P nameF1585;
  P x_1421F1584;
  P x_1422F1583;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1422_107,1);
  x_1422F1583 = T1;
  FUNINIT(x_1422F1583, 1,return_);
  x_1421F1584 = FREEREF(0);
  nameF1585 = YPfalse;
  nameF1585 = BOXFAB(nameF1585);
  T5 = CALL2(1,VARREF(YisaQ),x_1421F1584,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1421F1584,LITREF(lit_165),x_1422F1583);
    x_1421F1586 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1421F1586,x_1422F1583);
    BOXVAL(nameF1585) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1421F1586);
    x_1421F1587 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1421F1587,x_1422F1583);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1422F1583,LITREF(lit_7),x_1421F1584);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T16 = BOXVAL(nameF1585);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALLN(1,VARREF(YgooSmacrosYcat),4,T14,T15,T17,Ynil);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfree_environmentG),x_);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLsequentialG),x_);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfab_listG),x_);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLargumentsG),x_);
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
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSbufYLbufG),YPint((P)0));
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
  P tmpF1589;
  P tmpF1588;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_40));
  tmpF1588 = T2;
  if (tmpF1588 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),binding_);
    tmpF1589 = T6;
    if (tmpF1589 != YPfalse) {
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
    T2 = CALLN(1,VARREF(Yx8rSastYobjectify_list),4,T3,e_,r_,tailQ_);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_application),4,f_,T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_231) {
  P f_,e_,r_,tailQ_;
  P x_1424F1591;
  P x_1423F1590;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),f_);
  x_1423F1590 = T1;
  x_1424F1591 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1424F1591,x_1423F1590,LITREF(lit_283));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_handler),f_);
    T5 = CALL3(1,T6,e_,r_,tailQ_);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1424F1591,x_1423F1590,LITREF(lit_284));
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
  P refF1592;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYobjectify_symbol),e_,r_);
  refF1592 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSastYboundQ_reference),refF1592);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_242) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF1597;
  P astF1596;
  P target_envF1595;
  P syntax_envF1594;
  P modF1593;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  modF1593 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_syntax_environment),modF1593);
  syntax_envF1594 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),modF1593);
  target_envF1595 = T5;
  T7 = CALL3(1,VARREF(Yx8rSastYobjectify),program_,syntax_envF1594,tailQ_);
  astF1596 = T7;
  CALL1(1,VARREF(Yx8rSastYast_evaluate),astF1596);
  tmpF1597 = rtQ_;
  if (tmpF1597 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF1594,target_envF1595);
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
  P loopF1598;
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
      loopF1598 = T8;
      FUNINIT(loopF1598, 1,loopF1598);
      T9 = CALL1(0,loopF1598,eT_);
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
  P eF1599;
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
    eF1599 = T3;
    T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_defQ),eF1599);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
      T15 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_def_variable),eF1599);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_def_value),eF1599);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,Ynil);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,Ynil);
      T10 = CALL1(1,VARREF(Ylst),T11);
      T19 = CALL1(1,VARREF(Ytail),eT_);
      T18 = CALL1(1,VARREF(Yx8rSastYtransform_defs),T19);
      T8 = CALLN(1,VARREF(YgooSmacrosYcat),4,T9,T10,T18,Ynil);
      T7 = CALL1(1,VARREF(Ylst),T8);
      T6 = CALL2(1,VARREF(YgooSmacrosYcat),T7,Ynil);
      T4 = T6;
    } else {
      T21 = CALL1(1,VARREF(Ylst),eF1599);
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
  P headF1601;
  P tailQF1600;
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
    tailQF1600 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(Yx8rSastYobjectify),T9,FREEREF(1),tailQF1600);
    headF1601 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF1601,res_);
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
  P astsF1603;
  P loopF1602;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_247,3);
  loopF1602 = T2;
  FUNINIT(loopF1602, 3,tailQ_,r_,loopF1602);
  T4 = CALL1(1,VARREF(Yx8rSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF1602,Ynil,T4);
  T1 = T3;
  astsF1603 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYsequentialize),astsF1603);
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
  P eeTF1604;
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
  eeTF1604 = T1;
  T4 = CALLN(1,VARREF(Yx8rSastYprocess_closed_application),4,ff_,eeTF1604,r_,tailQ_);
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
  P fvfF1606;
  P eeTF1605;
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
  eeTF1605 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYreference_binding),ff_);
  fvfF1606 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(Yx8rSastYapplication_binding),fvfF1606,VARREF(Yx8rSastYapplication_arguments),eeTF1605,VARREF(Yx8rSastYapplication_tailQ),tailQ_);
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
  P eeTF1607;
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
  eeTF1607 = T1;
  T4 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLregular_applicationG),VARREF(Yx8rSastYapplication_function),ff_,VARREF(Yx8rSastYapplication_arguments),eeTF1607,VARREF(Yx8rSastYapplication_tailQ),tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_255) {
  P f_,eT_,r_,tailQ_;
  P bF1609;
  P vTF1608;
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
  vTF1608 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_body),f_);
  bF1609 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),f_);
  if (T5 != YPfalse) {
    T6 = CALLN(1,VARREF(Yx8rSastYprocess_nary_closed_application),4,f_,eT_,r_,tailQ_);
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
  P oF1613;
  P vTF1612;
  P gather_argumentsF1611;
  P pack_nary_argsF1610;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_256,1);
  pack_nary_argsF1610 = T1;
  T2 = FUNSHELL(1,fun_gather_arguments_257,4);
  gather_argumentsF1611 = T2;
  FUNINIT(pack_nary_argsF1610, 1,pack_nary_argsF1610);
  FUNINIT(gather_argumentsF1611, 4,pack_nary_argsF1610,r_,f_,gather_argumentsF1611);
  T4 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),f_);
  vTF1612 = T4;
  T7 = CALL1(1,VARREF(Yx8rSastYfunction_specs),f_);
  T8 = CALL2(0,gather_argumentsF1611,eT_,vTF1612);
  T9 = CALL1(1,VARREF(Yx8rSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSastYfix_let_bindings),vTF1612,VARREF(Yx8rSastYfix_let_types),T7,VARREF(Yx8rSastYfix_let_arguments),T8,VARREF(Yx8rSastYfix_let_body),T9);
  oF1613 = T6;
  T10 = CALL1(1,VARREF(YgooScolsSseqYlast),vTF1612);
  CALL2(1,VARREF(Yx8rSastYbinding_dottedQ_setter),YPfalse,T10);
  T5 = oF1613;
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
  P opF1614;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_operator),binding_);
  opF1614 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variableQ),opF1614);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_fab_setter_name),opF1614);
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
  P valF1616;
  P refF1615;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),binding_,r_,YPfalse);
  refF1615 = T1;
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  valF1616 = T3;
  T4 = CALL2(1,VARREF(Yx8rSastYobjectify_assignment_using),refF1615,valF1616);
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
  P tmpF1617;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_319));
  tmpF1617 = T2;
  if (tmpF1617 != YPfalse) {
    T4 = tmpF1617;
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
  P bindingF1625;
  P bindingF1624;
  P mod_nameF1623;
  P foreignQF1622;
  P tmpF1621;
  P modF1620;
  P grF1619;
  P existing_bindingF1618;
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
  existing_bindingF1618 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  grF1619 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYenvironment_module),grF1619);
  modF1620 = T5;
  if (existing_bindingF1618 != YPfalse) {
    T11 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),existing_bindingF1618,modF1620);
    tmpF1621 = T11;
    if (tmpF1621 != YPfalse) {
      T12 = tmpF1621;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF1622 = T9;
    T13 = CALL1(1,VARREF(Yx8rSastYbinding_freeQ),existing_bindingF1618);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(Yx8rSastYbinding_freeQ_setter),YPfalse,existing_bindingF1618);
      if (foreignQF1622 != YPfalse) {
        T15 = CALL1(1,VARREF(Yx8rSastYtransaction_register_implemented_binding),existing_bindingF1618);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF1622 != YPfalse) {
        T18 = CALL1(1,VARREF(Yx8rSastYmodule_name),modF1620);
        T19 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),existing_bindingF1618);
        T17 = CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_325),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(Yx8rSdependencyYinvalidate_dependents),existing_bindingF1618,VARREF(Yx8rSdependencyYDall_dependency_types));
    CALL2(1,VARREF(Yx8rSastYupdate_binding_kind),existing_bindingF1618,kind_);
    T8 = existing_bindingF1618;
    T7 = T8;
  } else {
    T22 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
    T21 = CALL1(1,VARREF(Yx8rSastYmodule_name),T22);
    mod_nameF1623 = T21;
    T24 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),kind_,VARREF(Yx8rSastYbinding_name),name_,VARREF(Yx8rSastYbinding_freeQ),YPfalse,VARREF(Yx8rSastYbinding_module_name),mod_nameF1623);
    bindingF1624 = T24;
    CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1624,grF1619);
    T23 = bindingF1624;
    T20 = T23;
    T7 = T20;
  }
  bindingF1625 = T7;
  T6 = bindingF1625;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_267) {
  P var_,e_,r_;
  P defnF1628;
  P bindingF1627;
  P nameF1626;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variable_name),var_);
  nameF1626 = T1;
  T3 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,r_,nameF1626,YPfalse,LITREF(lit_40));
  bindingF1627 = T3;
  T6 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  T5 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLdefinitionG),VARREF(Yx8rSastYassignment_binding),bindingF1627,VARREF(Yx8rSastYassignment_form),T6);
  defnF1628 = T5;
  T4 = defnF1628;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_268) {
  P x_,r_,tailQ_;
  P expF1629;
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
  expF1629 = T2;
  if (VARREF(Yx8rSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_335));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF1629);
    T4 = CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_336));
  } else {
  }
  T1 = expF1629;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF1633;
  P envF1632;
  P tmpF1631;
  P expandF1630;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_268,1);
  expandF1630 = T1;
  FUNINIT(expandF1630, 1,expander_);
  tmpF1631 = env_or_false_;
  if (tmpF1631 != YPfalse) {
    T4 = tmpF1631;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF1632 = T3;
  T7 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,envF1632,name_,YPfalse,LITREF(lit_284));
  bindingF1633 = T7;
  CALL2(1,VARREF(Yx8rSastYbinding_handler_setter),expandF1630,bindingF1633);
  T6 = bindingF1633;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_270) {
  P name_,e_,r_,rtQ_;
  P bindingF1639;
  P modnameF1638;
  P expanderF1637;
  P ast_expanderF1636;
  P syntax_envF1635;
  P sep_expanderF1634;
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
  sep_expanderF1634 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_syntax_environment),r_);
  syntax_envF1635 = T3;
  T5 = CALL3(1,VARREF(Yx8rSastYobjectify),sep_expanderF1634,syntax_envF1635,YPfalse);
  ast_expanderF1636 = T5;
  T7 = CALL1(1,VARREF(Yx8rSastYast_evaluate),ast_expanderF1636);
  expanderF1637 = T7;
  T10 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(Yx8rSastYmodule_name),T10);
  modnameF1638 = T9;
  T13 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  T12 = CALLN(1,VARREF(YPPmacro),4,modnameF1638,name_,expanderF1637,T13);
  bindingF1639 = T12;
  T15 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF1635,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1639,syntax_envF1635);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(Yx8rSastYobjectify),sep_expanderF1634,r_,YPfalse);
    T18 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_macro_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1639,VARREF(Yx8rSastYassignment_form),T19);
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
  P defnF1642;
  P fF1641;
  P bindingF1640;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,r_,name_,YPfalse,LITREF(lit_40));
  bindingF1640 = T1;
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  fF1641 = T3;
  CALL2(1,VARREF(Yx8rSastYfunction_binding_setter),bindingF1640,fF1641);
  T4 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T4,fF1641);
  T6 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_function_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1640,VARREF(Yx8rSastYassignment_form),fF1641);
  defnF1642 = T6;
  T5 = defnF1642;
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
  P defnF1648;
  P formF1647;
  P bodyF1646;
  P new_rF1645;
  P signatureF1644;
  P bindingF1643;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
loop:
  T1 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,r_,name_,YPfalse,LITREF(lit_343));
  bindingF1643 = T1;
  T3 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),sig_,r_);
  signatureF1644 = T3;
  T6 = CALL1(1,VARREF(Yx8rSastYsignature_bindings),signatureF1644);
  T5 = CALL2(1,VARREF(Yx8rSastYr_extendT),r_,T6);
  new_rF1645 = T5;
  T8 = CALL3(1,VARREF(Yx8rSastYobjectify_sequential),body_,new_rF1645,YPtrue);
  bodyF1646 = T8;
  T11 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLast_primitiveG),VARREF(Yx8rSastYfunction_binding),bindingF1643,VARREF(Yx8rSastYfunction_debug_name),T11,VARREF(Yx8rSastYfunction_signature),signatureF1644,VARREF(Yx8rSastYfunction_body),bodyF1646);
  formF1647 = T10;
  T13 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_primitive_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1643,VARREF(Yx8rSastYassignment_form),formF1647);
  defnF1648 = T13;
  T12 = defnF1648;
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
  P defnF1652;
  P formF1651;
  P signatureF1650;
  P bindingF1649;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,r_,name_,YPfalse,LITREF(lit_40));
  bindingF1649 = T1;
  T3 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),sig_,r_);
  signatureF1650 = T3;
  T6 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLast_genericG),VARREF(Yx8rSastYfunction_binding),bindingF1649,VARREF(Yx8rSastYfunction_debug_name),T6,VARREF(Yx8rSastYfunction_signature),signatureF1650);
  formF1651 = T5;
  T8 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_generic_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1649,VARREF(Yx8rSastYassignment_form),formF1651);
  defnF1652 = T8;
  T7 = defnF1652;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_275) {
  P name_,e_,r_;
  P defnF1658;
  P formF1657;
  P callF1656;
  P metF1655;
  P genF1654;
  P bindingF1653;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,r_,name_,YPtrue,LITREF(lit_40));
  bindingF1653 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_347),name_);
  T3 = CALLN(1,VARREF(Ylst),4,LITREF(lit_346),T4,name_,YPfalse);
  genF1654 = T3;
  T6 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  metF1655 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_348),genF1654,metF1655);
  callF1656 = T8;
  T10 = CALL3(1,VARREF(Yx8rSastYobjectify),callF1656,r_,YPfalse);
  formF1657 = T10;
  T12 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_method_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1653,VARREF(Yx8rSastYassignment_form),formF1657);
  defnF1658 = T12;
  CALL2(1,VARREF(Yx8rSastYfunction_binding_setter),name_,metF1655);
  T13 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T13,metF1655);
  T11 = defnF1658;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_276) {
  P tmpF1659;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF1659 = VARREF(Yx8rSastYTrecord_sourceQT);
  if (tmpF1659 != YPfalse) {
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
  P x_1426F1660;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1426F1660 = VARREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_276,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_277,1,x_1426F1660);
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
  P x_1425F1661;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1425F1661 = VARREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_278,3,sig_,body_,r_);
  T3 = FUNFAB(fun_279,1,x_1425F1661);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_281) {
  P bF1664;
  P new_rF1663;
  P signatureF1662;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF1662 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYsignature_bindings),signatureF1662);
  T3 = CALL2(1,VARREF(Yx8rSastYr_extendT),FREEREF(1),T4);
  new_rF1663 = T3;
  T6 = CALL3(1,VARREF(Yx8rSastYobjectify_sequential),FREEREF(2),new_rF1663,YPtrue);
  bF1664 = T6;
  T7 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(Yx8rSastYfunction_signature_setter),signatureF1662,FREEREF(3));
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),bF1664,FREEREF(3));
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
  P x_1427F1666;
  P methodF1665;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLast_methodG));
  methodF1665 = T1;
  x_1427F1666 = VARREF(Yx8rSastYTcurrent_dependentT);
  VARSET(Yx8rSastYTcurrent_dependentT,methodF1665);
  T4 = FUNFAB(fun_281,4,sig_,r_,body_,methodF1665);
  T5 = FUNFAB(fun_282,1,x_1427F1666);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_284) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF1678;
  P nameF1677;
  P typeF1676;
  P stypeF1675;
  P dottedQF1674;
  P stypeF1673;
  P snameF1672;
  P paramF1671;
  P arityF1670;
  P valueF1669;
  P tmpF1668;
  P sexpr_valueF1667;
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
    sexpr_valueF1667 = T3;
    tmpF1668 = sexpr_valueF1667;
    if (tmpF1668 != YPfalse) {
      T7 = tmpF1668;
    } else {
      T8 = CALL1(1,VARREF(Yx8rSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(Yx8rSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF1669 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF1670 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T15 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T17 = CALL3(1,VARREF(Yx8rSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T18 = CALL3(1,VARREF(Yx8rSastYobjectify),arityF1670,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_bindings),T14,VARREF(Yx8rSastYsignature_names),T15,VARREF(Yx8rSastYsignature_specs),T16,VARREF(Yx8rSastYsignature_naryQ),T17,VARREF(Yx8rSastYsignature_arity),T18,VARREF(Yx8rSastYsignature_value),valueF1669);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T20 = CALL1(1,VARREF(Yhead),params_);
    paramF1671 = T20;
    T22 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variable_name),paramF1671);
    snameF1672 = T22;
    T24 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variable_type),paramF1671);
    stypeF1673 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF1673,VARREF(Yx8rSastYDsexpr_optionals_tag));
    dottedQF1674 = T26;
    if (dottedQF1674 != YPfalse) {
      T28 = VARREF(Yx8rSastYDsexpr_optionals_type_name);
    } else {
      T28 = stypeF1673;
    }
    stypeF1675 = T28;
    T30 = CALL3(1,VARREF(Yx8rSastYobjectify),stypeF1675,FREEREF(1),YPfalse);
    typeF1676 = T30;
    T32 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),snameF1672,FREEREF(1));
    nameF1677 = T32;
    T34 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_name),snameF1672,VARREF(Yx8rSastYbinding_type),typeF1676,VARREF(Yx8rSastYbinding_dottedQ),dottedQF1674);
    bindingF1678 = T34;
    T36 = CALL1(1,VARREF(Ytail),params_);
    T37 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF1678,bindings_);
    T38 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLfab_listG),VARREF(Yhead),nameF1677,VARREF(Ytail),names_);
    T39 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLfab_listG),VARREF(Yhead),typeF1676,VARREF(Ytail),types_);
    a1 = T36;
    a2 = dottedQF1674;
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
  P colF1680;
  P sexpr_paramsF1679;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF1679 = T1;
  T3 = FUNSHELL(1,fun_col_284,3);
  colF1680 = T3;
  FUNINIT(colF1680, 3,sig_,r_,colF1680);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLfab_listG));
  T4 = CALLN(0,colF1680,5,sexpr_paramsF1679,YPfalse,Ynil,T5,T6);
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
  P findF1681;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(Yx8rSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_286,5);
    findF1681 = T3;
    FUNINIT(findF1681, 5,FREEREF(0),i_,r_,FREEREF(1),findF1681);
    T5 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF1681,YPint((P)0),T5);
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
  P loopF1682;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_287,2);
  loopF1682 = T1;
  FUNINIT(loopF1682, 2,loopF1682,binding_);
  T2 = CALL2(0,loopF1682,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_289) {
  P n_,b_,r_;
  P jF1685;
  P iF1684;
  P tup37F1683;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYcompute_local_reference_offsets),b_,r_);
  tup37F1683 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F1683,YPint((P)0));
  iF1684 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F1683,YPint((P)1));
  jF1685 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_binding),b_,VARREF(Yx8rSastYreference_frame_number),iF1684,VARREF(Yx8rSastYreference_frame_offset),jF1685);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_290) {
  P b_;
  P x_1429F1687;
  P x_1428F1686;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
  x_1428F1686 = T1;
  x_1429F1687 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1429F1687,x_1428F1686,LITREF(lit_40));
  if (T4 != YPfalse) {
    T3 = VARREF(Yx8rSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1429F1687,x_1428F1686,LITREF(lit_343));
    if (T6 != YPfalse) {
      T5 = VARREF(Yx8rSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1429F1687,x_1428F1686,LITREF(lit_319));
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
  P LrefGF1691;
  P tmpF1690;
  P x_1431F1689;
  P x_1430F1688;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
  x_1430F1688 = T1;
  x_1431F1689 = VARREF(YgooSmacrosYEE);
  T5 = CALL2(1,x_1431F1689,x_1430F1688,LITREF(lit_283));
  tmpF1690 = T5;
  if (tmpF1690 != YPfalse) {
    T6 = tmpF1690;
  } else {
    T7 = CALL2(1,x_1431F1689,x_1430F1688,LITREF(lit_284));
    T6 = T7;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T3 = b_;
  } else {
    T9 = CALL1(1,VARREF(Yx8rSastYbinding_reference_class),b_);
    LrefGF1691 = T9;
    T10 = CALL3(1,VARREF(Ynew),LrefGF1691,VARREF(Yx8rSastYreference_binding),b_);
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
  P bF1694;
  P tmpF1693;
  P grF1692;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  grF1692 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYenvironment_allows_foreign_namesQ),grF1692);
  tmpF1693 = T4;
  if (tmpF1693 != YPfalse) {
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
    bF1694 = T9;
    CALL2(1,VARREF(Yx8rSastYinsert_globalX),bF1694,grF1692);
    T12 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSastYreference_binding),bF1694);
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
  P bindingF1703;
  P modF1702;
  P loaderF1701;
  P grF1700;
  P tmpF1699;
  P varnameF1698;
  P modnameF1697;
  P breakF1696;
  P namestrF1695;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF1695 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF1695,YPchr((P)58));
  breakF1696 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF1695,YPint((P)0),breakF1696);
  modnameF1697 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF1696);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF1695);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF1695,T8,T9);
  varnameF1698 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF1697);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF1699 = T12;
  if (tmpF1699 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF1698);
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
  grF1700 = T19;
  T21 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),grF1700);
  loaderF1701 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF1697);
  T23 = CALL2(1,VARREF(Yx8rSastYprobe_module),loaderF1701,T24);
  modF1702 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF1698);
  T28 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),modF1702);
  T26 = CALL2(1,VARREF(Yx8rSastYfind_binding),T27,T28);
  bindingF1703 = T26;
  T29 = CALL1(1,VARREF(Ynot),bindingF1703);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(Yerror),LITREF(lit_377),varnameF1698,modnameF1697);
  } else {
  }
  T31 = CALL3(1,VARREF(Yx8rSastYobjectify_binding),name_,bindingF1703,r_);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfunctionsG),x_);
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
  P functionsF1707;
  P function_formsF1706;
  P new_rF1705;
  P bindingsF1704;
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
  bindingsF1704 = T1;
  T4 = CALL2(1,VARREF(Yx8rSastYr_extendT),r_,bindingsF1704);
  new_rF1705 = T4;
  T6 = CALL3(1,VARREF(YgooScolsScolYmap2),VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF1706 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSastYobjectify),new_rF1705,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF1706);
  functionsF1707 = T8;
  T10 = FUNFAB(fun_305,1,r_);
  CALL3(1,VARREF(YgooScolsScolYdo2),T10,functionsF1707,bindingsF1704);
  T12 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfunctionsG),functionsF1707);
  T13 = CALL3(1,VARREF(Yx8rSastYobjectify_sequential),body_,new_rF1705,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLlocalsG),VARREF(Yx8rSastYlocals_bindings),bindingsF1704,VARREF(Yx8rSastYlocals_functions),T12,VARREF(Yx8rSastYlocals_body),T13);
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
  P bindingF1708;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),name_,FREEREF(0));
  bindingF1708 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF1708,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_313,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(Yx8rSastYexport_bindingX),FREEREF(1),name_,bindingF1708);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_315) {
  P names_,r_,tailQ_;
  P moduleF1710;
  P envF1709;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  envF1709 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  moduleF1710 = T3;
  T6 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),moduleF1710);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF1709,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_396));
  } else {
  }
  T8 = FUNFAB(fun_314,2,envF1709,moduleF1710);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYimport_globalX) {
  P b_,env_;
  P tmpF1712;
  P existingF1711;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),T2,env_);
  existingF1711 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1711,YPfalse);
  tmpF1712 = T5;
  if (tmpF1712 != YPfalse) {
    T6 = tmpF1712;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1711,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),b_);
    T8 = CALLN(1,VARREF(YgooSruntimeYformat),4,VARREF(YgooSioSportYout),LITREF(lit_402),T9,T10);
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
  P used_moduleF1716;
  P loaderF1715;
  P moduleF1714;
  P envF1713;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  envF1713 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  moduleF1714 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),envF1713);
  loaderF1715 = T5;
  T7 = CALL2(1,VARREF(Yx8rSastYprobe_module),loaderF1715,name_);
  used_moduleF1716 = T7;
  T8 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),envF1713);
  CALL2(1,VARREF(YgooScolsSbufYpush_lastX),T8,used_moduleF1716);
  T9 = FUNFAB(fun_317,2,envF1713,moduleF1714);
  T10 = CALL1(1,VARREF(Yx8rSastYmodule_exports),used_moduleF1716);
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
  P used_moduleF1719;
  P loaderF1718;
  P envF1717;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  envF1717 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),envF1717);
  loaderF1718 = T3;
  T5 = CALL2(1,VARREF(Yx8rSastYprobe_module),loaderF1718,name_);
  used_moduleF1719 = T5;
  T6 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),envF1717);
  CALL2(1,VARREF(YgooScolsSbufYpush_lastX),T6,used_moduleF1719);
  T7 = FUNFAB(fun_319,1,envF1717);
  T8 = CALL1(1,VARREF(Yx8rSastYmodule_exports),used_moduleF1719);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),4,T1,T2,T3,Ynil);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),4,T1,T2,T3,Ynil);
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
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),4,T1,T2,T10,Ynil);
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
    T10 = CALLN(1,VARREF(YgooSmacrosYcat),4,T11,T12,T13,Ynil);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALLN(1,VARREF(YgooSmacrosYcat),4,T6,T7,T9,Ynil);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALLN(1,VARREF(YgooSmacrosYcat),4,T3,T4,T14,Ynil);
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
      T26 = CALL1(1,VARREF(YgooStypesY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALLN(1,VARREF(YgooSmacrosYcat),4,T24,T25,T27,Ynil);
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
      T31 = CALL1(1,VARREF(Ylst),Ynil);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALLN(1,VARREF(YgooSmacrosYcat),4,T21,T22,T28,Ynil);
      T18 = T20;
    } else {
      if (YPtrue != YPfalse) {
        T34 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
        T42 = CALL1(1,VARREF(Ylst),var_);
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_416));
        T46 = CALL1(1,VARREF(Ylst),var_);
        T47 = CALL1(1,VARREF(Ylst),fail_);
        T44 = CALLN(1,VARREF(YgooSmacrosYcat),4,T45,T46,T47,Ynil);
        T43 = CALL1(1,VARREF(Ylst),T44);
        T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
        T40 = CALL1(1,VARREF(Ylst),T41);
        T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,Ynil);
        T38 = CALL1(1,VARREF(Ylst),T39);
        T49 = CALL3(1,VARREF(Yx8rSastYexpand_bind_list),pat_,var_,fail_);
        T48 = CALL1(1,VARREF(Ylst),T49);
        T36 = CALLN(1,VARREF(YgooSmacrosYcat),4,T37,T38,T48,Ynil);
        T35 = CALL1(1,VARREF(Ylst),T36);
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
        T53 = CALL1(1,VARREF(Ylst),var_);
        T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
        T50 = CALL1(1,VARREF(Ylst),T51);
        T33 = CALLN(1,VARREF(YgooSmacrosYcat),4,T34,T35,T50,Ynil);
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
  T3 = CALLN(1,VARREF(YgooSmacrosYcat),4,T4,T5,T6,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(Yx8rSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_419));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALLN(1,VARREF(YgooSmacrosYcat),4,T11,T12,T13,Ynil);
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
  P epatF1727;
  P failF1726;
  P varF1725;
  P elseF1724;
  P thenF1723;
  P valueF1722;
  P varsF1721;
  P patF1720;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_pattern),x_);
  patF1720 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_bind_pattern_variables),patF1720);
  varsF1721 = T3;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_value),x_);
  valueF1722 = T5;
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_then),x_);
  thenF1723 = T7;
  T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_else),x_);
  elseF1724 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF1725 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF1726 = T13;
  T15 = CALL3(1,VARREF(Yx8rSastYexpand_pattern),patF1720,varF1725,failF1726);
  epatF1727 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_421));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_422));
  T26 = CALL1(1,VARREF(Ylst),failF1726);
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
  T40 = CALL1(1,VARREF(Ylst),elseF1724);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T37,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T48 = CALL1(1,VARREF(Ylst),varF1725);
  T49 = CALL1(1,VARREF(Ylst),valueF1722);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T55 = fun_329;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF1721);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF1727);
  T57 = CALL1(1,VARREF(Ylst),thenF1723);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),5,T52,T53,T56,T57,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T42 = CALLN(1,VARREF(YgooSmacrosYcat),4,T43,T44,T50,Ynil);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T20 = CALLN(1,VARREF(YgooSmacrosYcat),4,T21,T22,T41,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALLN(1,VARREF(YgooSmacrosYcat),4,T17,T18,T19,Ynil);
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
  P rF1728;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(Yx8rSastYLstatic_global_environmentG));
  rF1728 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),rF1728);
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_setter),binding_,T3,T4);
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
  P loopF1729;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_339,3);
  loopF1729 = T1;
  FUNINIT(loopF1729, 3,name_,r_,loopF1729);
  T3 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF1729,T3);
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
  P tmpF1730;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF1730 = T1;
  if (tmpF1730 != YPfalse) {
    T3 = tmpF1730;
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

FUNCODEDEF(fun_x_1435_346) {
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
  P sexpr_nameF1743;
  P special_nameF1742;
  P x_1434F1741;
  P x_1434F1740;
  P x_1434F1739;
  P x_1434F1738;
  P x_1434F1737;
  P x_1434F1736;
  P bodyF1735;
  P paramsF1734;
  P nameF1733;
  P x_1434F1732;
  P x_1435F1731;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1435_346,1);
  x_1435F1731 = T1;
  FUNINIT(x_1435F1731, 1,return_);
  x_1434F1732 = FREEREF(0);
  nameF1733 = YPfalse;
  nameF1733 = BOXFAB(nameF1733);
  paramsF1734 = YPfalse;
  paramsF1734 = BOXFAB(paramsF1734);
  bodyF1735 = YPfalse;
  bodyF1735 = BOXFAB(bodyF1735);
  T9 = CALL2(1,VARREF(YisaQ),x_1434F1732,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1434F1732,LITREF(lit_435),x_1435F1731);
    x_1434F1736 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1434F1736,x_1435F1731);
    BOXVAL(nameF1733) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1434F1736);
    x_1434F1737 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1434F1737,x_1435F1731);
    x_1434F1738 = T16;
    BOXVAL(paramsF1734) = x_1434F1738;
    x_1434F1739 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1434F1739,x_1435F1731);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1434F1737);
    x_1434F1740 = T19;
    BOXVAL(bodyF1735) = x_1434F1740;
    x_1434F1741 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1434F1741,x_1435F1731);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1435F1731,LITREF(lit_7),x_1434F1732);
  }
  T25 = BOXVAL(nameF1733);
  T24 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_436),T25);
  special_nameF1742 = T24;
  T28 = BOXVAL(nameF1733);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_437),T28,LITREF(lit_438));
  sexpr_nameF1743 = T27;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T34 = CALL1(1,VARREF(Ylst),special_nameF1742);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_283));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),sexpr_nameF1743);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_41));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_439));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_440));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_441));
  T54 = BOXVAL(paramsF1734);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(bodyF1735);
  T50 = CALLN(1,VARREF(YgooSmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T57 = CALL1(1,VARREF(Ylst),YPfalse);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),13,T37,T38,T39,T40,T44,T45,T46,T47,T48,T49,T56,T57,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALLN(1,VARREF(YgooSmacrosYcat),4,T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_432));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T65 = BOXVAL(nameF1733);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T66 = CALL1(1,VARREF(Ylst),special_nameF1742);
  T59 = CALLN(1,VARREF(YgooSmacrosYcat),4,T60,T61,T66,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T29 = CALLN(1,VARREF(YgooSmacrosYcat),4,T30,T31,T58,Ynil);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_assignment),4,T1,T2,r_,tailQ_);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_syntax_definition),4,T1,T2,r_,YPtrue);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_syntax_definition),4,T1,T2,r_,YPfalse);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_function),4,T1,T2,r_,tailQ_);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_bind_exit),4,T1,T2,r_,tailQ_);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_unwind_protect),4,T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  P x_,r_,tailQ_;
  P bodyF1749;
  P handlerF1748;
  P testF1747;
  P infoF1746;
  P typeF1745;
  P tup38F1744;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_monitor_expand),x_);
  tup38F1744 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1744,YPint((P)0));
  typeF1745 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1744,YPint((P)1));
  infoF1746 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1744,YPint((P)2));
  testF1747 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1744,YPint((P)3));
  handlerF1748 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1744,YPint((P)4));
  bodyF1749 = T11;
  T12 = CALLN(1,VARREF(Yx8rSastYobjectify_monitor),7,typeF1745,infoF1746,testF1747,handlerF1748,bodyF1749,r_,tailQ_);
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
  P prop_initsF1750;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_prop_inits),x_);
  prop_initsF1750 = T1;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_parent),x_);
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_init_props),prop_initsF1750);
  T6 = CALL1(1,VARREF(Yx8rSastYpairize),T7);
  T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_init_values),prop_initsF1750);
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
  P nameF1751;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_definition_variable),x_);
  nameF1751 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_461));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T8 = CALL1(1,VARREF(Ylst),nameF1751);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(Yx8rSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALLN(1,VARREF(YgooSmacrosYcat),4,T4,T5,T9,Ynil);
  T2 = CALL3(1,VARREF(Yx8rSastYobjectify_definition),nameF1751,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_372) {
  P x_,r_,tailQ_;
  P typeF1756;
  P setter_nameF1755;
  P ownerF1754;
  P varF1753;
  P nameF1752;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_name),x_);
  nameF1752 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_init_var),x_);
  varF1753 = T3;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_owner),x_);
  ownerF1754 = T5;
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_fab_setter_name),nameF1752);
  setter_nameF1755 = T7;
  T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_type),x_);
  typeF1756 = T9;
  T13 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_fab_getter),nameF1752,ownerF1754);
  T14 = CALL3(1,VARREF(Yx8rSsyntaxYsexpr_fab_setter),nameF1752,ownerF1754,typeF1756);
  T18 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_initQ),x_);
  if (T18 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),varF1753);
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
  T16 = CALLN(1,VARREF(Ylst),5,ownerF1754,nameF1752,setter_nameF1755,typeF1756,T17);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_compile_time),4,T1,r_,tailQ_,YPfalse);
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
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_compile_time),4,T1,r_,tailQ_,YPtrue);
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
    CALLN(1,VARREF(Yx8rSastYast_define_binding),4,r_,T2,YPfalse,LITREF(lit_343));
    T3 = CALL3(1,VARREF(Yx8rSastYobjectify),YPfalse,r_,tailQ_);
    T0 = T3;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_variable),x_);
    T6 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_signature),x_);
    T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_body),x_);
    T4 = CALLN(1,VARREF(Yx8rSastYobjectify_primitive_definition),4,T5,T6,T7,r_);
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
  P resF1759;
  P tmpF1758;
  P mF1757;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),T2,r_,tailQ_);
  mF1757 = T1;
  T5 = CALL2(1,VARREF(YisaQ),mF1757,VARREF(Yx8rSastYLmodule_bindingG));
  tmpF1758 = T5;
  if (tmpF1758 != YPfalse) {
    T8 = CALL1(1,VARREF(Yx8rSastYbinding_kind),mF1757);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_284));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(Yx8rSastYbinding_handler),mF1757);
    T10 = CALL3(1,T11,x_,r_,tailQ_);
    resF1759 = T10;
    T9 = resF1759;
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
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_setter),YPtrue,T3,b_);
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
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(Yx8rSastYtransaction_emptyQ) {
  P t_;
  P tmpF1760;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF1760 = T1;
  if (tmpF1760 != YPfalse) {
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
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_setter),YPtrue,FREEREF(0),k_);
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
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYmerge_transactionsX) {
  P t1_,t2_;
  P t2_dependentsF1764;
  P t1_dependentsF1763;
  P t2_bindingsF1762;
  P t1_bindingsF1761;
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
        t1_bindingsF1761 = T6;
        T8 = CALL1(1,VARREF(Yx8rSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF1762 = T8;
        T10 = CALL1(1,VARREF(Yx8rSastYtransaction_dependents),t1_);
        t1_dependentsF1763 = T10;
        T12 = CALL1(1,VARREF(Yx8rSastYtransaction_dependents),t2_);
        t2_dependentsF1764 = T12;
        T13 = FUNFAB(fun_392,1,t1_bindingsF1761);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF1762);
        T14 = FUNFAB(fun_393,1,t1_dependentsF1763);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF1764);
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
  P valueF1765;
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLtransactionG));
  VARSET(Yx8rSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF1765 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF1765;
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
  P savedF1767;
  P successF1766;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF1766 = YPfalse;
  successF1766 = BOXFAB(successF1766);
  savedF1767 = VARREF(Yx8rSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_398,2,thunk_,successF1766);
  T5 = FUNFAB(fun_399,3,successF1766,module_,savedF1767);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1439_401) {
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
  P x_1438F1776;
  P x_1438F1775;
  P x_1438F1774;
  P x_1438F1773;
  P x_1438F1772;
  P bodyF1771;
  P moduleF1770;
  P x_1438F1769;
  P x_1439F1768;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1439_401,1);
  x_1439F1768 = T1;
  FUNINIT(x_1439F1768, 1,return_);
  x_1438F1769 = FREEREF(0);
  moduleF1770 = YPfalse;
  moduleF1770 = BOXFAB(moduleF1770);
  bodyF1771 = YPfalse;
  bodyF1771 = BOXFAB(bodyF1771);
  T7 = CALL2(1,VARREF(YisaQ),x_1438F1769,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1438F1769,LITREF(lit_503),x_1439F1768);
    x_1438F1772 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1438F1772,x_1439F1768);
    x_1438F1773 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1438F1773,x_1439F1768);
    BOXVAL(moduleF1770) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1438F1773);
    x_1438F1774 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1438F1774,x_1439F1768);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1438F1772);
    x_1438F1775 = T16;
    BOXVAL(bodyF1771) = x_1438F1775;
    x_1438F1776 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1438F1776,x_1439F1768);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1439F1768,LITREF(lit_7),x_1438F1769);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_499));
  T23 = BOXVAL(moduleF1770);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_441));
  T27 = CALL1(1,VARREF(Ylst),Ynil);
  T28 = BOXVAL(bodyF1771);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T28,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALLN(1,VARREF(YgooSmacrosYcat),4,T21,T22,T24,Ynil);
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
  CALL3(1,VARREF(YgooScolsScolYelt_setter),mod_,T0,T1);
UNLINK_STACK();
  RET(module_loader_);
}

FUNCODEDEF(Yx8rSastYprobe_module) {
  P loader_,name_;
  P tmpF1777;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF1777 = T1;
  if (tmpF1777 != YPfalse) {
    T3 = tmpF1777;
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
  P x_1443F1781;
  P x_1442F1780;
  P tup39F1779;
  P x_1441F1778;
  P T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  x_1441F1778 = FREEREF(0);
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),x_1441F1778);
  T2 = CALL1(1,VARREF(YgooScolsSlstYpop),T3);
  tup39F1779 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F1779,YPint((P)0));
  x_1442F1780 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F1779,YPint((P)1));
  x_1443F1781 = T7;
  CALL2(1,VARREF(Yx8rSastYmodule_loader_stack_setter),x_1442F1780,x_1441F1778);
  T6 = x_1443F1781;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYload_and_register_module) {
  P loader_,name_;
  P modF1786;
  P x_1440F1785;
  P indentF1784;
  P depthF1783;
  P stackF1782;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),loader_);
  stackF1782 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF1782);
  depthF1783 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSstrYstring_repeat),LITREF(lit_537),depthF1783);
  indentF1784 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF1782,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF1782);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_538),T8,name_);
  } else {
  }
  CALLN(1,VARREF(YgooSruntimeYformat),4,VARREF(YgooSioSportYout),LITREF(lit_539),indentF1784,name_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  x_1440F1785 = loader_;
  T12 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),x_1440F1785);
  T11 = CALL2(1,VARREF(YgooScolsSlstYpush),T12,name_);
  T10 = CALL2(1,VARREF(Yx8rSastYmodule_loader_stack_setter),T11,x_1440F1785);
  T14 = FUNFAB(fun_437,2,loader_,name_);
  T15 = FUNFAB(fun_438,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF1786 = T13;
  CALL2(1,VARREF(Yx8rSastYregister_moduleX),loader_,modF1786);
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_540));
  T9 = modF1786;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF1789;
  P existingF1788;
  P exportsF1787;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_exports),module_);
  exportsF1787 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF1787,name_,YPfalse);
  existingF1788 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1788,YPfalse);
  tmpF1789 = T6;
  if (tmpF1789 != YPfalse) {
    T7 = tmpF1789;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1788,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALLN(1,VARREF(Yerror),5,LITREF(lit_543),existingF1788,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolYelt_setter),binding_,exportsF1787,name_);
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
  P tmpF1790;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_freeQ),binding_);
  tmpF1790 = T2;
  if (tmpF1790 != YPfalse) {
    T4 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
    T5 = CALLN(1,VARREF(YgooSruntimeYformat),4,VARREF(YgooSioSportYout),LITREF(lit_546),T6,T7);
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
    CALL3(1,VARREF(YgooScolsScolYelt_setter),modname_,FREEREF(0),modname_);
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
  P collector_F1793;
  P add_userF1792;
  P usersF1791;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF1791 = T1;
  T3 = FUNSHELL(0,fun_add_user_446,3);
  add_userF1792 = T3;
  FUNINIT(add_userF1792, 3,usersF1791,add_userF1792,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF1792,modnames_);
  collector_F1793 = Ynil;
  collector_F1793 = BOXFAB(collector_F1793);
  T6 = FUNFAB(fun_447,1,collector_F1793);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,usersF1791);
  T8 = BOXVAL(collector_F1793);
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
  P modF1794;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF1794 = T1;
  T3 = CALL2(1,VARREF(Yx8rSastYremove_module_internalX),FREEREF(0),modF1794);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF1795;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF1795 = T1;
  T2 = FUNFAB(fun_450,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF1795);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYmodule_name_to_relpath) {
  P name_;
  P namestrF1796;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF1796 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSstrYstring_split),namestrF1796,YPchr((P)47));
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
  P bootenvF1798;
  P bootmodF1797;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYprobe_module),loader_,VARREF(Yx8rSastYDgoo_boot_module_name));
  bootmodF1797 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),bootmodF1797);
  bootenvF1798 = T3;
  T5 = FUNFAB(fun_453,2,bootenvF1798,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_555));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF1799;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYenvironment_module),module_,VARREF(Yx8rSastYenvironment_module_loader),module_loader_,VARREF(Yx8rSastYenvironment_next),VARREF(Yx8rSastYDempty_static_environment),VARREF(Yx8rSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(Yx8rSastYenvironment_bindings),T2);
  new_envF1799 = T1;
  T0 = new_envF1799;
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
  P new_envF1801;
  P loaderF1800;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),T2);
  loaderF1800 = T1;
  T4 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),module_,loaderF1800,YPfalse);
  new_envF1801 = T4;
  T5 = FUNFAB(fun_456,2,excluded_,new_envF1801);
  T6 = CALL1(1,VARREF(Yx8rSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF1801;
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
  P x_1444F1808;
  P src_fileF1807;
  P fileF1806;
  P keepmodQF1805;
  P envF1804;
  P moduleF1803;
  P typeF1802;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_loader_module_type),loader_);
  typeF1802 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF1802,VARREF(Yx8rSastYmodule_name),name_);
  moduleF1803 = T3;
  T5 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),moduleF1803,loader_,YPfalse);
  envF1804 = T5;
  keepmodQF1805 = YPfalse;
  keepmodQF1805 = BOXFAB(keepmodQF1805);
  T9 = CALL1(1,VARREF(Yx8rSastYmodule_name_to_relpath),name_);
  fileF1806 = T9;
  T12 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF1806);
  T11 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T12);
  src_fileF1807 = T11;
  CALL3(1,VARREF(Yx8rSastYset_module_environments),moduleF1803,envF1804,envF1804);
  CALL2(1,VARREF(Yx8rSastYinstall_initial_bindings),envF1804,loader_);
  x_1444F1808 = VARREF(Yx8rSastYTnow_rt_envT);
  T15 = FUNFAB(fun_460,4,envF1804,src_fileF1807,keepmodQF1805,moduleF1803);
  T16 = FUNFAB(fun_461,1,x_1444F1808);
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
  P moduleF1809;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_module),modname_);
  moduleF1809 = T1;
  CALL1(1,VARREF(Yx8rSastYensure_module_data),moduleF1809);
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),moduleF1809);
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
  P loaderF1810;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(Yx8rSastYruntime_module_loader));
  loaderF1810 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),loaderF1810);
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
  P envF1814;
  P modF1813;
  P typeF1812;
  P loaderF1811;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(Yx8rSastYruntime_module_loader));
  loaderF1811 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_loader_module_type),loaderF1811);
  typeF1812 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF1812,VARREF(Yx8rSastYmodule_name),T6);
  modF1813 = T5;
  T8 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),modF1813,loaderF1811,YPtrue);
  envF1814 = T8;
  CALL2(1,VARREF(Yx8rSastYmodule_data_processedQ_setter),YPfalse,modF1813);
  CALL3(1,VARREF(Yx8rSastYset_module_environments),modF1813,envF1814,envF1814);
  CALL2(1,VARREF(Yx8rSastYmodule_runtime_data_setter),data_,modF1813);
  CALL2(1,VARREF(Yx8rSastYregister_moduleX),loaderF1811,modF1813);
  T7 = modF1813;
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
  T0 = CALL2(1,VARREF(YgooScolsSbufYpush_lastX),T1,uses_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_import) {
  P mod_,name_,from_mod_,original_name_;
  P bindingF1816;
  P home_envF1815;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),from_mod_);
  home_envF1815 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(Yx8rSastYfind_binding),T4,home_envF1815);
  bindingF1816 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF1816);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(Yx8rSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
    T6 = CALLN(1,VARREF(Yerror),4,LITREF(lit_574),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1816,T10);
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
  P bindingF1817;
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
  bindingF1817 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1817,T5);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF1818;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_343),VARREF(Yx8rSastYbinding_module_name),T2,VARREF(Yx8rSastYbinding_name),T3,VARREF(Yx8rSastYbinding_freeQ),YPtrue);
  bindingF1818 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1818,T5);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF1819;
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
  bindingF1819 = T1;
  if (bindingF1819 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(Yx8rSastYexport_bindingX),mod_,T6,bindingF1819);
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
  P cloneF1820;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T1 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,FREEREF(0),T2,YPfalse,LITREF(lit_283));
  cloneF1820 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(Yx8rSastYbinding_handler_setter),T4,cloneF1820);
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
  CALLN(1,VARREF(YgooScolsScolYdo3),4,T0,VARREF(YTboot_macro_module_namesT),VARREF(YTboot_macro_namesT),VARREF(YTboot_macro_expandersT));
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
  P bootenvF1822;
  P bootmodF1821;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL0(1,VARREF(Yx8rSastYreload_modules));
  T2 = CALL0(1,VARREF(Yx8rSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(Yx8rSastYprobe_module),T2,VARREF(Yx8rSastYDgoo_boot_module_name));
  bootmodF1821 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),bootmodF1821);
  bootenvF1822 = T4;
  CALL1(1,VARREF(Yx8rSastYinstall_magic_bindings),bootenvF1822);
  CALL0(1,VARREF(Yx8rSastYreload_macros));
  CALL1(1,VARREF(Yx8rSastYinstall_interpreter_hacks),bootenvF1822);
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
  P target_envF1826;
  P syntax_envF1825;
  P moduleF1824;
  P typeF1823;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_loader_module_type),loader_);
  typeF1823 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF1823,VARREF(Yx8rSastYmodule_name),name_);
  moduleF1824 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYfab_syntax_environment),moduleF1824);
  syntax_envF1825 = T5;
  T7 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),moduleF1824,loader_,YPfalse);
  target_envF1826 = T7;
  CALL3(1,VARREF(Yx8rSastYset_module_environments),moduleF1824,syntax_envF1825,target_envF1826);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(Yx8rSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(Yx8rSastYinit_g2c_boot_environment),target_envF1826);
  } else {
    T10 = CALL2(1,VARREF(Yx8rSastYinit_g2c_regular_environment),target_envF1826,loader_);
  }
  T6 = moduleF1824;
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
  P loopF1827;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_487,2);
  loopF1827 = T1;
  FUNINIT(loopF1827, 2,f_,loopF1827);
  T2 = CALL1(0,loopF1827,env_);
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
  P loopF1828;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_489,2);
  loopF1828 = T1;
  FUNINIT(loopF1828, 2,f_,loopF1828);
  T2 = CALL1(0,loopF1828,env_);
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
  lit_3 = YPPsym((P)"x-1414");
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
  fun_x_1414_0 = YPmet(FUNCODEREF(fun_x_1414_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
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
  lit_141 = YPPsym((P)"x-1418");
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
  fun_x_1418_104 = YPmet(FUNCODEREF(fun_x_1418_104),LITREF(lit_141),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T144 = fun_106;
  YPmacro(YPPsym((P)"x8r/ast"),YPPsym((P)"def-list"),T144);
  lit_164 = YPPsym((P)"x-1422");
  lit_165 = YPPsym((P)"def-programs");
  T147 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1422_107 = YPmet(FUNCODEREF(fun_x_1422_107),LITREF(lit_164),T147,ENVNUL,PNUL,YPfalse);
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
  T49 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSbufYLbufG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYenvironment_uses_modules),VARREF(Yx8rSastYenvironment_uses_modules_setter),VARREF(YgooScolsSbufYLbufG),T55);
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
  lit_434 = YPPsym((P)"x-1435");
  lit_435 = YPPsym((P)"define-magic-binding");
  lit_436 = YPsb((P)"special-");
  lit_437 = YPsb((P)"$sexpr-");
  lit_438 = YPsb((P)"-tag");
  lit_439 = YPPsym((P)"$goo-boot-module-name");
  lit_440 = YPPsym((P)"binding-handler");
  lit_441 = YPPsym((P)"fun");
  T269 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1435_346 = YPmet(FUNCODEREF(fun_x_1435_346),LITREF(lit_434),T269,ENVNUL,PNUL,YPfalse);
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
  lit_502 = YPPsym((P)"x-1439");
  lit_503 = YPPsym((P)"with-subtransaction");
  T49 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1439_401 = YPmet(FUNCODEREF(fun_x_1439_401),LITREF(lit_502),T49,ENVNUL,PNUL,YPfalse);
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
  lit_539 = YPsb((P)"\n%s[Loading module %s...");
  lit_540 = YPsb((P)"]");
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
  P tmpF1831;
  P tmpF1830;
  P tmpF1829;
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
  tmpF1829 = YPfalse;
  if (tmpF1829 != YPfalse) {
    T75 = VARREF(Yx8rSastYast_evaluate);
  } else {
    T75 = YPfalse;
  }
  tmpF1830 = YPfalse;
  if (tmpF1830 != YPfalse) {
    T76 = VARREF(Yx8rSastYinit_environment_for_eval);
  } else {
    T76 = YPfalse;
  }
  tmpF1831 = YPfalse;
  if (tmpF1831 != YPfalse) {
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
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSbuf;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
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
  {"$e", &module_info_gooSmath, "$e"},
  {"$sexpr-define-function-tag", &module_info_x8rSsyntax, "$sexpr-define-function-tag"},
  {"always", &module_info_gooSruntime, "always"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"or", &module_info_gooSmacros, "or"},
  {"%put", &module_info_gooSboot, "%put"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"if", &module_info_gooSboot, "if"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"sexpr-variable?", &module_info_x8rSsyntax, "sexpr-variable?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<dependent>", &module_info_x8rSdependency, "<dependent>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"sexpr-make-application", &module_info_x8rSsyntax, "sexpr-make-application"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"dependency-includes-all?", &module_info_x8rSdependency, "dependency-includes-all?"},
  {"sexpr-define-class-parents", &module_info_x8rSsyntax, "sexpr-define-class-parents"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"sexpr-prop-init?", &module_info_x8rSsyntax, "sexpr-prop-init?"},
  {"$sexpr-def-tag", &module_info_x8rSsyntax, "$sexpr-def-tag"},
  {"any?", &module_info_gooStypes, "any?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"|", &module_info_gooSmath, "|"},
  {"close", &module_info_gooSioSport, "close"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sexpr-make-anonymous-method", &module_info_x8rSsyntax, "sexpr-make-anonymous-method"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"invalidate-dependent", &module_info_x8rSdependency, "invalidate-dependent"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len-setter", &module_info_gooScolsSbuf, "len-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"sexpr-definition-variable", &module_info_x8rSsyntax, "sexpr-definition-variable"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"sexpr-function-signature", &module_info_x8rSsyntax, "sexpr-function-signature"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"sexpr-def-value", &module_info_x8rSsyntax, "sexpr-def-value"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"read", &module_info_gooSruntime, "read"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"tail", &module_info_gooSboot, "tail"},
  {"pop-last!", &module_info_gooScolsSbuf, "pop-last!"},
  {"@<", &module_info_gooSboot, "@<"},
  {"now", &module_info_gooScolsScol, "now"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sexpr-iterate->loc", &module_info_x8rSsyntax, "sexpr-iterate->loc"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"sexpr-variable-name", &module_info_x8rSsyntax, "sexpr-variable-name"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"max", &module_info_gooSmag, "max"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"sexpr-syntax-if-value", &module_info_x8rSsyntax, "sexpr-syntax-if-value"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"<dependable>", &module_info_x8rSdependency, "<dependable>"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sexpr-unquote?", &module_info_x8rSsyntax, "sexpr-unquote?"},
  {"$sexpr-quote-tag", &module_info_x8rSsyntax, "$sexpr-quote-tag"},
  {"log", &module_info_gooSmath, "log"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"sexpr-variable-type", &module_info_x8rSsyntax, "sexpr-variable-type"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"%get", &module_info_gooSboot, "%get"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"fin", &module_info_gooSboot, "fin"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"$sexpr-if-tag", &module_info_x8rSsyntax, "$sexpr-if-tag"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sexpr-def?", &module_info_x8rSsyntax, "sexpr-def?"},
  {"sexpr-sequence->begin", &module_info_x8rSsyntax, "sexpr-sequence->begin"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_x8rSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-assignment-variable", &module_info_x8rSsyntax, "sexpr-assignment-variable"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"sexpr-function-definition-variable", &module_info_x8rSsyntax, "sexpr-function-definition-variable"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"$name-parse-dependency", &module_info_x8rSdependency, "$name-parse-dependency"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"$sexpr-define-syntax-tag", &module_info_x8rSsyntax, "$sexpr-define-syntax-tag"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"$sexpr-monitor-tag", &module_info_x8rSsyntax, "$sexpr-monitor-tag"},
  {"ds", &module_info_gooSboot, "ds"},
  {"sexpr-isa-prop-inits", &module_info_x8rSsyntax, "sexpr-isa-prop-inits"},
  {"sexpr-if-then", &module_info_x8rSsyntax, "sexpr-if-then"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"sexpr-function-definition-value", &module_info_x8rSsyntax, "sexpr-function-definition-value"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"eval", &module_info_x8rSsyntax, "eval"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%im", &module_info_gooSboot, "%im"},
  {"round", &module_info_gooSmath, "round"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"in", &module_info_gooSioSport, "in"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sexpr-syntax-if-then", &module_info_x8rSsyntax, "sexpr-syntax-if-then"},
  {"sexpr-block-body", &module_info_x8rSsyntax, "sexpr-block-body"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"dc", &module_info_gooSboot, "dc"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sexpr-block-name", &module_info_x8rSsyntax, "sexpr-block-name"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"sexpr-if-test", &module_info_x8rSsyntax, "sexpr-if-test"},
  {"open", &module_info_gooSioSport, "open"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"len/fill-setter", &module_info_gooScolsSbuf, "len/fill-setter"},
  {"sexpr-expand-backquote", &module_info_x8rSsyntax, "sexpr-expand-backquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dependency-and", &module_info_x8rSdependency, "dependency-and"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"$sexpr-bind-exit-tag", &module_info_x8rSsyntax, "$sexpr-bind-exit-tag"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"sexpr-operator", &module_info_x8rSsyntax, "sexpr-operator"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sexpr-definition-value", &module_info_x8rSsyntax, "sexpr-definition-value"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"-", &module_info_gooSmath, "-"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sexpr-def-variable", &module_info_x8rSsyntax, "sexpr-def-variable"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"def", &module_info_gooSboot, "def"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"sexpr-isa-parent", &module_info_x8rSsyntax, "sexpr-isa-parent"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"$sexpr-syntax-if-tag", &module_info_x8rSsyntax, "$sexpr-syntax-if-tag"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"set", &module_info_gooSboot, "set"},
  {"sexpr-loc-bound-signatures", &module_info_x8rSsyntax, "sexpr-loc-bound-signatures"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"$sexpr-prop-tag", &module_info_x8rSsyntax, "$sexpr-prop-tag"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"sexpr-make-macro-function", &module_info_x8rSsyntax, "sexpr-make-macro-function"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<buf>", &module_info_gooScolsSbuf, "<buf>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"$sexpr-define-tag", &module_info_x8rSsyntax, "$sexpr-define-tag"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"sexpr-fab-setter", &module_info_x8rSsyntax, "sexpr-fab-setter"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"$optimizaton-dependencies", &module_info_x8rSdependency, "$optimizaton-dependencies"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"sexpr-make-begin", &module_info_x8rSsyntax, "sexpr-make-begin"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"$sexpr-set-tag", &module_info_x8rSsyntax, "$sexpr-set-tag"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"dependency-or", &module_info_x8rSdependency, "dependency-or"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<dependency-type>", &module_info_x8rSdependency, "<dependency-type>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"sexpr-let->combination", &module_info_x8rSsyntax, "sexpr-let->combination"},
  {"$sexpr-define-generic-tag", &module_info_x8rSsyntax, "$sexpr-define-generic-tag"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"sexpr-loc-raw-body", &module_info_x8rSsyntax, "sexpr-loc-raw-body"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"sexpr-method-signature", &module_info_x8rSsyntax, "sexpr-method-signature"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"get", &module_info_gooSioSport, "get"},
  {"try", &module_info_gooSboot, "try"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"sexpr-prop-owner", &module_info_x8rSsyntax, "sexpr-prop-owner"},
  {"sexpr-syntax-definition-variable", &module_info_x8rSsyntax, "sexpr-syntax-definition-variable"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"sexpr-unquote-splicing?", &module_info_x8rSsyntax, "sexpr-unquote-splicing?"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"sexpr-function-body", &module_info_x8rSsyntax, "sexpr-function-body"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"as", &module_info_gooStypes, "as"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"sexpr-prop-type", &module_info_x8rSsyntax, "sexpr-prop-type"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"push-last!", &module_info_gooScolsSbuf, "push-last!"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"sexpr-loc-bound-bodies", &module_info_x8rSsyntax, "sexpr-loc-bound-bodies"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"sexpr-text-of-quotation", &module_info_x8rSsyntax, "sexpr-text-of-quotation"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"$sexpr-quasiquote-tag", &module_info_x8rSsyntax, "$sexpr-quasiquote-tag"},
  {"$empty-dependency", &module_info_x8rSdependency, "$empty-dependency"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"sexpr-syntax-if-else", &module_info_x8rSsyntax, "sexpr-syntax-if-else"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"sexpr-fab-getter", &module_info_x8rSsyntax, "sexpr-fab-getter"},
  {"detach-dependent", &module_info_x8rSdependency, "detach-dependent"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"$all-dependency-types", &module_info_x8rSdependency, "$all-dependency-types"},
  {">", &module_info_gooSmag, ">"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"invalidate-dependents", &module_info_x8rSdependency, "invalidate-dependents"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"$sexpr-isa-tag", &module_info_x8rSsyntax, "$sexpr-isa-tag"},
  {"~=", &module_info_gooSmath, "~="},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"sexpr-isa-init-values", &module_info_x8rSsyntax, "sexpr-isa-init-values"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"dl", &module_info_gooSboot, "dl"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"sexpr-fab-setter-name", &module_info_x8rSsyntax, "sexpr-fab-setter-name"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"sexpr-loc-bound-names", &module_info_x8rSsyntax, "sexpr-loc-bound-names"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"sexpr-forward-primitive?", &module_info_x8rSsyntax, "sexpr-forward-primitive?"},
  {"$sexpr-locals-tag", &module_info_x8rSsyntax, "$sexpr-locals-tag"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"sexpr-signature-value", &module_info_x8rSsyntax, "sexpr-signature-value"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"format", &module_info_gooSruntime, "format"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"sexpr-prop-name", &module_info_x8rSsyntax, "sexpr-prop-name"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"buf", &module_info_gooScolsSbuf, "buf"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"put", &module_info_gooSioSport, "put"},
  {"asin", &module_info_gooSmath, "asin"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"/", &module_info_gooSmath, "/"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"$sexpr-macro-expand-tag", &module_info_x8rSsyntax, "$sexpr-macro-expand-tag"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"sexpr-bind-pattern-variables", &module_info_x8rSsyntax, "sexpr-bind-pattern-variables"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"sexpr-operands", &module_info_x8rSsyntax, "sexpr-operands"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"map", &module_info_gooSmacros, "map"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"~", &module_info_gooSmath, "~"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sexpr-method-body", &module_info_x8rSsyntax, "sexpr-method-body"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"=", &module_info_gooSmath, "="},
  {"sexpr-prop-init", &module_info_x8rSsyntax, "sexpr-prop-init"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"$sexpr-iterate-tag", &module_info_x8rSsyntax, "$sexpr-iterate-tag"},
  {"for", &module_info_gooSmacros, "for"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"export", &module_info_gooSboot, "export"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sexpr-unwind-protect-protected-form", &module_info_x8rSsyntax, "sexpr-unwind-protect-protected-form"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"log-dependency", &module_info_x8rSdependency, "log-dependency"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"sexpr-isa-init-props", &module_info_x8rSsyntax, "sexpr-isa-init-props"},
  {"dg", &module_info_gooSboot, "dg"},
  {"dependency-empty?", &module_info_x8rSdependency, "dependency-empty?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"dependency-includes-any?", &module_info_x8rSdependency, "dependency-includes-any?"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"use", &module_info_gooSboot, "use"},
  {"$expansion-parse-dependency", &module_info_x8rSdependency, "$expansion-parse-dependency"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"quote", &module_info_gooSboot, "quote"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"$sexpr-unwind-protect-tag", &module_info_x8rSsyntax, "$sexpr-unwind-protect-tag"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"while", &module_info_gooSmacros, "while"},
  {"find-dependency", &module_info_x8rSdependency, "find-dependency"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"sexpr-monitor-expand", &module_info_x8rSsyntax, "sexpr-monitor-expand"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {"$sexpr-begin-tag", &module_info_x8rSsyntax, "$sexpr-begin-tag"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@+", &module_info_gooSboot, "@+"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sexpr-if-else", &module_info_x8rSsyntax, "sexpr-if-else"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"$sexpr-let-tag", &module_info_x8rSsyntax, "$sexpr-let-tag"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"items", &module_info_gooScolsScol, "items"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"$sexpr-define-class-tag", &module_info_x8rSsyntax, "$sexpr-define-class-tag"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sexpr-syntax-if-pattern", &module_info_x8rSsyntax, "sexpr-syntax-if-pattern"},
  {"1+", &module_info_gooSmath, "1+"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"$parse-dependencies", &module_info_x8rSdependency, "$parse-dependencies"},
  {"$value-optimization-dependency", &module_info_x8rSdependency, "$value-optimization-dependency"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"sexpr-assignment-value", &module_info_x8rSsyntax, "sexpr-assignment-value"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"loc", &module_info_gooSboot, "loc"},
  {"atan", &module_info_gooSmath, "atan"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"$sexpr-method-tag", &module_info_x8rSsyntax, "$sexpr-method-tag"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sexpr-syntax-definition-value", &module_info_x8rSsyntax, "sexpr-syntax-definition-value"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"sexpr-define-class?", &module_info_x8rSsyntax, "sexpr-define-class?"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"sexpr-prop-init-var", &module_info_x8rSsyntax, "sexpr-prop-init-var"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"$sexpr-define-method-tag", &module_info_x8rSsyntax, "$sexpr-define-method-tag"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"into", &module_info_gooScolsScol, "into"},
  {"isa", &module_info_gooSboot, "isa"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"special-quasiquote", &Yx8rSastYspecial_quasiquote},
  {"objectify-definition", &Yx8rSastYobjectify_definition},
  {"init-runtime", &Yx8rSastYinit_runtime},
  {"def-programs", NULL},
  {"binding-module-name-setter", &Yx8rSastYbinding_module_name_setter},
  {"<global-reference>", &Yx8rSastYLglobal_referenceG},
  {"load-and-register-module", &Yx8rSastYload_and_register_module},
  {"reloader-do-other-binding", &Yx8rSastYreloader_do_other_binding},
  {"environment-bindings-setter", &Yx8rSastYenvironment_bindings_setter},
  {"binding-handler", &Yx8rSastYbinding_handler},
  {"init-g2c-boot-environment", &Yx8rSastYinit_g2c_boot_environment},
  {"objectify-unwind-protect", &Yx8rSastYobjectify_unwind_protect},
  {"objectify-monitor", &Yx8rSastYobjectify_monitor},
  {"register-module!", &Yx8rSastYregister_moduleX},
  {"*now-rt-env*", &Yx8rSastYTnow_rt_envT},
  {"remove-module-internal!", &Yx8rSastYremove_module_internalX},
  {"binding-info", &Yx8rSastYbinding_info},
  {"locals-functions-setter", &Yx8rSastYlocals_functions_setter},
  {"special-define-class", &Yx8rSastYspecial_define_class},
  {"ast-<bot>", &Yx8rSastYast_LbotG},
  {"$goo-boot-module-name", &Yx8rSastYDgoo_boot_module_name},
  {"with-dependent", NULL},
  {"set-module-environments", &Yx8rSastYset_module_environments},
  {"$functions-empty", &Yx8rSastYDfunctions_empty},
  {"<runtime-assignment>", &Yx8rSastYLruntime_assignmentG},
  {"locals-bindings", &Yx8rSastYlocals_bindings},
  {"<module-binding>", &Yx8rSastYLmodule_bindingG},
  {"function-specs", &Yx8rSastYfunction_specs},
  {"function-nary?", &Yx8rSastYfunction_naryQ},
  {"function-value", &Yx8rSastYfunction_value},
  {"<programs>", &Yx8rSastYLprogramsG},
  {"functions", &Yx8rSastYfunctions},
  {"function-registers-setter", &Yx8rSastYfunction_registers_setter},
  {"install-initial-bindings", &Yx8rSastYinstall_initial_bindings},
  {"reference-binding-setter", &Yx8rSastYreference_binding_setter},
  {"environment-uses-modules-setter", &Yx8rSastYenvironment_uses_modules_setter},
  {"objectify-compile-time", &Yx8rSastYobjectify_compile_time},
  {"assignment-reference-setter", &Yx8rSastYassignment_reference_setter},
  {"application-arguments", &Yx8rSastYapplication_arguments},
  {"monitor-handler", &Yx8rSastYmonitor_handler},
  {"magic-bindings", &Yx8rSastYmagic_bindings},
  {"reference-binding", &Yx8rSastYreference_binding},
  {"<locals>", &Yx8rSastYLlocalsG},
  {"unwind-protect-cleanup-thunk-setter", &Yx8rSastYunwind_protect_cleanup_thunk_setter},
  {"locals-body", &Yx8rSastYlocals_body},
  {"signature-value", &Yx8rSastYsignature_value},
  {"runtime-module", &Yx8rSastYruntime_module},
  {"application-function", &Yx8rSastYapplication_function},
  {"<local-assignment>", &Yx8rSastYLlocal_assignmentG},
  {"application-function-setter", &Yx8rSastYapplication_function_setter},
  {"special-let", &Yx8rSastYspecial_let},
  {"<ast-function-definition>", &Yx8rSastYLast_function_definitionG},
  {"function-debug-name-setter", &Yx8rSastYfunction_debug_name_setter},
  {"function-index", &Yx8rSastYfunction_index},
  {"binding-locative-setter", &Yx8rSastYbinding_locative_setter},
  {"find-environment-module", &Yx8rSastYfind_environment_module},
  {"---main-9---", NULL},
  {"insert-global!", &Yx8rSastYinsert_globalX},
  {"<ast-signature>", &Yx8rSastYLast_signatureG},
  {"function-debug-name", &Yx8rSastYfunction_debug_name},
  {"env-object-name", &Yx8rSastYenv_object_name},
  {"<static-global-environment>", &Yx8rSastYLstatic_global_environmentG},
  {"*current-subtransaction*", &Yx8rSastYTcurrent_subtransactionT},
  {"application-next-methods-setter", &Yx8rSastYapplication_next_methods_setter},
  {"<sequential>", &Yx8rSastYLsequentialG},
  {"<immediate-constant>", &Yx8rSastYLimmediate_constantG},
  {"---main-4---", NULL},
  {"signature-specs", &Yx8rSastYsignature_specs},
  {"do-named-static-global-bindings", &Yx8rSastYdo_named_static_global_bindings},
  {"$sexpr-compile-time-also-tag", &Yx8rSastYDsexpr_compile_time_also_tag},
  {"$sexpr-optionals-tag", &Yx8rSastYDsexpr_optionals_tag},
  {"binding-global-box", &Yx8rSastYbinding_global_box},
  {"<monitor>", &Yx8rSastYLmonitorG},
  {"application-next-methods", &Yx8rSastYapplication_next_methods},
  {"maybe-log-dependency", &Yx8rSastYmaybe_log_dependency},
  {"application-binding-setter", &Yx8rSastYapplication_binding_setter},
  {"sequentialize", &Yx8rSastYsequentialize},
  {"function-source-setter", &Yx8rSastYfunction_source_setter},
  {"<constant>", &Yx8rSastYLconstantG},
  {"binding-index-setter", &Yx8rSastYbinding_index_setter},
  {"compute-local-reference-offsets", &Yx8rSastYcompute_local_reference_offsets},
  {"objectify-function-source", &Yx8rSastYobjectify_function_source},
  {"function-free-setter", &Yx8rSastYfunction_free_setter},
  {"macro-expander", &Yx8rSastYmacro_expander},
  {"module-loader-module-type", &Yx8rSastYmodule_loader_module_type},
  {"signature-names", &Yx8rSastYsignature_names},
  {"environment-module", &Yx8rSastYenvironment_module},
  {"function-free", &Yx8rSastYfunction_free},
  {"reference-called-function?-setter", &Yx8rSastYreference_called_functionQ_setter},
  {"reloader-do-create-module", &Yx8rSastYreloader_do_create_module},
  {"signature-nary?", &Yx8rSastYsignature_naryQ},
  {"<program>", &Yx8rSastYLprogramG},
  {"fix-let-types-setter", &Yx8rSastYfix_let_types_setter},
  {"objectify-bind-exit", &Yx8rSastYobjectify_bind_exit},
  {"reference-called-function?", &Yx8rSastYreference_called_functionQ},
  {"special-export", &Yx8rSastYspecial_export},
  {"program-register-setter", &Yx8rSastYprogram_register_setter},
  {"transform-defs", &Yx8rSastYtransform_defs},
  {"special-define-method", &Yx8rSastYspecial_define_method},
  {"<bind-exit>", &Yx8rSastYLbind_exitG},
  {"reference-frame-number", &Yx8rSastYreference_frame_number},
  {"special-define-function", &Yx8rSastYspecial_define_function},
  {"module-name-setter", &Yx8rSastYmodule_name_setter},
  {"foreign-name?", &Yx8rSastYforeign_nameQ},
  {"signature-bindings-setter", &Yx8rSastYsignature_bindings_setter},
  {"monitor-handler-setter", &Yx8rSastYmonitor_handler_setter},
  {"find-static-global-environment", &Yx8rSastYfind_static_global_environment},
  {"export-binding!", &Yx8rSastYexport_bindingX},
  {"environment-allows-foreign-names?-setter", &Yx8rSastYenvironment_allows_foreign_namesQ_setter},
  {"bound?-reference", &Yx8rSastYboundQ_reference},
  {"environment-allows-foreign-names?", &Yx8rSastYenvironment_allows_foreign_namesQ},
  {"program-type", &Yx8rSastYprogram_type},
  {"ftype", &Yx8rSastYftype},
  {"constant-index", &Yx8rSastYconstant_index},
  {"bind-exit-main-fun", &Yx8rSastYbind_exit_main_fun},
  {"module-name-to-relpath", &Yx8rSastYmodule_name_to_relpath},
  {"$arguments-empty", &Yx8rSastYDarguments_empty},
  {"fab-g2c-module", &Yx8rSastYfab_g2c_module},
  {"special-monitor", &Yx8rSastYspecial_monitor},
  {"reloader-do-import", &Yx8rSastYreloader_do_import},
  {"process-module-data", &Yx8rSastYprocess_module_data},
  {"binding-kind-setter", &Yx8rSastYbinding_kind_setter},
  {"$sexpr-optionals-type-name", &Yx8rSastYDsexpr_optionals_type_name},
  {"global-box-value", &Yx8rSastYglobal_box_value},
  {"<functions>", &Yx8rSastYLfunctionsG},
  {"special-bound?", &Yx8rSastYspecial_boundQ},
  {"expand-bind-list*", &Yx8rSastYexpand_bind_listT},
  {"runtime-module-loader", &Yx8rSastYruntime_module_loader},
  {"function-binding-setter", &Yx8rSastYfunction_binding_setter},
  {"<ast-generic-definition>", &Yx8rSastYLast_generic_definitionG},
  {"default-type", &Yx8rSastYdefault_type},
  {"---main-3---", NULL},
  {"binding-locative", &Yx8rSastYbinding_locative},
  {"reloader-do-export", &Yx8rSastYreloader_do_export},
  {"function-binding", &Yx8rSastYfunction_binding},
  {"def-list", NULL},
  {"*magic-bindings*", &Yx8rSastYTmagic_bindingsT},
  {"$sexpr-use-module-tag", &Yx8rSastYDsexpr_use_module_tag},
  {"<arguments>", &Yx8rSastYLargumentsG},
  {"fab-subset-environment", &Yx8rSastYfab_subset_environment},
  {"special-use-module", &Yx8rSastYspecial_use_module},
  {"objectify-symbol", &Yx8rSastYobjectify_symbol},
  {"binding-reference-class", &Yx8rSastYbinding_reference_class},
  {"$sexpr-compile-time-tag", &Yx8rSastYDsexpr_compile_time_tag},
  {"<ast-generic>", &Yx8rSastYLast_genericG},
  {"module-exports-setter", &Yx8rSastYmodule_exports_setter},
  {"constant-value", &Yx8rSastYconstant_value},
  {"objectify-free-global-reference", &Yx8rSastYobjectify_free_global_reference},
  {"unwind-protect-cleanup-thunk", &Yx8rSastYunwind_protect_cleanup_thunk},
  {"probe-module", &Yx8rSastYprobe_module},
  {"module-runtime-data-setter", &Yx8rSastYmodule_runtime_data_setter},
  {"special-iterate", &Yx8rSastYspecial_iterate},
  {"assignment-binding", &Yx8rSastYassignment_binding},
  {"module-transaction", &Yx8rSastYmodule_transaction},
  {"reference-frame-number-setter", &Yx8rSastYreference_frame_number_setter},
  {"objectify-method-definition", &Yx8rSastYobjectify_method_definition},
  {"module-loader-stack", &Yx8rSastYmodule_loader_stack},
  {"import-global!", &Yx8rSastYimport_globalX},
  {"function-signature-setter", &Yx8rSastYfunction_signature_setter},
  {"objectify-function", &Yx8rSastYobjectify_function},
  {"special-%raw", &Yx8rSastYspecial_Praw},
  {"monitor-test-setter", &Yx8rSastYmonitor_test_setter},
  {"signature-value-setter", &Yx8rSastYsignature_value_setter},
  {"objectify-generic-definition", &Yx8rSastYobjectify_generic_definition},
  {"---main-5---", NULL},
  {"<static-environment>", &Yx8rSastYLstatic_environmentG},
  {"with-subtransaction", NULL},
  {"<ast-method>", &Yx8rSastYLast_methodG},
  {"process-closed-application", &Yx8rSastYprocess_closed_application},
  {"<local-reference>", &Yx8rSastYLlocal_referenceG},
  {"binding-inferred-type", &Yx8rSastYbinding_inferred_type},
  {"function-signature", &Yx8rSastYfunction_signature},
  {"$sequential-empty", &Yx8rSastYDsequential_empty},
  {"transaction-empty?", &Yx8rSastYtransaction_emptyQ},
  {"reload-macros", &Yx8rSastYreload_macros},
  {"<assignment>", &Yx8rSastYLassignmentG},
  {"fix-let-bindings-setter", &Yx8rSastYfix_let_bindings_setter},
  {"objectify-use-module", &Yx8rSastYobjectify_use_module},
  {"function-source", &Yx8rSastYfunction_source},
  {"objectify-primitive-definition", &Yx8rSastYobjectify_primitive_definition},
  {"<ast-primitive-definition>", &Yx8rSastYLast_primitive_definitionG},
  {"program-type-setter", &Yx8rSastYprogram_type_setter},
  {"function-self-recursive?-setter", &Yx8rSastYfunction_self_recursiveQ_setter},
  {"update-binding-kind", &Yx8rSastYupdate_binding_kind},
  {"register-magic-binding", &Yx8rSastYregister_magic_binding},
  {"<ast-embodied-function>", &Yx8rSastYLast_embodied_functionG},
  {"function-bindings", &Yx8rSastYfunction_bindings},
  {"compute-transitive-users", &Yx8rSastYcompute_transitive_users},
  {"<global-assignment>", &Yx8rSastYLglobal_assignmentG},
  {"signature-bindings", &Yx8rSastYsignature_bindings},
  {"objectify-error", &Yx8rSastYobjectify_error},
  {"find-syntax-environment", &Yx8rSastYfind_syntax_environment},
  {"objectify-signature", &Yx8rSastYobjectify_signature},
  {"special-define-generic", &Yx8rSastYspecial_define_generic},
  {"call-with-subtransaction", &Yx8rSastYcall_with_subtransaction},
  {"do-static-global-bindings", &Yx8rSastYdo_static_global_bindings},
  {"constant-value-setter", &Yx8rSastYconstant_value_setter},
  {"unchecked-runtime-environment", &Yx8rSastYunchecked_runtime_environment},
  {"expand-pattern", &Yx8rSastYexpand_pattern},
  {"signature-specs-setter", &Yx8rSastYsignature_specs_setter},
  {"module-loader-modules", &Yx8rSastYmodule_loader_modules},
  {"binding-free?-setter", &Yx8rSastYbinding_freeQ_setter},
  {"transaction-register-dependent", &Yx8rSastYtransaction_register_dependent},
  {"signature-arity-setter", &Yx8rSastYsignature_arity_setter},
  {"special-bind-exit", &Yx8rSastYspecial_bind_exit},
  {"special-def", &Yx8rSastYspecial_def},
  {"remove-modules-by-name!", &Yx8rSastYremove_modules_by_nameX},
  {"monitor-type-setter", &Yx8rSastYmonitor_type_setter},
  {"arguments", &Yx8rSastYarguments},
  {"monitor-info-setter", &Yx8rSastYmonitor_info_setter},
  {"special-define-syntax", &Yx8rSastYspecial_define_syntax},
  {"transaction-dependents", &Yx8rSastYtransaction_dependents},
  {"binding-global-box-setter", &Yx8rSastYbinding_global_box_setter},
  {"transaction-implemented-bindings", &Yx8rSastYtransaction_implemented_bindings},
  {"---main-0---", NULL},
  {"module-data-processed?", &Yx8rSastYmodule_data_processedQ},
  {"application-binding", &Yx8rSastYapplication_binding},
  {"<method-application>", &Yx8rSastYLmethod_applicationG},
  {"objectify-assignment", &Yx8rSastYobjectify_assignment},
  {"<alternative>", &Yx8rSastYLalternativeG},
  {"objectify", &Yx8rSastYobjectify},
  {"objectify-quotation", &Yx8rSastYobjectify_quotation},
  {"binding-module-name", &Yx8rSastYbinding_module_name},
  {"special-begin", &Yx8rSastYspecial_begin},
  {"process-nary-closed-application", &Yx8rSastYprocess_nary_closed_application},
  {"install-interpreter-hacks", &Yx8rSastYinstall_interpreter_hacks},
  {"%module-exports", &Yx8rSastYPmodule_exports},
  {"<binding-name>", &Yx8rSastYLbinding_nameG},
  {"module-syntax-environment", &Yx8rSastYmodule_syntax_environment},
  {"application-known?-setter", &Yx8rSastYapplication_knownQ_setter},
  {"environment-module-loader-setter", &Yx8rSastYenvironment_module_loader_setter},
  {"special-set", &Yx8rSastYspecial_set},
  {"environment-uses-modules", &Yx8rSastYenvironment_uses_modules},
  {"module-target-environment-setter", &Yx8rSastYmodule_target_environment_setter},
  {"roll-back-transaction", &Yx8rSastYroll_back_transaction},
  {"expand-syntax-if", &Yx8rSastYexpand_syntax_if},
  {"fab-syntax-environment", &Yx8rSastYfab_syntax_environment},
  {"application-known?", &Yx8rSastYapplication_knownQ},
  {"$empty-static-environment", &Yx8rSastYDempty_static_environment},
  {"binding-value", &Yx8rSastYbinding_value},
  {"load-in", &Yx8rSastYload_in},
  {"environment-module-loader", &Yx8rSastYenvironment_module_loader},
  {"function-display-name", &Yx8rSastYfunction_display_name},
  {"<global-box>", &Yx8rSastYLglobal_boxG},
  {"<local-binding>", &Yx8rSastYLlocal_bindingG},
  {"signature-arity", &Yx8rSastYsignature_arity},
  {"fix-let-body", &Yx8rSastYfix_let_body},
  {"binding-dotted?-setter", &Yx8rSastYbinding_dottedQ_setter},
  {"function-temporaries-setter", &Yx8rSastYfunction_temporaries_setter},
  {"syntax-environment-excluded-bindings", &Yx8rSastYsyntax_environment_excluded_bindings},
  {"<application>", &Yx8rSastYLapplicationG},
  {"reference-frame-offset-setter", &Yx8rSastYreference_frame_offset_setter},
  {"compile-time-program-setter", &Yx8rSastYcompile_time_program_setter},
  {"special-compile-time", &Yx8rSastYspecial_compile_time},
  {"objectify-application", &Yx8rSastYobjectify_application},
  {"function-kind", &Yx8rSastYfunction_kind},
  {"compile-time-program", &Yx8rSastYcompile_time_program},
  {"init-ast", &Yx8rSastYinit_ast},
  {"binding-dynamic-extent?", &Yx8rSastYbinding_dynamic_extentQ},
  {"module-exports", &Yx8rSastYmodule_exports},
  {"objectify-assignment-using", &Yx8rSastYobjectify_assignment_using},
  {"transaction-dependents-setter", &Yx8rSastYtransaction_dependents_setter},
  {"special-syntax-if", &Yx8rSastYspecial_syntax_if},
  {"locals-bindings-setter", &Yx8rSastYlocals_bindings_setter},
  {"binding-type", &Yx8rSastYbinding_type},
  {"module-binding", &Yx8rSastYmodule_binding},
  {"binding-type-setter", &Yx8rSastYbinding_type_setter},
  {"module-name", &Yx8rSastYmodule_name},
  {"<variable-definition>", &Yx8rSastYLvariable_definitionG},
  {"unwind-protect-protected-thunk", &Yx8rSastYunwind_protect_protected_thunk},
  {"<passive-program>", &Yx8rSastYLpassive_programG},
  {"special-define-primitive", &Yx8rSastYspecial_define_primitive},
  {"---main-2---", NULL},
  {"binding-name-setter", &Yx8rSastYbinding_name_setter},
  {"fix-let-bindings", &Yx8rSastYfix_let_bindings},
  {"alternative-alternant-setter", &Yx8rSastYalternative_alternant_setter},
  {"convert2arguments", &Yx8rSastYconvert2arguments},
  {"program-register", &Yx8rSastYprogram_register},
  {"runtime-core-environment", &Yx8rSastYruntime_core_environment},
  {"init-environment-for-eval", &Yx8rSastYinit_environment_for_eval},
  {"sequential", &Yx8rSastYsequential},
  {"report-undefined-global-bindings", &Yx8rSastYreport_undefined_global_bindings},
  {"alternative-alternant", &Yx8rSastYalternative_alternant},
  {"$sexpr-bound?-tag", &Yx8rSastYDsexpr_boundQ_tag},
  {"ensure-module-data", &Yx8rSastYensure_module_data},
  {"assignment-reference", &Yx8rSastYassignment_reference},
  {"<ast-method-definition>", &Yx8rSastYLast_method_definitionG},
  {"module-syntax-environment-setter", &Yx8rSastYmodule_syntax_environment_setter},
  {"global-box-value-setter", &Yx8rSastYglobal_box_value_setter},
  {"$fab-list-empty", &Yx8rSastYDfab_list_empty},
  {"monitor-main-thunk-setter", &Yx8rSastYmonitor_main_thunk_setter},
  {"ast-evaluate", &Yx8rSastYast_evaluate},
  {"module-loader-modules-setter", &Yx8rSastYmodule_loader_modules_setter},
  {"binding-info-setter", &Yx8rSastYbinding_info_setter},
  {"signature-names-setter", &Yx8rSastYsignature_names_setter},
  {"install-magic-bindings", &Yx8rSastYinstall_magic_bindings},
  {"<transaction>", &Yx8rSastYLtransactionG},
  {"special-prop", &Yx8rSastYspecial_prop},
  {"alternative-condition-setter", &Yx8rSastYalternative_condition_setter},
  {"<computed-program>", &Yx8rSastYLcomputed_programG},
  {"environment-bindings", &Yx8rSastYenvironment_bindings},
  {"<bound?>", &Yx8rSastYLboundQG},
  {"module-target-environment", &Yx8rSastYmodule_target_environment},
  {"alternative-consequent-setter", &Yx8rSastYalternative_consequent_setter},
  {"binding-kind", &Yx8rSastYbinding_kind},
  {"<predefined-application>", &Yx8rSastYLpredefined_applicationG},
  {"<free-environment>", &Yx8rSastYLfree_environmentG},
  {"<static-local-environment>", &Yx8rSastYLstatic_local_environmentG},
  {"monitor-main-thunk", &Yx8rSastYmonitor_main_thunk},
  {"special-isa", &Yx8rSastYspecial_isa},
  {"reload-modules", &Yx8rSastYreload_modules},
  {"environment-next-setter", &Yx8rSastYenvironment_next_setter},
  {"<ast-primitive>", &Yx8rSastYLast_primitiveG},
  {"fix-let-arguments", &Yx8rSastYfix_let_arguments},
  {"special-macro-expand", &Yx8rSastYspecial_macro_expand},
  {"fix-let-arguments-setter", &Yx8rSastYfix_let_arguments_setter},
  {"application-tail?", &Yx8rSastYapplication_tailQ},
  {"merge-transactions!", &Yx8rSastYmerge_transactionsX},
  {"<fab-list>", &Yx8rSastYLfab_listG},
  {"special-quote", &Yx8rSastYspecial_quote},
  {"signature-nary?-setter", &Yx8rSastYsignature_naryQ_setter},
  {"special-compile-time-also", &Yx8rSastYspecial_compile_time_also},
  {"$sexpr-define-static-syntax-tag", &Yx8rSastYDsexpr_define_static_syntax_tag},
  {"application-tail?-setter", &Yx8rSastYapplication_tailQ_setter},
  {"<runtime-reference>", &Yx8rSastYLruntime_referenceG},
  {"environment-next", &Yx8rSastYenvironment_next},
  {"ast-macro-expand", &Yx8rSastYast_macro_expand},
  {"objectify-function-definition", &Yx8rSastYobjectify_function_definition},
  {"objectify-alternative", &Yx8rSastYobjectify_alternative},
  {"pairize", &Yx8rSastYpairize},
  {"special-define", &Yx8rSastYspecial_define},
  {"reference-frame-offset", &Yx8rSastYreference_frame_offset},
  {"<binding>", &Yx8rSastYLbindingG},
  {"objectify-binding", &Yx8rSastYobjectify_binding},
  {"function-data-refs-setter", &Yx8rSastYfunction_data_refs_setter},
  {"*current-dependent*", &Yx8rSastYTcurrent_dependentT},
  {"fix-let-types", &Yx8rSastYfix_let_types},
  {"objectify-raw", &Yx8rSastYobjectify_raw},
  {"<compile-time>", &Yx8rSastYLcompile_timeG},
  {"fab-list", &Yx8rSastYfab_list},
  {"<module>", &Yx8rSastYLmoduleG},
  {"special-if", &Yx8rSastYspecial_if},
  {"assignment-binding-setter", &Yx8rSastYassignment_binding_setter},
  {"module-loader-stack-setter", &Yx8rSastYmodule_loader_stack_setter},
  {"objectify-use/export-module", &Yx8rSastYobjectify_useSexport_module},
  {"reloader-do-use-module", &Yx8rSastYreloader_do_use_module},
  {"module-data-processed?-setter", &Yx8rSastYmodule_data_processedQ_setter},
  {"transaction-implemented-bindings-setter", &Yx8rSastYtransaction_implemented_bindings_setter},
  {"binding-value-setter", &Yx8rSastYbinding_value_setter},
  {"function-data-refs", &Yx8rSastYfunction_data_refs},
  {"<runtime-module-loader>", &Yx8rSastYLruntime_module_loaderG},
  {"ast-define-binding", &Yx8rSastYast_define_binding},
  {"$sexpr-%raw-tag", &Yx8rSastYDsexpr_Praw_tag},
  {"objectify-bound?", &Yx8rSastYobjectify_boundQ},
  {"environment-module-setter", &Yx8rSastYenvironment_module_setter},
  {"fix-let-body-setter", &Yx8rSastYfix_let_body_setter},
  {"insert-globals!", &Yx8rSastYinsert_globalsX},
  {"init-g2c-regular-environment", &Yx8rSastYinit_g2c_regular_environment},
  {"monitor-type", &Yx8rSastYmonitor_type},
  {"$sexpr-export-tag", &Yx8rSastYDsexpr_export_tag},
  {"<real-reference>", &Yx8rSastYLreal_referenceG},
  {"constant-index-setter", &Yx8rSastYconstant_index_setter},
  {"reloader-do-runtime-binding", &Yx8rSastYreloader_do_runtime_binding},
  {"assignment-form-setter", &Yx8rSastYassignment_form_setter},
  {"objectify-locals", &Yx8rSastYobjectify_locals},
  {"<module-loader>", &Yx8rSastYLmodule_loaderG},
  {"function-index-setter", &Yx8rSastYfunction_index_setter},
  {"<definition>", &Yx8rSastYLdefinitionG},
  {"binding-mutable?", &Yx8rSastYbinding_mutableQ},
  {"%module-exports-setter", &Yx8rSastYPmodule_exports_setter},
  {"runtime-environment", &Yx8rSastYruntime_environment},
  {"function-body-setter", &Yx8rSastYfunction_body_setter},
  {"special-locals", &Yx8rSastYspecial_locals},
  {"<static-empty-environment>", &Yx8rSastYLstatic_empty_environmentG},
  {"function-temporaries", &Yx8rSastYfunction_temporaries},
  {"special-method", &Yx8rSastYspecial_method},
  {"find-binding", &Yx8rSastYfind_binding},
  {"binding-index", &Yx8rSastYbinding_index},
  {"function-body", &Yx8rSastYfunction_body},
  {"---main-8---", NULL},
  {"<module-binding-reference>", &Yx8rSastYLmodule_binding_referenceG},
  {"objectify-with-subtransaction", &Yx8rSastYobjectify_with_subtransaction},
  {"unwind-protect-protected-thunk-setter", &Yx8rSastYunwind_protect_protected_thunk_setter},
  {"$sexpr-define-primitive-tag", &Yx8rSastYDsexpr_define_primitive_tag},
  {"binding-inferred-type-setter", &Yx8rSastYbinding_inferred_type_setter},
  {"---main-6---", NULL},
  {"r-extend*", &Yx8rSastYr_extendT},
  {"<ast-macro-definition>", &Yx8rSastYLast_macro_definitionG},
  {"---main-7---", NULL},
  {"monitor-info", &Yx8rSastYmonitor_info},
  {"transaction-register-implemented-binding", &Yx8rSastYtransaction_register_implemented_binding},
  {"binding-native-to?", &Yx8rSastYbinding_native_toQ},
  {"binding-name", &Yx8rSastYbinding_name},
  {"$free-environment-empty", &Yx8rSastYDfree_environment_empty},
  {"application-arguments-setter", &Yx8rSastYapplication_arguments_setter},
  {"locals-body-setter", &Yx8rSastYlocals_body_setter},
  {"load-module", &Yx8rSastYload_module},
  {"objectify-sequential", &Yx8rSastYobjectify_sequential},
  {"expand-bind-element", &Yx8rSastYexpand_bind_element},
  {"alternative-consequent", &Yx8rSastYalternative_consequent},
  {"define-magic-binding", NULL},
  {"free-environment", &Yx8rSastYfree_environment},
  {"bind-exit-main-fun-setter", &Yx8rSastYbind_exit_main_fun_setter},
  {"assignment-form", &Yx8rSastYassignment_form},
  {"expand-bind-list", &Yx8rSastYexpand_bind_list},
  {"locals-functions", &Yx8rSastYlocals_functions},
  {"special-unwind-protect", &Yx8rSastYspecial_unwind_protect},
  {"objectify-export", &Yx8rSastYobjectify_export},
  {"alternative-condition", &Yx8rSastYalternative_condition},
  {"<unwind-protect>", &Yx8rSastYLunwind_protectG},
  {"special-define-static-syntax", &Yx8rSastYspecial_define_static_syntax},
  {"binding-free?", &Yx8rSastYbinding_freeQ},
  {"*macro-tracing?*", &Yx8rSastYTmacro_tracingQT},
  {"fab-static-global-environment", &Yx8rSastYfab_static_global_environment},
  {"<ast-function>", &Yx8rSastYLast_functionG},
  {"<fix-let>", &Yx8rSastYLfix_letG},
  {"special-use/export-module", &Yx8rSastYspecial_useSexport_module},
  {"frame-bindings", &Yx8rSastYframe_bindings},
  {"<reference>", &Yx8rSastYLreferenceG},
  {"*runtime-module-loader*", &Yx8rSastYTruntime_module_loaderT},
  {"function-registers", &Yx8rSastYfunction_registers},
  {"binding-dotted?", &Yx8rSastYbinding_dottedQ},
  {"module-transaction-setter", &Yx8rSastYmodule_transaction_setter},
  {"$sexpr-use/export-module-tag", &Yx8rSastYDsexpr_useSexport_module_tag},
  {"<regular-application>", &Yx8rSastYLregular_applicationG},
  {"monitor-test", &Yx8rSastYmonitor_test},
  {"---main-1---", NULL},
  {"<raw-constant>", &Yx8rSastYLraw_constantG},
  {"as-lst", &Yx8rSastYas_lst},
  {"<predefined-reference>", &Yx8rSastYLpredefined_referenceG},
  {"binding-handler-setter", &Yx8rSastYbinding_handler_setter},
  {"bound?-reference-setter", &Yx8rSastYboundQ_reference_setter},
  {"binding-mutable?-setter", &Yx8rSastYbinding_mutableQ_setter},
  {"do-module-loader-modules", &Yx8rSastYdo_module_loader_modules},
  {"binding-dynamic-extent?-setter", &Yx8rSastYbinding_dynamic_extentQ_setter},
  {"module-runtime-data", &Yx8rSastYmodule_runtime_data},
  {"objectify-list", &Yx8rSastYobjectify_list},
  {"*record-source?*", &Yx8rSastYTrecord_sourceQT},
  {"function-self-recursive?", &Yx8rSastYfunction_self_recursiveQ},
  {"objectify-foreign-reference", &Yx8rSastYobjectify_foreign_reference},
  {"objectify-syntax-definition", &Yx8rSastYobjectify_syntax_definition},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"def-programs", "def-programs"},
  {"<global-reference>", "<global-reference>"},
  {"binding-info", "binding-info"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"application-arguments", "application-arguments"},
  {"set-module-environments", "set-module-environments"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"locals-bindings", "locals-bindings"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"program-type-setter", "program-type-setter"},
  {"monitor-handler", "monitor-handler"},
  {"constant-index", "constant-index"},
  {"reference-binding", "reference-binding"},
  {"locals-body", "locals-body"},
  {"signature-value", "signature-value"},
  {"<locals>", "<locals>"},
  {"<local-assignment>", "<local-assignment>"},
  {"module-exports", "module-exports"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"function-temporaries", "function-temporaries"},
  {"function-index", "function-index"},
  {"find-environment-module", "find-environment-module"},
  {"<ast-signature>", "<ast-signature>"},
  {"function-debug-name", "function-debug-name"},
  {"env-object-name", "env-object-name"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"<sequential>", "<sequential>"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"binding-global-box", "binding-global-box"},
  {"<monitor>", "<monitor>"},
  {"sequentialize", "sequentialize"},
  {"function-source-setter", "function-source-setter"},
  {"<constant>", "<constant>"},
  {"binding-index-setter", "binding-index-setter"},
  {"signature-names-setter", "signature-names-setter"},
  {"function-free-setter", "function-free-setter"},
  {"binding-index", "binding-index"},
  {"application-binding", "application-binding"},
  {"environment-module", "environment-module"},
  {"function-free", "function-free"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"signature-nary?", "signature-nary?"},
  {"<program>", "<program>"},
  {"<ast-function>", "<ast-function>"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"reference-called-function?", "reference-called-function?"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"program-register-setter", "program-register-setter"},
  {"reference-frame-number", "reference-frame-number"},
  {"bound?-reference", "bound?-reference"},
  {"program-type", "program-type"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"global-box-value", "global-box-value"},
  {"application-function", "application-function"},
  {"as-lst", "as-lst"},
  {"binding-locative", "binding-locative"},
  {"function-binding", "function-binding"},
  {"<arguments>", "<arguments>"},
  {"<ast-generic>", "<ast-generic>"},
  {"constant-value", "constant-value"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"probe-module", "probe-module"},
  {"assignment-binding", "assignment-binding"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"function-signature-setter", "function-signature-setter"},
  {"%%macro", "%%macro"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"signature-value-setter", "signature-value-setter"},
  {"<ast-method>", "<ast-method>"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"function-signature", "function-signature"},
  {"<assignment>", "<assignment>"},
  {"function-source", "function-source"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"function-bindings", "function-bindings"},
  {"binding-name", "binding-name"},
  {"<global-assignment>", "<global-assignment>"},
  {"signature-bindings", "signature-bindings"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"objectify-signature", "objectify-signature"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"<alternative>", "<alternative>"},
  {"objectify-quotation", "objectify-quotation"},
  {"binding-module-name", "binding-module-name"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"function-registers-setter", "function-registers-setter"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"application-known?-setter", "application-known?-setter"},
  {"application-known?", "application-known?"},
  {"binding-value", "binding-value"},
  {"load-in", "load-in"},
  {"<global-box>", "<global-box>"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"<local-binding>", "<local-binding>"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"signature-arity", "signature-arity"},
  {"fix-let-body", "fix-let-body"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"<application>", "<application>"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"compile-time-program", "compile-time-program"},
  {"init-ast", "init-ast"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"<binding>", "<binding>"},
  {"module-binding", "module-binding"},
  {"<programs>", "<programs>"},
  {"module-name", "module-name"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"<passive-program>", "<passive-program>"},
  {"signature-names", "signature-names"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"<regular-application>", "<regular-application>"},
  {"program-register", "program-register"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"alternative-alternant", "alternative-alternant"},
  {"assignment-reference", "assignment-reference"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"ast-evaluate", "ast-evaluate"},
  {"binding-info-setter", "binding-info-setter"},
  {"<bind-exit>", "<bind-exit>"},
  {"def-list", "def-list"},
  {"<computed-program>", "<computed-program>"},
  {"<bound?>", "<bound?>"},
  {"module-target-environment", "module-target-environment"},
  {"binding-dotted?", "binding-dotted?"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"binding-kind", "binding-kind"},
  {"<predefined-application>", "<predefined-application>"},
  {"<free-environment>", "<free-environment>"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"load-module", "load-module"},
  {"application-tail?", "application-tail?"},
  {"<fab-list>", "<fab-list>"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"signature-specs", "signature-specs"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"fix-let-types", "fix-let-types"},
  {"<module>", "<module>"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"function-value", "function-value"},
  {"binding-value-setter", "binding-value-setter"},
  {"function-data-refs", "function-data-refs"},
  {"ast-define-binding", "ast-define-binding"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"<local-reference>", "<local-reference>"},
  {"<module-binding>", "<module-binding>"},
  {"monitor-type", "monitor-type"},
  {"binding-type-setter", "binding-type-setter"},
  {"<real-reference>", "<real-reference>"},
  {"constant-index-setter", "constant-index-setter"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"function-index-setter", "function-index-setter"},
  {"<definition>", "<definition>"},
  {"binding-mutable?", "binding-mutable?"},
  {"runtime-environment", "runtime-environment"},
  {"function-body-setter", "function-body-setter"},
  {"alternative-condition", "alternative-condition"},
  {"find-binding", "find-binding"},
  {"function-body", "function-body"},
  {"<module-loader>", "<module-loader>"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"monitor-info", "monitor-info"},
  {"binding-native-to?", "binding-native-to?"},
  {"locals-body-setter", "locals-body-setter"},
  {"free-environment", "free-environment"},
  {"assignment-form", "assignment-form"},
  {"locals-functions", "locals-functions"},
  {"<fix-let>", "<fix-let>"},
  {"environment-bindings", "environment-bindings"},
  {"binding-type", "binding-type"},
  {"<reference>", "<reference>"},
  {"function-registers", "function-registers"},
  {"monitor-test", "monitor-test"},
  {"<raw-constant>", "<raw-constant>"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"<compile-time>", "<compile-time>"},
  {"alternative-consequent", "alternative-consequent"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"function-nary?", "function-nary?"},
  {"init-environment-for-eval", "init-environment-for-eval"},
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
