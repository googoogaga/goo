/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast */

EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DEF(YevalSastYboundQ_default_setter,"eval/ast","bound?-default-setter");
DEF(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSastYarguments,"eval/ast","arguments");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSsystemYtime,"goo/system","time");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSastYPmodule_exports_setter,"eval/ast","%module-exports-setter");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
DEF(YevalSastYmodule_uses_c_libraries_setter,"eval/ast","module-uses-c-libraries-setter");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yhead,"goo/boot","head");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSastYmodule_uses_c_files_setter,"eval/ast","module-uses-c-files-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
DEF(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalSastYmodule_exports_setter,"eval/ast","module-exports-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSpackerYpacker,"goo/packer","packer");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
DEF(YevalSastYreloader_do_dynamic_binding,"eval/ast","reloader-do-dynamic-binding");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSastYnamespace_error,"eval/ast","namespace-error");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YPprop,"goo/boot","%prop");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
DEF(YevalSastYmodule_uses_c_includes_setter,"eval/ast","module-uses-c-includes-setter");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSastYinsert_and_mangle_globalX,"eval/ast","insert-and-mangle-global!");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
DEF(YevalSastYftype,"eval/ast","ftype");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSastYmodule_name_setter,"eval/ast","module-name-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YevalSastYprogram_line_setter,"eval/ast","program-line-setter");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
DEF(YevalSastYbinding_prop,"eval/ast","binding-prop");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YevalSastYsequential,"eval/ast","sequential");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynew,"goo/boot","new");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_of,"goo/boot","class-of");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DYNDEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
EXT(Yclone,"goo/boot","clone");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSastYimport_and_mangle_globalX,"eval/ast","import-and-mangle-global!");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
DEF(YevalSastYprogram_line,"eval/ast","program-line");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSastYfunctions,"eval/ast","functions");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YevalSastYbinding_prop_setter,"eval/ast","binding-prop-setter");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYLnamespace_errorG,"eval/ast","<namespace-error>");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLnumG,"goo/boot","<num>");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(YevalSastYobjectify,"eval/ast","objectify");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_530);
DEFLIT(lit_74);
DEFLIT(lit_136);
DEFLIT(lit_494);
DEFLIT(lit_33);
DEFLIT(lit_567);
DEFLIT(lit_323);
DEFLIT(lit_1034);
DEFLIT(lit_61);
DEFLIT(lit_758);
DEFLIT(lit_496);
DEFLIT(lit_481);
DEFLIT(lit_761);
DEFLIT(lit_500);
DEFLIT(lit_156);
DEFLIT(lit_521);
DEFLIT(lit_53);
DEFLIT(lit_1058);
DEFLIT(lit_710);
DEFLIT(lit_826);
DEFLIT(lit_953);
DEFLIT(lit_501);
DEFLIT(lit_543);
DEFLIT(lit_614);
DEFLIT(lit_661);
DEFLIT(lit_591);
DEFLIT(lit_946);
DEFLIT(lit_722);
DEFLIT(lit_627);
DEFLIT(lit_804);
DEFLIT(lit_618);
DEFLIT(lit_474);
DEFLIT(lit_598);
DEFLIT(lit_890);
DEFLIT(lit_788);
DEFLIT(lit_1);
DEFLIT(lit_404);
DEFLIT(lit_975);
DEFLIT(lit_2);
DEFLIT(lit_1048);
DEFLIT(lit_206);
DEFLIT(lit_83);
DEFLIT(lit_225);
DEFLIT(lit_97);
DEFLIT(lit_557);
DEFLIT(lit_623);
DEFLIT(lit_1066);
DEFLIT(lit_250);
DEFLIT(lit_693);
DEFLIT(lit_889);
DEFLIT(lit_558);
DEFLIT(lit_647);
DEFLIT(lit_542);
DEFLIT(lit_532);
DEFLIT(lit_368);
DEFLIT(lit_12);
DEFLIT(lit_931);
DEFLIT(lit_784);
DEFLIT(lit_139);
DEFLIT(lit_735);
DEFLIT(lit_422);
DEFLIT(lit_867);
DEFLIT(lit_764);
DEFLIT(lit_488);
DEFLIT(lit_107);
DEFLIT(lit_129);
DEFLIT(lit_384);
DEFLIT(lit_495);
DEFLIT(lit_847);
DEFLIT(lit_187);
DEFLIT(lit_707);
DEFLIT(lit_394);
DEFLIT(lit_923);
DEFLIT(lit_437);
DEFLIT(lit_777);
DEFLIT(lit_517);
DEFLIT(lit_997);
DEFLIT(lit_350);
DEFLIT(lit_845);
DEFLIT(lit_853);
DEFLIT(lit_123);
DEFLIT(lit_1057);
DEFLIT(lit_336);
DEFLIT(lit_910);
DEFLIT(lit_102);
DEFLIT(lit_778);
DEFLIT(lit_289);
DEFLIT(lit_964);
DEFLIT(lit_636);
DEFLIT(lit_200);
DEFLIT(lit_160);
DEFLIT(lit_741);
DEFLIT(lit_473);
DEFLIT(lit_1055);
DEFLIT(lit_41);
DEFLIT(lit_751);
DEFLIT(lit_301);
DEFLIT(lit_971);
DEFLIT(lit_908);
DEFLIT(lit_927);
DEFLIT(lit_154);
DEFLIT(lit_463);
DEFLIT(lit_164);
DEFLIT(lit_685);
DEFLIT(lit_829);
DEFLIT(lit_664);
DEFLIT(lit_644);
DEFLIT(lit_28);
DEFLIT(lit_534);
DEFLIT(lit_288);
DEFLIT(lit_296);
DEFLIT(lit_555);
DEFLIT(lit_204);
DEFLIT(lit_94);
DEFLIT(lit_565);
DEFLIT(lit_599);
DEFLIT(lit_668);
DEFLIT(lit_1014);
DEFLIT(lit_349);
DEFLIT(lit_730);
DEFLIT(lit_132);
DEFLIT(lit_70);
DEFLIT(lit_464);
DEFLIT(lit_701);
DEFLIT(lit_583);
DEFLIT(lit_863);
DEFLIT(lit_632);
DEFLIT(lit_678);
DEFLIT(lit_216);
DEFLIT(lit_907);
DEFLIT(lit_351);
DEFLIT(lit_213);
DEFLIT(lit_822);
DEFLIT(lit_1047);
DEFLIT(lit_1049);
DEFLIT(lit_724);
DEFLIT(lit_572);
DEFLIT(lit_1068);
DEFLIT(lit_687);
DEFLIT(lit_398);
DEFLIT(lit_1042);
DEFLIT(lit_337);
DEFLIT(lit_843);
DEFLIT(lit_124);
DEFLIT(lit_32);
DEFLIT(lit_335);
DEFLIT(lit_954);
DEFLIT(lit_1062);
DEFLIT(lit_402);
DEFLIT(lit_127);
DEFLIT(lit_600);
DEFLIT(lit_866);
DEFLIT(lit_483);
DEFLIT(lit_395);
DEFLIT(lit_85);
DEFLIT(lit_340);
DEFLIT(lit_839);
DEFLIT(lit_165);
DEFLIT(lit_575);
DEFLIT(lit_198);
DEFLIT(lit_82);
DEFLIT(lit_248);
DEFLIT(lit_58);
DEFLIT(lit_926);
DEFLIT(lit_192);
DEFLIT(lit_138);
DEFLIT(lit_503);
DEFLIT(lit_344);
DEFLIT(lit_733);
DEFLIT(lit_876);
DEFLIT(lit_820);
DEFLIT(lit_809);
DEFLIT(lit_34);
DEFLIT(lit_20);
DEFLIT(lit_263);
DEFLIT(lit_314);
DEFLIT(lit_833);
DEFLIT(lit_361);
DEFLIT(lit_969);
DEFLIT(lit_522);
DEFLIT(lit_509);
DEFLIT(lit_179);
DEFLIT(lit_434);
DEFLIT(lit_934);
DEFLIT(lit_316);
DEFLIT(lit_967);
DEFLIT(lit_955);
DEFLIT(lit_1029);
DEFLIT(lit_403);
DEFLIT(lit_477);
DEFLIT(lit_941);
DEFLIT(lit_8);
DEFLIT(lit_197);
DEFLIT(lit_119);
DEFLIT(lit_846);
DEFLIT(lit_745);
DEFLIT(lit_700);
DEFLIT(lit_369);
DEFLIT(lit_896);
DEFLIT(lit_35);
DEFLIT(lit_303);
DEFLIT(lit_520);
DEFLIT(lit_425);
DEFLIT(lit_548);
DEFLIT(lit_1017);
DEFLIT(lit_407);
DEFLIT(lit_211);
DEFLIT(lit_226);
DEFLIT(lit_838);
DEFLIT(lit_209);
DEFLIT(lit_177);
DEFLIT(lit_215);
DEFLIT(lit_1045);
DEFLIT(lit_147);
DEFLIT(lit_128);
DEFLIT(lit_229);
DEFLIT(lit_459);
DEFLIT(lit_862);
DEFLIT(lit_996);
DEFLIT(lit_917);
DEFLIT(lit_244);
DEFLIT(lit_965);
DEFLIT(lit_818);
DEFLIT(lit_852);
DEFLIT(lit_376);
DEFLIT(lit_1056);
DEFLIT(lit_796);
DEFLIT(lit_6);
DEFLIT(lit_645);
DEFLIT(lit_432);
DEFLIT(lit_589);
DEFLIT(lit_799);
DEFLIT(lit_181);
DEFLIT(lit_227);
DEFLIT(lit_650);
DEFLIT(lit_943);
DEFLIT(lit_877);
DEFLIT(lit_122);
DEFLIT(lit_362);
DEFLIT(lit_427);
DEFLIT(lit_247);
DEFLIT(lit_341);
DEFLIT(lit_987);
DEFLIT(lit_920);
DEFLIT(lit_871);
DEFLIT(lit_246);
DEFLIT(lit_631);
DEFLIT(lit_630);
DEFLIT(lit_775);
DEFLIT(lit_413);
DEFLIT(lit_988);
DEFLIT(lit_998);
DEFLIT(lit_281);
DEFLIT(lit_720);
DEFLIT(lit_915);
DEFLIT(lit_768);
DEFLIT(lit_451);
DEFLIT(lit_134);
DEFLIT(lit_531);
DEFLIT(lit_31);
DEFLIT(lit_616);
DEFLIT(lit_484);
DEFLIT(lit_723);
DEFLIT(lit_292);
DEFLIT(lit_24);
DEFLIT(lit_391);
DEFLIT(lit_894);
DEFLIT(lit_455);
DEFLIT(lit_1016);
DEFLIT(lit_588);
DEFLIT(lit_810);
DEFLIT(lit_371);
DEFLIT(lit_919);
DEFLIT(lit_348);
DEFLIT(lit_155);
DEFLIT(lit_150);
DEFLIT(lit_144);
DEFLIT(lit_268);
DEFLIT(lit_657);
DEFLIT(lit_642);
DEFLIT(lit_569);
DEFLIT(lit_928);
DEFLIT(lit_694);
DEFLIT(lit_888);
DEFLIT(lit_554);
DEFLIT(lit_597);
DEFLIT(lit_118);
DEFLIT(lit_742);
DEFLIT(lit_1033);
DEFLIT(lit_223);
DEFLIT(lit_64);
DEFLIT(lit_1067);
DEFLIT(lit_92);
DEFLIT(lit_5);
DEFLIT(lit_957);
DEFLIT(lit_358);
DEFLIT(lit_827);
DEFLIT(lit_414);
DEFLIT(lit_366);
DEFLIT(lit_944);
DEFLIT(lit_713);
DEFLIT(lit_239);
DEFLIT(lit_564);
DEFLIT(lit_471);
DEFLIT(lit_1054);
DEFLIT(lit_382);
DEFLIT(lit_773);
DEFLIT(lit_392);
DEFLIT(lit_448);
DEFLIT(lit_507);
DEFLIT(lit_891);
DEFLIT(lit_873);
DEFLIT(lit_145);
DEFLIT(lit_254);
DEFLIT(lit_620);
DEFLIT(lit_290);
DEFLIT(lit_603);
DEFLIT(lit_44);
DEFLIT(lit_865);
DEFLIT(lit_762);
DEFLIT(lit_378);
DEFLIT(lit_111);
DEFLIT(lit_973);
DEFLIT(lit_249);
DEFLIT(lit_334);
DEFLIT(lit_515);
DEFLIT(lit_306);
DEFLIT(lit_563);
DEFLIT(lit_780);
DEFLIT(lit_120);
DEFLIT(lit_114);
DEFLIT(lit_966);
DEFLIT(lit_718);
DEFLIT(lit_17);
DEFLIT(lit_803);
DEFLIT(lit_634);
DEFLIT(lit_1027);
DEFLIT(lit_381);
DEFLIT(lit_525);
DEFLIT(lit_182);
DEFLIT(lit_452);
DEFLIT(lit_1032);
DEFLIT(lit_299);
DEFLIT(lit_462);
DEFLIT(lit_676);
DEFLIT(lit_286);
DEFLIT(lit_540);
DEFLIT(lit_461);
DEFLIT(lit_171);
DEFLIT(lit_329);
DEFLIT(lit_772);
DEFLIT(lit_712);
DEFLIT(lit_523);
DEFLIT(lit_808);
DEFLIT(lit_438);
DEFLIT(lit_151);
DEFLIT(lit_769);
DEFLIT(lit_367);
DEFLIT(lit_421);
DEFLIT(lit_294);
DEFLIT(lit_658);
DEFLIT(lit_1063);
DEFLIT(lit_23);
DEFLIT(lit_899);
DEFLIT(lit_1019);
DEFLIT(lit_1040);
DEFLIT(lit_746);
DEFLIT(lit_628);
DEFLIT(lit_981);
DEFLIT(lit_42);
DEFLIT(lit_50);
DEFLIT(lit_346);
DEFLIT(lit_307);
DEFLIT(lit_886);
DEFLIT(lit_688);
DEFLIT(lit_699);
DEFLIT(lit_584);
DEFLIT(lit_188);
DEFLIT(lit_551);
DEFLIT(lit_756);
DEFLIT(lit_714);
DEFLIT(lit_725);
DEFLIT(lit_322);
DEFLIT(lit_287);
DEFLIT(lit_547);
DEFLIT(lit_984);
DEFLIT(lit_819);
DEFLIT(lit_1021);
DEFLIT(lit_766);
DEFLIT(lit_587);
DEFLIT(lit_646);
DEFLIT(lit_196);
DEFLIT(lit_230);
DEFLIT(lit_312);
DEFLIT(lit_1012);
DEFLIT(lit_429);
DEFLIT(lit_970);
DEFLIT(lit_528);
DEFLIT(lit_241);
DEFLIT(lit_423);
DEFLIT(lit_396);
DEFLIT(lit_135);
DEFLIT(lit_297);
DEFLIT(lit_184);
DEFLIT(lit_586);
DEFLIT(lit_813);
DEFLIT(lit_332);
DEFLIT(lit_356);
DEFLIT(lit_1010);
DEFLIT(lit_400);
DEFLIT(lit_108);
DEFLIT(lit_293);
DEFLIT(lit_121);
DEFLIT(lit_338);
DEFLIT(lit_262);
DEFLIT(lit_9);
DEFLIT(lit_27);
DEFLIT(lit_696);
DEFLIT(lit_401);
DEFLIT(lit_255);
DEFLIT(lit_80);
DEFLIT(lit_415);
DEFLIT(lit_265);
DEFLIT(lit_729);
DEFLIT(lit_604);
DEFLIT(lit_375);
DEFLIT(lit_792);
DEFLIT(lit_468);
DEFLIT(lit_59);
DEFLIT(lit_342);
DEFLIT(lit_732);
DEFLIT(lit_140);
DEFLIT(lit_109);
DEFLIT(lit_191);
DEFLIT(lit_1052);
DEFLIT(lit_985);
DEFLIT(lit_595);
DEFLIT(lit_656);
DEFLIT(lit_383);
DEFLIT(lit_897);
DEFLIT(lit_271);
DEFLIT(lit_857);
DEFLIT(lit_1001);
DEFLIT(lit_235);
DEFLIT(lit_442);
DEFLIT(lit_30);
DEFLIT(lit_743);
DEFLIT(lit_110);
DEFLIT(lit_624);
DEFLIT(lit_370);
DEFLIT(lit_178);
DEFLIT(lit_999);
DEFLIT(lit_821);
DEFLIT(lit_976);
DEFLIT(lit_18);
DEFLIT(lit_869);
DEFLIT(lit_3);
DEFLIT(lit_117);
DEFLIT(lit_450);
DEFLIT(lit_189);
DEFLIT(lit_622);
DEFLIT(lit_190);
DEFLIT(lit_980);
DEFLIT(lit_698);
DEFLIT(lit_195);
DEFLIT(lit_77);
DEFLIT(lit_347);
DEFLIT(lit_302);
DEFLIT(lit_1069);
DEFLIT(lit_36);
DEFLIT(lit_47);
DEFLIT(lit_238);
DEFLIT(lit_831);
DEFLIT(lit_330);
DEFLIT(lit_771);
DEFLIT(lit_175);
DEFLIT(lit_389);
DEFLIT(lit_203);
DEFLIT(lit_321);
DEFLIT(lit_757);
DEFLIT(lit_544);
DEFLIT(lit_374);
DEFLIT(lit_697);
DEFLIT(lit_457);
DEFLIT(lit_45);
DEFLIT(lit_800);
DEFLIT(lit_29);
DEFLIT(lit_185);
DEFLIT(lit_272);
DEFLIT(lit_939);
DEFLIT(lit_173);
DEFLIT(lit_237);
DEFLIT(lit_176);
DEFLIT(lit_320);
DEFLIT(lit_469);
DEFLIT(lit_947);
DEFLIT(lit_559);
DEFLIT(lit_1073);
DEFLIT(lit_643);
DEFLIT(lit_709);
DEFLIT(lit_539);
DEFLIT(lit_610);
DEFLIT(lit_797);
DEFLIT(lit_489);
DEFLIT(lit_860);
DEFLIT(lit_605);
DEFLIT(lit_930);
DEFLIT(lit_25);
DEFLIT(lit_533);
DEFLIT(lit_266);
DEFLIT(lit_932);
DEFLIT(lit_412);
DEFLIT(lit_992);
DEFLIT(lit_172);
DEFLIT(lit_933);
DEFLIT(lit_397);
DEFLIT(lit_214);
DEFLIT(lit_63);
DEFLIT(lit_785);
DEFLIT(lit_649);
DEFLIT(lit_844);
DEFLIT(lit_782);
DEFLIT(lit_706);
DEFLIT(lit_273);
DEFLIT(lit_652);
DEFLIT(lit_447);
DEFLIT(lit_948);
DEFLIT(lit_875);
DEFLIT(lit_1065);
DEFLIT(lit_279);
DEFLIT(lit_684);
DEFLIT(lit_524);
DEFLIT(lit_1053);
DEFLIT(lit_824);
DEFLIT(lit_319);
DEFLIT(lit_945);
DEFLIT(lit_482);
DEFLIT(lit_485);
DEFLIT(lit_1026);
DEFLIT(lit_635);
DEFLIT(lit_318);
DEFLIT(lit_22);
DEFLIT(lit_695);
DEFLIT(lit_285);
DEFLIT(lit_817);
DEFLIT(lit_453);
DEFLIT(lit_86);
DEFLIT(lit_259);
DEFLIT(lit_54);
DEFLIT(lit_168);
DEFLIT(lit_689);
DEFLIT(lit_519);
DEFLIT(lit_592);
DEFLIT(lit_1015);
DEFLIT(lit_633);
DEFLIT(lit_702);
DEFLIT(lit_1020);
DEFLIT(lit_608);
DEFLIT(lit_472);
DEFLIT(lit_787);
DEFLIT(lit_755);
DEFLIT(lit_770);
DEFLIT(lit_546);
DEFLIT(lit_783);
DEFLIT(lit_823);
DEFLIT(lit_906);
DEFLIT(lit_1038);
DEFLIT(lit_428);
DEFLIT(lit_498);
DEFLIT(lit_224);
DEFLIT(lit_142);
DEFLIT(lit_433);
DEFLIT(lit_763);
DEFLIT(lit_1007);
DEFLIT(lit_594);
DEFLIT(lit_90);
DEFLIT(lit_65);
DEFLIT(lit_409);
DEFLIT(lit_309);
DEFLIT(lit_1072);
DEFLIT(lit_40);
DEFLIT(lit_691);
DEFLIT(lit_840);
DEFLIT(lit_562);
DEFLIT(lit_883);
DEFLIT(lit_905);
DEFLIT(lit_1037);
DEFLIT(lit_51);
DEFLIT(lit_606);
DEFLIT(lit_1039);
DEFLIT(lit_748);
DEFLIT(lit_153);
DEFLIT(lit_379);
DEFLIT(lit_728);
DEFLIT(lit_721);
DEFLIT(lit_231);
DEFLIT(lit_834);
DEFLIT(lit_492);
DEFLIT(lit_143);
DEFLIT(lit_893);
DEFLIT(lit_354);
DEFLIT(lit_317);
DEFLIT(lit_0);
DEFLIT(lit_393);
DEFLIT(lit_513);
DEFLIT(lit_300);
DEFLIT(lit_864);
DEFLIT(lit_1030);
DEFLIT(lit_304);
DEFLIT(lit_566);
DEFLIT(lit_112);
DEFLIT(lit_399);
DEFLIT(lit_767);
DEFLIT(lit_609);
DEFLIT(lit_1009);
DEFLIT(lit_806);
DEFLIT(lit_232);
DEFLIT(lit_458);
DEFLIT(lit_251);
DEFLIT(lit_974);
DEFLIT(lit_490);
DEFLIT(lit_242);
DEFLIT(lit_49);
DEFLIT(lit_212);
DEFLIT(lit_157);
DEFLIT(lit_476);
DEFLIT(lit_283);
DEFLIT(lit_705);
DEFLIT(lit_98);
DEFLIT(lit_719);
DEFLIT(lit_653);
DEFLIT(lit_912);
DEFLIT(lit_1013);
DEFLIT(lit_571);
DEFLIT(lit_781);
DEFLIT(lit_48);
DEFLIT(lit_673);
DEFLIT(lit_327);
DEFLIT(lit_208);
DEFLIT(lit_103);
DEFLIT(lit_441);
DEFLIT(lit_738);
DEFLIT(lit_4);
DEFLIT(lit_81);
DEFLIT(lit_264);
DEFLIT(lit_960);
DEFLIT(lit_959);
DEFLIT(lit_84);
DEFLIT(lit_526);
DEFLIT(lit_270);
DEFLIT(lit_982);
DEFLIT(lit_731);
DEFLIT(lit_11);
DEFLIT(lit_16);
DEFLIT(lit_921);
DEFLIT(lit_935);
DEFLIT(lit_88);
DEFLIT(lit_925);
DEFLIT(lit_929);
DEFLIT(lit_410);
DEFLIT(lit_686);
DEFLIT(lit_951);
DEFLIT(lit_538);
DEFLIT(lit_536);
DEFLIT(lit_801);
DEFLIT(lit_779);
DEFLIT(lit_183);
DEFLIT(lit_814);
DEFLIT(lit_113);
DEFLIT(lit_692);
DEFLIT(lit_1043);
DEFLIT(lit_278);
DEFLIT(lit_550);
DEFLIT(lit_918);
DEFLIT(lit_979);
DEFLIT(lit_983);
DEFLIT(lit_552);
DEFLIT(lit_343);
DEFLIT(lit_360);
DEFLIT(lit_324);
DEFLIT(lit_390);
DEFLIT(lit_388);
DEFLIT(lit_89);
DEFLIT(lit_640);
DEFLIT(lit_253);
DEFLIT(lit_680);
DEFLIT(lit_1031);
DEFLIT(lit_585);
DEFLIT(lit_133);
DEFLIT(lit_194);
DEFLIT(lit_174);
DEFLIT(lit_146);
DEFLIT(lit_75);
DEFLIT(lit_357);
DEFLIT(lit_298);
DEFLIT(lit_580);
DEFLIT(lit_602);
DEFLIT(lit_79);
DEFLIT(lit_67);
DEFLIT(lit_672);
DEFLIT(lit_740);
DEFLIT(lit_621);
DEFLIT(lit_269);
DEFLIT(lit_535);
DEFLIT(lit_233);
DEFLIT(lit_1004);
DEFLIT(lit_440);
DEFLIT(lit_882);
DEFLIT(lit_940);
DEFLIT(lit_961);
DEFLIT(lit_234);
DEFLIT(lit_218);
DEFLIT(lit_1025);
DEFLIT(lit_596);
DEFLIT(lit_62);
DEFLIT(lit_66);
DEFLIT(lit_901);
DEFLIT(lit_903);
DEFLIT(lit_444);
DEFLIT(lit_924);
DEFLIT(lit_902);
DEFLIT(lit_493);
DEFLIT(lit_835);
DEFLIT(lit_10);
DEFLIT(lit_1041);
DEFLIT(lit_68);
DEFLIT(lit_333);
DEFLIT(lit_798);
DEFLIT(lit_39);
DEFLIT(lit_222);
DEFLIT(lit_240);
DEFLIT(lit_791);
DEFLIT(lit_78);
DEFLIT(lit_704);
DEFLIT(lit_282);
DEFLIT(lit_510);
DEFLIT(lit_615);
DEFLIT(lit_26);
DEFLIT(lit_641);
DEFLIT(lit_1050);
DEFLIT(lit_387);
DEFLIT(lit_405);
DEFLIT(lit_898);
DEFLIT(lit_1005);
DEFLIT(lit_236);
DEFLIT(lit_744);
DEFLIT(lit_372);
DEFLIT(lit_475);
DEFLIT(lit_868);
DEFLIT(lit_43);
DEFLIT(lit_37);
DEFLIT(lit_638);
DEFLIT(lit_180);
DEFLIT(lit_505);
DEFLIT(lit_582);
DEFLIT(lit_986);
DEFLIT(lit_870);
DEFLIT(lit_832);
DEFLIT(lit_1036);
DEFLIT(lit_486);
DEFLIT(lit_637);
DEFLIT(lit_666);
DEFLIT(lit_276);
DEFLIT(lit_1035);
DEFLIT(lit_812);
DEFLIT(lit_629);
DEFLIT(lit_277);
DEFLIT(lit_537);
DEFLIT(lit_159);
DEFLIT(lit_626);
DEFLIT(lit_295);
DEFLIT(lit_487);
DEFLIT(lit_100);
DEFLIT(lit_568);
DEFLIT(lit_879);
DEFLIT(lit_747);
DEFLIT(lit_430);
DEFLIT(lit_170);
DEFLIT(lit_556);
DEFLIT(lit_671);
DEFLIT(lit_15);
DEFLIT(lit_76);
DEFLIT(lit_105);
DEFLIT(lit_667);
DEFLIT(lit_339);
DEFLIT(lit_612);
DEFLIT(lit_703);
DEFLIT(lit_850);
DEFLIT(lit_795);
DEFLIT(lit_880);
DEFLIT(lit_541);
DEFLIT(lit_856);
DEFLIT(lit_560);
DEFLIT(lit_199);
DEFLIT(lit_445);
DEFLIT(lit_380);
DEFLIT(lit_326);
DEFLIT(lit_1044);
DEFLIT(lit_331);
DEFLIT(lit_659);
DEFLIT(lit_460);
DEFLIT(lit_91);
DEFLIT(lit_815);
DEFLIT(lit_937);
DEFLIT(lit_1006);
DEFLIT(lit_913);
DEFLIT(lit_617);
DEFLIT(lit_828);
DEFLIT(lit_1028);
DEFLIT(lit_892);
DEFLIT(lit_106);
DEFLIT(lit_52);
DEFLIT(lit_207);
DEFLIT(lit_420);
DEFLIT(lit_807);
DEFLIT(lit_802);
DEFLIT(lit_993);
DEFLIT(lit_774);
DEFLIT(lit_385);
DEFLIT(lit_739);
DEFLIT(lit_115);
DEFLIT(lit_55);
DEFLIT(lit_1002);
DEFLIT(lit_727);
DEFLIT(lit_345);
DEFLIT(lit_284);
DEFLIT(lit_576);
DEFLIT(lit_938);
DEFLIT(lit_1011);
DEFLIT(lit_717);
DEFLIT(lit_842);
DEFLIT(lit_325);
DEFLIT(lit_708);
DEFLIT(lit_426);
DEFLIT(lit_529);
DEFLIT(lit_990);
DEFLIT(lit_648);
DEFLIT(lit_655);
DEFLIT(lit_373);
DEFLIT(lit_470);
DEFLIT(lit_431);
DEFLIT(lit_786);
DEFLIT(lit_186);
DEFLIT(lit_502);
DEFLIT(lit_158);
DEFLIT(lit_663);
DEFLIT(lit_900);
DEFLIT(lit_972);
DEFLIT(lit_116);
DEFLIT(lit_363);
DEFLIT(lit_942);
DEFLIT(lit_989);
DEFLIT(lit_805);
DEFLIT(lit_56);
DEFLIT(lit_607);
DEFLIT(lit_137);
DEFLIT(lit_93);
DEFLIT(lit_885);
DEFLIT(lit_753);
DEFLIT(lit_527);
DEFLIT(lit_601);
DEFLIT(lit_406);
DEFLIT(lit_750);
DEFLIT(lit_682);
DEFLIT(lit_1000);
DEFLIT(lit_449);
DEFLIT(lit_674);
DEFLIT(lit_99);
DEFLIT(lit_69);
DEFLIT(lit_328);
DEFLIT(lit_854);
DEFLIT(lit_690);
DEFLIT(lit_578);
DEFLIT(lit_837);
DEFLIT(lit_790);
DEFLIT(lit_148);
DEFLIT(lit_579);
DEFLIT(lit_1051);
DEFLIT(lit_161);
DEFLIT(lit_467);
DEFLIT(lit_315);
DEFLIT(lit_1071);
DEFLIT(lit_219);
DEFLIT(lit_662);
DEFLIT(lit_141);
DEFLIT(lit_1018);
DEFLIT(lit_424);
DEFLIT(lit_874);
DEFLIT(lit_131);
DEFLIT(lit_497);
DEFLIT(lit_683);
DEFLIT(lit_651);
DEFLIT(lit_669);
DEFLIT(lit_549);
DEFLIT(lit_310);
DEFLIT(lit_978);
DEFLIT(lit_454);
DEFLIT(lit_166);
DEFLIT(lit_855);
DEFLIT(lit_611);
DEFLIT(lit_210);
DEFLIT(lit_816);
DEFLIT(lit_125);
DEFLIT(lit_654);
DEFLIT(lit_639);
DEFLIT(lit_734);
DEFLIT(lit_313);
DEFLIT(lit_849);
DEFLIT(lit_681);
DEFLIT(lit_916);
DEFLIT(lit_670);
DEFLIT(lit_104);
DEFLIT(lit_435);
DEFLIT(lit_291);
DEFLIT(lit_841);
DEFLIT(lit_202);
DEFLIT(lit_162);
DEFLIT(lit_660);
DEFLIT(lit_228);
DEFLIT(lit_914);
DEFLIT(lit_245);
DEFLIT(lit_499);
DEFLIT(lit_71);
DEFLIT(lit_96);
DEFLIT(lit_752);
DEFLIT(lit_716);
DEFLIT(lit_977);
DEFLIT(lit_573);
DEFLIT(lit_352);
DEFLIT(lit_574);
DEFLIT(lit_126);
DEFLIT(lit_14);
DEFLIT(lit_726);
DEFLIT(lit_994);
DEFLIT(lit_665);
DEFLIT(lit_377);
DEFLIT(lit_963);
DEFLIT(lit_1022);
DEFLIT(lit_884);
DEFLIT(lit_991);
DEFLIT(lit_7);
DEFLIT(lit_1061);
DEFLIT(lit_466);
DEFLIT(lit_72);
DEFLIT(lit_881);
DEFLIT(lit_776);
DEFLIT(lit_480);
DEFLIT(lit_280);
DEFLIT(lit_759);
DEFLIT(lit_561);
DEFLIT(lit_514);
DEFLIT(lit_57);
DEFLIT(lit_950);
DEFLIT(lit_13);
DEFLIT(lit_260);
DEFLIT(lit_149);
DEFLIT(lit_949);
DEFLIT(lit_848);
DEFLIT(lit_956);
DEFLIT(lit_353);
DEFLIT(lit_101);
DEFLIT(lit_581);
DEFLIT(lit_613);
DEFLIT(lit_619);
DEFLIT(lit_962);
DEFLIT(lit_887);
DEFLIT(lit_355);
DEFLIT(lit_1023);
DEFLIT(lit_365);
DEFLIT(lit_512);
DEFLIT(lit_677);
DEFLIT(lit_436);
DEFLIT(lit_257);
DEFLIT(lit_968);
DEFLIT(lit_1008);
DEFLIT(lit_311);
DEFLIT(lit_760);
DEFLIT(lit_359);
DEFLIT(lit_570);
DEFLIT(lit_478);
DEFLIT(lit_859);
DEFLIT(lit_958);
DEFLIT(lit_625);
DEFLIT(lit_87);
DEFLIT(lit_736);
DEFLIT(lit_21);
DEFLIT(lit_167);
DEFLIT(lit_577);
DEFLIT(lit_909);
DEFLIT(lit_754);
DEFLIT(lit_922);
DEFLIT(lit_715);
DEFLIT(lit_60);
DEFLIT(lit_169);
DEFLIT(lit_491);
DEFLIT(lit_46);
DEFLIT(lit_679);
DEFLIT(lit_749);
DEFLIT(lit_825);
DEFLIT(lit_408);
DEFLIT(lit_593);
DEFLIT(lit_163);
DEFLIT(lit_308);
DEFLIT(lit_220);
DEFLIT(lit_545);
DEFLIT(lit_836);
DEFLIT(lit_443);
DEFLIT(lit_252);
DEFLIT(lit_221);
DEFLIT(lit_830);
DEFLIT(lit_511);
DEFLIT(lit_936);
DEFLIT(lit_417);
DEFLIT(lit_518);
DEFLIT(lit_1064);
DEFLIT(lit_479);
DEFLIT(lit_305);
DEFLIT(lit_811);
DEFLIT(lit_895);
DEFLIT(lit_19);
DEFLIT(lit_416);
DEFLIT(lit_872);
DEFLIT(lit_419);
DEFLIT(lit_675);
DEFLIT(lit_504);
DEFLIT(lit_201);
DEFLIT(lit_152);
DEFLIT(lit_274);
DEFLIT(lit_851);
DEFLIT(lit_995);
DEFLIT(lit_38);
DEFLIT(lit_267);
DEFLIT(lit_858);
DEFLIT(lit_386);
DEFLIT(lit_711);
DEFLIT(lit_446);
DEFLIT(lit_258);
DEFLIT(lit_737);
DEFLIT(lit_456);
DEFLIT(lit_765);
DEFLIT(lit_217);
DEFLIT(lit_465);
DEFLIT(lit_516);
DEFLIT(lit_508);
DEFLIT(lit_256);
DEFLIT(lit_73);
DEFLIT(lit_1070);
DEFLIT(lit_1046);
DEFLIT(lit_1003);
DEFLIT(lit_439);
DEFLIT(lit_911);
DEFLIT(lit_904);
DEFLIT(lit_261);
DEFLIT(lit_793);
DEFLIT(lit_364);
DEFLIT(lit_275);
DEFLIT(lit_1060);
DEFLIT(lit_1024);
DEFLIT(lit_553);
DEFLIT(lit_418);
DEFLIT(lit_205);
DEFLIT(lit_590);
DEFLIT(lit_794);
DEFLIT(lit_861);
DEFLIT(lit_878);
DEFLIT(lit_952);
DEFLIT(lit_789);
DEFLIT(lit_130);
DEFLIT(lit_506);
DEFLIT(lit_411);
DEFLIT(lit_95);
DEFLIT(lit_193);
DEFLIT(lit_243);
DEFLIT(lit_1059);

/* FUNCTIONS: */

LOCFOR(fun_x_1431_0);
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
LOCFOR(fun_boundQ_default_72);
LOCFOR(fun_boundQ_default_setter_73);
LOCFOR(fun_assignment_form_74);
LOCFOR(fun_assignment_form_setter_75);
LOCFOR(fun_assignment_reference_76);
LOCFOR(fun_assignment_reference_setter_77);
LOCFOR(fun_assignment_binding_78);
LOCFOR(fun_assignment_binding_setter_79);
LOCFOR(fun_signature_bindings_80);
LOCFOR(fun_signature_bindings_setter_81);
LOCFOR(fun_82);
LOCFOR(fun_signature_names_83);
LOCFOR(fun_signature_names_setter_84);
LOCFOR(fun_85);
LOCFOR(fun_signature_specs_86);
LOCFOR(fun_signature_specs_setter_87);
LOCFOR(fun_88);
LOCFOR(fun_signature_naryQ_89);
LOCFOR(fun_signature_naryQ_setter_90);
LOCFOR(fun_91);
LOCFOR(fun_signature_arity_92);
LOCFOR(fun_signature_arity_setter_93);
LOCFOR(fun_94);
LOCFOR(fun_signature_value_95);
LOCFOR(fun_signature_value_setter_96);
LOCFOR(fun_97);
LOCFOR(fun_req_sig_specs_98);
LOCFOR(fun_function_binding_99);
LOCFOR(fun_function_binding_setter_100);
LOCFOR(fun_101);
LOCFOR(fun_function_debug_name_102);
LOCFOR(fun_function_debug_name_setter_103);
LOCFOR(fun_104);
LOCFOR(fun_function_signature_105);
LOCFOR(fun_function_signature_setter_106);
FUNFOR(YevalSastYfunction_bindings);
FUNFOR(YevalSastYfunction_specs);
FUNFOR(YevalSastYfunction_naryQ);
FUNFOR(YevalSastYfunction_value);
LOCFOR(fun_function_kind_111);
FUNFOR(YevalSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_113);
LOCFOR(fun_loop_114);
LOCFOR(fun_as_lst_115);
LOCFOR(fun_x_1437_116);
LOCFOR(fun_117);
LOCFOR(fun_118);
LOCFOR(fun_function_body_119);
LOCFOR(fun_function_body_setter_120);
LOCFOR(fun_121);
LOCFOR(fun_function_index_122);
LOCFOR(fun_function_index_setter_123);
LOCFOR(fun_124);
LOCFOR(fun_function_temporaries_125);
LOCFOR(fun_function_temporaries_setter_126);
LOCFOR(fun_127);
LOCFOR(fun_function_registers_128);
LOCFOR(fun_function_registers_setter_129);
LOCFOR(fun_130);
LOCFOR(fun_function_data_refs_131);
LOCFOR(fun_function_data_refs_setter_132);
LOCFOR(fun_133);
LOCFOR(fun_function_self_recursiveQ_134);
LOCFOR(fun_function_self_recursiveQ_setter_135);
LOCFOR(fun_136);
LOCFOR(fun_function_source_137);
LOCFOR(fun_function_source_setter_138);
LOCFOR(fun_139);
LOCFOR(fun_function_frame_len_140);
LOCFOR(fun_function_frame_len_setter_141);
LOCFOR(fun_142);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_empty_144);
LOCFOR(fun_function_free_145);
LOCFOR(fun_function_free_setter_146);
LOCFOR(fun_147);
LOCFOR(fun_function_kind_148);
LOCFOR(fun_function_adjectives_149);
LOCFOR(fun_function_adjectives_setter_150);
LOCFOR(fun_151);
LOCFOR(fun_function_kind_152);
LOCFOR(fun_function_kind_153);
LOCFOR(fun_alternative_condition_154);
LOCFOR(fun_alternative_condition_setter_155);
LOCFOR(fun_alternative_consequent_156);
LOCFOR(fun_alternative_consequent_setter_157);
LOCFOR(fun_alternative_alternant_158);
LOCFOR(fun_alternative_alternant_setter_159);
FUNFOR(YevalSastYsequential);
LOCFOR(fun_empty_161);
LOCFOR(fun_constant_value_162);
LOCFOR(fun_constant_value_setter_163);
LOCFOR(fun_constant_index_164);
LOCFOR(fun_constant_index_setter_165);
LOCFOR(fun_application_arguments_166);
LOCFOR(fun_application_arguments_setter_167);
LOCFOR(fun_application_tailQ_168);
LOCFOR(fun_application_tailQ_setter_169);
LOCFOR(fun_170);
LOCFOR(fun_application_function_171);
LOCFOR(fun_application_function_setter_172);
LOCFOR(fun_application_knownQ_173);
LOCFOR(fun_application_knownQ_setter_174);
LOCFOR(fun_175);
LOCFOR(fun_application_next_methods_176);
LOCFOR(fun_application_next_methods_setter_177);
LOCFOR(fun_application_binding_178);
LOCFOR(fun_application_binding_setter_179);
LOCFOR(fun_fix_let_bindings_180);
LOCFOR(fun_fix_let_bindings_setter_181);
LOCFOR(fun_fix_let_types_182);
LOCFOR(fun_fix_let_types_setter_183);
LOCFOR(fun_fix_let_arguments_184);
LOCFOR(fun_fix_let_arguments_setter_185);
LOCFOR(fun_fix_let_body_186);
LOCFOR(fun_fix_let_body_setter_187);
FUNFOR(YevalSastYfab_list);
LOCFOR(fun_empty_189);
FUNFOR(YevalSastYarguments);
LOCFOR(fun_empty_191);
LOCFOR(fun_locals_bindings_192);
LOCFOR(fun_locals_bindings_setter_193);
LOCFOR(fun_locals_functions_194);
LOCFOR(fun_locals_functions_setter_195);
LOCFOR(fun_locals_body_196);
LOCFOR(fun_locals_body_setter_197);
LOCFOR(fun_bind_exit_main_fun_198);
LOCFOR(fun_bind_exit_main_fun_setter_199);
LOCFOR(fun_unwind_protect_protected_thunk_200);
LOCFOR(fun_unwind_protect_protected_thunk_setter_201);
LOCFOR(fun_unwind_protect_cleanup_thunk_202);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_203);
LOCFOR(fun_monitor_type_204);
LOCFOR(fun_monitor_type_setter_205);
LOCFOR(fun_monitor_info_206);
LOCFOR(fun_monitor_info_setter_207);
LOCFOR(fun_monitor_test_208);
LOCFOR(fun_monitor_test_setter_209);
LOCFOR(fun_monitor_handler_210);
LOCFOR(fun_monitor_handler_setter_211);
LOCFOR(fun_monitor_main_thunk_212);
LOCFOR(fun_monitor_main_thunk_setter_213);
LOCFOR(fun_x_1439_214);
LOCFOR(fun_ast_walkX_215);
LOCFOR(fun_x_1441_216);
LOCFOR(fun_ast_walk_217);
LOCFOR(fun_ast_copy_218);
LOCFOR(fun_ast_copy_219);
LOCFOR(fun_environment_next_220);
LOCFOR(fun_environment_next_setter_221);
LOCFOR(fun_222);
LOCFOR(fun_environment_bindings_223);
LOCFOR(fun_environment_bindings_setter_224);
LOCFOR(fun_environment_module_225);
LOCFOR(fun_environment_module_setter_226);
LOCFOR(fun_environment_module_loader_227);
LOCFOR(fun_environment_module_loader_setter_228);
LOCFOR(fun_environment_uses_modules_229);
LOCFOR(fun_environment_uses_modules_setter_230);
LOCFOR(fun_231);
LOCFOR(fun_environment_allows_foreign_namesQ_232);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_233);
LOCFOR(fun_234);
LOCFOR(fun_235);
LOCFOR(fun_236);
LOCFOR(fun_env_object_name_237);
LOCFOR(fun_objectify_238);
LOCFOR(fun_objectify_list_239);
LOCFOR(fun_objectify_list_240);
LOCFOR(fun_objectify_list_241);
LOCFOR(fun_objectify_242);
LOCFOR(fun_objectify_243);
LOCFOR(fun_objectify_244);
LOCFOR(fun_objectify_245);
LOCFOR(fun_objectify_246);
LOCFOR(fun_objectify_quotation_247);
LOCFOR(fun_objectify_quotation_248);
LOCFOR(fun_objectify_quotation_249);
LOCFOR(fun_objectify_raw_250);
LOCFOR(fun_objectify_boundQ_251);
LOCFOR(fun_objectify_compile_time_252);
LOCFOR(fun_objectify_alternative_253);
LOCFOR(fun_loop_254);
LOCFOR(fun_sequentialize_255);
LOCFOR(fun_transform_defs_256);
LOCFOR(fun_loop_257);
LOCFOR(fun_objectify_sequential_258);
LOCFOR(fun_259);
LOCFOR(fun_objectify_application_260);
LOCFOR(fun_261);
LOCFOR(fun_objectify_application_262);
LOCFOR(fun_263);
LOCFOR(fun_objectify_application_264);
LOCFOR(fun_process_closed_application_265);
LOCFOR(fun_pack_nary_args_266);
LOCFOR(fun_pack_args_267);
LOCFOR(fun_process_nary_closed_application_268);
LOCFOR(fun_convert2arguments_269);
LOCFOR(fun_objectify_assignment_270);
LOCFOR(fun_objectify_assignment_271);
LOCFOR(fun_objectify_assignment_using_272);
LOCFOR(fun_objectify_assignment_using_273);
LOCFOR(fun_objectify_assignment_using_274);
LOCFOR(fun_objectify_assignment_using_275);
LOCFOR(fun_objectify_assignment_using_276);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_278);
LOCFOR(fun_objectify_definition_279);
LOCFOR(fun_objectify_variable_definition_280);
LOCFOR(fun_objectify_dynamic_definition_281);
LOCFOR(fun_expand_282);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_284);
LOCFOR(fun_objectify_function_definition_285);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_287);
LOCFOR(fun_objectify_generic_definition_288);
LOCFOR(fun_objectify_method_definition_289);
LOCFOR(fun_290);
LOCFOR(fun_291);
LOCFOR(fun_292);
LOCFOR(fun_293);
LOCFOR(fun_objectify_function_source_294);
LOCFOR(fun_295);
LOCFOR(fun_296);
LOCFOR(fun_objectify_function_297);
LOCFOR(fun_col_298);
LOCFOR(fun_objectify_signature_299);
LOCFOR(fun_find_300);
LOCFOR(fun_loop_301);
LOCFOR(fun_compute_local_reference_offsets_302);
LOCFOR(fun_objectify_binding_303);
LOCFOR(fun_binding_reference_class_304);
LOCFOR(fun_objectify_binding_305);
LOCFOR(fun_objectify_binding_306);
LOCFOR(fun_default_type_307);
LOCFOR(fun_objectify_free_global_reference_308);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_310);
LOCFOR(fun_objectify_symbol_311);
LOCFOR(fun_ftype_312);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_empty_314);
LOCFOR(fun_315);
LOCFOR(fun_316);
LOCFOR(fun_objectify_locals_317);
LOCFOR(fun_objectify_bind_exit_318);
LOCFOR(fun_objectify_unwind_protect_319);
LOCFOR(fun_objectify_monitor_320);
LOCFOR(fun_321);
LOCFOR(fun_322);
LOCFOR(fun_323);
LOCFOR(fun_324);
LOCFOR(fun_325);
LOCFOR(fun_objectify_export_326);
FUNFOR(YevalSastYimport_globalX);
LOCFOR(fun_328);
LOCFOR(fun_objectify_useSexport_module_329);
LOCFOR(fun_330);
LOCFOR(fun_objectify_use_include_331);
LOCFOR(fun_332);
LOCFOR(fun_objectify_use_library_333);
LOCFOR(fun_334);
LOCFOR(fun_use_mod_335);
LOCFOR(fun_use_c_mod_336);
LOCFOR(fun_objectify_use_module_337);
LOCFOR(fun_insert_and_mangle_globalX_338);
FUNFOR(YevalSastYimport_and_mangle_globalX);
LOCFOR(fun_340);
LOCFOR(fun_objectify_use_mangle_module_341);
LOCFOR(fun_expand_bind_list_342);
LOCFOR(fun_expand_bind_list_343);
LOCFOR(fun_expand_bind_list_344);
LOCFOR(fun_expand_bind_listT_345);
LOCFOR(fun_expand_bind_listT_346);
LOCFOR(fun_expand_bind_element_347);
LOCFOR(fun_expand_bind_element_348);
LOCFOR(fun_expand_pattern_349);
LOCFOR(fun_350);
LOCFOR(fun_expand_syntax_if_351);
LOCFOR(fun_r_extendT_352);
LOCFOR(fun_insert_globalX_353);
LOCFOR(fun_354);
LOCFOR(fun_insert_globalsX_355);
LOCFOR(fun_find_static_global_environment_356);
LOCFOR(fun_find_static_global_environment_357);
LOCFOR(fun_find_syntax_environment_358);
LOCFOR(fun_find_environment_module_359);
LOCFOR(fun_loop_360);
LOCFOR(fun_find_binding_361);
LOCFOR(fun_find_binding_362);
LOCFOR(fun_find_binding_363);
LOCFOR(fun_frame_bindings_364);
LOCFOR(fun_register_magic_binding_365);
LOCFOR(fun_magic_bindings_366);
LOCFOR(fun_x_1452_367);
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
LOCFOR(fun_388);
LOCFOR(fun_389);
LOCFOR(fun_390);
LOCFOR(fun_pairize_391);
LOCFOR(fun_392);
LOCFOR(fun_393);
LOCFOR(fun_394);
LOCFOR(fun_395);
LOCFOR(fun_396);
LOCFOR(fun_397);
LOCFOR(fun_ast_macro_expand_398);
LOCFOR(fun_399);
LOCFOR(fun_400);
LOCFOR(fun_401);
LOCFOR(fun_402);
LOCFOR(fun_403);
LOCFOR(fun_404);
LOCFOR(fun_405);
LOCFOR(fun_406);
LOCFOR(fun_transaction_implemented_bindings_407);
LOCFOR(fun_transaction_implemented_bindings_setter_408);
LOCFOR(fun_409);
LOCFOR(fun_transaction_dependents_410);
LOCFOR(fun_transaction_dependents_setter_411);
LOCFOR(fun_412);
FUNFOR(YevalSastYtransaction_register_implemented_binding);
FUNFOR(YevalSastYtransaction_register_dependent);
FUNFOR(YevalSastYtransaction_emptyQ);
LOCFOR(fun_416);
LOCFOR(fun_417);
FUNFOR(YevalSastYmerge_transactionsX);
LOCFOR(fun_419);
LOCFOR(fun_420);
FUNFOR(YevalSastYroll_back_transaction);
LOCFOR(fun_422);
LOCFOR(fun_423);
FUNFOR(YevalSastYcall_with_subtransaction);
LOCFOR(fun_x_1456_425);
LOCFOR(fun_426);
LOCFOR(fun_427);
LOCFOR(fun_428);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_430);
LOCFOR(fun_module_loader_modules_setter_431);
LOCFOR(fun_432);
LOCFOR(fun_module_loader_stack_433);
LOCFOR(fun_module_loader_stack_setter_434);
LOCFOR(fun_435);
LOCFOR(fun_module_name_436);
LOCFOR(fun_module_name_setter_437);
LOCFOR(fun_module_mangled_name_438);
LOCFOR(fun_module_mangled_name_setter_439);
LOCFOR(fun_440);
LOCFOR(fun_module_mangled_string_name_441);
LOCFOR(fun_module_mangled_string_name_setter_442);
LOCFOR(fun_443);
LOCFOR(fun_module_target_environment_444);
LOCFOR(fun_module_target_environment_setter_445);
LOCFOR(fun_module_syntax_environment_446);
LOCFOR(fun_module_syntax_environment_setter_447);
LOCFOR(fun_Pmodule_exports_448);
LOCFOR(fun_Pmodule_exports_setter_449);
LOCFOR(fun_450);
LOCFOR(fun_module_data_processedQ_451);
LOCFOR(fun_module_data_processedQ_setter_452);
LOCFOR(fun_453);
LOCFOR(fun_module_runtime_data_454);
LOCFOR(fun_module_runtime_data_setter_455);
LOCFOR(fun_456);
LOCFOR(fun_module_transaction_457);
LOCFOR(fun_module_transaction_setter_458);
LOCFOR(fun_459);
LOCFOR(fun_module_uses_c_files_460);
LOCFOR(fun_module_uses_c_files_setter_461);
LOCFOR(fun_462);
LOCFOR(fun_module_uses_c_includes_463);
LOCFOR(fun_module_uses_c_includes_setter_464);
LOCFOR(fun_465);
LOCFOR(fun_module_uses_c_libraries_466);
LOCFOR(fun_module_uses_c_libraries_setter_467);
LOCFOR(fun_468);
LOCFOR(fun_module_exports_469);
FUNFOR(YevalSastYset_module_environments);
LOCFOR(fun_471);
FUNFOR(YevalSastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_473);
FUNFOR(YevalSastYregister_moduleX);
FUNFOR(YevalSastYprobe_module);
LOCFOR(fun_476);
LOCFOR(fun_477);
FUNFOR(YevalSastYload_and_register_module);
FUNFOR(YevalSastYexport_bindingX);
FUNFOR(YevalSastYbinding_native_toQ);
LOCFOR(fun_481);
FUNFOR(YevalSastYreport_undefined_global_bindings);
LOCFOR(fun_483);
LOCFOR(fun_484);
LOCFOR(fun_add_user_485);
LOCFOR(fun_486);
FUNFOR(YevalSastYcompute_transitive_users);
FUNFOR(YevalSastYremove_module_internalX);
LOCFOR(fun_489);
FUNFOR(YevalSastYremove_modules_by_nameX);
FUNFOR(YevalSastYmodule_name_to_relpath);
LOCFOR(fun_492);
FUNFOR(YevalSastYinstall_initial_bindings);
FUNFOR(YevalSastYfab_static_global_environment);
LOCFOR(fun_495);
FUNFOR(YevalSastYfab_subset_environment);
LOCFOR(fun_497);
LOCFOR(fun_498);
LOCFOR(fun_499);
LOCFOR(fun_500);
LOCFOR(fun_load_module_501);
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
LOCFOR(fun_517);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_loop_527);
FUNFOR(YevalSastYdo_static_global_bindings);
LOCFOR(fun_loop_529);
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

FUNCODEDEF(fun_x_1431_0) {
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
  P saved_dependentF2615;
  P x_1430F2614;
  P x_1430F2613;
  P x_1430F2612;
  P x_1430F2611;
  P x_1430F2610;
  P bodyF2609;
  P dependentF2608;
  P x_1430F2607;
  P x_1431F2606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1431_0,2);
  x_1431F2606 = T1;
  FUNINIT(x_1431F2606, 2,FREEREF(0),return_);
  x_1430F2607 = FREEREF(0);
  dependentF2608 = YPfalse;
  dependentF2608 = BOXFAB(dependentF2608);
  bodyF2609 = YPfalse;
  bodyF2609 = BOXFAB(bodyF2609);
  T7 = CALL2(1,VARREF(YisaQ),x_1430F2607,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1430F2607,LITREF(lit_5),x_1431F2606);
    x_1430F2610 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1430F2610,x_1431F2606);
    BOXVAL(dependentF2608) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1430F2610);
    x_1430F2611 = T12;
    BOXVAL(bodyF2609) = x_1430F2611;
    x_1430F2612 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1430F2612,x_1431F2606);
    x_1430F2613 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1430F2613,x_1431F2606);
    T17 = CALL1(1,VARREF(Ytail),x_1430F2612);
    x_1430F2614 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1430F2614,x_1431F2606);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1431F2606,LITREF(lit_6),x_1430F2607);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF2615 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL1(1,VARREF(Ylst),saved_dependentF2615);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,LITREF(lit_9));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = BOXVAL(dependentF2608);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,LITREF(lit_9));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T42 = BOXVAL(bodyF2609);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_9));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T47 = CALL1(1,VARREF(Ylst),saved_dependentF2615);
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
  P modF2616;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF2616 = T1;
  if (modF2616 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),modF2616);
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

FUNCODEDEF(fun_boundQ_default_72) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_default_setter_73) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_74) {
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

FUNCODEDEF(fun_assignment_form_setter_75) {
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

FUNCODEDEF(fun_assignment_reference_76) {
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

FUNCODEDEF(fun_assignment_reference_setter_77) {
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

FUNCODEDEF(fun_assignment_binding_78) {
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

FUNCODEDEF(fun_assignment_binding_setter_79) {
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

FUNCODEDEF(fun_signature_bindings_80) {
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

FUNCODEDEF(fun_signature_bindings_setter_81) {
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

FUNCODEDEF(fun_82) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_names_83) {
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

FUNCODEDEF(fun_signature_names_setter_84) {
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

FUNCODEDEF(fun_85) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_specs_86) {
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

FUNCODEDEF(fun_signature_specs_setter_87) {
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

FUNCODEDEF(fun_88) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_naryQ_89) {
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

FUNCODEDEF(fun_signature_naryQ_setter_90) {
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

FUNCODEDEF(fun_91) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_arity_92) {
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

FUNCODEDEF(fun_signature_arity_setter_93) {
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

FUNCODEDEF(fun_94) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_value_95) {
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

FUNCODEDEF(fun_signature_value_setter_96) {
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

FUNCODEDEF(fun_97) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_req_sig_specs_98) {
  P sig_;
  P typesF2617;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(sig_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF2617 = T1;
  T4 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T3 = CALL1(1,VARREF(YevalSastYconstant_value),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),typesF2617);
    T6 = CALL2(1,VARREF(YgooSmathY_),T7,YPint((P)1));
    T5 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF2617,YPint((P)0),T6);
    T2 = T5;
  } else {
    T2 = typesF2617;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_binding_99) {
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

FUNCODEDEF(fun_function_binding_setter_100) {
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

FUNCODEDEF(fun_101) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_debug_name_102) {
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

FUNCODEDEF(fun_function_debug_name_setter_103) {
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

FUNCODEDEF(fun_104) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_signature_105) {
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

FUNCODEDEF(fun_function_signature_setter_106) {
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

FUNCODEDEF(fun_function_kind_111) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_247));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1433F2620;
  P x_1432F2619;
  P bF2618;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF2618 = T1;
  x_1432F2619 = bF2618;
  x_1433F2620 = VARREF(YisaQ);
  T5 = CALL2(1,x_1433F2620,x_1432F2619,VARREF(YLsymG));
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF2618);
    T4 = T6;
  } else {
    T8 = CALL2(1,x_1433F2620,x_1432F2619,VARREF(YevalSastYLmodule_bindingG));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF2618);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),bF2618);
      T9 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_250),T10,T11);
      T7 = T9;
    } else {
      T7 = LITREF(lit_251);
    }
    T4 = T7;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_113) {
  P dependent_,dependable_,dtype_;
  P nameF2621;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF2621 = T1;
  T3 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_254),nameF2621);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_255),nameF2621);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_256),nameF2621);
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

FUNCODEDEF(fun_loop_114) {
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

FUNCODEDEF(fun_as_lst_115) {
  P e_;
  P loopF2622;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_114,1);
  loopF2622 = T1;
  FUNINIT(loopF2622, 1,loopF2622);
  T2 = CALL2(0,loopF2622,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1437_116) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_266),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_117) {
  P return_;
  P x_1436F2629;
  P x_1436F2628;
  P x_1436F2627;
  P x_1436F2626;
  P nameF2625;
  P x_1436F2624;
  P x_1437F2623;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1437_116,2);
  x_1437F2623 = T1;
  FUNINIT(x_1437F2623, 2,FREEREF(0),return_);
  x_1436F2624 = FREEREF(0);
  nameF2625 = YPfalse;
  nameF2625 = BOXFAB(nameF2625);
  T5 = CALL2(1,VARREF(YisaQ),x_1436F2624,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1436F2624,LITREF(lit_266),x_1437F2623);
    x_1436F2626 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1436F2626,x_1437F2623);
    BOXVAL(nameF2625) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1436F2626);
    x_1436F2627 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1436F2627,x_1437F2623);
    x_1436F2628 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1436F2628,x_1437F2623);
    T14 = CALL1(1,VARREF(Ytail),x_1436F2627);
    x_1436F2629 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1436F2629,x_1437F2623);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1437F2623,LITREF(lit_6),x_1436F2624);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_267));
  T20 = BOXVAL(nameF2625);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_257));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_9));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T21,LITREF(lit_9));
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_117,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_119) {
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

FUNCODEDEF(fun_function_body_setter_120) {
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

FUNCODEDEF(fun_121) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_index_122) {
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

FUNCODEDEF(fun_function_index_setter_123) {
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

FUNCODEDEF(fun_124) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_function_temporaries_125) {
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

FUNCODEDEF(fun_function_temporaries_setter_126) {
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

FUNCODEDEF(fun_127) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_128) {
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

FUNCODEDEF(fun_function_registers_setter_129) {
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

FUNCODEDEF(fun_function_data_refs_131) {
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

FUNCODEDEF(fun_function_data_refs_setter_132) {
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

FUNCODEDEF(fun_133) {
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

FUNCODEDEF(fun_function_self_recursiveQ_134) {
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

FUNCODEDEF(fun_function_self_recursiveQ_setter_135) {
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

FUNCODEDEF(fun_136) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_source_137) {
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

FUNCODEDEF(fun_function_source_setter_138) {
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

FUNCODEDEF(fun_139) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_frame_len_140) {
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

FUNCODEDEF(fun_function_frame_len_setter_141) {
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

FUNCODEDEF(fun_142) {
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

FUNCODEDEF(fun_empty_144) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_145) {
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

FUNCODEDEF(fun_function_free_setter_146) {
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

FUNCODEDEF(fun_147) {
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

FUNCODEDEF(fun_function_kind_148) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_321));
}

FUNCODEDEF(fun_function_adjectives_149) {
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

FUNCODEDEF(fun_function_adjectives_setter_150) {
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

FUNCODEDEF(fun_151) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_kind_152) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_329));
}

FUNCODEDEF(fun_function_kind_153) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_332));
}

FUNCODEDEF(fun_alternative_condition_154) {
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

FUNCODEDEF(fun_alternative_condition_setter_155) {
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

FUNCODEDEF(fun_alternative_consequent_156) {
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

FUNCODEDEF(fun_alternative_consequent_setter_157) {
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

FUNCODEDEF(fun_alternative_alternant_158) {
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

FUNCODEDEF(fun_alternative_alternant_setter_159) {
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

FUNCODEDEF(fun_empty_161) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_162) {
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

FUNCODEDEF(fun_constant_value_setter_163) {
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

FUNCODEDEF(fun_constant_index_164) {
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

FUNCODEDEF(fun_constant_index_setter_165) {
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

FUNCODEDEF(fun_application_arguments_166) {
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

FUNCODEDEF(fun_application_arguments_setter_167) {
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

FUNCODEDEF(fun_application_tailQ_168) {
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

FUNCODEDEF(fun_application_tailQ_setter_169) {
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

FUNCODEDEF(fun_170) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_function_171) {
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

FUNCODEDEF(fun_application_function_setter_172) {
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

FUNCODEDEF(fun_application_knownQ_173) {
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

FUNCODEDEF(fun_application_knownQ_setter_174) {
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

FUNCODEDEF(fun_175) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_next_methods_176) {
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

FUNCODEDEF(fun_application_next_methods_setter_177) {
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

FUNCODEDEF(fun_application_binding_178) {
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

FUNCODEDEF(fun_application_binding_setter_179) {
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

FUNCODEDEF(fun_fix_let_bindings_180) {
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

FUNCODEDEF(fun_fix_let_bindings_setter_181) {
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

FUNCODEDEF(fun_fix_let_types_182) {
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

FUNCODEDEF(fun_fix_let_types_setter_183) {
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

FUNCODEDEF(fun_fix_let_arguments_184) {
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

FUNCODEDEF(fun_fix_let_arguments_setter_185) {
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

FUNCODEDEF(fun_fix_let_body_186) {
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

FUNCODEDEF(fun_fix_let_body_setter_187) {
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

FUNCODEDEF(fun_empty_189) {
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

FUNCODEDEF(fun_empty_191) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDarguments_empty));
}

FUNCODEDEF(fun_locals_bindings_192) {
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

FUNCODEDEF(fun_locals_bindings_setter_193) {
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

FUNCODEDEF(fun_locals_functions_194) {
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

FUNCODEDEF(fun_locals_functions_setter_195) {
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

FUNCODEDEF(fun_locals_body_196) {
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

FUNCODEDEF(fun_locals_body_setter_197) {
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

FUNCODEDEF(fun_bind_exit_main_fun_198) {
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

FUNCODEDEF(fun_bind_exit_main_fun_setter_199) {
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

FUNCODEDEF(fun_unwind_protect_protected_thunk_200) {
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

FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_201) {
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

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_202) {
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

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_203) {
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

FUNCODEDEF(fun_monitor_type_204) {
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

FUNCODEDEF(fun_monitor_type_setter_205) {
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

FUNCODEDEF(fun_monitor_info_206) {
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

FUNCODEDEF(fun_monitor_info_setter_207) {
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

FUNCODEDEF(fun_monitor_test_208) {
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

FUNCODEDEF(fun_monitor_test_setter_209) {
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

FUNCODEDEF(fun_monitor_handler_210) {
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

FUNCODEDEF(fun_monitor_handler_setter_211) {
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

FUNCODEDEF(fun_monitor_main_thunk_212) {
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

FUNCODEDEF(fun_monitor_main_thunk_setter_213) {
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

FUNCODEDEF(fun_x_1439_214) {
  P x_1438_;
  P xF2633;
  P setterF2632;
  P getterF2631;
  P propF2630;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(x_1438_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1438_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1438_);
    propF2630 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2630);
    getterF2631 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF2630);
    setterF2632 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2631,VARREF(YevalSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2631);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF2631,FREEREF(0));
        xF2633 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF2633,VARREF(YevalSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2633,FREEREF(2));
          T17 = CALL2(1,setterF2632,T18,FREEREF(0));
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
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1438_);
    a1 = T20;
    x_1438_ = a1;
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

FUNCODEDEF(fun_ast_walkX_215) {
  P g_,o_,args_;
  P x_1439F2634;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1439_214,4);
  x_1439F2634 = T0;
  FUNINIT(x_1439F2634, 4,o_,g_,args_,x_1439F2634);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1439F2634,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1441_216) {
  P x_1440_;
  P xF2637;
  P getterF2636;
  P propF2635;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(x_1440_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1440_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1440_);
    propF2635 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2635);
    getterF2636 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2636,VARREF(YevalSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2636);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF2636,FREEREF(0));
        xF2637 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF2637,VARREF(YevalSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2637,FREEREF(2));
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
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1440_);
    a1 = T17;
    x_1440_ = a1;
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

FUNCODEDEF(fun_ast_walk_217) {
  P g_,o_,args_;
  P x_1441F2638;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1441_216,4);
  x_1441F2638 = T0;
  FUNINIT(x_1441F2638, 4,o_,g_,args_,x_1441F2638);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1441F2638,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_copy_218) {
  P x_;
  P copyF2639;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yclone),x_);
  copyF2639 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF2639);
  T2 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF2639);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_copy_219) {
  P x_;
  P next_metsF2640;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T4 = (P)YPfun_reg();
    T5 = (P)YPnext_methods();
    T3 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T4,T5,x_);
    next_metsF2640 = T3;
    T7 = CALL1(1,VARREF(Yhead),next_metsF2640);
    T8 = CALL1(1,VARREF(Ytail),next_metsF2640);
    T6 = CALL4(1,VARREF(YgooSmacrosYnapp),T7,T8,x_,Ynil);
    T2 = T6;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_220) {
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

FUNCODEDEF(fun_environment_next_setter_221) {
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

FUNCODEDEF(fun_222) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_223) {
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

FUNCODEDEF(fun_environment_bindings_setter_224) {
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

FUNCODEDEF(fun_environment_module_225) {
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

FUNCODEDEF(fun_environment_module_setter_226) {
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

FUNCODEDEF(fun_environment_module_loader_227) {
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

FUNCODEDEF(fun_environment_module_loader_setter_228) {
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

FUNCODEDEF(fun_environment_uses_modules_229) {
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

FUNCODEDEF(fun_environment_uses_modules_setter_230) {
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

FUNCODEDEF(fun_231) {
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

FUNCODEDEF(fun_environment_allows_foreign_namesQ_232) {
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

FUNCODEDEF(fun_environment_allows_foreign_namesQ_setter_233) {
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

FUNCODEDEF(fun_234) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_235) {
  P binding_;
  P tmpF2642;
  P tmpF2641;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_69));
  tmpF2641 = T2;
  if (tmpF2641 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
    tmpF2642 = T6;
    if (tmpF2642 != YPfalse) {
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

FUNCODEDEF(fun_236) {
  P return_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNFAB(fun_235,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_237) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_236,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_238) {
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

FUNCODEDEF(fun_objectify_list_239) {
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

FUNCODEDEF(fun_objectify_list_240) {
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

FUNCODEDEF(fun_objectify_list_241) {
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

FUNCODEDEF(fun_objectify_242) {
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

FUNCODEDEF(fun_objectify_243) {
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

FUNCODEDEF(fun_objectify_244) {
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

FUNCODEDEF(fun_objectify_245) {
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

FUNCODEDEF(fun_objectify_246) {
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

FUNCODEDEF(fun_objectify_quotation_247) {
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

FUNCODEDEF(fun_objectify_quotation_248) {
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

FUNCODEDEF(fun_objectify_quotation_249) {
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

FUNCODEDEF(fun_objectify_raw_250) {
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

FUNCODEDEF(fun_objectify_boundQ_251) {
  P e_,default_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(default_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),default_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),T1,VARREF(YevalSastYboundQ_default),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_252) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF2647;
  P astF2646;
  P target_envF2645;
  P syntax_envF2644;
  P modF2643;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF2643 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF2643);
  syntax_envF2644 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2643);
  target_envF2645 = T5;
  T7 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF2644,tailQ_);
  astF2646 = T7;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF2646);
  tmpF2647 = rtQ_;
  if (tmpF2647 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2644,target_envF2645);
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

FUNCODEDEF(fun_objectify_alternative_253) {
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

FUNCODEDEF(fun_loop_254) {
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

FUNCODEDEF(fun_sequentialize_255) {
  P eT_;
  P loopF2648;
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
      T8 = FUNSHELL(1,fun_loop_254,1);
      loopF2648 = T8;
      FUNINIT(loopF2648, 1,loopF2648);
      T9 = CALL1(0,loopF2648,eT_);
      T7 = T9;
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_256) {
  P eT_;
  P eF2649;
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
    eF2649 = T3;
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF2649);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF2649);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF2649);
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
      T21 = CALL1(1,VARREF(Ylst),eF2649);
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

FUNCODEDEF(fun_loop_257) {
  P res_,eT_;
  P headF2651;
  P tailQF2650;
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
    tailQF2650 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(YevalSastYobjectify),T9,FREEREF(1),tailQF2650);
    headF2651 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF2651,res_);
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

FUNCODEDEF(fun_objectify_sequential_258) {
  P eT_,r_,tailQ_;
  P astsF2653;
  P loopF2652;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_257,3);
  loopF2652 = T2;
  FUNINIT(loopF2652, 3,tailQ_,r_,loopF2652);
  T4 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF2652,Ynil,T4);
  T1 = T3;
  astsF2653 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),astsF2653);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_259) {
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

FUNCODEDEF(fun_objectify_application_260) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2654;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_259,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2654 = T1;
  T4 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF2654,r_,tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_261) {
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

FUNCODEDEF(fun_objectify_application_262) {
  P ff_,eT_,r_,tailQ_;
  P primF2657;
  P fvfF2656;
  P eeTF2655;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_261,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2655 = T1;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF2656 = T5;
  T7 = CALL1(1,VARREF(YevalSastYbinding_prop),fvfF2656);
  primF2657 = T7;
  if (primF2657 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSastYast_copy),primF2657);
    T9 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T10,eeTF2655,r_,tailQ_);
    T8 = T9;
  } else {
    T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF2656,VARREF(YevalSastYapplication_arguments),eeTF2655,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T8 = T11;
  }
  T6 = T8;
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_263) {
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

FUNCODEDEF(fun_objectify_application_264) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2658;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_263,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2658 = T1;
  T4 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF2658,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_265) {
  P f_,eT_,r_,tailQ_;
  P bF2660;
  P vTF2659;
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
  vTF2659 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF2660 = T3;
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
      T18 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_551),f_,eT_);
      T7 = T18;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_266) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_556),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_557),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pack_args_267) {
  P eT_,vT_,tT_;
  P lst_typeF2662;
  P varF2661;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
loop:
  T1 = CALL1(1,VARREF(Yhead),vT_);
  varF2661 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF2661);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_560),FREEREF(0),YPfalse);
    lst_typeF2662 = T5;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF2661);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF2662,varF2661);
    CALL2(1,VARREF(Yhead_setter),lst_typeF2662,tT_);
    T8 = CALL1(0,FREEREF(1),eT_);
    T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,FREEREF(0),YPfalse);
    T9 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T6 = CALL2(1,VARREF(YevalSastYarguments),T7,T9);
    T4 = T6;
    T2 = T4;
  } else {
    T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T11 != YPfalse) {
      T12 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_561),FREEREF(2),eT_);
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

FUNCODEDEF(fun_process_nary_closed_application_268) {
  P f_,eT_,r_,tailQ_;
  P oF2666;
  P vTF2665;
  P pack_argsF2664;
  P pack_nary_argsF2663;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_266,1);
  pack_nary_argsF2663 = T1;
  T2 = FUNSHELL(1,fun_pack_args_267,4);
  pack_argsF2664 = T2;
  FUNINIT(pack_nary_argsF2663, 1,pack_nary_argsF2663);
  FUNINIT(pack_argsF2664, 4,r_,pack_nary_argsF2663,f_,pack_argsF2664);
  T4 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2665 = T4;
  T7 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T8 = CALL3(0,pack_argsF2664,eT_,vTF2665,T9);
  T10 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF2665,VARREF(YevalSastYfix_let_types),T7,VARREF(YevalSastYfix_let_arguments),T8,VARREF(YevalSastYfix_let_body),T10);
  oF2666 = T6;
  T5 = oF2666;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_convert2arguments_269) {
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

FUNCODEDEF(fun_objectify_assignment_270) {
  P binding_,e_,r_,tailQ_;
  P opF2667;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF2667 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF2667);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF2667);
    T6 = CALL3(1,VARREF(YevalSastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_566),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_271) {
  P binding_,e_,r_,tailQ_;
  P valF2669;
  P refF2668;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF2668 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF2669 = T3;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF2668,valF2669);
  T2 = T4;
  T0 = T2;
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
  T0 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  CALL2(1,VARREF(YevalSastYbinding_mutableQ_setter),YPtrue,T0);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),ref_,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T1);
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
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_274) {
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

FUNCODEDEF(fun_objectify_assignment_using_275) {
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

FUNCODEDEF(fun_objectify_assignment_using_276) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_574),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF2670;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_577));
  tmpF2670 = T2;
  if (tmpF2670 != YPfalse) {
    T4 = tmpF2670;
  } else {
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_578));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_577));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_69));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T12 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_579),T13,new_kind_);
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

FUNCODEDEF(fun_ast_define_binding_278) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF2678;
  P bindingF2677;
  P modF2676;
  P foreignQF2675;
  P tmpF2674;
  P modF2673;
  P grF2672;
  P existing_bindingF2671;
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
  existing_bindingF2671 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2672 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module),grF2672);
  modF2673 = T5;
  if (existing_bindingF2671 != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF2671,modF2673);
    tmpF2674 = T11;
    if (tmpF2674 != YPfalse) {
      T12 = tmpF2674;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF2675 = T9;
    T13 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF2671);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF2671);
      if (foreignQF2675 != YPfalse) {
        T15 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF2671);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF2675 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYmodule_name),modF2673);
        T19 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF2671);
        T17 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_582),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF2671,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF2671,kind_);
    T8 = existing_bindingF2671;
    T7 = T8;
  } else {
    T21 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF2676 = T21;
    T23 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF2676);
    bindingF2677 = T23;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2677,grF2672);
    T22 = bindingF2677;
    T20 = T22;
    T7 = T20;
  }
  bindingF2678 = T7;
  T6 = bindingF2678;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_279) {
  P type_,kind_,var_,e_,r_;
  P defnF2681;
  P bindingF2680;
  P nameF2679;
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
  nameF2679 = T1;
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF2679,YPfalse,kind_);
  bindingF2680 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T5 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF2680,VARREF(YevalSastYassignment_form),T6);
  defnF2681 = T5;
  T4 = defnF2681;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_variable_definition_280) {
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

FUNCODEDEF(fun_objectify_dynamic_definition_281) {
  P var_,e_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_589),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_282) {
  P x_,r_,tailQ_;
  P expF2682;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_594));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_595));
  } else {
  }
  T3 = CALL1(1,FREEREF(0),x_);
  T2 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),x_,T3);
  expF2682 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_596));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF2682);
    T4 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_597));
  } else {
  }
  T1 = expF2682;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF2686;
  P envF2685;
  P tmpF2684;
  P expandF2683;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_282,1);
  expandF2683 = T1;
  FUNINIT(expandF2683, 1,expander_);
  tmpF2684 = env_or_false_;
  if (tmpF2684 != YPfalse) {
    T4 = tmpF2684;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF2685 = T3;
  T7 = CALL4(1,VARREF(YevalSastYast_define_binding),envF2685,name_,YPfalse,LITREF(lit_598));
  bindingF2686 = T7;
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),expandF2683,bindingF2686);
  T6 = bindingF2686;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_284) {
  P name_,e_,r_,rtQ_;
  P bindingF2692;
  P modnameF2691;
  P expanderF2690;
  P ast_expanderF2689;
  P syntax_envF2688;
  P sep_expanderF2687;
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
  sep_expanderF2687 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF2688 = T3;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2687,syntax_envF2688,YPfalse);
  ast_expanderF2689 = T5;
  T7 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF2689);
  expanderF2690 = T7;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF2691 = T9;
  T13 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T12 = CALL4(1,VARREF(YPPmacro),modnameF2691,name_,expanderF2690,T13);
  bindingF2692 = T12;
  T15 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2688,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2692,syntax_envF2688);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2687,r_,YPfalse);
    T18 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF2692,VARREF(YevalSastYassignment_form),T19);
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

FUNCODEDEF(fun_objectify_function_definition_285) {
  P name_,e_,r_;
  P defnF2695;
  P fF2694;
  P bindingF2693;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF2693 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF2694 = T3;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF2693,fF2694);
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T4,fF2694);
  T6 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF2693,VARREF(YevalSastYassignment_form),fF2694);
  defnF2695 = T6;
  T5 = defnF2695;
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

FUNCODEDEF(fun_objectify_primitive_definition_287) {
  P name_,mods_,sig_,body_,r_;
  P defnF2701;
  P formF2700;
  P bodyF2699;
  P new_rF2698;
  P signatureF2697;
  P bindingF2696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_607));
  bindingF2696 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2697 = T3;
  T6 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2697);
  T5 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T6);
  new_rF2698 = T5;
  T8 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2698,YPtrue);
  bodyF2699 = T8;
  T11 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2696,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T11,VARREF(YevalSastYfunction_signature),signatureF2697,VARREF(YevalSastYfunction_body),bodyF2699);
  formF2700 = T10;
  T12 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_608));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YevalSastYbinding_prop_setter),formF2700,bindingF2696);
  } else {
  }
  T15 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF2696,VARREF(YevalSastYassignment_form),formF2700);
  defnF2701 = T15;
  T14 = defnF2701;
  T9 = T14;
  T7 = T9;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_generic_definition_288) {
  P name_,sig_,r_;
  P defnF2705;
  P formF2704;
  P signatureF2703;
  P bindingF2702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF2702 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2703 = T3;
  T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF2702,VARREF(YevalSastYfunction_debug_name),T6,VARREF(YevalSastYfunction_signature),signatureF2703);
  formF2704 = T5;
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF2702,VARREF(YevalSastYassignment_form),formF2704);
  defnF2705 = T8;
  T7 = defnF2705;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_289) {
  P name_,e_,r_;
  P defnF2711;
  P formF2710;
  P callF2709;
  P metF2708;
  P genF2707;
  P bindingF2706;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_69));
  bindingF2706 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_613));
  T5 = CALL1(1,VARREF(Ylst),name_);
  T6 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_9));
  genF2707 = T3;
  T8 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF2708 = T8;
  T10 = CALL3(1,VARREF(Ylst),LITREF(lit_614),genF2707,metF2708);
  callF2709 = T10;
  T12 = CALL3(1,VARREF(YevalSastYobjectify),callF2709,r_,YPfalse);
  formF2710 = T12;
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF2706,VARREF(YevalSastYassignment_form),formF2710);
  defnF2711 = T14;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF2708);
  T15 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T15,metF2708);
  T13 = defnF2711;
  T11 = T13;
  T9 = T11;
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_290) {
  P tmpF2712;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF2712 = DYNREF(YevalSastYTrecord_sourceQT);
  if (tmpF2712 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_12),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_618),FREEREF(0),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_291) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_292) {
  P x_1443F2713;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1443F2713 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_290,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_291,1,x_1443F2713);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_293) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_294) {
  P sig_,body_,r_;
  P x_1442F2714;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1442F2714 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_292,3,sig_,body_,r_);
  T3 = FUNFAB(fun_293,1,x_1442F2714);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_295) {
  P bF2717;
  P new_rF2716;
  P signatureF2715;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF2715 = T1;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2715);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF2716 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF2716,YPtrue);
  bF2717 = T6;
  T7 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF2715,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bF2717,FREEREF(3));
  T8 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T8,FREEREF(3));
  T5 = FREEREF(3);
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_296) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_297) {
  P sig_,body_,line_,r_,tailQ_;
  P x_1444F2719;
  P methodF2718;
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
  methodF2718 = T1;
  x_1444F2719 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,methodF2718);
  T4 = FUNFAB(fun_295,4,sig_,r_,body_,methodF2718);
  T5 = FUNFAB(fun_296,1,x_1444F2719);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_298) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF2730;
  P typeF2729;
  P stypeF2728;
  P dottedQF2727;
  P stypeF2726;
  P snameF2725;
  P paramF2724;
  P arityF2723;
  P valueF2722;
  P tmpF2721;
  P sexpr_valueF2720;
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
    sexpr_valueF2720 = T3;
    tmpF2721 = sexpr_valueF2720;
    if (tmpF2721 != YPfalse) {
      T7 = tmpF2721;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF2722 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF2723 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T15 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T16,FREEREF(1));
    T17 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T18 = CALL3(1,VARREF(YevalSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T19 = CALL3(1,VARREF(YevalSastYobjectify),arityF2723,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T14,VARREF(YevalSastYsignature_names),T15,VARREF(YevalSastYsignature_specs),T17,VARREF(YevalSastYsignature_naryQ),T18,VARREF(YevalSastYsignature_arity),T19,VARREF(YevalSastYsignature_value),valueF2722);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T21 = CALL1(1,VARREF(Yhead),params_);
    paramF2724 = T21;
    T23 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF2724);
    snameF2725 = T23;
    T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF2724);
    stypeF2726 = T25;
    T27 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF2726,VARREF(YevalSastYDsexpr_optionals_tag));
    dottedQF2727 = T27;
    if (dottedQF2727 != YPfalse) {
      T29 = VARREF(YevalSastYDsexpr_optionals_type_name);
    } else {
      T29 = stypeF2726;
    }
    stypeF2728 = T29;
    T31 = CALL3(1,VARREF(YevalSastYobjectify),stypeF2728,FREEREF(1),YPfalse);
    typeF2729 = T31;
    T33 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF2725,VARREF(YevalSastYbinding_type),typeF2729,VARREF(YevalSastYbinding_dottedQ),dottedQF2727);
    bindingF2730 = T33;
    T35 = CALL1(1,VARREF(Ytail),params_);
    T36 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF2730,bindings_);
    T37 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF2725,VARREF(Ytail),names_);
    T38 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF2729,VARREF(Ytail),types_);
    a1 = T35;
    a2 = dottedQF2727;
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

FUNCODEDEF(fun_objectify_signature_299) {
  P sig_,r_;
  P colF2732;
  P sexpr_paramsF2731;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF2731 = T1;
  T3 = FUNSHELL(1,fun_col_298,3);
  colF2732 = T3;
  FUNINIT(colF2732, 3,sig_,r_,colF2732);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T4 = CALL5(0,colF2732,sexpr_paramsF2731,YPfalse,Ynil,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_300) {
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

FUNCODEDEF(fun_loop_301) {
  P i_,r_;
  P findF2733;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(YevalSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_300,5);
    findF2733 = T3;
    FUNINIT(findF2733, 5,i_,r_,FREEREF(0),FREEREF(1),findF2733);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF2733,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_632),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_302) {
  P binding_,r_;
  P loopF2734;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_301,2);
  loopF2734 = T1;
  FUNINIT(loopF2734, 2,loopF2734,binding_);
  T2 = CALL2(0,loopF2734,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_303) {
  P n_,b_,r_;
  P jF2737;
  P iF2736;
  P tup29F2735;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup29F2735 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2735,YPint((P)0));
  iF2736 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2735,YPint((P)1));
  jF2737 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF2736,VARREF(YevalSastYreference_frame_offset),jF2737);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_304) {
  P b_;
  P x_1446F2739;
  P x_1445F2738;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1445F2738 = T1;
  x_1446F2739 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1446F2739,x_1445F2738,LITREF(lit_69));
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1446F2739,x_1445F2738,LITREF(lit_607));
    if (T6 != YPfalse) {
      T5 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1446F2739,x_1445F2738,LITREF(lit_577));
      if (T8 != YPfalse) {
        T7 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T10 = CALL2(1,x_1446F2739,x_1445F2738,LITREF(lit_589));
        if (T10 != YPfalse) {
          T9 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T12 = CALL2(1,x_1446F2739,x_1445F2738,LITREF(lit_598));
          if (T12 != YPfalse) {
            T11 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T14 = CALL2(1,x_1446F2739,x_1445F2738,LITREF(lit_578));
            if (T14 != YPfalse) {
              T13 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T16 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
              T15 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_637),T16);
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

FUNCODEDEF(fun_objectify_binding_305) {
  P n_,b_,r_;
  P LrefGF2740;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF2740 = T1;
  T2 = CALL3(1,VARREF(Ynew),LrefGF2740,VARREF(YevalSastYreference_binding),b_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_306) {
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

FUNCODEDEF(fun_default_type_307) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_642),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_308) {
  P name_,r_;
  P bF2743;
  P tmpF2742;
  P grF2741;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2741 = T1;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF2741);
  tmpF2742 = T4;
  if (tmpF2742 != YPfalse) {
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
    bF2743 = T9;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF2743,grF2741);
    T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF2743);
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

FUNCODEDEF(fun_objectify_foreign_reference_310) {
  P name_,r_;
  P bindingF2752;
  P modF2751;
  P loaderF2750;
  P grF2749;
  P tmpF2748;
  P varnameF2747;
  P modnameF2746;
  P breakF2745;
  P namestrF2744;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF2744 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF2744,YPchr((P)58));
  breakF2745 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2744,YPint((P)0),breakF2745);
  modnameF2746 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF2745);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF2744);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2744,T8,T9);
  varnameF2747 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF2746);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF2748 = T12;
  if (tmpF2748 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF2747);
    T15 = CALL2(1,VARREF(YgooSmagYG),T16,YPint((P)0));
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T17 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_649),name_);
  } else {
  }
  T19 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2749 = T19;
  T21 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF2749);
  loaderF2750 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF2746);
  T23 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2750,T24);
  modF2751 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF2747);
  T28 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2751);
  T26 = CALL2(1,VARREF(YevalSastYfind_binding),T27,T28);
  bindingF2752 = T26;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2752,grF2749);
  T29 = CALL1(1,VARREF(Ynot),bindingF2752);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_650),varnameF2747,modnameF2746);
  } else {
  }
  T31 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF2752,r_);
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

FUNCODEDEF(fun_objectify_symbol_311) {
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

FUNCODEDEF(fun_ftype_312) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_655),r_,YPfalse);
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

FUNCODEDEF(fun_empty_314) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_empty));
}

FUNCODEDEF(fun_315) {
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

FUNCODEDEF(fun_316) {
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

FUNCODEDEF(fun_objectify_locals_317) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P functionsF2756;
  P function_formsF2755;
  P new_rF2754;
  P bindingsF2753;
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
  T2 = FUNFAB(fun_315,1,r_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,names_);
  bindingsF2753 = T1;
  T4 = CALL2(1,VARREF(YevalSastYr_extendT),r_,bindingsF2753);
  new_rF2754 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYmap2),VARREF(YevalSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF2755 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSastYobjectify),new_rF2754,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF2755);
  functionsF2756 = T8;
  T10 = FUNFAB(fun_316,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T10,functionsF2756,bindingsF2753);
  T12 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),functionsF2756);
  T13 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2754,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),bindingsF2753,VARREF(YevalSastYlocals_functions),T12,VARREF(YevalSastYlocals_body),T13);
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_318) {
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

FUNCODEDEF(fun_objectify_unwind_protect_319) {
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

FUNCODEDEF(fun_objectify_monitor_320) {
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

FUNCODEDEF(fun_321) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_322) {
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

FUNCODEDEF(fun_323) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_677),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_324) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_675),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_321;
  T4 = FUNFAB(fun_322,1,exit_);
  T5 = FUNFAB(fun_323,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_325) {
  P name_;
  P bindingF2757;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF2757 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2757,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_324,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF2757);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_326) {
  P names_,r_,tailQ_;
  P moduleF2759;
  P envF2758;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2758 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2759 = T3;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2759);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF2758,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYnamespace_error),LITREF(lit_672));
  } else {
  }
  T8 = FUNFAB(fun_325,2,envF2758,moduleF2759);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF2761;
  P existingF2760;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,env_);
  existingF2760 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2760,YPfalse);
  tmpF2761 = T5;
  if (tmpF2761 != YPfalse) {
    T6 = tmpF2761;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2760,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T8 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_680),T9,T10);
  } else {
  }
  CALL2(1,VARREF(YevalSastYinsert_globalX),b_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_328) {
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

FUNCODEDEF(fun_objectify_useSexport_module_329) {
  P name_,r_,tailQ_;
  P used_moduleF2765;
  P loaderF2764;
  P moduleF2763;
  P envF2762;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2762 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2763 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2762);
  loaderF2764 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2764,name_);
  used_moduleF2765 = T7;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2762);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,used_moduleF2765);
  T9 = FUNFAB(fun_328,2,envF2762,moduleF2763);
  T10 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2765);
  CALL2(1,VARREF(YgooSmacrosYdo),T9,T10);
  T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_330) {
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

FUNCODEDEF(fun_objectify_use_include_331) {
  P name_,r_,tailQ_;
  P modF2767;
  P envF2766;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2766 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2766);
  modF2767 = T3;
  T6 = FUNFAB(fun_330,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2767);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2767);
    T8 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T9,name_);
  } else {
  }
  T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_332) {
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

FUNCODEDEF(fun_objectify_use_library_333) {
  P name_,r_,tailQ_;
  P modF2769;
  P envF2768;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2768 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2768);
  modF2769 = T3;
  T6 = FUNFAB(fun_332,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2769);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2769);
    T8 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T9,name_);
  } else {
  }
  T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_334) {
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

FUNCODEDEF(fun_use_mod_335) {
  P name_;
  P used_moduleF2771;
  P loaderF2770;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),FREEREF(0));
  loaderF2770 = T1;
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2770,name_);
  used_moduleF2771 = T3;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T4,used_moduleF2771);
  T5 = FUNFAB(fun_334,1,FREEREF(0));
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2771);
  CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
  T2 = used_moduleF2771;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_use_c_mod_336) {
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

FUNCODEDEF(fun_objectify_use_module_337) {
  P name_,r_,tailQ_;
  P swig_modF2780;
  P swig_mod_nameF2779;
  P tmpF2778;
  P x_1448F2777;
  P x_1447F2776;
  P use_c_modF2775;
  P use_modF2774;
  P modF2773;
  P envF2772;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2772 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2772);
  modF2773 = T3;
  T4 = FUNSHELL(1,fun_use_mod_335,1);
  use_modF2774 = T4;
  T5 = fun_use_c_mod_336;
  use_c_modF2775 = T5;
  FUNINIT(use_modF2774, 1,envF2772);
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1447F2776 = T7;
  x_1448F2777 = VARREF(YgooScolsSseqYsuffixQ);
  T11 = CALL2(1,x_1448F2777,x_1447F2776,LITREF(lit_697));
  tmpF2778 = T11;
  if (tmpF2778 != YPfalse) {
    T12 = tmpF2778;
  } else {
    T13 = CALL2(1,x_1448F2777,x_1447F2776,LITREF(lit_698));
    T12 = T13;
  }
  T10 = T12;
  if (T10 != YPfalse) {
    T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T14 = CALL2(0,use_c_modF2775,modF2773,T15);
    T9 = T14;
  } else {
    T17 = CALL2(1,x_1448F2777,x_1447F2776,LITREF(lit_699));
    if (T17 != YPfalse) {
      T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T21 = CALL2(1,VARREF(YgooScolsSseqYsplit),T22,YPchr((P)46));
      T20 = CALL1(1,VARREF(YgooSmacrosY1st),T21);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T20);
      swig_mod_nameF2779 = T19;
      T24 = CALL1(0,use_modF2774,swig_mod_nameF2779);
      swig_modF2780 = T24;
      T26 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_700));
      T25 = CALL2(0,use_c_modF2775,swig_modF2780,T26);
      T23 = T25;
      T18 = T23;
      T16 = T18;
    } else {
      T27 = CALL1(0,use_modF2774,name_);
      T16 = T27;
    }
    T9 = T16;
  }
  T8 = T9;
  T6 = T8;
  T28 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T28;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_and_mangle_globalX_338) {
  P binding_,mangle_prefix_,r_;
  P rF2781;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2781 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2781);
  T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T5);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF2783;
  P existingF2782;
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
  existingF2782 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2782,YPfalse);
  tmpF2783 = T6;
  if (tmpF2783 != YPfalse) {
    T7 = tmpF2783;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2782,b_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T11);
    T12 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T9 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_705),T10,T12);
  } else {
  }
  CALL3(1,VARREF(YevalSastYinsert_and_mangle_globalX),b_,mangle_prefix_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_340) {
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

FUNCODEDEF(fun_objectify_use_mangle_module_341) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF2788;
  P used_moduleF2787;
  P loaderF2786;
  P moduleF2785;
  P envF2784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2784 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2785 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2784);
  loaderF2786 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2786,name_);
  used_moduleF2787 = T7;
  T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF2788 = T9;
  T10 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2784);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T10,used_moduleF2787);
  T11 = FUNFAB(fun_340,2,str_manglerF2788,envF2784);
  T12 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2787);
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

FUNCODEDEF(fun_expand_bind_list_342) {
  P pat_,var_,fail_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_711),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_343) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_713));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_344) {
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
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_715),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_716),pat_);
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

FUNCODEDEF(fun_expand_bind_listT_345) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_713));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_346) {
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

FUNCODEDEF(fun_expand_bind_element_347) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_722));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_556));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_348) {
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
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_724));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_9));
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_725));
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
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_556));
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
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_726));
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
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_725));
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

FUNCODEDEF(fun_expand_pattern_349) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_729));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_730));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_560));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_9));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_731));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_350) {
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

FUNCODEDEF(fun_expand_syntax_if_351) {
  P x_;
  P epatF2796;
  P failF2795;
  P varF2794;
  P elseF2793;
  P thenF2792;
  P valueF2791;
  P varsF2790;
  P patF2789;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF2789 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF2789);
  varsF2790 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF2791 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF2792 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF2793 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2794 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF2795 = T13;
  T15 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF2789,varF2794,failF2795);
  epatF2796 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_734));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_735));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_736));
  T26 = CALL1(1,VARREF(Ylst),failF2795);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_737));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_738));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_739));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_621));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_9));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T33,LITREF(lit_9));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_735));
  T40 = CALL1(1,VARREF(Ylst),elseF2793);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_9));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T37,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T48 = CALL1(1,VARREF(Ylst),varF2794);
  T49 = CALL1(1,VARREF(Ylst),valueF2791);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,LITREF(lit_9));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,LITREF(lit_9));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T55 = fun_350;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF2790);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF2796);
  T57 = CALL1(1,VARREF(Ylst),thenF2792);
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

FUNCODEDEF(fun_r_extendT_352) {
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

FUNCODEDEF(fun_insert_globalX_353) {
  P binding_,r_;
  P rF2797;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2797 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2797);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_354) {
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

FUNCODEDEF(fun_insert_globalsX_355) {
  P bindings_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNFAB(fun_354,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_356) {
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

FUNCODEDEF(fun_find_static_global_environment_357) {
  P r_;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_358) {
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

FUNCODEDEF(fun_find_environment_module_359) {
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

FUNCODEDEF(fun_loop_360) {
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

FUNCODEDEF(fun_find_binding_361) {
  P name_,r_;
  P loopF2798;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_360,3);
  loopF2798 = T1;
  FUNINIT(loopF2798, 3,name_,r_,loopF2798);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF2798,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_362) {
  P name_,r_;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_363) {
  P name_,r_;
  P tmpF2799;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2799 = T1;
  if (tmpF2799 != YPfalse) {
    T3 = tmpF2799;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
    T4 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_364) {
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

FUNCODEDEF(fun_register_magic_binding_365) {
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

FUNCODEDEF(fun_magic_bindings_366) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1452_367) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_769),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  P return_;
  P sexpr_nameF2816;
  P special_nameF2815;
  P x_1451F2814;
  P x_1451F2813;
  P x_1451F2812;
  P x_1451F2811;
  P x_1451F2810;
  P x_1451F2809;
  P x_1451F2808;
  P x_1451F2807;
  P x_1451F2806;
  P x_1451F2805;
  P bodyF2804;
  P paramsF2803;
  P nameF2802;
  P x_1451F2801;
  P x_1452F2800;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1452_367,2);
  x_1452F2800 = T1;
  FUNINIT(x_1452F2800, 2,FREEREF(0),return_);
  x_1451F2801 = FREEREF(0);
  nameF2802 = YPfalse;
  nameF2802 = BOXFAB(nameF2802);
  paramsF2803 = YPfalse;
  paramsF2803 = BOXFAB(paramsF2803);
  bodyF2804 = YPfalse;
  bodyF2804 = BOXFAB(bodyF2804);
  T9 = CALL2(1,VARREF(YisaQ),x_1451F2801,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1451F2801,LITREF(lit_769),x_1452F2800);
    x_1451F2805 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1451F2805,x_1452F2800);
    BOXVAL(nameF2802) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1451F2805);
    x_1451F2806 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1451F2806,x_1452F2800);
    x_1451F2807 = T16;
    BOXVAL(paramsF2803) = x_1451F2807;
    x_1451F2808 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1451F2808,x_1452F2800);
    x_1451F2809 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1451F2809,x_1452F2800);
    T21 = CALL1(1,VARREF(Ytail),x_1451F2808);
    x_1451F2810 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1451F2810,x_1452F2800);
    T18 = T22;
    T17 = T18;
    T23 = CALL1(1,VARREF(Ytail),x_1451F2806);
    x_1451F2811 = T23;
    BOXVAL(bodyF2804) = x_1451F2811;
    x_1451F2812 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1451F2812,x_1452F2800);
    x_1451F2813 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1451F2813,x_1452F2800);
    T28 = CALL1(1,VARREF(Ytail),x_1451F2812);
    x_1451F2814 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1451F2814,x_1452F2800);
    T25 = T29;
    T24 = T25;
    T15 = T24;
    T12 = T15;
    T10 = T12;
  } else {
    T30 = CALL2(1,x_1452F2800,LITREF(lit_6),x_1451F2801);
  }
  T33 = BOXVAL(nameF2802);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_770),T33);
  special_nameF2815 = T32;
  T36 = BOXVAL(nameF2802);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_771),T36,LITREF(lit_772));
  sexpr_nameF2816 = T35;
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_773));
  T42 = CALL1(1,VARREF(Ylst),special_nameF2815);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_774));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_556));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_578));
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T53 = CALL1(1,VARREF(Ylst),sexpr_nameF2816);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T55 = CALL1(1,VARREF(Ylst),YPfalse);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_775));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_776));
  T62 = BOXVAL(paramsF2803);
  T61 = CALL2(1,VARREF(YgooSmacrosYcat),T62,LITREF(lit_9));
  T60 = CALL1(1,VARREF(Ylst),T61);
  T63 = BOXVAL(bodyF2804);
  T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T63,LITREF(lit_9));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T65 = CALL1(1,VARREF(Ylst),YPfalse);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),13,T45,T46,T47,T48,T52,T53,T54,T55,T56,T57,T64,T65,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_9));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_762));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_556));
  T73 = BOXVAL(nameF2802);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T70 = CALL3(1,VARREF(YgooSmacrosYcat),T71,T72,Ynil);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T74 = CALL1(1,VARREF(Ylst),special_nameF2815);
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

FUNCODEDEF(fun_369) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_368,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_370) {
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

FUNCODEDEF(fun_371) {
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

FUNCODEDEF(fun_372) {
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

FUNCODEDEF(fun_373) {
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

FUNCODEDEF(fun_374) {
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

FUNCODEDEF(fun_375) {
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

FUNCODEDEF(fun_376) {
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

FUNCODEDEF(fun_377) {
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

FUNCODEDEF(fun_378) {
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

FUNCODEDEF(fun_379) {
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

FUNCODEDEF(fun_380) {
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

FUNCODEDEF(fun_381) {
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

FUNCODEDEF(fun_382) {
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

FUNCODEDEF(fun_383) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_boundQ),T1,T2,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_Gcombination),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_385) {
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

FUNCODEDEF(fun_386) {
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

FUNCODEDEF(fun_387) {
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

FUNCODEDEF(fun_388) {
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

FUNCODEDEF(fun_389) {
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

FUNCODEDEF(fun_390) {
  P x_,r_,tailQ_;
  P bodyF2822;
  P handlerF2821;
  P testF2820;
  P infoF2819;
  P typeF2818;
  P tup30F2817;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup30F2817 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2817,YPint((P)0));
  typeF2818 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2817,YPint((P)1));
  infoF2819 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2817,YPint((P)2));
  testF2820 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2817,YPint((P)3));
  handlerF2821 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2817,YPint((P)4));
  bodyF2822 = T11;
  T12 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF2818,infoF2819,testF2820,handlerF2821,bodyF2822,r_,tailQ_);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_391) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_556),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_557),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_392) {
  P x_,r_,tailQ_;
  P nameF2823;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF2823 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_819));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_556));
  T8 = CALL1(1,VARREF(Ylst),nameF2823);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(YevalSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,LITREF(lit_9));
  T2 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_69),nameF2823,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_393) {
  P x_,r_,tailQ_;
  P lineF2829;
  P typeF2828;
  P setter_nameF2827;
  P ownerF2826;
  P varF2825;
  P nameF2824;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF2824 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF2825 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF2826 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF2824);
  setter_nameF2827 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF2828 = T9;
  T11 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  lineF2829 = T11;
  T15 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF2824,ownerF2826,lineF2829);
  T16 = CALL4(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF2824,ownerF2826,typeF2828,lineF2829);
  T20 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T20 != YPfalse) {
    T25 = CALL1(1,VARREF(Ylst),varF2825);
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_642));
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
    T23 = CALL1(1,VARREF(Ylst),T24);
    T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_9));
    T28 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T27 = CALL2(1,VARREF(YgooScolsSlstYline_list),lineF2829,T28);
    T21 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T22,T27);
    T19 = T21;
  } else {
    T19 = LITREF(lit_823);
  }
  T18 = CALL5(1,VARREF(Ylst),ownerF2826,nameF2824,setter_nameF2827,typeF2828,T19);
  T17 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_822),T18);
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

FUNCODEDEF(fun_394) {
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

FUNCODEDEF(fun_395) {
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

FUNCODEDEF(fun_396) {
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
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_607));
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

FUNCODEDEF(fun_397) {
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

FUNCODEDEF(fun_ast_macro_expand_398) {
  P x_,r_,tailQ_;
  P resF2832;
  P macF2831;
  P astF2830;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,tailQ_);
  astF2830 = T1;
  T4 = CALL2(1,VARREF(YisaQ),astF2830,VARREF(YevalSastYLmacro_referenceG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),astF2830);
    macF2831 = T6;
    T9 = CALL1(1,VARREF(YevalSastYbinding_handler),macF2831);
    T8 = CALL3(1,T9,x_,r_,tailQ_);
    resF2832 = T8;
    T7 = resF2832;
    T5 = T7;
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_399) {
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

FUNCODEDEF(fun_400) {
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

FUNCODEDEF(fun_401) {
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_module),T1,r_,tailQ_);
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_mangle_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_404) {
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

FUNCODEDEF(fun_405) {
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

FUNCODEDEF(fun_406) {
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

FUNCODEDEF(fun_transaction_implemented_bindings_407) {
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

FUNCODEDEF(fun_transaction_implemented_bindings_setter_408) {
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

FUNCODEDEF(fun_transaction_dependents_410) {
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

FUNCODEDEF(fun_transaction_dependents_setter_411) {
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

FUNCODEDEF(fun_412) {
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
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_872));
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
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_875));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_emptyQ) {
  P t_;
  P tmpF2833;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF2833 = T1;
  if (tmpF2833 != YPfalse) {
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

FUNCODEDEF(fun_416) {
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

FUNCODEDEF(fun_417) {
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
  P t2_dependentsF2837;
  P t1_dependentsF2836;
  P t2_bindingsF2835;
  P t1_bindingsF2834;
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
        t1_bindingsF2834 = T6;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF2835 = T8;
        T10 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF2836 = T10;
        T12 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF2837 = T12;
        T13 = FUNFAB(fun_416,1,t1_bindingsF2834);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF2835);
        T14 = FUNFAB(fun_417,1,t1_dependentsF2836);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF2837);
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

FUNCODEDEF(fun_419) {
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

FUNCODEDEF(fun_420) {
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
  T0 = fun_419;
  T1 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_420;
  T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_422) {
  P valueF2838;
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF2838 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF2838;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_423) {
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
  P savedF2840;
  P successF2839;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF2839 = YPfalse;
  successF2839 = BOXFAB(successF2839);
  savedF2840 = VARREF(YevalSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_422,2,thunk_,successF2839);
  T5 = FUNFAB(fun_423,3,successF2839,module_,savedF2840);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1456_425) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_892),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_426) {
  P return_;
  P x_1455F2853;
  P x_1455F2852;
  P x_1455F2851;
  P x_1455F2850;
  P x_1455F2849;
  P x_1455F2848;
  P x_1455F2847;
  P x_1455F2846;
  P x_1455F2845;
  P bodyF2844;
  P moduleF2843;
  P x_1455F2842;
  P x_1456F2841;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1456_425,2);
  x_1456F2841 = T1;
  FUNINIT(x_1456F2841, 2,FREEREF(0),return_);
  x_1455F2842 = FREEREF(0);
  moduleF2843 = YPfalse;
  moduleF2843 = BOXFAB(moduleF2843);
  bodyF2844 = YPfalse;
  bodyF2844 = BOXFAB(bodyF2844);
  T7 = CALL2(1,VARREF(YisaQ),x_1455F2842,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1455F2842,LITREF(lit_892),x_1456F2841);
    x_1455F2845 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1455F2845,x_1456F2841);
    x_1455F2846 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1455F2846,x_1456F2841);
    BOXVAL(moduleF2843) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1455F2846);
    x_1455F2847 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1455F2847,x_1456F2841);
    x_1455F2848 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1455F2848,x_1456F2841);
    T18 = CALL1(1,VARREF(Ytail),x_1455F2847);
    x_1455F2849 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1455F2849,x_1456F2841);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1455F2845);
    x_1455F2850 = T20;
    BOXVAL(bodyF2844) = x_1455F2850;
    x_1455F2851 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1455F2851,x_1456F2841);
    x_1455F2852 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1455F2852,x_1456F2841);
    T25 = CALL1(1,VARREF(Ytail),x_1455F2851);
    x_1455F2853 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1455F2853,x_1456F2841);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1456F2841,LITREF(lit_6),x_1455F2842);
  }
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_886));
  T31 = BOXVAL(moduleF2843);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_776));
  T35 = CALL1(1,VARREF(Ylst),Ynil);
  T36 = BOXVAL(bodyF2844);
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

FUNCODEDEF(fun_427) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_426,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_428) {
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
  T2 = FUNFAB(fun_428,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_430) {
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

FUNCODEDEF(fun_module_loader_modules_setter_431) {
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

FUNCODEDEF(fun_432) {
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

FUNCODEDEF(fun_module_loader_stack_433) {
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

FUNCODEDEF(fun_module_loader_stack_setter_434) {
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

FUNCODEDEF(fun_435) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_436) {
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

FUNCODEDEF(fun_module_name_setter_437) {
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

FUNCODEDEF(fun_module_mangled_name_438) {
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

FUNCODEDEF(fun_module_mangled_name_setter_439) {
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

FUNCODEDEF(fun_440) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_mangled_string_name_441) {
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

FUNCODEDEF(fun_module_mangled_string_name_setter_442) {
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

FUNCODEDEF(fun_443) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_target_environment_444) {
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

FUNCODEDEF(fun_module_target_environment_setter_445) {
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

FUNCODEDEF(fun_module_syntax_environment_446) {
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

FUNCODEDEF(fun_module_syntax_environment_setter_447) {
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

FUNCODEDEF(fun_Pmodule_exports_448) {
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

FUNCODEDEF(fun_Pmodule_exports_setter_449) {
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

FUNCODEDEF(fun_450) {
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

FUNCODEDEF(fun_module_data_processedQ_451) {
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

FUNCODEDEF(fun_module_data_processedQ_setter_452) {
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

FUNCODEDEF(fun_453) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_454) {
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

FUNCODEDEF(fun_module_runtime_data_setter_455) {
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

FUNCODEDEF(fun_456) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_457) {
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

FUNCODEDEF(fun_module_transaction_setter_458) {
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

FUNCODEDEF(fun_459) {
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

FUNCODEDEF(fun_module_uses_c_files_460) {
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

FUNCODEDEF(fun_module_uses_c_files_setter_461) {
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

FUNCODEDEF(fun_module_uses_c_includes_463) {
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

FUNCODEDEF(fun_module_uses_c_includes_setter_464) {
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

FUNCODEDEF(fun_module_uses_c_libraries_466) {
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

FUNCODEDEF(fun_module_uses_c_libraries_setter_467) {
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

FUNCODEDEF(fun_468) {
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

FUNCODEDEF(fun_module_exports_469) {
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

FUNCODEDEF(fun_471) {
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
  T1 = FUNFAB(fun_471,1,f_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_473) {
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
  P tmpF2854;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2854 = T1;
  if (tmpF2854 != YPfalse) {
    T3 = tmpF2854;
  } else {
    T4 = CALL2(1,VARREF(YevalSastYload_and_register_module),loader_,name_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_476) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_477) {
  P x_1460F2858;
  P x_1459F2857;
  P tup31F2856;
  P x_1458F2855;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  x_1458F2855 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1458F2855);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup31F2856 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2856,YPint((P)0));
  x_1459F2857 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2856,YPint((P)1));
  x_1460F2858 = T7;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_1459F2857,x_1458F2855);
  T6 = x_1460F2858;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF2863;
  P x_1457F2862;
  P indentF2861;
  P depthF2860;
  P stackF2859;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF2859 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF2859);
  depthF2860 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_979),depthF2860);
  indentF2861 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF2859,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF2859);
    T7 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_980),T8,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_981),indentF2861,name_);
  x_1457F2862 = loader_;
  T12 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1457F2862);
  T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,name_);
  T10 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T11,x_1457F2862);
  T14 = FUNFAB(fun_476,2,loader_,name_);
  T15 = FUNFAB(fun_477,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF2863 = T13;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF2863);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_982),indentF2861);
  T9 = modF2863;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF2866;
  P existingF2865;
  P exportsF2864;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF2864 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF2864,name_,YPfalse);
  existingF2865 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2865,YPfalse);
  tmpF2866 = T6;
  if (tmpF2866 != YPfalse) {
    T7 = tmpF2866;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2865,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL5(1,VARREF(YevalSastYnamespace_error),LITREF(lit_987),existingF2865,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF2864,name_);
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

FUNCODEDEF(fun_481) {
  P binding_;
  P tmpF2867;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_freeQ),binding_);
  tmpF2867 = T2;
  if (tmpF2867 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_993),T6,T7);
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
  T1 = FUNFAB(fun_481,1,mod_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_483) {
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

FUNCODEDEF(fun_484) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_483,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_user_485) {
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
    T4 = FUNFAB(fun_484,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_486) {
  P v_;
  P UF2868;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(v_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF2868 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2868,v_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F2871;
  P add_userF2870;
  P usersF2869;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF2869 = T1;
  T3 = FUNSHELL(0,fun_add_user_485,3);
  add_userF2870 = T3;
  FUNINIT(add_userF2870, 3,usersF2869,add_userF2870,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF2870,modnames_);
  T5 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2871 = T5;
  packer_F2871 = BOXFAB(packer_F2871);
  T7 = FUNFAB(fun_486,1,packer_F2871);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,usersF2869);
  T9 = BOXVAL(packer_F2871);
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

FUNCODEDEF(fun_489) {
  P modname_;
  P modF2872;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF2872 = T1;
  T3 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF2872);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF2873;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF2873 = T1;
  T2 = FUNFAB(fun_489,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF2873);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF2874;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF2874 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF2874,YPchr((P)47));
  T3 = CALL2(1,VARREF(YgooScolsSseqYjoin),T4,VARREF(YgooSsystemYTpath_separatorT));
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_492) {
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
  P bootenvF2876;
  P bootmodF2875;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2875 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2875);
  bootenvF2876 = T3;
  T5 = FUNFAB(fun_492,2,bootenvF2876,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_1011));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF2877;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T2);
  new_envF2877 = T1;
  T0 = new_envF2877;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_495) {
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
  P new_envF2879;
  P loaderF2878;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T2);
  loaderF2878 = T1;
  T4 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF2878,YPfalse);
  new_envF2879 = T4;
  T5 = FUNFAB(fun_495,2,excluded_,new_envF2879);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF2879;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_497) {
  P T0;
LINK_STACK();
loop:
  DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_498) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_499) {
  P x_1461F2880;
  P T0,T1,T2;
LINK_STACK();
loop:
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1461F2880 = DYNREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_497,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_498,1,x_1461F2880);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXVAL(FREEREF(3)) = YPtrue;
UNLINK_STACK();
  QRET(FREEREF(4));
}

FUNCODEDEF(fun_500) {
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

FUNCODEDEF(fun_load_module_501) {
  P loader_,name_;
  P fileF2886;
  P modpathF2885;
  P keepmodQF2884;
  P envF2883;
  P moduleF2882;
  P typeF2881;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2881 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2881,VARREF(YevalSastYmodule_name),name_);
  moduleF2882 = T3;
  T5 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2882,loader_,YPfalse);
  envF2883 = T5;
  keepmodQF2884 = YPfalse;
  keepmodQF2884 = BOXFAB(keepmodQF2884);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF2885 = T9;
  T11 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF2885,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF2886 = T11;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2882,envF2883,envF2883);
  T12 = CALL1(1,VARREF(Ynot),fileF2886);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1019),modpathF2885);
  } else {
  }
  T15 = FUNFAB(fun_499,5,envF2883,loader_,fileF2886,keepmodQF2884,moduleF2882);
  T16 = FUNFAB(fun_500,2,keepmodQF2884,moduleF2882);
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
  P moduleF2887;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF2887 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF2887);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2887);
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
  P loaderF2888;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2888 = T1;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF2888);
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
  P envF2892;
  P modF2891;
  P typeF2890;
  P loaderF2889;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2889 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF2889);
  typeF2890 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF2890,VARREF(YevalSastYmodule_name),T6);
  modF2891 = T5;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF2891,loaderF2889,YPtrue);
  envF2892 = T8;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF2891);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF2891,envF2892,envF2892);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF2891);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF2889,modF2891);
  T7 = modF2891;
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
  P bindingF2894;
  P home_envF2893;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF2893 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,home_envF2893);
  bindingF2894 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF2894);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL4(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1035),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2894,T10);
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
  P bindingF2895;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_577),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2895 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2895,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF2896;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_589),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2896 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2896,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF2897;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_607),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF2897 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2897,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF2898;
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
  bindingF2898 = T1;
  if (bindingF2898 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T6,bindingF2898);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1048),name_,T8);
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

FUNCODEDEF(fun_517) {
  P binding_;
  P cloneF2899;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T2,YPfalse,LITREF(lit_578));
  cloneF2899 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T4,cloneF2899);
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
  T1 = FUNFAB(fun_517,1,env_);
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
  P bootenvF2901;
  P bootmodF2900;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2900 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2900);
  bootenvF2901 = T4;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF2901);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF2901);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_1060));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF2905;
  P syntax_envF2904;
  P moduleF2903;
  P typeF2902;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2902 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2902,VARREF(YevalSastYmodule_name),name_);
  moduleF2903 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF2903);
  syntax_envF2904 = T5;
  T7 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2903,loader_,YPfalse);
  target_envF2905 = T7;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2903,syntax_envF2904,target_envF2905);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF2905);
  } else {
    T10 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF2905,loader_);
  }
  T6 = moduleF2903;
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

FUNCODEDEF(fun_loop_527) {
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
  P loopF2906;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_527,2);
  loopF2906 = T1;
  FUNINIT(loopF2906, 2,f_,loopF2906);
  T2 = CALL1(0,loopF2906,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_529) {
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
  P loopF2907;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_529,2);
  loopF2907 = T1;
  FUNINIT(loopF2907, 2,f_,loopF2907);
  T2 = CALL1(0,loopF2907,env_);
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
  P T160,T161,T162,T163,T164,T165,T166;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(YevalSastYDgoo_boot_module_name,LITREF(lit_0));
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  lit_2 = YPPlist(1,YPPsym((P)"return"));
  lit_3 = YPPsym((P)"x-1431");
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
  fun_x_1431_0 = YPmet(FUNCODEREF(fun_x_1431_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
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
  T11 = VARREF_OR(YevalSdependencyYast_error,YPfalse);
  T12 = fun_ast_error_3;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YevalSdependencyYast_error,T10);
  lit_17 = YPPsym((P)"<namespace-error>");
  T14 = (P)YPpair(VARREF(YevalSastYLsimple_ast_errorG),Ynil);
  T13 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_17),T14);
  VARSET(YevalSastYLnamespace_errorG,T13);
  lit_18 = YPPsym((P)"namespace-error");
  lit_19 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T15 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_namespace_error_4 = YPmet(FUNCODEREF(fun_namespace_error_4),LITREF(lit_18),T15,ENVNUL,PNUL,sloc(41));
  T17 = VARREF_OR(YevalSastYnamespace_error,YPfalse);
  T18 = fun_namespace_error_4;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T18);
  VARSET(YevalSastYnamespace_error,T16);
  lit_20 = YPPsym((P)"bot");
  T19 = XCALL1(1,VARREF(Ylst),LITREF(lit_20));
  VARSET(YevalSastYast_LbotG,T19);
  lit_21 = YPPsym((P)"<program>");
  T21 = (P)YPpair(VARREF(YLanyG),Ynil);
  T20 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_21),T21);
  VARSET(YevalSastYLprogramG,T20);
  lit_22 = YPPsym((P)"program-type");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_5 = YPmet(FUNCODEREF(fun_program_type_5),LITREF(lit_22),T22,ENVNUL,PNUL,sloc(50));
  T24 = VARREF_OR(YevalSastYprogram_type,YPfalse);
  T25 = fun_program_type_5;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSastYprogram_type,T23);
  lit_24 = YPPsym((P)"program-type-setter");
  lit_25 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_6 = YPmet(FUNCODEREF(fun_program_type_setter_6),LITREF(lit_24),T26,ENVNUL,PNUL,sloc(50));
  T28 = VARREF_OR(YevalSastYprogram_type_setter,YPfalse);
  T29 = fun_program_type_setter_6;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYprogram_type_setter,T27);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_26 = YPPsym((P)"program-line");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_line_7 = YPmet(FUNCODEREF(fun_program_line_7),LITREF(lit_26),T30,ENVNUL,PNUL,sloc(51));
  T32 = VARREF_OR(YevalSastYprogram_line,YPfalse);
  T33 = fun_program_line_7;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSastYprogram_line,T31);
  lit_28 = YPPsym((P)"program-line-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T35 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T34 = YPsig(LITREF(lit_29),YPPlist(2,T35,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_line_setter_8 = YPmet(FUNCODEREF(fun_program_line_setter_8),LITREF(lit_28),T34,ENVNUL,PNUL,sloc(51));
  T37 = VARREF_OR(YevalSastYprogram_line_setter,YPfalse);
  T38 = fun_program_line_setter_8;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T38);
  VARSET(YevalSastYprogram_line_setter,T36);
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T39,ENVNUL,PNUL,sloc(51));
  T40 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T41 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_line),VARREF(YevalSastYprogram_line_setter),T40,T41);
  lit_31 = YPPsym((P)"program-register");
  lit_32 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_10 = YPmet(FUNCODEREF(fun_program_register_10),LITREF(lit_31),T42,ENVNUL,PNUL,sloc(52));
  T44 = VARREF_OR(YevalSastYprogram_register,YPfalse);
  T45 = fun_program_register_10;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSastYprogram_register,T43);
  lit_33 = YPPsym((P)"program-register-setter");
  lit_34 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_11 = YPmet(FUNCODEREF(fun_program_register_setter_11),LITREF(lit_33),T46,ENVNUL,PNUL,sloc(52));
  T48 = VARREF_OR(YevalSastYprogram_register_setter,YPfalse);
  T49 = fun_program_register_setter_11;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSastYprogram_register_setter,T47);
  lit_35 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T50,ENVNUL,PNUL,sloc(52));
  T51 = fun_12;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T51);
  lit_36 = YPPsym((P)"<computed-program>");
  T53 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T52 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_36),T53);
  VARSET(YevalSastYLcomputed_programG,T52);
  lit_37 = YPPsym((P)"<passive-program>");
  T55 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T54 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_37),T55);
  VARSET(YevalSastYLpassive_programG,T54);
  VARSET(YevalSastYLbinding_nameG,VARREF(YLanyG));
  lit_38 = YPPsym((P)"<binding>");
  T57 = (P)YPpair(VARREF(YLanyG),Ynil);
  T56 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_38),T57);
  VARSET(YevalSastYLbindingG,T56);
  lit_39 = YPPsym((P)"binding-name");
  lit_40 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_13 = YPmet(FUNCODEREF(fun_binding_name_13),LITREF(lit_39),T58,ENVNUL,PNUL,sloc(64));
  T60 = VARREF_OR(YevalSastYbinding_name,YPfalse);
  T61 = fun_binding_name_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalSastYbinding_name,T59);
  lit_41 = YPPsym((P)"binding-name-setter");
  lit_42 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_42),YPPlist(2,VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_14 = YPmet(FUNCODEREF(fun_binding_name_setter_14),LITREF(lit_41),T62,ENVNUL,PNUL,sloc(64));
  T64 = VARREF_OR(YevalSastYbinding_name_setter,YPfalse);
  T65 = fun_binding_name_setter_14;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSastYbinding_name_setter,T63);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_name),VARREF(YevalSastYbinding_name_setter),VARREF(YevalSastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_43 = YPPsym((P)"binding-mangled-name");
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_15 = YPmet(FUNCODEREF(fun_binding_mangled_name_15),LITREF(lit_43),T66,ENVNUL,PNUL,sloc(65));
  T68 = VARREF_OR(YevalSastYbinding_mangled_name,YPfalse);
  T69 = fun_binding_mangled_name_15;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSastYbinding_mangled_name,T67);
  lit_45 = YPPsym((P)"binding-mangled-name-setter");
  lit_46 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T71 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T70 = YPsig(LITREF(lit_46),YPPlist(2,T71,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_16 = YPmet(FUNCODEREF(fun_binding_mangled_name_setter_16),LITREF(lit_45),T70,ENVNUL,PNUL,sloc(65));
  T73 = VARREF_OR(YevalSastYbinding_mangled_name_setter,YPfalse);
  T74 = fun_binding_mangled_name_setter_16;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YevalSastYbinding_mangled_name_setter,T72);
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T75,ENVNUL,PNUL,sloc(65));
  T76 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T77 = fun_17;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_mangled_name),VARREF(YevalSastYbinding_mangled_name_setter),T76,T77);
  lit_48 = YPPsym((P)"binding-type");
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_18 = YPmet(FUNCODEREF(fun_binding_type_18),LITREF(lit_48),T78,ENVNUL,PNUL,sloc(66));
  T80 = VARREF_OR(YevalSastYbinding_type,YPfalse);
  T81 = fun_binding_type_18;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSastYbinding_type,T79);
  lit_50 = YPPsym((P)"binding-type-setter");
  lit_51 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_19 = YPmet(FUNCODEREF(fun_binding_type_setter_19),LITREF(lit_50),T82,ENVNUL,PNUL,sloc(66));
  T84 = VARREF_OR(YevalSastYbinding_type_setter,YPfalse);
  T85 = fun_binding_type_setter_19;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSastYbinding_type_setter,T83);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_type),VARREF(YevalSastYbinding_type_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_52 = YPPsym((P)"binding-inferred-type");
  lit_53 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_20 = YPmet(FUNCODEREF(fun_binding_inferred_type_20),LITREF(lit_52),T86,ENVNUL,PNUL,sloc(67));
  T88 = VARREF_OR(YevalSastYbinding_inferred_type,YPfalse);
  T89 = fun_binding_inferred_type_20;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSastYbinding_inferred_type,T87);
  lit_54 = YPPsym((P)"binding-inferred-type-setter");
  lit_55 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_21 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_21),LITREF(lit_54),T90,ENVNUL,PNUL,sloc(67));
  T92 = VARREF_OR(YevalSastYbinding_inferred_type_setter,YPfalse);
  T93 = fun_binding_inferred_type_setter_21;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSastYbinding_inferred_type_setter,T91);
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T94,ENVNUL,PNUL,sloc(67));
  T95 = fun_22;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_inferred_type),VARREF(YevalSastYbinding_inferred_type_setter),VARREF(YLanyG),T95);
  lit_57 = YPPsym((P)"<global-box>");
  T97 = (P)YPpair(VARREF(YLanyG),Ynil);
  T96 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_57),T97);
  VARSET(YevalSastYLglobal_boxG,T96);
  lit_58 = YPPsym((P)"global-box-value");
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_23 = YPmet(FUNCODEREF(fun_global_box_value_23),LITREF(lit_58),T98,ENVNUL,PNUL,sloc(72));
  T100 = VARREF_OR(YevalSastYglobal_box_value,YPfalse);
  T101 = fun_global_box_value_23;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YevalSastYglobal_box_value,T99);
  lit_60 = YPPsym((P)"global-box-value-setter");
  lit_61 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_24 = YPmet(FUNCODEREF(fun_global_box_value_setter_24),LITREF(lit_60),T102,ENVNUL,PNUL,sloc(72));
  T104 = VARREF_OR(YevalSastYglobal_box_value_setter,YPfalse);
  T105 = fun_global_box_value_setter_24;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YevalSastYglobal_box_value_setter,T103);
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T106,ENVNUL,PNUL,sloc(72));
  T107 = fun_25;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_boxG),VARREF(YevalSastYglobal_box_value),VARREF(YevalSastYglobal_box_value_setter),VARREF(YLanyG),T107);
  lit_63 = YPPsym((P)"<module-binding>");
  T110 = (P)YPpair(VARREF(YevalSdependencyYLdependableG),Ynil);
  T109 = (P)YPpair(VARREF(YevalSastYLbindingG),T110);
  T108 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_63),T109);
  VARSET(YevalSastYLmodule_bindingG,T108);
  lit_64 = YPPsym((P)"binding-kind");
  lit_65 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_26 = YPmet(FUNCODEREF(fun_binding_kind_26),LITREF(lit_64),T111,ENVNUL,PNUL,sloc(76));
  T113 = VARREF_OR(YevalSastYbinding_kind,YPfalse);
  T114 = fun_binding_kind_26;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSastYbinding_kind,T112);
  lit_66 = YPPsym((P)"binding-kind-setter");
  lit_67 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_67),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_27 = YPmet(FUNCODEREF(fun_binding_kind_setter_27),LITREF(lit_66),T115,ENVNUL,PNUL,sloc(76));
  T117 = VARREF_OR(YevalSastYbinding_kind_setter,YPfalse);
  T118 = fun_binding_kind_setter_27;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YevalSastYbinding_kind_setter,T116);
  lit_68 = YPPlist(1,YPPsym((P)"_x"));
  lit_69 = YPPsym((P)"global");
  T119 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T119,ENVNUL,PNUL,sloc(76));
  T120 = fun_28;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),VARREF(YevalSastYbinding_kind_setter),VARREF(YLanyG),T120);
  lit_70 = YPPsym((P)"binding-module");
  lit_71 = YPPlist(1,YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_29 = YPmet(FUNCODEREF(fun_binding_module_29),LITREF(lit_70),T121,ENVNUL,PNUL,sloc(77));
  T123 = VARREF_OR(YevalSastYbinding_module,YPfalse);
  T124 = fun_binding_module_29;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSastYbinding_module,T122);
  lit_72 = YPPsym((P)"binding-module-setter");
  lit_73 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_30 = YPmet(FUNCODEREF(fun_binding_module_setter_30),LITREF(lit_72),T125,ENVNUL,PNUL,sloc(77));
  T127 = VARREF_OR(YevalSastYbinding_module_setter,YPfalse);
  T128 = fun_binding_module_setter_30;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YevalSastYbinding_module_setter,T126);
  lit_74 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T129,ENVNUL,PNUL,sloc(77));
  T130 = fun_31;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_module),VARREF(YevalSastYbinding_module_setter),VARREF(YLanyG),T130);
  lit_75 = YPPsym((P)"binding-free?");
  lit_76 = YPPlist(1,YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_32 = YPmet(FUNCODEREF(fun_binding_freeQ_32),LITREF(lit_75),T131,ENVNUL,PNUL,sloc(78));
  T133 = VARREF_OR(YevalSastYbinding_freeQ,YPfalse);
  T134 = fun_binding_freeQ_32;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YevalSastYbinding_freeQ,T132);
  lit_77 = YPPsym((P)"binding-free?-setter");
  lit_78 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_33 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_33),LITREF(lit_77),T135,ENVNUL,PNUL,sloc(78));
  T137 = VARREF_OR(YevalSastYbinding_freeQ_setter,YPfalse);
  T138 = fun_binding_freeQ_setter_33;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YevalSastYbinding_freeQ_setter,T136);
  lit_79 = YPPlist(1,YPPsym((P)"_x"));
  T139 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T139,ENVNUL,PNUL,sloc(78));
  T140 = fun_34;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),VARREF(YevalSastYbinding_freeQ_setter),VARREF(YLlogG),T140);
  lit_80 = YPPsym((P)"binding-info");
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_35 = YPmet(FUNCODEREF(fun_binding_info_35),LITREF(lit_80),T141,ENVNUL,PNUL,sloc(79));
  T143 = VARREF_OR(YevalSastYbinding_info,YPfalse);
  T144 = fun_binding_info_35;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YevalSastYbinding_info,T142);
  lit_82 = YPPsym((P)"binding-info-setter");
  lit_83 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T145 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_36 = YPmet(FUNCODEREF(fun_binding_info_setter_36),LITREF(lit_82),T145,ENVNUL,PNUL,sloc(79));
  T147 = VARREF_OR(YevalSastYbinding_info_setter,YPfalse);
  T148 = fun_binding_info_setter_36;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T148);
  VARSET(YevalSastYbinding_info_setter,T146);
  lit_84 = YPPlist(1,YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T149,ENVNUL,PNUL,sloc(79));
  T150 = fun_37;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_info),VARREF(YevalSastYbinding_info_setter),VARREF(YLanyG),T150);
  lit_85 = YPPsym((P)"binding-prop");
  lit_86 = YPPlist(1,YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_prop_38 = YPmet(FUNCODEREF(fun_binding_prop_38),LITREF(lit_85),T151,ENVNUL,PNUL,sloc(80));
  T153 = VARREF_OR(YevalSastYbinding_prop,YPfalse);
  T154 = fun_binding_prop_38;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YevalSastYbinding_prop,T152);
  lit_87 = YPPsym((P)"binding-prop-setter");
  lit_88 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T155 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_prop_setter_39 = YPmet(FUNCODEREF(fun_binding_prop_setter_39),LITREF(lit_87),T155,ENVNUL,PNUL,sloc(80));
  T157 = VARREF_OR(YevalSastYbinding_prop_setter,YPfalse);
  T158 = fun_binding_prop_setter_39;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YevalSastYbinding_prop_setter,T156);
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T159 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T159,ENVNUL,PNUL,sloc(80));
  T160 = fun_40;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_prop),VARREF(YevalSastYbinding_prop_setter),VARREF(YLanyG),T160);
  lit_90 = YPPsym((P)"binding-module-name");
  lit_91 = YPPlist(1,YPPsym((P)"b"));
  T161 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_41 = YPmet(FUNCODEREF(fun_binding_module_name_41),LITREF(lit_90),T161,ENVNUL,PNUL,sloc(82));
  T163 = VARREF_OR(YevalSastYbinding_module_name,YPfalse);
  T164 = fun_binding_module_name_41;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YevalSastYbinding_module_name,T162);
  T166 = VARSET(YevalSastYbinding_global_box,VARREF(YevalSastYbinding_info));
  T165 = T166;
  return T165;
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
  P T160,T161,T162;
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
  T8 = VARREF_OR(YevalSastYbinding_value,YPfalse);
  T9 = fun_binding_value_44;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSastYbinding_value,T7);
  lit_99 = YPPsym((P)"binding-value-setter");
  lit_100 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_45 = YPmet(FUNCODEREF(fun_binding_value_setter_45),LITREF(lit_99),T10,ENVNUL,PNUL,sloc(105));
  T12 = VARREF_OR(YevalSastYbinding_value_setter,YPfalse);
  T13 = fun_binding_value_setter_45;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YevalSastYbinding_value_setter,T11);
  lit_101 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T14,ENVNUL,PNUL,sloc(105));
  T15 = fun_46;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T15);
  lit_102 = YPPsym((P)"binding-mutable?");
  lit_103 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_47 = YPmet(FUNCODEREF(fun_binding_mutableQ_47),LITREF(lit_102),T16,ENVNUL,PNUL,sloc(106));
  T18 = VARREF_OR(YevalSastYbinding_mutableQ,YPfalse);
  T19 = fun_binding_mutableQ_47;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSastYbinding_mutableQ,T17);
  lit_104 = YPPsym((P)"binding-mutable?-setter");
  lit_105 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_48 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_48),LITREF(lit_104),T20,ENVNUL,PNUL,sloc(106));
  T22 = VARREF_OR(YevalSastYbinding_mutableQ_setter,YPfalse);
  T23 = fun_binding_mutableQ_setter_48;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSastYbinding_mutableQ_setter,T21);
  lit_106 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T24,ENVNUL,PNUL,sloc(106));
  T25 = fun_49;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T25);
  lit_107 = YPPsym((P)"binding-dynamic-extent?");
  lit_108 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_50 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_50),LITREF(lit_107),T26,ENVNUL,PNUL,sloc(107));
  T28 = VARREF_OR(YevalSastYbinding_dynamic_extentQ,YPfalse);
  T29 = fun_binding_dynamic_extentQ_50;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYbinding_dynamic_extentQ,T27);
  lit_109 = YPPsym((P)"binding-dynamic-extent?-setter");
  lit_110 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_51 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_51),LITREF(lit_109),T30,ENVNUL,PNUL,sloc(107));
  T32 = VARREF_OR(YevalSastYbinding_dynamic_extentQ_setter,YPfalse);
  T33 = fun_binding_dynamic_extentQ_setter_51;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T31);
  lit_111 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T34,ENVNUL,PNUL,sloc(107));
  T35 = fun_52;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T35);
  lit_112 = YPPsym((P)"binding-dotted?");
  lit_113 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_53 = YPmet(FUNCODEREF(fun_binding_dottedQ_53),LITREF(lit_112),T36,ENVNUL,PNUL,sloc(108));
  T38 = VARREF_OR(YevalSastYbinding_dottedQ,YPfalse);
  T39 = fun_binding_dottedQ_53;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSastYbinding_dottedQ,T37);
  lit_114 = YPPsym((P)"binding-dotted?-setter");
  lit_115 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_54 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_54),LITREF(lit_114),T40,ENVNUL,PNUL,sloc(108));
  T42 = VARREF_OR(YevalSastYbinding_dottedQ_setter,YPfalse);
  T43 = fun_binding_dottedQ_setter_54;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSastYbinding_dottedQ_setter,T41);
  lit_116 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T44,ENVNUL,PNUL,sloc(108));
  T45 = fun_55;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T45);
  lit_117 = YPPsym((P)"binding-index");
  lit_118 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_56 = YPmet(FUNCODEREF(fun_binding_index_56),LITREF(lit_117),T46,ENVNUL,PNUL,sloc(109));
  T48 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T49 = fun_binding_index_56;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSastYbinding_index,T47);
  lit_119 = YPPsym((P)"binding-index-setter");
  lit_120 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_57 = YPmet(FUNCODEREF(fun_binding_index_setter_57),LITREF(lit_119),T50,ENVNUL,PNUL,sloc(109));
  T52 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T53 = fun_binding_index_setter_57;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSastYbinding_index_setter,T51);
  lit_121 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T54,ENVNUL,PNUL,sloc(109));
  T55 = fun_58;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T55);
  lit_122 = YPPsym((P)"<compile-time>");
  T57 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T56 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_122),T57);
  VARSET(YevalSastYLcompile_timeG,T56);
  lit_123 = YPPsym((P)"compile-time-program");
  lit_124 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_59 = YPmet(FUNCODEREF(fun_compile_time_program_59),LITREF(lit_123),T58,ENVNUL,PNUL,sloc(116));
  T60 = VARREF_OR(YevalSastYcompile_time_program,YPfalse);
  T61 = fun_compile_time_program_59;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalSastYcompile_time_program,T59);
  lit_125 = YPPsym((P)"compile-time-program-setter");
  lit_126 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_60 = YPmet(FUNCODEREF(fun_compile_time_program_setter_60),LITREF(lit_125),T62,ENVNUL,PNUL,sloc(116));
  T64 = VARREF_OR(YevalSastYcompile_time_program_setter,YPfalse);
  T65 = fun_compile_time_program_setter_60;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSastYcompile_time_program_setter,T63);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_127 = YPPsym((P)"<reference>");
  T67 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_127),T67);
  VARSET(YevalSastYLreferenceG,T66);
  lit_128 = YPPsym((P)"<real-reference>");
  T69 = (P)YPpair(VARREF(YevalSastYLreferenceG),Ynil);
  T68 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_128),T69);
  VARSET(YevalSastYLreal_referenceG,T68);
  lit_129 = YPPsym((P)"reference-binding");
  lit_130 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_61 = YPmet(FUNCODEREF(fun_reference_binding_61),LITREF(lit_129),T70,ENVNUL,PNUL,sloc(127));
  T72 = VARREF_OR(YevalSastYreference_binding,YPfalse);
  T73 = fun_reference_binding_61;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSastYreference_binding,T71);
  lit_131 = YPPsym((P)"reference-binding-setter");
  lit_132 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_62 = YPmet(FUNCODEREF(fun_reference_binding_setter_62),LITREF(lit_131),T74,ENVNUL,PNUL,sloc(127));
  T76 = VARREF_OR(YevalSastYreference_binding_setter,YPfalse);
  T77 = fun_reference_binding_setter_62;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSastYreference_binding_setter,T75);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_133 = YPPsym((P)"<local-reference>");
  T79 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T78 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_133),T79);
  VARSET(YevalSastYLlocal_referenceG,T78);
  lit_134 = YPPsym((P)"reference-called-function?");
  lit_135 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_63 = YPmet(FUNCODEREF(fun_reference_called_functionQ_63),LITREF(lit_134),T80,ENVNUL,PNUL,sloc(130));
  T82 = VARREF_OR(YevalSastYreference_called_functionQ,YPfalse);
  T83 = fun_reference_called_functionQ_63;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YevalSastYreference_called_functionQ,T81);
  lit_136 = YPPsym((P)"reference-called-function?-setter");
  lit_137 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_64 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_64),LITREF(lit_136),T84,ENVNUL,PNUL,sloc(130));
  T86 = VARREF_OR(YevalSastYreference_called_functionQ_setter,YPfalse);
  T87 = fun_reference_called_functionQ_setter_64;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YevalSastYreference_called_functionQ_setter,T85);
  lit_138 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T88,ENVNUL,PNUL,sloc(130));
  T89 = fun_65;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T89);
  lit_139 = YPPsym((P)"reference-frame-number");
  lit_140 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_66 = YPmet(FUNCODEREF(fun_reference_frame_number_66),LITREF(lit_139),T90,ENVNUL,PNUL,sloc(131));
  T92 = VARREF_OR(YevalSastYreference_frame_number,YPfalse);
  T93 = fun_reference_frame_number_66;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSastYreference_frame_number,T91);
  lit_141 = YPPsym((P)"reference-frame-number-setter");
  lit_142 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_67 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_67),LITREF(lit_141),T94,ENVNUL,PNUL,sloc(131));
  T96 = VARREF_OR(YevalSastYreference_frame_number_setter,YPfalse);
  T97 = fun_reference_frame_number_setter_67;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YevalSastYreference_frame_number_setter,T95);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_143 = YPPsym((P)"reference-frame-offset");
  lit_144 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_68 = YPmet(FUNCODEREF(fun_reference_frame_offset_68),LITREF(lit_143),T98,ENVNUL,PNUL,sloc(132));
  T100 = VARREF_OR(YevalSastYreference_frame_offset,YPfalse);
  T101 = fun_reference_frame_offset_68;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YevalSastYreference_frame_offset,T99);
  lit_145 = YPPsym((P)"reference-frame-offset-setter");
  lit_146 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_146),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_69 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_69),LITREF(lit_145),T102,ENVNUL,PNUL,sloc(132));
  T104 = VARREF_OR(YevalSastYreference_frame_offset_setter,YPfalse);
  T105 = fun_reference_frame_offset_setter_69;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YevalSastYreference_frame_offset_setter,T103);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_147 = YPPsym((P)"<module-binding-reference>");
  T107 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T106 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_147),T107);
  VARSET(YevalSastYLmodule_binding_referenceG,T106);
  lit_148 = YPPsym((P)"<global-reference>");
  T109 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T108 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_148),T109);
  VARSET(YevalSastYLglobal_referenceG,T108);
  lit_149 = YPPsym((P)"<runtime-reference>");
  T111 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T110 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_149),T111);
  VARSET(YevalSastYLruntime_referenceG,T110);
  lit_150 = YPPsym((P)"<dynamic-reference>");
  T113 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T112 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_150),T113);
  VARSET(YevalSastYLdynamic_referenceG,T112);
  lit_151 = YPPsym((P)"<predefined-reference>");
  T115 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T114 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_151),T115);
  VARSET(YevalSastYLpredefined_referenceG,T114);
  lit_152 = YPPsym((P)"<static-module-binding-reference>");
  T117 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T116 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_152),T117);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T116);
  lit_153 = YPPsym((P)"<macro-reference>");
  T119 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T118 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_153),T119);
  VARSET(YevalSastYLmacro_referenceG,T118);
  lit_154 = YPPsym((P)"<magic-reference>");
  T121 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T120 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_154),T121);
  VARSET(YevalSastYLmagic_referenceG,T120);
  lit_155 = YPPsym((P)"<bound?>");
  T123 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T122 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_155),T123);
  VARSET(YevalSastYLboundQG,T122);
  lit_156 = YPPsym((P)"bound?-reference");
  lit_157 = YPPlist(1,YPPsym((P)"_x"));
  T124 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_70 = YPmet(FUNCODEREF(fun_boundQ_reference_70),LITREF(lit_156),T124,ENVNUL,PNUL,sloc(153));
  T126 = VARREF_OR(YevalSastYboundQ_reference,YPfalse);
  T127 = fun_boundQ_reference_70;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YevalSastYboundQ_reference,T125);
  lit_158 = YPPsym((P)"bound?-reference-setter");
  lit_159 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T128 = YPsig(LITREF(lit_159),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_71 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_71),LITREF(lit_158),T128,ENVNUL,PNUL,sloc(153));
  T130 = VARREF_OR(YevalSastYboundQ_reference_setter,YPfalse);
  T131 = fun_boundQ_reference_setter_71;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YevalSastYboundQ_reference_setter,T129);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_160 = YPPsym((P)"bound?-default");
  lit_161 = YPPlist(1,YPPsym((P)"_x"));
  T132 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_default_72 = YPmet(FUNCODEREF(fun_boundQ_default_72),LITREF(lit_160),T132,ENVNUL,PNUL,sloc(154));
  T134 = VARREF_OR(YevalSastYboundQ_default,YPfalse);
  T135 = fun_boundQ_default_72;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YevalSastYboundQ_default,T133);
  lit_162 = YPPsym((P)"bound?-default-setter");
  lit_163 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T136 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_default_setter_73 = YPmet(FUNCODEREF(fun_boundQ_default_setter_73),LITREF(lit_162),T136,ENVNUL,PNUL,sloc(154));
  T138 = VARREF_OR(YevalSastYboundQ_default_setter,YPfalse);
  T139 = fun_boundQ_default_setter_73;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSastYboundQ_default_setter,T137);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_default),VARREF(YevalSastYboundQ_default_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_164 = YPPsym((P)"<assignment>");
  T141 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_164),T141);
  VARSET(YevalSastYLassignmentG,T140);
  lit_165 = YPPsym((P)"assignment-form");
  lit_166 = YPPlist(1,YPPsym((P)"_x"));
  T142 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_74 = YPmet(FUNCODEREF(fun_assignment_form_74),LITREF(lit_165),T142,ENVNUL,PNUL,sloc(157));
  T144 = VARREF_OR(YevalSastYassignment_form,YPfalse);
  T145 = fun_assignment_form_74;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSastYassignment_form,T143);
  lit_167 = YPPsym((P)"assignment-form-setter");
  lit_168 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T146 = YPsig(LITREF(lit_168),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_75 = YPmet(FUNCODEREF(fun_assignment_form_setter_75),LITREF(lit_167),T146,ENVNUL,PNUL,sloc(157));
  T148 = VARREF_OR(YevalSastYassignment_form_setter,YPfalse);
  T149 = fun_assignment_form_setter_75;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YevalSastYassignment_form_setter,T147);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_169 = YPPsym((P)"<local-assignment>");
  T151 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T150 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_169),T151);
  VARSET(YevalSastYLlocal_assignmentG,T150);
  lit_170 = YPPsym((P)"assignment-reference");
  lit_171 = YPPlist(1,YPPsym((P)"_x"));
  T152 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_76 = YPmet(FUNCODEREF(fun_assignment_reference_76),LITREF(lit_170),T152,ENVNUL,PNUL,sloc(160));
  T154 = VARREF_OR(YevalSastYassignment_reference,YPfalse);
  T155 = fun_assignment_reference_76;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YevalSastYassignment_reference,T153);
  lit_172 = YPPsym((P)"assignment-reference-setter");
  lit_173 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T158 = YPsig(LITREF(lit_173),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T157 = fun_assignment_reference_setter_77 = YPmet(FUNCODEREF(fun_assignment_reference_setter_77),LITREF(lit_172),T158,ENVNUL,PNUL,sloc(160));
  T161 = VARREF_OR(YevalSastYassignment_reference_setter,YPfalse);
  T162 = fun_assignment_reference_setter_77;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  T159 = VARSET(YevalSastYassignment_reference_setter,T160);
  T156 = T159;
  return T156;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188;
DEFCREGS();
loop:
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_174 = YPPsym((P)"<global-assignment>");
  T1 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_174),T1);
  VARSET(YevalSastYLglobal_assignmentG,T0);
  lit_175 = YPPsym((P)"assignment-binding");
  lit_176 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_78 = YPmet(FUNCODEREF(fun_assignment_binding_78),LITREF(lit_175),T2,ENVNUL,PNUL,sloc(163));
  T4 = VARREF_OR(YevalSastYassignment_binding,YPfalse);
  T5 = fun_assignment_binding_78;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSastYassignment_binding,T3);
  lit_177 = YPPsym((P)"assignment-binding-setter");
  lit_178 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_178),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_79 = YPmet(FUNCODEREF(fun_assignment_binding_setter_79),LITREF(lit_177),T6,ENVNUL,PNUL,sloc(163));
  T8 = VARREF_OR(YevalSastYassignment_binding_setter,YPfalse);
  T9 = fun_assignment_binding_setter_79;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSastYassignment_binding_setter,T7);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_179 = YPPsym((P)"<runtime-assignment>");
  T11 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_179),T11);
  VARSET(YevalSastYLruntime_assignmentG,T10);
  lit_180 = YPPsym((P)"<dynamic-assignment>");
  T13 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_180),T13);
  VARSET(YevalSastYLdynamic_assignmentG,T12);
  lit_181 = YPPsym((P)"<definition>");
  T15 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_181),T15);
  VARSET(YevalSastYLdefinitionG,T14);
  lit_182 = YPPsym((P)"<variable-definition>");
  T17 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T16 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_182),T17);
  VARSET(YevalSastYLvariable_definitionG,T16);
  lit_183 = YPPsym((P)"<dynamic-definition>");
  T19 = (P)YPpair(VARREF(YevalSastYLvariable_definitionG),Ynil);
  T18 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_183),T19);
  VARSET(YevalSastYLdynamic_definitionG,T18);
  lit_184 = YPPsym((P)"<ast-generic-definition>");
  T21 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T20 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_184),T21);
  VARSET(YevalSastYLast_generic_definitionG,T20);
  lit_185 = YPPsym((P)"<ast-function-definition>");
  T23 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_185),T23);
  VARSET(YevalSastYLast_function_definitionG,T22);
  lit_186 = YPPsym((P)"<ast-method-definition>");
  T25 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T24 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_186),T25);
  VARSET(YevalSastYLast_method_definitionG,T24);
  lit_187 = YPPsym((P)"<ast-primitive-definition>");
  T27 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T26 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_187),T27);
  VARSET(YevalSastYLast_primitive_definitionG,T26);
  lit_188 = YPPsym((P)"<ast-macro-definition>");
  T29 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T28 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_188),T29);
  VARSET(YevalSastYLast_macro_definitionG,T28);
  lit_189 = YPPsym((P)"<ast-signature>");
  T31 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T30 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_189),T31);
  VARSET(YevalSastYLast_signatureG,T30);
  lit_190 = YPPsym((P)"signature-bindings");
  lit_191 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_191),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_80 = YPmet(FUNCODEREF(fun_signature_bindings_80),LITREF(lit_190),T32,ENVNUL,PNUL,sloc(188));
  T34 = VARREF_OR(YevalSastYsignature_bindings,YPfalse);
  T35 = fun_signature_bindings_80;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSastYsignature_bindings,T33);
  lit_192 = YPPsym((P)"signature-bindings-setter");
  lit_193 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_193),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_81 = YPmet(FUNCODEREF(fun_signature_bindings_setter_81),LITREF(lit_192),T36,ENVNUL,PNUL,sloc(188));
  T38 = VARREF_OR(YevalSastYsignature_bindings_setter,YPfalse);
  T39 = fun_signature_bindings_setter_81;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSastYsignature_bindings_setter,T37);
  lit_194 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_194),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T40,ENVNUL,PNUL,sloc(188));
  T41 = fun_82;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T41);
  lit_195 = YPPsym((P)"signature-names");
  lit_196 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_83 = YPmet(FUNCODEREF(fun_signature_names_83),LITREF(lit_195),T42,ENVNUL,PNUL,sloc(189));
  T44 = VARREF_OR(YevalSastYsignature_names,YPfalse);
  T45 = fun_signature_names_83;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSastYsignature_names,T43);
  lit_197 = YPPsym((P)"signature-names-setter");
  lit_198 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_198),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_84 = YPmet(FUNCODEREF(fun_signature_names_setter_84),LITREF(lit_197),T46,ENVNUL,PNUL,sloc(189));
  T48 = VARREF_OR(YevalSastYsignature_names_setter,YPfalse);
  T49 = fun_signature_names_setter_84;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSastYsignature_names_setter,T47);
  lit_199 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T50,ENVNUL,PNUL,sloc(189));
  T51 = fun_85;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T51);
  lit_200 = YPPsym((P)"signature-specs");
  lit_201 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_86 = YPmet(FUNCODEREF(fun_signature_specs_86),LITREF(lit_200),T52,ENVNUL,PNUL,sloc(190));
  T54 = VARREF_OR(YevalSastYsignature_specs,YPfalse);
  T55 = fun_signature_specs_86;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSastYsignature_specs,T53);
  lit_202 = YPPsym((P)"signature-specs-setter");
  lit_203 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_203),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_87 = YPmet(FUNCODEREF(fun_signature_specs_setter_87),LITREF(lit_202),T56,ENVNUL,PNUL,sloc(190));
  T58 = VARREF_OR(YevalSastYsignature_specs_setter,YPfalse);
  T59 = fun_signature_specs_setter_87;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSastYsignature_specs_setter,T57);
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T60,ENVNUL,PNUL,sloc(190));
  T61 = fun_88;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T61);
  lit_205 = YPPsym((P)"signature-nary?");
  lit_206 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_89 = YPmet(FUNCODEREF(fun_signature_naryQ_89),LITREF(lit_205),T62,ENVNUL,PNUL,sloc(191));
  T64 = VARREF_OR(YevalSastYsignature_naryQ,YPfalse);
  T65 = fun_signature_naryQ_89;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSastYsignature_naryQ,T63);
  lit_207 = YPPsym((P)"signature-nary?-setter");
  lit_208 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_208),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_90 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_90),LITREF(lit_207),T66,ENVNUL,PNUL,sloc(191));
  T68 = VARREF_OR(YevalSastYsignature_naryQ_setter,YPfalse);
  T69 = fun_signature_naryQ_setter_90;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSastYsignature_naryQ_setter,T67);
  lit_209 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T70,ENVNUL,PNUL,sloc(191));
  T71 = fun_91;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T71);
  lit_210 = YPPsym((P)"signature-arity");
  lit_211 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_92 = YPmet(FUNCODEREF(fun_signature_arity_92),LITREF(lit_210),T72,ENVNUL,PNUL,sloc(192));
  T74 = VARREF_OR(YevalSastYsignature_arity,YPfalse);
  T75 = fun_signature_arity_92;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YevalSastYsignature_arity,T73);
  lit_212 = YPPsym((P)"signature-arity-setter");
  lit_213 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_213),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_93 = YPmet(FUNCODEREF(fun_signature_arity_setter_93),LITREF(lit_212),T76,ENVNUL,PNUL,sloc(192));
  T78 = VARREF_OR(YevalSastYsignature_arity_setter,YPfalse);
  T79 = fun_signature_arity_setter_93;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YevalSastYsignature_arity_setter,T77);
  lit_214 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T80,ENVNUL,PNUL,sloc(192));
  T81 = fun_94;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T81);
  lit_215 = YPPsym((P)"signature-value");
  lit_216 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_95 = YPmet(FUNCODEREF(fun_signature_value_95),LITREF(lit_215),T82,ENVNUL,PNUL,sloc(193));
  T84 = VARREF_OR(YevalSastYsignature_value,YPfalse);
  T85 = fun_signature_value_95;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSastYsignature_value,T83);
  lit_217 = YPPsym((P)"signature-value-setter");
  lit_218 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_218),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_96 = YPmet(FUNCODEREF(fun_signature_value_setter_96),LITREF(lit_217),T86,ENVNUL,PNUL,sloc(193));
  T88 = VARREF_OR(YevalSastYsignature_value_setter,YPfalse);
  T89 = fun_signature_value_setter_96;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSastYsignature_value_setter,T87);
  lit_219 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T90,ENVNUL,PNUL,sloc(193));
  T91 = fun_97;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T91);
  lit_220 = YPPsym((P)"req-sig-specs");
  lit_221 = YPPlist(1,YPPsym((P)"sig"));
  T92 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_req_sig_specs_98 = YPmet(FUNCODEREF(fun_req_sig_specs_98),LITREF(lit_220),T92,ENVNUL,PNUL,sloc(196));
  T94 = VARREF_OR(YevalSastYreq_sig_specs,YPfalse);
  T95 = fun_req_sig_specs_98;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSastYreq_sig_specs,T93);
  lit_222 = YPPsym((P)"<ast-function>");
  T98 = (P)YPpair(VARREF(YevalSdependencyYLdependentG),Ynil);
  T97 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),T98);
  T96 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_222),T97);
  VARSET(YevalSastYLast_functionG,T96);
  lit_223 = YPPsym((P)"function-binding");
  lit_224 = YPPlist(1,YPPsym((P)"_x"));
  T99 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_99 = YPmet(FUNCODEREF(fun_function_binding_99),LITREF(lit_223),T99,ENVNUL,PNUL,sloc(203));
  T101 = VARREF_OR(YevalSastYfunction_binding,YPfalse);
  T102 = fun_function_binding_99;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YevalSastYfunction_binding,T100);
  lit_225 = YPPsym((P)"function-binding-setter");
  lit_226 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T103 = YPsig(LITREF(lit_226),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_100 = YPmet(FUNCODEREF(fun_function_binding_setter_100),LITREF(lit_225),T103,ENVNUL,PNUL,sloc(203));
  T105 = VARREF_OR(YevalSastYfunction_binding_setter,YPfalse);
  T106 = fun_function_binding_setter_100;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSastYfunction_binding_setter,T104);
  lit_227 = YPPlist(1,YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_227),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T107,ENVNUL,PNUL,sloc(203));
  T108 = fun_101;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T108);
  lit_228 = YPPsym((P)"function-debug-name");
  lit_229 = YPPlist(1,YPPsym((P)"_x"));
  T109 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_102 = YPmet(FUNCODEREF(fun_function_debug_name_102),LITREF(lit_228),T109,ENVNUL,PNUL,sloc(204));
  T111 = VARREF_OR(YevalSastYfunction_debug_name,YPfalse);
  T112 = fun_function_debug_name_102;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YevalSastYfunction_debug_name,T110);
  lit_230 = YPPsym((P)"function-debug-name-setter");
  lit_231 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_231),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_103 = YPmet(FUNCODEREF(fun_function_debug_name_setter_103),LITREF(lit_230),T113,ENVNUL,PNUL,sloc(204));
  T115 = VARREF_OR(YevalSastYfunction_debug_name_setter,YPfalse);
  T116 = fun_function_debug_name_setter_103;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YevalSastYfunction_debug_name_setter,T114);
  lit_232 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T117,ENVNUL,PNUL,sloc(204));
  T118 = fun_104;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T118);
  lit_233 = YPPsym((P)"function-signature");
  lit_234 = YPPlist(1,YPPsym((P)"_x"));
  T119 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_105 = YPmet(FUNCODEREF(fun_function_signature_105),LITREF(lit_233),T119,ENVNUL,PNUL,sloc(206));
  T121 = VARREF_OR(YevalSastYfunction_signature,YPfalse);
  T122 = fun_function_signature_105;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalSastYfunction_signature,T120);
  lit_235 = YPPsym((P)"function-signature-setter");
  lit_236 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T123 = YPsig(LITREF(lit_236),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_106 = YPmet(FUNCODEREF(fun_function_signature_setter_106),LITREF(lit_235),T123,ENVNUL,PNUL,sloc(206));
  T125 = VARREF_OR(YevalSastYfunction_signature_setter,YPfalse);
  T126 = fun_function_signature_setter_106;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YevalSastYfunction_signature_setter,T124);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_237 = YPPsym((P)"function-bindings");
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T127 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPmet(FUNCODEREF(YevalSastYfunction_bindings),LITREF(lit_237),T127,ENVNUL,PNUL,sloc(208));
  T128 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T128);
  lit_239 = YPPsym((P)"function-specs");
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPmet(FUNCODEREF(YevalSastYfunction_specs),LITREF(lit_239),T129,ENVNUL,PNUL,sloc(210));
  T130 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T130);
  lit_241 = YPPsym((P)"function-nary?");
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  T131 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPmet(FUNCODEREF(YevalSastYfunction_naryQ),LITREF(lit_241),T131,ENVNUL,PNUL,sloc(212));
  T132 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T132);
  lit_243 = YPPsym((P)"function-value");
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  T133 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPmet(FUNCODEREF(YevalSastYfunction_value),LITREF(lit_243),T133,ENVNUL,PNUL,sloc(214));
  T134 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T134);
  lit_245 = YPPsym((P)"function-kind");
  lit_246 = YPPlist(1,YPPsym((P)"x"));
  lit_247 = YPsb((P)"FUN");
  T135 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_111 = YPmet(FUNCODEREF(fun_function_kind_111),LITREF(lit_245),T135,ENVNUL,PNUL,sloc(217));
  T137 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T138 = fun_function_kind_111;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YevalSastYfunction_kind,T136);
  lit_248 = YPPsym((P)"function-display-name");
  lit_249 = YPPlist(1,YPPsym((P)"f"));
  lit_250 = YPsb((P)"%s:%s");
  lit_251 = YPsb((P)"anonymous function");
  T139 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPmet(FUNCODEREF(YevalSastYfunction_display_name),LITREF(lit_248),T139,ENVNUL,PNUL,sloc(219));
  T140 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T140);
  lit_252 = YPPsym((P)"invalidate-dependent");
  lit_253 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  lit_254 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_255 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_256 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T141 = YPsig(LITREF(lit_253),YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_113 = YPmet(FUNCODEREF(fun_invalidate_dependent_113),LITREF(lit_252),T141,ENVNUL,PNUL,sloc(229));
  T143 = VARREF_OR(YevalSdependencyYinvalidate_dependent,YPfalse);
  T144 = fun_invalidate_dependent_113;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YevalSdependencyYinvalidate_dependent,T142);
  lit_257 = YPPsym((P)"<programs>");
  T146 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T145 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_257),T146);
  VARSET(YevalSastYLprogramsG,T145);
  lit_258 = YPPsym((P)"as-lst");
  lit_259 = YPPlist(1,YPPsym((P)"e"));
  lit_260 = YPPsym((P)"loop");
  lit_261 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T148 = YPsig(LITREF(lit_261),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_114 = YPmet(FUNCODEREF(fun_loop_114),LITREF(lit_260),T148,ENVNUL,PNUL,sloc(247));
  T147 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_115 = YPmet(FUNCODEREF(fun_as_lst_115),LITREF(lit_258),T147,ENVNUL,PNUL,sloc(246));
  T150 = VARREF_OR(YevalSastYas_lst,YPfalse);
  T151 = fun_as_lst_115;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSastYas_lst,T149);
  lit_262 = YPPlist(1,YPPsym((P)"exp"));
  lit_263 = YPPlist(1,YPPsym((P)"return"));
  lit_264 = YPPsym((P)"x-1437");
  lit_265 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_266 = YPPsym((P)"def-programs");
  lit_267 = YPPsym((P)"def-list");
  T154 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1437_116 = YPmet(FUNCODEREF(fun_x_1437_116),LITREF(lit_264),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T155 = fun_118;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T155);
  lit_268 = YPPsym((P)"<ast-embodied-function>");
  T157 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T156 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_268),T157);
  VARSET(YevalSastYLast_embodied_functionG,T156);
  lit_269 = YPPsym((P)"function-body");
  lit_270 = YPPlist(1,YPPsym((P)"_x"));
  T158 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_119 = YPmet(FUNCODEREF(fun_function_body_119),LITREF(lit_269),T158,ENVNUL,PNUL,sloc(253));
  T160 = VARREF_OR(YevalSastYfunction_body,YPfalse);
  T161 = fun_function_body_119;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSastYfunction_body,T159);
  lit_271 = YPPsym((P)"function-body-setter");
  lit_272 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T162 = YPsig(LITREF(lit_272),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_120 = YPmet(FUNCODEREF(fun_function_body_setter_120),LITREF(lit_271),T162,ENVNUL,PNUL,sloc(253));
  T164 = VARREF_OR(YevalSastYfunction_body_setter,YPfalse);
  T165 = fun_function_body_setter_120;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSastYfunction_body_setter,T163);
  lit_273 = YPPlist(1,YPPsym((P)"_x"));
  T166 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T166,ENVNUL,PNUL,sloc(253));
  T167 = fun_121;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T167);
  lit_274 = YPPsym((P)"function-index");
  lit_275 = YPPlist(1,YPPsym((P)"_x"));
  T168 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_122 = YPmet(FUNCODEREF(fun_function_index_122),LITREF(lit_274),T168,ENVNUL,PNUL,sloc(254));
  T170 = VARREF_OR(YevalSastYfunction_index,YPfalse);
  T171 = fun_function_index_122;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T171);
  VARSET(YevalSastYfunction_index,T169);
  lit_276 = YPPsym((P)"function-index-setter");
  lit_277 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T172 = YPsig(LITREF(lit_277),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_123 = YPmet(FUNCODEREF(fun_function_index_setter_123),LITREF(lit_276),T172,ENVNUL,PNUL,sloc(254));
  T174 = VARREF_OR(YevalSastYfunction_index_setter,YPfalse);
  T175 = fun_function_index_setter_123;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  VARSET(YevalSastYfunction_index_setter,T173);
  lit_278 = YPPlist(1,YPPsym((P)"_x"));
  T176 = YPsig(LITREF(lit_278),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T176,ENVNUL,PNUL,sloc(254));
  T177 = fun_124;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T177);
  lit_279 = YPPsym((P)"function-temporaries");
  lit_280 = YPPlist(1,YPPsym((P)"_x"));
  T178 = YPsig(LITREF(lit_280),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_125 = YPmet(FUNCODEREF(fun_function_temporaries_125),LITREF(lit_279),T178,ENVNUL,PNUL,sloc(255));
  T180 = VARREF_OR(YevalSastYfunction_temporaries,YPfalse);
  T181 = fun_function_temporaries_125;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T181);
  VARSET(YevalSastYfunction_temporaries,T179);
  lit_281 = YPPsym((P)"function-temporaries-setter");
  lit_282 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T184 = YPsig(LITREF(lit_282),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T183 = fun_function_temporaries_setter_126 = YPmet(FUNCODEREF(fun_function_temporaries_setter_126),LITREF(lit_281),T184,ENVNUL,PNUL,sloc(255));
  T187 = VARREF_OR(YevalSastYfunction_temporaries_setter,YPfalse);
  T188 = fun_function_temporaries_setter_126;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  T185 = VARSET(YevalSastYfunction_temporaries_setter,T186);
  T182 = T185;
  return T182;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188;
DEFCREGS();
loop:
  lit_283 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_283),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T0,ENVNUL,PNUL,sloc(255));
  T1 = fun_127;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T1);
  lit_284 = YPPsym((P)"function-registers");
  lit_285 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_285),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_128 = YPmet(FUNCODEREF(fun_function_registers_128),LITREF(lit_284),T2,ENVNUL,PNUL,sloc(256));
  T4 = VARREF_OR(YevalSastYfunction_registers,YPfalse);
  T5 = fun_function_registers_128;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSastYfunction_registers,T3);
  lit_286 = YPPsym((P)"function-registers-setter");
  lit_287 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_287),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_129 = YPmet(FUNCODEREF(fun_function_registers_setter_129),LITREF(lit_286),T6,ENVNUL,PNUL,sloc(256));
  T8 = VARREF_OR(YevalSastYfunction_registers_setter,YPfalse);
  T9 = fun_function_registers_setter_129;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSastYfunction_registers_setter,T7);
  lit_288 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_288),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T10,ENVNUL,PNUL,sloc(256));
  T11 = fun_130;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T11);
  lit_289 = YPPsym((P)"function-data-refs");
  lit_290 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_290),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_131 = YPmet(FUNCODEREF(fun_function_data_refs_131),LITREF(lit_289),T12,ENVNUL,PNUL,sloc(257));
  T14 = VARREF_OR(YevalSastYfunction_data_refs,YPfalse);
  T15 = fun_function_data_refs_131;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSastYfunction_data_refs,T13);
  lit_291 = YPPsym((P)"function-data-refs-setter");
  lit_292 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_292),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_132 = YPmet(FUNCODEREF(fun_function_data_refs_setter_132),LITREF(lit_291),T16,ENVNUL,PNUL,sloc(257));
  T18 = VARREF_OR(YevalSastYfunction_data_refs_setter,YPfalse);
  T19 = fun_function_data_refs_setter_132;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSastYfunction_data_refs_setter,T17);
  lit_293 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T20,ENVNUL,PNUL,sloc(257));
  T21 = fun_133;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_data_refs),VARREF(YevalSastYfunction_data_refs_setter),VARREF(YgooScolsSvecYLvecG),T21);
  lit_294 = YPPsym((P)"function-self-recursive?");
  lit_295 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_295),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_134 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_134),LITREF(lit_294),T22,ENVNUL,PNUL,sloc(258));
  T24 = VARREF_OR(YevalSastYfunction_self_recursiveQ,YPfalse);
  T25 = fun_function_self_recursiveQ_134;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSastYfunction_self_recursiveQ,T23);
  lit_296 = YPPsym((P)"function-self-recursive?-setter");
  lit_297 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_297),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_135 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_135),LITREF(lit_296),T26,ENVNUL,PNUL,sloc(258));
  T28 = VARREF_OR(YevalSastYfunction_self_recursiveQ_setter,YPfalse);
  T29 = fun_function_self_recursiveQ_setter_135;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYfunction_self_recursiveQ_setter,T27);
  lit_298 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_298),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T30,ENVNUL,PNUL,sloc(258));
  T31 = fun_136;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_self_recursiveQ),VARREF(YevalSastYfunction_self_recursiveQ_setter),VARREF(YLanyG),T31);
  lit_299 = YPPsym((P)"function-source");
  lit_300 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_300),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_137 = YPmet(FUNCODEREF(fun_function_source_137),LITREF(lit_299),T32,ENVNUL,PNUL,sloc(259));
  T34 = VARREF_OR(YevalSastYfunction_source,YPfalse);
  T35 = fun_function_source_137;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSastYfunction_source,T33);
  lit_301 = YPPsym((P)"function-source-setter");
  lit_302 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_302),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_138 = YPmet(FUNCODEREF(fun_function_source_setter_138),LITREF(lit_301),T36,ENVNUL,PNUL,sloc(259));
  T38 = VARREF_OR(YevalSastYfunction_source_setter,YPfalse);
  T39 = fun_function_source_setter_138;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSastYfunction_source_setter,T37);
  lit_303 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_303),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T40,ENVNUL,PNUL,sloc(259));
  T41 = fun_139;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T41);
  lit_304 = YPPsym((P)"function-frame-len");
  lit_305 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_305),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_140 = YPmet(FUNCODEREF(fun_function_frame_len_140),LITREF(lit_304),T42,ENVNUL,PNUL,sloc(260));
  T44 = VARREF_OR(YevalSastYfunction_frame_len,YPfalse);
  T45 = fun_function_frame_len_140;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSastYfunction_frame_len,T43);
  lit_306 = YPPsym((P)"function-frame-len-setter");
  lit_307 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_307),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_141 = YPmet(FUNCODEREF(fun_function_frame_len_setter_141),LITREF(lit_306),T46,ENVNUL,PNUL,sloc(260));
  T48 = VARREF_OR(YevalSastYfunction_frame_len_setter,YPfalse);
  T49 = fun_function_frame_len_setter_141;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSastYfunction_frame_len_setter,T47);
  lit_308 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_308),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T50,ENVNUL,PNUL,sloc(260));
  T51 = fun_142;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T51);
  lit_309 = YPPsym((P)"<free-environment>");
  T54 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T53 = (P)YPpair(VARREF(YLlstG),T54);
  T52 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_309),T53);
  VARSET(YevalSastYLfree_environmentG,T52);
  T55 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T55);
  lit_310 = YPPsym((P)"free-environment");
  lit_311 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T56 = YPsig(LITREF(lit_311),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_310),T56,ENVNUL,PNUL,sloc(262));
  T57 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T57);
  lit_312 = YPPsym((P)"empty");
  lit_313 = YPPlist(1,YPPsym((P)"e"));
  T59 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T58 = YPsig(LITREF(lit_313),YPPlist(1,T59),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_144 = YPmet(FUNCODEREF(fun_empty_144),LITREF(lit_312),T58,ENVNUL,PNUL,sloc(262));
  T61 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T62 = fun_empty_144;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YgooScolsScolYempty,T60);
  lit_314 = YPPsym((P)"<ast-method>");
  T64 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T63 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_314),T64);
  VARSET(YevalSastYLast_methodG,T63);
  lit_315 = YPPsym((P)"function-free");
  lit_316 = YPPlist(1,YPPsym((P)"_x"));
  T65 = YPsig(LITREF(lit_316),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_145 = YPmet(FUNCODEREF(fun_function_free_145),LITREF(lit_315),T65,ENVNUL,PNUL,sloc(265));
  T67 = VARREF_OR(YevalSastYfunction_free,YPfalse);
  T68 = fun_function_free_145;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T68);
  VARSET(YevalSastYfunction_free,T66);
  lit_317 = YPPsym((P)"function-free-setter");
  lit_318 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T69 = YPsig(LITREF(lit_318),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_146 = YPmet(FUNCODEREF(fun_function_free_setter_146),LITREF(lit_317),T69,ENVNUL,PNUL,sloc(265));
  T71 = VARREF_OR(YevalSastYfunction_free_setter,YPfalse);
  T72 = fun_function_free_setter_146;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSastYfunction_free_setter,T70);
  lit_319 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_319),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T73,ENVNUL,PNUL,sloc(265));
  T74 = fun_147;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T74);
  lit_320 = YPPlist(1,YPPsym((P)"x"));
  lit_321 = YPsb((P)"MET");
  T75 = YPsig(LITREF(lit_320),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_148 = YPmet(FUNCODEREF(fun_function_kind_148),LITREF(lit_245),T75,ENVNUL,PNUL,sloc(268));
  T77 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T78 = fun_function_kind_148;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T78);
  VARSET(YevalSastYfunction_kind,T76);
  lit_322 = YPPsym((P)"<ast-primitive>");
  T80 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T79 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_322),T80);
  VARSET(YevalSastYLast_primitiveG,T79);
  lit_323 = YPPsym((P)"function-adjectives");
  lit_324 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_324),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_149 = YPmet(FUNCODEREF(fun_function_adjectives_149),LITREF(lit_323),T81,ENVNUL,PNUL,sloc(271));
  T83 = VARREF_OR(YevalSastYfunction_adjectives,YPfalse);
  T84 = fun_function_adjectives_149;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YevalSastYfunction_adjectives,T82);
  lit_325 = YPPsym((P)"function-adjectives-setter");
  lit_326 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_326),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_150 = YPmet(FUNCODEREF(fun_function_adjectives_setter_150),LITREF(lit_325),T85,ENVNUL,PNUL,sloc(271));
  T87 = VARREF_OR(YevalSastYfunction_adjectives_setter,YPfalse);
  T88 = fun_function_adjectives_setter_150;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YevalSastYfunction_adjectives_setter,T86);
  lit_327 = YPPlist(1,YPPsym((P)"_x"));
  T89 = YPsig(LITREF(lit_327),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_151 = YPmet(FUNCODEREF(fun_151),YPfalse,T89,ENVNUL,PNUL,sloc(271));
  T90 = fun_151;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T90);
  lit_328 = YPPlist(1,YPPsym((P)"x"));
  lit_329 = YPsb((P)"PRM");
  T91 = YPsig(LITREF(lit_328),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_152 = YPmet(FUNCODEREF(fun_function_kind_152),LITREF(lit_245),T91,ENVNUL,PNUL,sloc(273));
  T93 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T94 = fun_function_kind_152;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSastYfunction_kind,T92);
  lit_330 = YPPsym((P)"<ast-generic>");
  T96 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T95 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_330),T96);
  VARSET(YevalSastYLast_genericG,T95);
  lit_331 = YPPlist(1,YPPsym((P)"x"));
  lit_332 = YPsb((P)"GEN");
  T97 = YPsig(LITREF(lit_331),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_153 = YPmet(FUNCODEREF(fun_function_kind_153),LITREF(lit_245),T97,ENVNUL,PNUL,sloc(277));
  T99 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T100 = fun_function_kind_153;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YevalSastYfunction_kind,T98);
  lit_333 = YPPsym((P)"<alternative>");
  T102 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T101 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_333),T102);
  VARSET(YevalSastYLalternativeG,T101);
  lit_334 = YPPsym((P)"alternative-condition");
  lit_335 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPsig(LITREF(lit_335),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_154 = YPmet(FUNCODEREF(fun_alternative_condition_154),LITREF(lit_334),T103,ENVNUL,PNUL,sloc(280));
  T105 = VARREF_OR(YevalSastYalternative_condition,YPfalse);
  T106 = fun_alternative_condition_154;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSastYalternative_condition,T104);
  lit_336 = YPPsym((P)"alternative-condition-setter");
  lit_337 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_337),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_155 = YPmet(FUNCODEREF(fun_alternative_condition_setter_155),LITREF(lit_336),T107,ENVNUL,PNUL,sloc(280));
  T109 = VARREF_OR(YevalSastYalternative_condition_setter,YPfalse);
  T110 = fun_alternative_condition_setter_155;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YevalSastYalternative_condition_setter,T108);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_338 = YPPsym((P)"alternative-consequent");
  lit_339 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPsig(LITREF(lit_339),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_156 = YPmet(FUNCODEREF(fun_alternative_consequent_156),LITREF(lit_338),T111,ENVNUL,PNUL,sloc(281));
  T113 = VARREF_OR(YevalSastYalternative_consequent,YPfalse);
  T114 = fun_alternative_consequent_156;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSastYalternative_consequent,T112);
  lit_340 = YPPsym((P)"alternative-consequent-setter");
  lit_341 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_341),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_157 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_157),LITREF(lit_340),T115,ENVNUL,PNUL,sloc(281));
  T117 = VARREF_OR(YevalSastYalternative_consequent_setter,YPfalse);
  T118 = fun_alternative_consequent_setter_157;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YevalSastYalternative_consequent_setter,T116);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_342 = YPPsym((P)"alternative-alternant");
  lit_343 = YPPlist(1,YPPsym((P)"_x"));
  T119 = YPsig(LITREF(lit_343),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_158 = YPmet(FUNCODEREF(fun_alternative_alternant_158),LITREF(lit_342),T119,ENVNUL,PNUL,sloc(282));
  T121 = VARREF_OR(YevalSastYalternative_alternant,YPfalse);
  T122 = fun_alternative_alternant_158;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalSastYalternative_alternant,T120);
  lit_344 = YPPsym((P)"alternative-alternant-setter");
  lit_345 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T123 = YPsig(LITREF(lit_345),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_159 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_159),LITREF(lit_344),T123,ENVNUL,PNUL,sloc(282));
  T125 = VARREF_OR(YevalSastYalternative_alternant_setter,YPfalse);
  T126 = fun_alternative_alternant_setter_159;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YevalSastYalternative_alternant_setter,T124);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_346 = YPPsym((P)"<sequential>");
  T129 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T128 = (P)YPpair(VARREF(YLlstG),T129);
  T127 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_346),T128);
  VARSET(YevalSastYLsequentialG,T127);
  T130 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T130);
  lit_347 = YPPsym((P)"sequential");
  lit_348 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T131 = YPsig(LITREF(lit_348),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_347),T131,ENVNUL,PNUL,sloc(284));
  T132 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T132);
  lit_349 = YPPlist(1,YPPsym((P)"e"));
  T134 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T133 = YPsig(LITREF(lit_349),YPPlist(1,T134),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_161 = YPmet(FUNCODEREF(fun_empty_161),LITREF(lit_312),T133,ENVNUL,PNUL,sloc(284));
  T136 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T137 = fun_empty_161;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YgooScolsScolYempty,T135);
  lit_350 = YPPsym((P)"<constant>");
  T139 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T138 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_350),T139);
  VARSET(YevalSastYLconstantG,T138);
  lit_351 = YPPsym((P)"constant-value");
  lit_352 = YPPlist(1,YPPsym((P)"_x"));
  T140 = YPsig(LITREF(lit_352),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_162 = YPmet(FUNCODEREF(fun_constant_value_162),LITREF(lit_351),T140,ENVNUL,PNUL,sloc(287));
  T142 = VARREF_OR(YevalSastYconstant_value,YPfalse);
  T143 = fun_constant_value_162;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSastYconstant_value,T141);
  lit_353 = YPPsym((P)"constant-value-setter");
  lit_354 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T144 = YPsig(LITREF(lit_354),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_163 = YPmet(FUNCODEREF(fun_constant_value_setter_163),LITREF(lit_353),T144,ENVNUL,PNUL,sloc(287));
  T146 = VARREF_OR(YevalSastYconstant_value_setter,YPfalse);
  T147 = fun_constant_value_setter_163;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YevalSastYconstant_value_setter,T145);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_355 = YPPsym((P)"constant-index");
  lit_356 = YPPlist(1,YPPsym((P)"_x"));
  T148 = YPsig(LITREF(lit_356),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_164 = YPmet(FUNCODEREF(fun_constant_index_164),LITREF(lit_355),T148,ENVNUL,PNUL,sloc(288));
  T150 = VARREF_OR(YevalSastYconstant_index,YPfalse);
  T151 = fun_constant_index_164;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSastYconstant_index,T149);
  lit_357 = YPPsym((P)"constant-index-setter");
  lit_358 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T152 = YPsig(LITREF(lit_358),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_165 = YPmet(FUNCODEREF(fun_constant_index_setter_165),LITREF(lit_357),T152,ENVNUL,PNUL,sloc(288));
  T154 = VARREF_OR(YevalSastYconstant_index_setter,YPfalse);
  T155 = fun_constant_index_setter_165;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YevalSastYconstant_index_setter,T153);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_359 = YPPsym((P)"<raw-constant>");
  T157 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T156 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_359),T157);
  VARSET(YevalSastYLraw_constantG,T156);
  lit_360 = YPPsym((P)"<immediate-constant>");
  T159 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T158 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_360),T159);
  VARSET(YevalSastYLimmediate_constantG,T158);
  lit_361 = YPPsym((P)"<application>");
  T161 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T160 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_361),T161);
  VARSET(YevalSastYLapplicationG,T160);
  lit_362 = YPPsym((P)"application-arguments");
  lit_363 = YPPlist(1,YPPsym((P)"_x"));
  T162 = YPsig(LITREF(lit_363),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_166 = YPmet(FUNCODEREF(fun_application_arguments_166),LITREF(lit_362),T162,ENVNUL,PNUL,sloc(295));
  T164 = VARREF_OR(YevalSastYapplication_arguments,YPfalse);
  T165 = fun_application_arguments_166;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSastYapplication_arguments,T163);
  lit_364 = YPPsym((P)"application-arguments-setter");
  lit_365 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T166 = YPsig(LITREF(lit_365),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_167 = YPmet(FUNCODEREF(fun_application_arguments_setter_167),LITREF(lit_364),T166,ENVNUL,PNUL,sloc(295));
  T168 = VARREF_OR(YevalSastYapplication_arguments_setter,YPfalse);
  T169 = fun_application_arguments_setter_167;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YevalSastYapplication_arguments_setter,T167);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_366 = YPPsym((P)"application-tail?");
  lit_367 = YPPlist(1,YPPsym((P)"_x"));
  T170 = YPsig(LITREF(lit_367),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_168 = YPmet(FUNCODEREF(fun_application_tailQ_168),LITREF(lit_366),T170,ENVNUL,PNUL,sloc(296));
  T172 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T173 = fun_application_tailQ_168;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YevalSastYapplication_tailQ,T171);
  lit_368 = YPPsym((P)"application-tail?-setter");
  lit_369 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T174 = YPsig(LITREF(lit_369),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_169 = YPmet(FUNCODEREF(fun_application_tailQ_setter_169),LITREF(lit_368),T174,ENVNUL,PNUL,sloc(296));
  T176 = VARREF_OR(YevalSastYapplication_tailQ_setter,YPfalse);
  T177 = fun_application_tailQ_setter_169;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YevalSastYapplication_tailQ_setter,T175);
  lit_370 = YPPlist(1,YPPsym((P)"_x"));
  T178 = YPsig(LITREF(lit_370),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T178,ENVNUL,PNUL,sloc(296));
  T179 = fun_170;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T179);
  lit_371 = YPPsym((P)"<regular-application>");
  T181 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T180 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_371),T181);
  VARSET(YevalSastYLregular_applicationG,T180);
  lit_372 = YPPsym((P)"application-function");
  lit_373 = YPPlist(1,YPPsym((P)"_x"));
  T184 = YPsig(LITREF(lit_373),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T183 = fun_application_function_171 = YPmet(FUNCODEREF(fun_application_function_171),LITREF(lit_372),T184,ENVNUL,PNUL,sloc(299));
  T187 = VARREF_OR(YevalSastYapplication_function,YPfalse);
  T188 = fun_application_function_171;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  T185 = VARSET(YevalSastYapplication_function,T186);
  T182 = T185;
  return T182;
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170;
DEFCREGS();
loop:
  lit_374 = YPPsym((P)"application-function-setter");
  lit_375 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_375),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_172 = YPmet(FUNCODEREF(fun_application_function_setter_172),LITREF(lit_374),T0,ENVNUL,PNUL,sloc(299));
  T2 = VARREF_OR(YevalSastYapplication_function_setter,YPfalse);
  T3 = fun_application_function_setter_172;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSastYapplication_function_setter,T1);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_376 = YPPsym((P)"application-known?");
  lit_377 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_377),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_173 = YPmet(FUNCODEREF(fun_application_knownQ_173),LITREF(lit_376),T4,ENVNUL,PNUL,sloc(300));
  T6 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T7 = fun_application_knownQ_173;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSastYapplication_knownQ,T5);
  lit_378 = YPPsym((P)"application-known?-setter");
  lit_379 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_379),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_174 = YPmet(FUNCODEREF(fun_application_knownQ_setter_174),LITREF(lit_378),T8,ENVNUL,PNUL,sloc(300));
  T10 = VARREF_OR(YevalSastYapplication_knownQ_setter,YPfalse);
  T11 = fun_application_knownQ_setter_174;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSastYapplication_knownQ_setter,T9);
  lit_380 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_380),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T12,ENVNUL,PNUL,sloc(300));
  T13 = fun_175;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T13);
  lit_381 = YPPsym((P)"<method-application>");
  T15 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_381),T15);
  VARSET(YevalSastYLmethod_applicationG,T14);
  lit_382 = YPPsym((P)"application-next-methods");
  lit_383 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_383),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_176 = YPmet(FUNCODEREF(fun_application_next_methods_176),LITREF(lit_382),T16,ENVNUL,PNUL,sloc(303));
  T18 = VARREF_OR(YevalSastYapplication_next_methods,YPfalse);
  T19 = fun_application_next_methods_176;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSastYapplication_next_methods,T17);
  lit_384 = YPPsym((P)"application-next-methods-setter");
  lit_385 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_385),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_177 = YPmet(FUNCODEREF(fun_application_next_methods_setter_177),LITREF(lit_384),T20,ENVNUL,PNUL,sloc(303));
  T22 = VARREF_OR(YevalSastYapplication_next_methods_setter,YPfalse);
  T23 = fun_application_next_methods_setter_177;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSastYapplication_next_methods_setter,T21);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_386 = YPPsym((P)"<predefined-application>");
  T25 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T24 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_386),T25);
  VARSET(YevalSastYLpredefined_applicationG,T24);
  lit_387 = YPPsym((P)"application-binding");
  lit_388 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_388),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_178 = YPmet(FUNCODEREF(fun_application_binding_178),LITREF(lit_387),T26,ENVNUL,PNUL,sloc(306));
  T28 = VARREF_OR(YevalSastYapplication_binding,YPfalse);
  T29 = fun_application_binding_178;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYapplication_binding,T27);
  lit_389 = YPPsym((P)"application-binding-setter");
  lit_390 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_390),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_179 = YPmet(FUNCODEREF(fun_application_binding_setter_179),LITREF(lit_389),T30,ENVNUL,PNUL,sloc(306));
  T32 = VARREF_OR(YevalSastYapplication_binding_setter,YPfalse);
  T33 = fun_application_binding_setter_179;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSastYapplication_binding_setter,T31);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_391 = YPPsym((P)"<fix-let>");
  T35 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_391),T35);
  VARSET(YevalSastYLfix_letG,T34);
  lit_392 = YPPsym((P)"fix-let-bindings");
  lit_393 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_393),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_180 = YPmet(FUNCODEREF(fun_fix_let_bindings_180),LITREF(lit_392),T36,ENVNUL,PNUL,sloc(309));
  T38 = VARREF_OR(YevalSastYfix_let_bindings,YPfalse);
  T39 = fun_fix_let_bindings_180;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSastYfix_let_bindings,T37);
  lit_394 = YPPsym((P)"fix-let-bindings-setter");
  lit_395 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_395),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_181 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_181),LITREF(lit_394),T40,ENVNUL,PNUL,sloc(309));
  T42 = VARREF_OR(YevalSastYfix_let_bindings_setter,YPfalse);
  T43 = fun_fix_let_bindings_setter_181;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSastYfix_let_bindings_setter,T41);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_396 = YPPsym((P)"fix-let-types");
  lit_397 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_397),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_182 = YPmet(FUNCODEREF(fun_fix_let_types_182),LITREF(lit_396),T44,ENVNUL,PNUL,sloc(310));
  T46 = VARREF_OR(YevalSastYfix_let_types,YPfalse);
  T47 = fun_fix_let_types_182;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSastYfix_let_types,T45);
  lit_398 = YPPsym((P)"fix-let-types-setter");
  lit_399 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_399),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_183 = YPmet(FUNCODEREF(fun_fix_let_types_setter_183),LITREF(lit_398),T48,ENVNUL,PNUL,sloc(310));
  T50 = VARREF_OR(YevalSastYfix_let_types_setter,YPfalse);
  T51 = fun_fix_let_types_setter_183;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSastYfix_let_types_setter,T49);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_400 = YPPsym((P)"fix-let-arguments");
  lit_401 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_401),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_184 = YPmet(FUNCODEREF(fun_fix_let_arguments_184),LITREF(lit_400),T52,ENVNUL,PNUL,sloc(311));
  T54 = VARREF_OR(YevalSastYfix_let_arguments,YPfalse);
  T55 = fun_fix_let_arguments_184;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSastYfix_let_arguments,T53);
  lit_402 = YPPsym((P)"fix-let-arguments-setter");
  lit_403 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_403),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_185 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_185),LITREF(lit_402),T56,ENVNUL,PNUL,sloc(311));
  T58 = VARREF_OR(YevalSastYfix_let_arguments_setter,YPfalse);
  T59 = fun_fix_let_arguments_setter_185;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSastYfix_let_arguments_setter,T57);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_404 = YPPsym((P)"fix-let-body");
  lit_405 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_405),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_186 = YPmet(FUNCODEREF(fun_fix_let_body_186),LITREF(lit_404),T60,ENVNUL,PNUL,sloc(312));
  T62 = VARREF_OR(YevalSastYfix_let_body,YPfalse);
  T63 = fun_fix_let_body_186;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSastYfix_let_body,T61);
  lit_406 = YPPsym((P)"fix-let-body-setter");
  lit_407 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_407),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_187 = YPmet(FUNCODEREF(fun_fix_let_body_setter_187),LITREF(lit_406),T64,ENVNUL,PNUL,sloc(312));
  T66 = VARREF_OR(YevalSastYfix_let_body_setter,YPfalse);
  T67 = fun_fix_let_body_setter_187;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSastYfix_let_body_setter,T65);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_408 = YPPsym((P)"<low-let>");
  T69 = (P)YPpair(VARREF(YevalSastYLfix_letG),Ynil);
  T68 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_408),T69);
  VARSET(YevalSastYLlow_letG,T68);
  lit_409 = YPPsym((P)"<fab-list>");
  T72 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T71 = (P)YPpair(VARREF(YLlstG),T72);
  T70 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_409),T71);
  VARSET(YevalSastYLfab_listG,T70);
  T73 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T73);
  lit_410 = YPPsym((P)"fab-list");
  lit_411 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T74 = YPsig(LITREF(lit_411),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_410),T74,ENVNUL,PNUL,sloc(316));
  T75 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T75);
  lit_412 = YPPlist(1,YPPsym((P)"e"));
  T77 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T76 = YPsig(LITREF(lit_412),YPPlist(1,T77),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_189 = YPmet(FUNCODEREF(fun_empty_189),LITREF(lit_312),T76,ENVNUL,PNUL,sloc(316));
  T79 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T80 = fun_empty_189;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YgooScolsScolYempty,T78);
  lit_413 = YPPsym((P)"<arguments>");
  T83 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T82 = (P)YPpair(VARREF(YLlstG),T83);
  T81 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_413),T82);
  VARSET(YevalSastYLargumentsG,T81);
  T84 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T84);
  lit_414 = YPPsym((P)"arguments");
  lit_415 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T85 = YPsig(LITREF(lit_415),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_414),T85,ENVNUL,PNUL,sloc(318));
  T86 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T86);
  lit_416 = YPPlist(1,YPPsym((P)"e"));
  T88 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T87 = YPsig(LITREF(lit_416),YPPlist(1,T88),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_191 = YPmet(FUNCODEREF(fun_empty_191),LITREF(lit_312),T87,ENVNUL,PNUL,sloc(318));
  T90 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T91 = fun_empty_191;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YgooScolsScolYempty,T89);
  lit_417 = YPPsym((P)"<locals>");
  T93 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_417),T93);
  VARSET(YevalSastYLlocalsG,T92);
  lit_418 = YPPsym((P)"locals-bindings");
  lit_419 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_419),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_192 = YPmet(FUNCODEREF(fun_locals_bindings_192),LITREF(lit_418),T94,ENVNUL,PNUL,sloc(321));
  T96 = VARREF_OR(YevalSastYlocals_bindings,YPfalse);
  T97 = fun_locals_bindings_192;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YevalSastYlocals_bindings,T95);
  lit_420 = YPPsym((P)"locals-bindings-setter");
  lit_421 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_421),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_193 = YPmet(FUNCODEREF(fun_locals_bindings_setter_193),LITREF(lit_420),T98,ENVNUL,PNUL,sloc(321));
  T100 = VARREF_OR(YevalSastYlocals_bindings_setter,YPfalse);
  T101 = fun_locals_bindings_setter_193;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YevalSastYlocals_bindings_setter,T99);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_422 = YPPsym((P)"locals-functions");
  lit_423 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_423),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_194 = YPmet(FUNCODEREF(fun_locals_functions_194),LITREF(lit_422),T102,ENVNUL,PNUL,sloc(322));
  T104 = VARREF_OR(YevalSastYlocals_functions,YPfalse);
  T105 = fun_locals_functions_194;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YevalSastYlocals_functions,T103);
  lit_424 = YPPsym((P)"locals-functions-setter");
  lit_425 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_425),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_195 = YPmet(FUNCODEREF(fun_locals_functions_setter_195),LITREF(lit_424),T106,ENVNUL,PNUL,sloc(322));
  T108 = VARREF_OR(YevalSastYlocals_functions_setter,YPfalse);
  T109 = fun_locals_functions_setter_195;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YevalSastYlocals_functions_setter,T107);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_426 = YPPsym((P)"locals-body");
  lit_427 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_427),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_196 = YPmet(FUNCODEREF(fun_locals_body_196),LITREF(lit_426),T110,ENVNUL,PNUL,sloc(323));
  T112 = VARREF_OR(YevalSastYlocals_body,YPfalse);
  T113 = fun_locals_body_196;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalSastYlocals_body,T111);
  lit_428 = YPPsym((P)"locals-body-setter");
  lit_429 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_429),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_197 = YPmet(FUNCODEREF(fun_locals_body_setter_197),LITREF(lit_428),T114,ENVNUL,PNUL,sloc(323));
  T116 = VARREF_OR(YevalSastYlocals_body_setter,YPfalse);
  T117 = fun_locals_body_setter_197;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YevalSastYlocals_body_setter,T115);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_430 = YPPsym((P)"<bind-exit>");
  T119 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T118 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_430),T119);
  VARSET(YevalSastYLbind_exitG,T118);
  lit_431 = YPPsym((P)"bind-exit-main-fun");
  lit_432 = YPPlist(1,YPPsym((P)"_x"));
  T120 = YPsig(LITREF(lit_432),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_198 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_198),LITREF(lit_431),T120,ENVNUL,PNUL,sloc(326));
  T122 = VARREF_OR(YevalSastYbind_exit_main_fun,YPfalse);
  T123 = fun_bind_exit_main_fun_198;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YevalSastYbind_exit_main_fun,T121);
  lit_433 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_434 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T124 = YPsig(LITREF(lit_434),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_199 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_199),LITREF(lit_433),T124,ENVNUL,PNUL,sloc(326));
  T126 = VARREF_OR(YevalSastYbind_exit_main_fun_setter,YPfalse);
  T127 = fun_bind_exit_main_fun_setter_199;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YevalSastYbind_exit_main_fun_setter,T125);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_435 = YPPsym((P)"<unwind-protect>");
  T129 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_435),T129);
  VARSET(YevalSastYLunwind_protectG,T128);
  lit_436 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_437 = YPPlist(1,YPPsym((P)"_x"));
  T130 = YPsig(LITREF(lit_437),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_200 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_200),LITREF(lit_436),T130,ENVNUL,PNUL,sloc(329));
  T132 = VARREF_OR(YevalSastYunwind_protect_protected_thunk,YPfalse);
  T133 = fun_unwind_protect_protected_thunk_200;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YevalSastYunwind_protect_protected_thunk,T131);
  lit_438 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_439 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T134 = YPsig(LITREF(lit_439),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_201 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_201),LITREF(lit_438),T134,ENVNUL,PNUL,sloc(329));
  T136 = VARREF_OR(YevalSastYunwind_protect_protected_thunk_setter,YPfalse);
  T137 = fun_unwind_protect_protected_thunk_setter_201;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T135);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_440 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_441 = YPPlist(1,YPPsym((P)"_x"));
  T138 = YPsig(LITREF(lit_441),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_202 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_202),LITREF(lit_440),T138,ENVNUL,PNUL,sloc(330));
  T140 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk,YPfalse);
  T141 = fun_unwind_protect_cleanup_thunk_202;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T139);
  lit_442 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_443 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T142 = YPsig(LITREF(lit_443),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_203 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_203),LITREF(lit_442),T142,ENVNUL,PNUL,sloc(330));
  T144 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk_setter,YPfalse);
  T145 = fun_unwind_protect_cleanup_thunk_setter_203;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T143);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_444 = YPPsym((P)"<monitor>");
  T147 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T146 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_444),T147);
  VARSET(YevalSastYLmonitorG,T146);
  lit_445 = YPPsym((P)"monitor-type");
  lit_446 = YPPlist(1,YPPsym((P)"_x"));
  T148 = YPsig(LITREF(lit_446),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_204 = YPmet(FUNCODEREF(fun_monitor_type_204),LITREF(lit_445),T148,ENVNUL,PNUL,sloc(333));
  T150 = VARREF_OR(YevalSastYmonitor_type,YPfalse);
  T151 = fun_monitor_type_204;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSastYmonitor_type,T149);
  lit_447 = YPPsym((P)"monitor-type-setter");
  lit_448 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T152 = YPsig(LITREF(lit_448),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_205 = YPmet(FUNCODEREF(fun_monitor_type_setter_205),LITREF(lit_447),T152,ENVNUL,PNUL,sloc(333));
  T154 = VARREF_OR(YevalSastYmonitor_type_setter,YPfalse);
  T155 = fun_monitor_type_setter_205;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YevalSastYmonitor_type_setter,T153);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_449 = YPPsym((P)"monitor-info");
  lit_450 = YPPlist(1,YPPsym((P)"_x"));
  T156 = YPsig(LITREF(lit_450),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_206 = YPmet(FUNCODEREF(fun_monitor_info_206),LITREF(lit_449),T156,ENVNUL,PNUL,sloc(334));
  T158 = VARREF_OR(YevalSastYmonitor_info,YPfalse);
  T159 = fun_monitor_info_206;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T159);
  VARSET(YevalSastYmonitor_info,T157);
  lit_451 = YPPsym((P)"monitor-info-setter");
  lit_452 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T160 = YPsig(LITREF(lit_452),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_207 = YPmet(FUNCODEREF(fun_monitor_info_setter_207),LITREF(lit_451),T160,ENVNUL,PNUL,sloc(334));
  T162 = VARREF_OR(YevalSastYmonitor_info_setter,YPfalse);
  T163 = fun_monitor_info_setter_207;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T163);
  VARSET(YevalSastYmonitor_info_setter,T161);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_453 = YPPsym((P)"monitor-test");
  lit_454 = YPPlist(1,YPPsym((P)"_x"));
  T166 = YPsig(LITREF(lit_454),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T165 = fun_monitor_test_208 = YPmet(FUNCODEREF(fun_monitor_test_208),LITREF(lit_453),T166,ENVNUL,PNUL,sloc(335));
  T169 = VARREF_OR(YevalSastYmonitor_test,YPfalse);
  T170 = fun_monitor_test_208;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  T167 = VARSET(YevalSastYmonitor_test,T168);
  T164 = T167;
  return T164;
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
  P T224,T225,T226,T227,T228,T229;
DEFCREGS();
loop:
  lit_455 = YPPsym((P)"monitor-test-setter");
  lit_456 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_456),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_209 = YPmet(FUNCODEREF(fun_monitor_test_setter_209),LITREF(lit_455),T0,ENVNUL,PNUL,sloc(335));
  T2 = VARREF_OR(YevalSastYmonitor_test_setter,YPfalse);
  T3 = fun_monitor_test_setter_209;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSastYmonitor_test_setter,T1);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_457 = YPPsym((P)"monitor-handler");
  lit_458 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_458),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_210 = YPmet(FUNCODEREF(fun_monitor_handler_210),LITREF(lit_457),T4,ENVNUL,PNUL,sloc(336));
  T6 = VARREF_OR(YevalSastYmonitor_handler,YPfalse);
  T7 = fun_monitor_handler_210;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSastYmonitor_handler,T5);
  lit_459 = YPPsym((P)"monitor-handler-setter");
  lit_460 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_460),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_211 = YPmet(FUNCODEREF(fun_monitor_handler_setter_211),LITREF(lit_459),T8,ENVNUL,PNUL,sloc(336));
  T10 = VARREF_OR(YevalSastYmonitor_handler_setter,YPfalse);
  T11 = fun_monitor_handler_setter_211;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSastYmonitor_handler_setter,T9);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_461 = YPPsym((P)"monitor-main-thunk");
  lit_462 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_462),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_212 = YPmet(FUNCODEREF(fun_monitor_main_thunk_212),LITREF(lit_461),T12,ENVNUL,PNUL,sloc(337));
  T14 = VARREF_OR(YevalSastYmonitor_main_thunk,YPfalse);
  T15 = fun_monitor_main_thunk_212;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSastYmonitor_main_thunk,T13);
  lit_463 = YPPsym((P)"monitor-main-thunk-setter");
  lit_464 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_464),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_213 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_213),LITREF(lit_463),T16,ENVNUL,PNUL,sloc(337));
  T18 = VARREF_OR(YevalSastYmonitor_main_thunk_setter,YPfalse);
  T19 = fun_monitor_main_thunk_setter_213;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSastYmonitor_main_thunk_setter,T17);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_465 = YPPsym((P)"ast-walk!");
  lit_466 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  lit_467 = YPPsym((P)"x-1439");
  lit_468 = YPPlist(1,YPPsym((P)"x-1438"));
  T21 = YPsig(LITREF(lit_468),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1439_214 = YPmet(FUNCODEREF(fun_x_1439_214),LITREF(lit_467),T21,ENVNUL,PNUL,sloc(343));
  T20 = YPsig(LITREF(lit_466),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_215 = YPmet(FUNCODEREF(fun_ast_walkX_215),LITREF(lit_465),T20,ENVNUL,PNUL,sloc(341));
  T23 = VARREF_OR(YevalSastYast_walkX,YPfalse);
  T24 = fun_ast_walkX_215;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YevalSastYast_walkX,T22);
  lit_469 = YPPsym((P)"ast-walk");
  lit_470 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  lit_471 = YPPsym((P)"x-1441");
  lit_472 = YPPlist(1,YPPsym((P)"x-1440"));
  T26 = YPsig(LITREF(lit_472),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1441_216 = YPmet(FUNCODEREF(fun_x_1441_216),LITREF(lit_471),T26,ENVNUL,PNUL,sloc(356));
  T25 = YPsig(LITREF(lit_470),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_217 = YPmet(FUNCODEREF(fun_ast_walk_217),LITREF(lit_469),T25,ENVNUL,PNUL,sloc(355));
  T28 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T29 = fun_ast_walk_217;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYast_walk,T27);
  lit_473 = YPPsym((P)"ast-copy");
  lit_474 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_474),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_218 = YPmet(FUNCODEREF(fun_ast_copy_218),LITREF(lit_473),T30,ENVNUL,PNUL,sloc(365));
  T32 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T33 = fun_ast_copy_218;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSastYast_copy,T31);
  lit_475 = YPPlist(1,YPPsym((P)"x"));
  T34 = YPsig(LITREF(lit_475),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_219 = YPmet(FUNCODEREF(fun_ast_copy_219),LITREF(lit_473),T34,ENVNUL,PNUL,sloc(370));
  T36 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T37 = fun_ast_copy_219;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSastYast_copy,T35);
  lit_476 = YPPsym((P)"<static-environment>");
  T39 = (P)YPpair(VARREF(YLanyG),Ynil);
  T38 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_476),T39);
  VARSET(YevalSastYLstatic_environmentG,T38);
  lit_477 = YPPsym((P)"environment-next");
  lit_478 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_478),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_220 = YPmet(FUNCODEREF(fun_environment_next_220),LITREF(lit_477),T40,ENVNUL,PNUL,sloc(378));
  T42 = VARREF_OR(YevalSastYenvironment_next,YPfalse);
  T43 = fun_environment_next_220;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSastYenvironment_next,T41);
  lit_479 = YPPsym((P)"environment-next-setter");
  lit_480 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_480),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_221 = YPmet(FUNCODEREF(fun_environment_next_setter_221),LITREF(lit_479),T44,ENVNUL,PNUL,sloc(378));
  T46 = VARREF_OR(YevalSastYenvironment_next_setter,YPfalse);
  T47 = fun_environment_next_setter_221;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSastYenvironment_next_setter,T45);
  lit_481 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_481),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T48,ENVNUL,PNUL,sloc(378));
  T49 = fun_222;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T49);
  lit_482 = YPPsym((P)"environment-bindings");
  lit_483 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_483),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_223 = YPmet(FUNCODEREF(fun_environment_bindings_223),LITREF(lit_482),T50,ENVNUL,PNUL,sloc(379));
  T52 = VARREF_OR(YevalSastYenvironment_bindings,YPfalse);
  T53 = fun_environment_bindings_223;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSastYenvironment_bindings,T51);
  lit_484 = YPPsym((P)"environment-bindings-setter");
  lit_485 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_485),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_224 = YPmet(FUNCODEREF(fun_environment_bindings_setter_224),LITREF(lit_484),T54,ENVNUL,PNUL,sloc(379));
  T56 = VARREF_OR(YevalSastYenvironment_bindings_setter,YPfalse);
  T57 = fun_environment_bindings_setter_224;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSastYenvironment_bindings_setter,T55);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_486 = YPPsym((P)"<static-global-environment>");
  T59 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T58 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_486),T59);
  VARSET(YevalSastYLstatic_global_environmentG,T58);
  lit_487 = YPPsym((P)"environment-module");
  lit_488 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_488),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_225 = YPmet(FUNCODEREF(fun_environment_module_225),LITREF(lit_487),T60,ENVNUL,PNUL,sloc(383));
  T62 = VARREF_OR(YevalSastYenvironment_module,YPfalse);
  T63 = fun_environment_module_225;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSastYenvironment_module,T61);
  lit_489 = YPPsym((P)"environment-module-setter");
  lit_490 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_490),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_226 = YPmet(FUNCODEREF(fun_environment_module_setter_226),LITREF(lit_489),T64,ENVNUL,PNUL,sloc(383));
  T66 = VARREF_OR(YevalSastYenvironment_module_setter,YPfalse);
  T67 = fun_environment_module_setter_226;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSastYenvironment_module_setter,T65);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_491 = YPPsym((P)"environment-module-loader");
  lit_492 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_492),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_227 = YPmet(FUNCODEREF(fun_environment_module_loader_227),LITREF(lit_491),T68,ENVNUL,PNUL,sloc(386));
  T70 = VARREF_OR(YevalSastYenvironment_module_loader,YPfalse);
  T71 = fun_environment_module_loader_227;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YevalSastYenvironment_module_loader,T69);
  lit_493 = YPPsym((P)"environment-module-loader-setter");
  lit_494 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_494),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_228 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_228),LITREF(lit_493),T72,ENVNUL,PNUL,sloc(386));
  T74 = VARREF_OR(YevalSastYenvironment_module_loader_setter,YPfalse);
  T75 = fun_environment_module_loader_setter_228;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YevalSastYenvironment_module_loader_setter,T73);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_495 = YPPsym((P)"environment-uses-modules");
  lit_496 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_496),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_229 = YPmet(FUNCODEREF(fun_environment_uses_modules_229),LITREF(lit_495),T76,ENVNUL,PNUL,sloc(388));
  T78 = VARREF_OR(YevalSastYenvironment_uses_modules,YPfalse);
  T79 = fun_environment_uses_modules_229;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YevalSastYenvironment_uses_modules,T77);
  lit_497 = YPPsym((P)"environment-uses-modules-setter");
  lit_498 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_498),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_230 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_230),LITREF(lit_497),T80,ENVNUL,PNUL,sloc(388));
  T82 = VARREF_OR(YevalSastYenvironment_uses_modules_setter,YPfalse);
  T83 = fun_environment_uses_modules_setter_230;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YevalSastYenvironment_uses_modules_setter,T81);
  lit_499 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_499),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T84,ENVNUL,PNUL,sloc(388));
  T85 = fun_231;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T85);
  lit_500 = YPPsym((P)"environment-allows-foreign-names?");
  lit_501 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_232 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_232),LITREF(lit_500),T86,ENVNUL,PNUL,sloc(392));
  T88 = VARREF_OR(YevalSastYenvironment_allows_foreign_namesQ,YPfalse);
  T89 = fun_environment_allows_foreign_namesQ_232;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T87);
  lit_502 = YPPsym((P)"environment-allows-foreign-names?-setter");
  lit_503 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_503),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_233 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_233),LITREF(lit_502),T90,ENVNUL,PNUL,sloc(392));
  T92 = VARREF_OR(YevalSastYenvironment_allows_foreign_namesQ_setter,YPfalse);
  T93 = fun_environment_allows_foreign_namesQ_setter_233;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T91);
  lit_504 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_504),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T94,ENVNUL,PNUL,sloc(392));
  T95 = fun_234;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T95);
  lit_505 = YPPsym((P)"<static-empty-environment>");
  T97 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T96 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_505),T97);
  VARSET(YevalSastYLstatic_empty_environmentG,T96);
  T98 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T98);
  lit_506 = YPPsym((P)"<static-local-environment>");
  T100 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T99 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_506),T100);
  VARSET(YevalSastYLstatic_local_environmentG,T99);
  lit_507 = YPPsym((P)"env-object-name");
  lit_508 = YPPlist(1,YPPsym((P)"x"));
  lit_509 = YPPlist(1,YPPsym((P)"return"));
  lit_510 = YPPlist(1,YPPsym((P)"binding"));
  T103 = YPsig(LITREF(lit_510),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T103,ENVNUL,PNUL,sloc(409));
  T102 = YPsig(LITREF(lit_509),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T102,ENVNUL,PNUL,sloc(407));
  T101 = YPsig(LITREF(lit_508),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_237 = YPmet(FUNCODEREF(fun_env_object_name_237),LITREF(lit_507),T101,ENVNUL,PNUL,sloc(406));
  T105 = VARREF_OR(YevalSastYenv_object_name,YPfalse);
  T106 = fun_env_object_name_237;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSastYenv_object_name,T104);
  lit_511 = YPPsym((P)"objectify");
  lit_512 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T107 = YPsig(LITREF(lit_512),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_238 = YPmet(FUNCODEREF(fun_objectify_238),LITREF(lit_511),T107,ENVNUL,PNUL,sloc(419));
  T109 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T110 = fun_objectify_238;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YevalSastYobjectify,T108);
  lit_513 = YPPsym((P)"objectify-list");
  lit_514 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T111 = YPsig(LITREF(lit_514),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_239 = YPmet(FUNCODEREF(fun_objectify_list_239),LITREF(lit_513),T111,ENVNUL,PNUL,sloc(424));
  T113 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T114 = fun_objectify_list_239;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSastYobjectify_list,T112);
  lit_515 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T115 = YPsig(LITREF(lit_515),YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_240 = YPmet(FUNCODEREF(fun_objectify_list_240),LITREF(lit_513),T115,ENVNUL,PNUL,sloc(428));
  T117 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T118 = fun_objectify_list_240;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YevalSastYobjectify_list,T116);
  lit_516 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T119 = YPsig(LITREF(lit_516),YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_241 = YPmet(FUNCODEREF(fun_objectify_list_241),LITREF(lit_513),T119,ENVNUL,PNUL,sloc(432));
  T121 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T122 = fun_objectify_list_241;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalSastYobjectify_list,T120);
  lit_517 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T123 = YPsig(LITREF(lit_517),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_242 = YPmet(FUNCODEREF(fun_objectify_242),LITREF(lit_511),T123,ENVNUL,PNUL,sloc(436));
  T125 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T126 = fun_objectify_242;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YevalSastYobjectify,T124);
  lit_518 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T127 = YPsig(LITREF(lit_518),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_243 = YPmet(FUNCODEREF(fun_objectify_243),LITREF(lit_511),T127,ENVNUL,PNUL,sloc(439));
  T129 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T130 = fun_objectify_243;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T130);
  VARSET(YevalSastYobjectify,T128);
  lit_519 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T131 = YPsig(LITREF(lit_519),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_244 = YPmet(FUNCODEREF(fun_objectify_244),LITREF(lit_511),T131,ENVNUL,PNUL,sloc(442));
  T133 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T134 = fun_objectify_244;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YevalSastYobjectify,T132);
  lit_520 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T136 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T135 = YPsig(LITREF(lit_520),YPPlist(3,T136,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_245 = YPmet(FUNCODEREF(fun_objectify_245),LITREF(lit_511),T135,ENVNUL,PNUL,sloc(445));
  T138 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T139 = fun_objectify_245;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSastYobjectify,T137);
  lit_521 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T140 = YPsig(LITREF(lit_521),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_246 = YPmet(FUNCODEREF(fun_objectify_246),LITREF(lit_511),T140,ENVNUL,PNUL,sloc(448));
  T142 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T143 = fun_objectify_246;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSastYobjectify,T141);
  lit_522 = YPPsym((P)"objectify-quotation");
  lit_523 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T144 = YPsig(LITREF(lit_523),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_247 = YPmet(FUNCODEREF(fun_objectify_quotation_247),LITREF(lit_522),T144,ENVNUL,PNUL,sloc(451));
  T146 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T147 = fun_objectify_quotation_247;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YevalSastYobjectify_quotation,T145);
  lit_524 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T148 = YPsig(LITREF(lit_524),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_248 = YPmet(FUNCODEREF(fun_objectify_quotation_248),LITREF(lit_522),T148,ENVNUL,PNUL,sloc(454));
  T150 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T151 = fun_objectify_quotation_248;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSastYobjectify_quotation,T149);
  lit_525 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T152 = YPsig(LITREF(lit_525),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_249 = YPmet(FUNCODEREF(fun_objectify_quotation_249),LITREF(lit_522),T152,ENVNUL,PNUL,sloc(457));
  T154 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T155 = fun_objectify_quotation_249;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YevalSastYobjectify_quotation,T153);
  lit_526 = YPPsym((P)"objectify-raw");
  lit_527 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T156 = YPsig(LITREF(lit_527),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_250 = YPmet(FUNCODEREF(fun_objectify_raw_250),LITREF(lit_526),T156,ENVNUL,PNUL,sloc(460));
  T158 = VARREF_OR(YevalSastYobjectify_raw,YPfalse);
  T159 = fun_objectify_raw_250;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T159);
  VARSET(YevalSastYobjectify_raw,T157);
  lit_528 = YPPsym((P)"objectify-bound?");
  lit_529 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"default"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T160 = YPsig(LITREF(lit_529),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_251 = YPmet(FUNCODEREF(fun_objectify_boundQ_251),LITREF(lit_528),T160,ENVNUL,PNUL,sloc(463));
  T162 = VARREF_OR(YevalSastYobjectify_boundQ,YPfalse);
  T163 = fun_objectify_boundQ_251;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T163);
  VARSET(YevalSastYobjectify_boundQ,T161);
  lit_530 = YPPsym((P)"objectify-compile-time");
  lit_531 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T164 = YPsig(LITREF(lit_531),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_252 = YPmet(FUNCODEREF(fun_objectify_compile_time_252),LITREF(lit_530),T164,ENVNUL,PNUL,sloc(471));
  T166 = VARREF_OR(YevalSastYobjectify_compile_time,YPfalse);
  T167 = fun_objectify_compile_time_252;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T167);
  VARSET(YevalSastYobjectify_compile_time,T165);
  lit_532 = YPPsym((P)"objectify-alternative");
  lit_533 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T168 = YPsig(LITREF(lit_533),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_253 = YPmet(FUNCODEREF(fun_objectify_alternative_253),LITREF(lit_532),T168,ENVNUL,PNUL,sloc(487));
  T170 = VARREF_OR(YevalSastYobjectify_alternative,YPfalse);
  T171 = fun_objectify_alternative_253;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T171);
  VARSET(YevalSastYobjectify_alternative,T169);
  lit_534 = YPPsym((P)"sequentialize");
  lit_535 = YPPlist(1,YPPsym((P)"e*"));
  lit_536 = YPPlist(1,YPPsym((P)"e*"));
  T173 = YPsig(LITREF(lit_536),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_254 = YPmet(FUNCODEREF(fun_loop_254),LITREF(lit_260),T173,ENVNUL,PNUL,sloc(498));
  T172 = YPsig(LITREF(lit_535),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_255 = YPmet(FUNCODEREF(fun_sequentialize_255),LITREF(lit_534),T172,ENVNUL,PNUL,sloc(493));
  T175 = VARREF_OR(YevalSastYsequentialize,YPfalse);
  T176 = fun_sequentialize_255;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T176);
  VARSET(YevalSastYsequentialize,T174);
  lit_537 = YPPsym((P)"transform-defs");
  lit_538 = YPPlist(1,YPPsym((P)"e*"));
  T177 = YPsig(LITREF(lit_538),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_256 = YPmet(FUNCODEREF(fun_transform_defs_256),LITREF(lit_537),T177,ENVNUL,PNUL,sloc(503));
  T179 = VARREF_OR(YevalSastYtransform_defs,YPfalse);
  T180 = fun_transform_defs_256;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YevalSastYtransform_defs,T178);
  lit_539 = YPPsym((P)"objectify-sequential");
  lit_540 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_541 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e*"));
  T182 = YPsig(LITREF(lit_541),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_257 = YPmet(FUNCODEREF(fun_loop_257),LITREF(lit_260),T182,ENVNUL,PNUL,sloc(514));
  T181 = YPsig(LITREF(lit_540),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_258 = YPmet(FUNCODEREF(fun_objectify_sequential_258),LITREF(lit_539),T181,ENVNUL,PNUL,sloc(512));
  T184 = VARREF_OR(YevalSastYobjectify_sequential,YPfalse);
  T185 = fun_objectify_sequential_258;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T185);
  VARSET(YevalSastYobjectify_sequential,T183);
  lit_542 = YPPsym((P)"objectify-application");
  lit_543 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_544 = YPPlist(1,YPPsym((P)"e"));
  T187 = YPsig(LITREF(lit_544),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T187,ENVNUL,PNUL,sloc(523));
  T186 = YPsig(LITREF(lit_543),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_260 = YPmet(FUNCODEREF(fun_objectify_application_260),LITREF(lit_542),T186,ENVNUL,PNUL,sloc(522));
  T189 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T190 = fun_objectify_application_260;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  VARSET(YevalSastYobjectify_application,T188);
  lit_545 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_546 = YPPlist(1,YPPsym((P)"e"));
  T192 = YPsig(LITREF(lit_546),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T192,ENVNUL,PNUL,sloc(529));
  T191 = YPsig(LITREF(lit_545),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_262 = YPmet(FUNCODEREF(fun_objectify_application_262),LITREF(lit_542),T191,ENVNUL,PNUL,sloc(528));
  T194 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T195 = fun_objectify_application_262;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T195);
  VARSET(YevalSastYobjectify_application,T193);
  lit_547 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_548 = YPPlist(1,YPPsym((P)"e"));
  T197 = YPsig(LITREF(lit_548),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T197,ENVNUL,PNUL,sloc(540));
  T196 = YPsig(LITREF(lit_547),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_264 = YPmet(FUNCODEREF(fun_objectify_application_264),LITREF(lit_542),T196,ENVNUL,PNUL,sloc(539));
  T199 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T200 = fun_objectify_application_264;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T200);
  VARSET(YevalSastYobjectify_application,T198);
  lit_549 = YPPsym((P)"process-closed-application");
  lit_550 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_551 = YPsb((P)"incorrect regular arity");
  T201 = YPsig(LITREF(lit_550),YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_265 = YPmet(FUNCODEREF(fun_process_closed_application_265),LITREF(lit_549),T201,ENVNUL,PNUL,sloc(549));
  T203 = VARREF_OR(YevalSastYprocess_closed_application,YPfalse);
  T204 = fun_process_closed_application_265;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YevalSastYprocess_closed_application,T202);
  lit_552 = YPPsym((P)"process-nary-closed-application");
  lit_553 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_554 = YPPsym((P)"pack-nary-args");
  lit_555 = YPPlist(1,YPPsym((P)"e*"));
  lit_556 = YPPsym((P)"quote");
  lit_557 = YPPsym((P)"%pair");
  lit_558 = YPPsym((P)"pack-args");
  lit_559 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_560 = YPPsym((P)"<lst>");
  lit_561 = YPsb((P)"incorrect dotted arity");
  T207 = YPsig(LITREF(lit_555),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_266 = YPmet(FUNCODEREF(fun_pack_nary_args_266),LITREF(lit_554),T207,ENVNUL,PNUL,sloc(564));
  T206 = YPsig(LITREF(lit_559),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_267 = YPmet(FUNCODEREF(fun_pack_args_267),LITREF(lit_558),T206,ENVNUL,PNUL,sloc(568));
  T205 = YPsig(LITREF(lit_553),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_268 = YPmet(FUNCODEREF(fun_process_nary_closed_application_268),LITREF(lit_552),T205,ENVNUL,PNUL,sloc(563));
  T209 = VARREF_OR(YevalSastYprocess_nary_closed_application,YPfalse);
  T210 = fun_process_nary_closed_application_268;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T210);
  VARSET(YevalSastYprocess_nary_closed_application,T208);
  lit_562 = YPPsym((P)"convert2arguments");
  lit_563 = YPPlist(1,YPPsym((P)"e*"));
  T211 = YPsig(LITREF(lit_563),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_269 = YPmet(FUNCODEREF(fun_convert2arguments_269),LITREF(lit_562),T211,ENVNUL,PNUL,sloc(589));
  T213 = VARREF_OR(YevalSastYconvert2arguments,YPfalse);
  T214 = fun_convert2arguments_269;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T214);
  VARSET(YevalSastYconvert2arguments,T212);
  lit_564 = YPPsym((P)"objectify-assignment");
  lit_565 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_566 = YPsb((P)"Unsupported Set!: %=");
  T215 = YPsig(LITREF(lit_565),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_270 = YPmet(FUNCODEREF(fun_objectify_assignment_270),LITREF(lit_564),T215,ENVNUL,PNUL,sloc(598));
  T217 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T218 = fun_objectify_assignment_270;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T218);
  VARSET(YevalSastYobjectify_assignment,T216);
  lit_567 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T219 = YPsig(LITREF(lit_567),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_271 = YPmet(FUNCODEREF(fun_objectify_assignment_271),LITREF(lit_564),T219,ENVNUL,PNUL,sloc(608));
  T221 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T222 = fun_objectify_assignment_271;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T222);
  VARSET(YevalSastYobjectify_assignment,T220);
  lit_568 = YPPsym((P)"objectify-assignment-using");
  lit_569 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T225 = YPsig(LITREF(lit_569),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  T224 = fun_objectify_assignment_using_272 = YPmet(FUNCODEREF(fun_objectify_assignment_using_272),LITREF(lit_568),T225,ENVNUL,PNUL,sloc(613));
  T228 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T229 = fun_objectify_assignment_using_272;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T229);
  T226 = VARSET(YevalSastYobjectify_assignment_using,T227);
  T223 = T226;
  return T223;
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
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254;
DEFCREGS();
loop:
  lit_570 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T0 = YPsig(LITREF(lit_570),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_273 = YPmet(FUNCODEREF(fun_objectify_assignment_using_273),LITREF(lit_568),T0,ENVNUL,PNUL,sloc(620));
  T2 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T3 = fun_objectify_assignment_using_273;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSastYobjectify_assignment_using,T1);
  lit_571 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T4 = YPsig(LITREF(lit_571),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_274 = YPmet(FUNCODEREF(fun_objectify_assignment_using_274),LITREF(lit_568),T4,ENVNUL,PNUL,sloc(626));
  T6 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T7 = fun_objectify_assignment_using_274;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSastYobjectify_assignment_using,T5);
  lit_572 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T8 = YPsig(LITREF(lit_572),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_275 = YPmet(FUNCODEREF(fun_objectify_assignment_using_275),LITREF(lit_568),T8,ENVNUL,PNUL,sloc(632));
  T10 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T11 = fun_objectify_assignment_using_275;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSastYobjectify_assignment_using,T9);
  lit_573 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_574 = YPsb((P)"Unable to assign to static module binding %=");
  T12 = YPsig(LITREF(lit_573),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_276 = YPmet(FUNCODEREF(fun_objectify_assignment_using_276),LITREF(lit_568),T12,ENVNUL,PNUL,sloc(638));
  T14 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T15 = fun_objectify_assignment_using_276;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSastYobjectify_assignment_using,T13);
  lit_575 = YPPsym((P)"update-binding-kind");
  lit_576 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_577 = YPPsym((P)"runtime");
  lit_578 = YPPsym((P)"magic");
  lit_579 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T16 = YPsig(LITREF(lit_576),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_575),T16,ENVNUL,PNUL,sloc(651));
  T17 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T17);
  lit_580 = YPPsym((P)"ast-define-binding");
  lit_581 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_582 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T18 = YPsig(LITREF(lit_581),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_278 = YPmet(FUNCODEREF(fun_ast_define_binding_278),LITREF(lit_580),T18,ENVNUL,PNUL,sloc(660));
  T20 = VARREF_OR(YevalSastYast_define_binding,YPfalse);
  T21 = fun_ast_define_binding_278;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YevalSastYast_define_binding,T19);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_583 = YPPsym((P)"objectify-definition");
  lit_584 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T22 = YPsig(LITREF(lit_584),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_279 = YPmet(FUNCODEREF(fun_objectify_definition_279),LITREF(lit_583),T22,ENVNUL,PNUL,sloc(702));
  T24 = VARREF_OR(YevalSastYobjectify_definition,YPfalse);
  T25 = fun_objectify_definition_279;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSastYobjectify_definition,T23);
  lit_585 = YPPsym((P)"objectify-variable-definition");
  lit_586 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T26 = YPsig(LITREF(lit_586),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_280 = YPmet(FUNCODEREF(fun_objectify_variable_definition_280),LITREF(lit_585),T26,ENVNUL,PNUL,sloc(713));
  T28 = VARREF_OR(YevalSastYobjectify_variable_definition,YPfalse);
  T29 = fun_objectify_variable_definition_280;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYobjectify_variable_definition,T27);
  lit_587 = YPPsym((P)"objectify-dynamic-definition");
  lit_588 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_589 = YPPsym((P)"dynamic");
  T30 = YPsig(LITREF(lit_588),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_281 = YPmet(FUNCODEREF(fun_objectify_dynamic_definition_281),LITREF(lit_587),T30,ENVNUL,PNUL,sloc(716));
  T32 = VARREF_OR(YevalSastYobjectify_dynamic_definition,YPfalse);
  T33 = fun_objectify_dynamic_definition_281;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSastYobjectify_dynamic_definition,T31);
  lit_590 = YPPsym((P)"%%macro");
  lit_591 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_592 = YPPsym((P)"expand");
  lit_593 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_594 = YPsb((P)"MACRO ");
  lit_595 = YPsb((P)"\n");
  lit_596 = YPsb((P)"  => ");
  lit_597 = YPsb((P)"\n");
  lit_598 = YPPsym((P)"macro");
  T35 = YPsig(LITREF(lit_593),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_282 = YPmet(FUNCODEREF(fun_expand_282),LITREF(lit_592),T35,ENVNUL,PNUL,sloc(721));
  T34 = YPsig(LITREF(lit_591),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_590),T34,ENVNUL,PNUL,sloc(719));
  T36 = YPPmacro;
  VARSET(YPPmacro,T36);
  lit_599 = YPPsym((P)"objectify-syntax-definition");
  lit_600 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T37 = YPsig(LITREF(lit_600),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_284 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_284),LITREF(lit_599),T37,ENVNUL,PNUL,sloc(743));
  T39 = VARREF_OR(YevalSastYobjectify_syntax_definition,YPfalse);
  T40 = fun_objectify_syntax_definition_284;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YevalSastYobjectify_syntax_definition,T38);
  lit_601 = YPPsym((P)"objectify-function-definition");
  lit_602 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  T41 = YPsig(LITREF(lit_602),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_285 = YPmet(FUNCODEREF(fun_objectify_function_definition_285),LITREF(lit_601),T41,ENVNUL,PNUL,sloc(772));
  T43 = VARREF_OR(YevalSastYobjectify_function_definition,YPfalse);
  T44 = fun_objectify_function_definition_285;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YevalSastYobjectify_function_definition,T42);
  lit_603 = YPPsym((P)"module-binding");
  lit_604 = YPPlist(1,YPPsym((P)"kind"));
  T45 = YPsig(LITREF(lit_604),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_603),T45,ENVNUL,PNUL,sloc(781));
  T46 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T46);
  lit_605 = YPPsym((P)"objectify-primitive-definition");
  lit_606 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_607 = YPPsym((P)"predefined");
  lit_608 = YPPsym((P)"inline");
  T47 = YPsig(LITREF(lit_606),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_287 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_287),LITREF(lit_605),T47,ENVNUL,PNUL,sloc(784));
  T49 = VARREF_OR(YevalSastYobjectify_primitive_definition,YPfalse);
  T50 = fun_objectify_primitive_definition_287;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YevalSastYobjectify_primitive_definition,T48);
  lit_609 = YPPsym((P)"objectify-generic-definition");
  lit_610 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T51 = YPsig(LITREF(lit_610),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_288 = YPmet(FUNCODEREF(fun_objectify_generic_definition_288),LITREF(lit_609),T51,ENVNUL,PNUL,sloc(803));
  T53 = VARREF_OR(YevalSastYobjectify_generic_definition,YPfalse);
  T54 = fun_objectify_generic_definition_288;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T54);
  VARSET(YevalSastYobjectify_generic_definition,T52);
  lit_611 = YPPsym((P)"objectify-method-definition");
  lit_612 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_613 = YPPsym((P)"bound?");
  lit_614 = YPPsym((P)"%define-method");
  T55 = YPsig(LITREF(lit_612),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_289 = YPmet(FUNCODEREF(fun_objectify_method_definition_289),LITREF(lit_611),T55,ENVNUL,PNUL,sloc(815));
  T57 = VARREF_OR(YevalSastYobjectify_method_definition,YPfalse);
  T58 = fun_objectify_method_definition_289;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T58);
  VARSET(YevalSastYobjectify_method_definition,T56);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_615 = YPPsym((P)"objectify-function-source");
  lit_616 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_617 = Ynil;
  lit_618 = YPsb((P)"(fun %s %s)");
  T63 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T63,ENVNUL,PNUL,sloc(839));
  T62 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T62,ENVNUL,PNUL,sloc(839));
  T61 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T61,ENVNUL,PNUL,sloc(839));
  T60 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T60,ENVNUL,PNUL,sloc(839));
  T59 = YPsig(LITREF(lit_616),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_294 = YPmet(FUNCODEREF(fun_objectify_function_source_294),LITREF(lit_615),T59,ENVNUL,PNUL,sloc(838));
  T65 = VARREF_OR(YevalSastYobjectify_function_source,YPfalse);
  T66 = fun_objectify_function_source_294;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
  VARSET(YevalSastYobjectify_function_source,T64);
  lit_619 = YPPsym((P)"objectify-function");
  lit_620 = YPPlist(5,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T69 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T69,ENVNUL,PNUL,sloc(850));
  T68 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T68,ENVNUL,PNUL,sloc(850));
  T67 = YPsig(LITREF(lit_620),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_297 = YPmet(FUNCODEREF(fun_objectify_function_297),LITREF(lit_619),T67,ENVNUL,PNUL,sloc(847));
  T71 = VARREF_OR(YevalSastYobjectify_function,YPfalse);
  T72 = fun_objectify_function_297;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSastYobjectify_function,T70);
  lit_621 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_621));
  lit_622 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_622));
  lit_623 = YPPsym((P)"objectify-signature");
  lit_624 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  lit_625 = YPPsym((P)"col");
  lit_626 = YPPlist(5,YPPsym((P)"params"),YPPsym((P)"nary?"),YPPsym((P)"bindings"),YPPsym((P)"names"),YPPsym((P)"types"));
  T74 = YPsig(LITREF(lit_626),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_298 = YPmet(FUNCODEREF(fun_col_298),LITREF(lit_625),T74,ENVNUL,PNUL,sloc(866));
  T73 = YPsig(LITREF(lit_624),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_299 = YPmet(FUNCODEREF(fun_objectify_signature_299),LITREF(lit_623),T73,ENVNUL,PNUL,sloc(864));
  T76 = VARREF_OR(YevalSastYobjectify_signature,YPfalse);
  T77 = fun_objectify_signature_299;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSastYobjectify_signature,T75);
  lit_627 = YPPsym((P)"compute-local-reference-offsets");
  lit_628 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_629 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"r"));
  lit_630 = YPPsym((P)"find");
  lit_631 = YPPlist(2,YPPsym((P)"j"),YPPsym((P)"bindings"));
  lit_632 = YPsb((P)"didn't find local binding %= in %=");
  T81 = YPsig(LITREF(lit_631),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_300 = YPmet(FUNCODEREF(fun_find_300),LITREF(lit_630),T81,ENVNUL,PNUL,sloc(900));
  T80 = YPsig(LITREF(lit_629),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_301 = YPmet(FUNCODEREF(fun_loop_301),LITREF(lit_260),T80,ENVNUL,PNUL,sloc(898));
  T79 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T78 = YPsig(LITREF(lit_628),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),T79,Ynil);
  fun_compute_local_reference_offsets_302 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_302),LITREF(lit_627),T78,ENVNUL,PNUL,sloc(895));
  T83 = VARREF_OR(YevalSastYcompute_local_reference_offsets,YPfalse);
  T84 = fun_compute_local_reference_offsets_302;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YevalSastYcompute_local_reference_offsets,T82);
  lit_633 = YPPsym((P)"objectify-binding");
  lit_634 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T85 = YPsig(LITREF(lit_634),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_303 = YPmet(FUNCODEREF(fun_objectify_binding_303),LITREF(lit_633),T85,ENVNUL,PNUL,sloc(909));
  T87 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T88 = fun_objectify_binding_303;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YevalSastYobjectify_binding,T86);
  lit_635 = YPPsym((P)"binding-reference-class");
  lit_636 = YPPlist(1,YPPsym((P)"b"));
  lit_637 = YPsb((P)"Unknown binding-kind %=");
  T89 = YPsig(LITREF(lit_636),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_304 = YPmet(FUNCODEREF(fun_binding_reference_class_304),LITREF(lit_635),T89,ENVNUL,PNUL,sloc(920));
  T91 = VARREF_OR(YevalSastYbinding_reference_class,YPfalse);
  T92 = fun_binding_reference_class_304;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YevalSastYbinding_reference_class,T90);
  lit_638 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T93 = YPsig(LITREF(lit_638),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_305 = YPmet(FUNCODEREF(fun_objectify_binding_305),LITREF(lit_633),T93,ENVNUL,PNUL,sloc(931));
  T95 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T96 = fun_objectify_binding_305;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YevalSastYobjectify_binding,T94);
  lit_639 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T97 = YPsig(LITREF(lit_639),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_306 = YPmet(FUNCODEREF(fun_objectify_binding_306),LITREF(lit_633),T97,ENVNUL,PNUL,sloc(940));
  T99 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T100 = fun_objectify_binding_306;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YevalSastYobjectify_binding,T98);
  lit_640 = YPPsym((P)"default-type");
  lit_641 = YPPlist(1,YPPsym((P)"r"));
  lit_642 = YPPsym((P)"<any>");
  T101 = YPsig(LITREF(lit_641),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_307 = YPmet(FUNCODEREF(fun_default_type_307),LITREF(lit_640),T101,ENVNUL,PNUL,sloc(945));
  T103 = VARREF_OR(YevalSastYdefault_type,YPfalse);
  T104 = fun_default_type_307;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YevalSastYdefault_type,T102);
  lit_643 = YPPsym((P)"objectify-free-global-reference");
  lit_644 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T105 = YPsig(LITREF(lit_644),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_308 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_308),LITREF(lit_643),T105,ENVNUL,PNUL,sloc(950));
  T107 = VARREF_OR(YevalSastYobjectify_free_global_reference,YPfalse);
  T108 = fun_objectify_free_global_reference_308;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T108);
  VARSET(YevalSastYobjectify_free_global_reference,T106);
  lit_645 = YPPsym((P)"foreign-name?");
  lit_646 = YPPlist(1,YPPsym((P)"name"));
  T109 = YPsig(LITREF(lit_646),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_645),T109,ENVNUL,PNUL,sloc(964));
  T110 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T110);
  lit_647 = YPPsym((P)"objectify-foreign-reference");
  lit_648 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_649 = YPsb((P)"Malformed foreign name %s.\n");
  lit_650 = YPsb((P)"No binding %s in %s.\n");
  T111 = YPsig(LITREF(lit_648),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_310 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_310),LITREF(lit_647),T111,ENVNUL,PNUL,sloc(968));
  T113 = VARREF_OR(YevalSastYobjectify_foreign_reference,YPfalse);
  T114 = fun_objectify_foreign_reference_310;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSastYobjectify_foreign_reference,T112);
  lit_651 = YPPsym((P)"objectify-symbol");
  lit_652 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T115 = YPsig(LITREF(lit_652),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_311 = YPmet(FUNCODEREF(fun_objectify_symbol_311),LITREF(lit_651),T115,ENVNUL,PNUL,sloc(986));
  T117 = VARREF_OR(YevalSastYobjectify_symbol,YPfalse);
  T118 = fun_objectify_symbol_311;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YevalSastYobjectify_symbol,T116);
  lit_653 = YPPsym((P)"ftype");
  lit_654 = YPPlist(1,YPPsym((P)"r"));
  lit_655 = YPPsym((P)"<fun>");
  T119 = YPsig(LITREF(lit_654),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_312 = YPmet(FUNCODEREF(fun_ftype_312),LITREF(lit_653),T119,ENVNUL,PNUL,sloc(989));
  T121 = VARREF_OR(YevalSastYftype,YPfalse);
  T122 = fun_ftype_312;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalSastYftype,T120);
  lit_656 = YPPsym((P)"<functions>");
  T125 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T124 = (P)YPpair(VARREF(YLlstG),T125);
  T123 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_656),T124);
  VARSET(YevalSastYLfunctionsG,T123);
  T126 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T126);
  lit_657 = YPPsym((P)"functions");
  lit_658 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T127 = YPsig(LITREF(lit_658),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_657),T127,ENVNUL,PNUL,sloc(992));
  T128 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T128);
  lit_659 = YPPlist(1,YPPsym((P)"e"));
  T130 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T129 = YPsig(LITREF(lit_659),YPPlist(1,T130),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_314 = YPmet(FUNCODEREF(fun_empty_314),LITREF(lit_312),T129,ENVNUL,PNUL,sloc(992));
  T132 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T133 = fun_empty_314;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YgooScolsScolYempty,T131);
  lit_660 = YPPsym((P)"objectify-locals");
  lit_661 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_662 = YPPlist(1,YPPsym((P)"n"));
  lit_663 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T136 = YPsig(LITREF(lit_662),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_315 = YPmet(FUNCODEREF(fun_315),YPfalse,T136,ENVNUL,PNUL,sloc(995));
  T135 = YPsig(LITREF(lit_663),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_316 = YPmet(FUNCODEREF(fun_316),YPfalse,T135,ENVNUL,PNUL,sloc(1002));
  T134 = YPsig(LITREF(lit_661),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_317 = YPmet(FUNCODEREF(fun_objectify_locals_317),LITREF(lit_660),T134,ENVNUL,PNUL,sloc(994));
  T138 = VARREF_OR(YevalSastYobjectify_locals,YPfalse);
  T139 = fun_objectify_locals_317;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSastYobjectify_locals,T137);
  lit_664 = YPPsym((P)"objectify-bind-exit");
  lit_665 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T140 = YPsig(LITREF(lit_665),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_318 = YPmet(FUNCODEREF(fun_objectify_bind_exit_318),LITREF(lit_664),T140,ENVNUL,PNUL,sloc(1013));
  T142 = VARREF_OR(YevalSastYobjectify_bind_exit,YPfalse);
  T143 = fun_objectify_bind_exit_318;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSastYobjectify_bind_exit,T141);
  lit_666 = YPPsym((P)"objectify-unwind-protect");
  lit_667 = YPPlist(5,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T144 = YPsig(LITREF(lit_667),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_319 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_319),LITREF(lit_666),T144,ENVNUL,PNUL,sloc(1019));
  T146 = VARREF_OR(YevalSastYobjectify_unwind_protect,YPfalse);
  T147 = fun_objectify_unwind_protect_319;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YevalSastYobjectify_unwind_protect,T145);
  lit_668 = YPPsym((P)"objectify-monitor");
  lit_669 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T148 = YPsig(LITREF(lit_669),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_320 = YPmet(FUNCODEREF(fun_objectify_monitor_320),LITREF(lit_668),T148,ENVNUL,PNUL,sloc(1031));
  T150 = VARREF_OR(YevalSastYobjectify_monitor,YPfalse);
  T151 = fun_objectify_monitor_320;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSastYobjectify_monitor,T149);
  lit_670 = YPPsym((P)"objectify-export");
  lit_671 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_672 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_673 = YPPlist(1,YPPsym((P)"name"));
  lit_674 = YPPlist(1,YPPsym((P)"exit"));
  lit_675 = YPsb((P)"Continue without exporting %s");
  lit_676 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_677 = YPsb((P)"Can't export undefined binding %s.\n");
  T157 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_676),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T156,ENVNUL,PNUL,sloc(1052));
  T155 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_323 = YPmet(FUNCODEREF(fun_323),YPfalse,T155,ENVNUL,PNUL,sloc(1053));
  T154 = YPsig(LITREF(lit_674),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_324 = YPmet(FUNCODEREF(fun_324),YPfalse,T154,ENVNUL,PNUL,sloc(1049));
  T153 = YPsig(LITREF(lit_673),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_325 = YPmet(FUNCODEREF(fun_325),YPfalse,T153,ENVNUL,PNUL,sloc(1046));
  T152 = YPsig(LITREF(lit_671),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_326 = YPmet(FUNCODEREF(fun_objectify_export_326),LITREF(lit_670),T152,ENVNUL,PNUL,sloc(1039));
  T159 = VARREF_OR(YevalSastYobjectify_export,YPfalse);
  T160 = fun_objectify_export_326;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(YevalSastYobjectify_export,T158);
  lit_678 = YPPsym((P)"import-global!");
  lit_679 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"env"));
  lit_680 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T161 = YPsig(LITREF(lit_679),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_678),T161,ENVNUL,PNUL,sloc(1059));
  T162 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T162);
  lit_681 = YPPsym((P)"objectify-use/export-module");
  lit_682 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_683 = YPPlist(1,YPPsym((P)"b"));
  T164 = YPsig(LITREF(lit_683),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T164,ENVNUL,PNUL,sloc(1073));
  T163 = YPsig(LITREF(lit_682),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_329 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_329),LITREF(lit_681),T163,ENVNUL,PNUL,sloc(1067));
  T166 = VARREF_OR(YevalSastYobjectify_useSexport_module,YPfalse);
  T167 = fun_objectify_useSexport_module_329;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T167);
  VARSET(YevalSastYobjectify_useSexport_module,T165);
  lit_684 = YPPsym((P)"objectify-use-include");
  lit_685 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_686 = YPPlist(1,YPPsym((P)"x"));
  T169 = YPsig(LITREF(lit_686),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_330 = YPmet(FUNCODEREF(fun_330),YPfalse,T169,ENVNUL,PNUL,sloc(1082));
  T168 = YPsig(LITREF(lit_685),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_331 = YPmet(FUNCODEREF(fun_objectify_use_include_331),LITREF(lit_684),T168,ENVNUL,PNUL,sloc(1079));
  T171 = VARREF_OR(YevalSastYobjectify_use_include,YPfalse);
  T172 = fun_objectify_use_include_331;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T172);
  VARSET(YevalSastYobjectify_use_include,T170);
  lit_687 = YPPsym((P)"objectify-use-library");
  lit_688 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_689 = YPPlist(1,YPPsym((P)"x"));
  T174 = YPsig(LITREF(lit_689),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_332 = YPmet(FUNCODEREF(fun_332),YPfalse,T174,ENVNUL,PNUL,sloc(1089));
  T173 = YPsig(LITREF(lit_688),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_333 = YPmet(FUNCODEREF(fun_objectify_use_library_333),LITREF(lit_687),T173,ENVNUL,PNUL,sloc(1086));
  T176 = VARREF_OR(YevalSastYobjectify_use_library,YPfalse);
  T177 = fun_objectify_use_library_333;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YevalSastYobjectify_use_library,T175);
  lit_690 = YPPsym((P)"objectify-use-module");
  lit_691 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_692 = YPPsym((P)"use-mod");
  lit_693 = YPPlist(1,YPPsym((P)"name"));
  lit_694 = YPPlist(1,YPPsym((P)"b"));
  lit_695 = YPPsym((P)"use-c-mod");
  lit_696 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_697 = YPsb((P)".c");
  lit_698 = YPsb((P)".h");
  lit_699 = YPsb((P)".swig");
  lit_700 = YPsb((P)".c");
  T181 = YPsig(LITREF(lit_694),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_334 = YPmet(FUNCODEREF(fun_334),YPfalse,T181,ENVNUL,PNUL,sloc(1100));
  T180 = YPsig(LITREF(lit_693),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_335 = YPmet(FUNCODEREF(fun_use_mod_335),LITREF(lit_692),T180,ENVNUL,PNUL,sloc(1096));
  T179 = YPsig(LITREF(lit_696),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_336 = YPmet(FUNCODEREF(fun_use_c_mod_336),LITREF(lit_695),T179,ENVNUL,PNUL,sloc(1103));
  T178 = YPsig(LITREF(lit_691),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_337 = YPmet(FUNCODEREF(fun_objectify_use_module_337),LITREF(lit_690),T178,ENVNUL,PNUL,sloc(1093));
  T183 = VARREF_OR(YevalSastYobjectify_use_module,YPfalse);
  T184 = fun_objectify_use_module_337;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T184);
  VARSET(YevalSastYobjectify_use_module,T182);
  lit_701 = YPPsym((P)"insert-and-mangle-global!");
  lit_702 = YPPlist(3,YPPsym((P)"binding"),YPPsym((P)"mangle-prefix"),YPPsym((P)"r"));
  T185 = YPsig(LITREF(lit_702),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_338 = YPmet(FUNCODEREF(fun_insert_and_mangle_globalX_338),LITREF(lit_701),T185,ENVNUL,PNUL,sloc(1117));
  T187 = VARREF_OR(YevalSastYinsert_and_mangle_globalX,YPfalse);
  T188 = fun_insert_and_mangle_globalX_338;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  VARSET(YevalSastYinsert_and_mangle_globalX,T186);
  lit_703 = YPPsym((P)"import-and-mangle-global!");
  lit_704 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"mangle-prefix"),YPPsym((P)"env"));
  lit_705 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T189 = YPsig(LITREF(lit_704),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYimport_and_mangle_globalX = YPmet(FUNCODEREF(YevalSastYimport_and_mangle_globalX),LITREF(lit_703),T189,ENVNUL,PNUL,sloc(1123));
  T190 = YevalSastYimport_and_mangle_globalX;
  VARSET(YevalSastYimport_and_mangle_globalX,T190);
  lit_706 = YPPsym((P)"objectify-use-mangle-module");
  lit_707 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_708 = YPPlist(1,YPPsym((P)"b"));
  T192 = YPsig(LITREF(lit_708),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_340 = YPmet(FUNCODEREF(fun_340),YPfalse,T192,ENVNUL,PNUL,sloc(1140));
  T191 = YPsig(LITREF(lit_707),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_341 = YPmet(FUNCODEREF(fun_objectify_use_mangle_module_341),LITREF(lit_706),T191,ENVNUL,PNUL,sloc(1132));
  T194 = VARREF_OR(YevalSastYobjectify_use_mangle_module,YPfalse);
  T195 = fun_objectify_use_mangle_module_341;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T195);
  VARSET(YevalSastYobjectify_use_mangle_module,T193);
  lit_709 = YPPsym((P)"expand-bind-list");
  lit_710 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_711 = YPsb((P)"Expected Pattern List %=\n");
  T196 = YPsig(LITREF(lit_710),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_342 = YPmet(FUNCODEREF(fun_expand_bind_list_342),LITREF(lit_709),T196,ENVNUL,PNUL,sloc(1146));
  T198 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T199 = fun_expand_bind_list_342;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T199);
  VARSET(YevalSastYexpand_bind_list,T197);
  lit_712 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_713 = YPPsym((P)"match-empty-list");
  T201 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T200 = YPsig(LITREF(lit_712),YPPlist(3,T201,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_343 = YPmet(FUNCODEREF(fun_expand_bind_list_343),LITREF(lit_709),T200,ENVNUL,PNUL,sloc(1149));
  T203 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T204 = fun_expand_bind_list_343;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YevalSastYexpand_bind_list,T202);
  lit_714 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_715 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_716 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T205 = YPsig(LITREF(lit_714),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_344 = YPmet(FUNCODEREF(fun_expand_bind_list_344),LITREF(lit_709),T205,ENVNUL,PNUL,sloc(1152));
  T207 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T208 = fun_expand_bind_list_344;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T208);
  VARSET(YevalSastYexpand_bind_list,T206);
  lit_717 = YPPsym((P)"expand-bind-list*");
  lit_718 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T210 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T209 = YPsig(LITREF(lit_718),YPPlist(3,T210,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_345 = YPmet(FUNCODEREF(fun_expand_bind_listT_345),LITREF(lit_717),T209,ENVNUL,PNUL,sloc(1161));
  T212 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T213 = fun_expand_bind_listT_345;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T213);
  VARSET(YevalSastYexpand_bind_listT,T211);
  lit_719 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T214 = YPsig(LITREF(lit_719),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_346 = YPmet(FUNCODEREF(fun_expand_bind_listT_346),LITREF(lit_717),T214,ENVNUL,PNUL,sloc(1164));
  T216 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T217 = fun_expand_bind_listT_346;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T217);
  VARSET(YevalSastYexpand_bind_listT,T215);
  lit_720 = YPPsym((P)"expand-bind-element");
  lit_721 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_722 = YPPsym((P)"match-atom");
  T218 = YPsig(LITREF(lit_721),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_347 = YPmet(FUNCODEREF(fun_expand_bind_element_347),LITREF(lit_720),T218,ENVNUL,PNUL,sloc(1168));
  T220 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T221 = fun_expand_bind_element_347;
  T219 = XCALL2(1,VARREF(YPdefine_method),T220,T221);
  VARSET(YevalSastYexpand_bind_element,T219);
  lit_723 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_724 = YPPsym((P)"match-unquote");
  lit_725 = YPPsym((P)"tail");
  lit_726 = YPPsym((P)"match-sublist");
  T222 = YPsig(LITREF(lit_723),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_348 = YPmet(FUNCODEREF(fun_expand_bind_element_348),LITREF(lit_720),T222,ENVNUL,PNUL,sloc(1171));
  T224 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T225 = fun_expand_bind_element_348;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T225);
  VARSET(YevalSastYexpand_bind_element,T223);
  lit_727 = YPPsym((P)"expand-pattern");
  lit_728 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_729 = YPPsym((P)"if");
  lit_730 = YPPsym((P)"isa?");
  lit_731 = YPsb((P)"Match Pattern Failure");
  T226 = YPsig(LITREF(lit_728),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_349 = YPmet(FUNCODEREF(fun_expand_pattern_349),LITREF(lit_727),T226,ENVNUL,PNUL,sloc(1182));
  T228 = VARREF_OR(YevalSastYexpand_pattern,YPfalse);
  T229 = fun_expand_pattern_349;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T229);
  VARSET(YevalSastYexpand_pattern,T227);
  lit_732 = YPPsym((P)"expand-syntax-if");
  lit_733 = YPPlist(1,YPPsym((P)"x"));
  lit_734 = YPPsym((P)"esc");
  lit_735 = YPPsym((P)"return");
  lit_736 = YPPsym((P)"loc");
  lit_737 = YPPsym((P)"msg");
  lit_738 = YPPsym((P)"<str>");
  lit_739 = YPPsym((P)"args");
  lit_740 = YPPlist(1,YPPsym((P)"x"));
  T231 = YPsig(LITREF(lit_740),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(LITREF(lit_733),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_351 = YPmet(FUNCODEREF(fun_expand_syntax_if_351),LITREF(lit_732),T230,ENVNUL,PNUL,sloc(1187));
  T233 = VARREF_OR(YevalSastYexpand_syntax_if,YPfalse);
  T234 = fun_expand_syntax_if_351;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T234);
  VARSET(YevalSastYexpand_syntax_if,T232);
  lit_741 = YPPsym((P)"r-extend*");
  lit_742 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T235 = YPsig(LITREF(lit_742),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_352 = YPmet(FUNCODEREF(fun_r_extendT_352),LITREF(lit_741),T235,ENVNUL,PNUL,sloc(1211));
  T237 = VARREF_OR(YevalSastYr_extendT,YPfalse);
  T238 = fun_r_extendT_352;
  T236 = XCALL2(1,VARREF(YPdefine_method),T237,T238);
  VARSET(YevalSastYr_extendT,T236);
  lit_743 = YPPsym((P)"insert-global!");
  lit_744 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  T239 = YPsig(LITREF(lit_744),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_353 = YPmet(FUNCODEREF(fun_insert_globalX_353),LITREF(lit_743),T239,ENVNUL,PNUL,sloc(1215));
  T241 = VARREF_OR(YevalSastYinsert_globalX,YPfalse);
  T242 = fun_insert_globalX_353;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T242);
  VARSET(YevalSastYinsert_globalX,T240);
  lit_745 = YPPsym((P)"insert-globals!");
  lit_746 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"r"));
  lit_747 = YPPlist(1,YPPsym((P)"b"));
  T244 = YPsig(LITREF(lit_747),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T244,ENVNUL,PNUL,sloc(1220));
  T243 = YPsig(LITREF(lit_746),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_355 = YPmet(FUNCODEREF(fun_insert_globalsX_355),LITREF(lit_745),T243,ENVNUL,PNUL,sloc(1219));
  T246 = VARREF_OR(YevalSastYinsert_globalsX,YPfalse);
  T247 = fun_insert_globalsX_355;
  T245 = XCALL2(1,VARREF(YPdefine_method),T246,T247);
  VARSET(YevalSastYinsert_globalsX,T245);
  lit_748 = YPPsym((P)"find-static-global-environment");
  lit_749 = YPPlist(1,YPPsym((P)"r"));
  T250 = YPsig(LITREF(lit_749),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  T249 = fun_find_static_global_environment_356 = YPmet(FUNCODEREF(fun_find_static_global_environment_356),LITREF(lit_748),T250,ENVNUL,PNUL,sloc(1222));
  T253 = VARREF_OR(YevalSastYfind_static_global_environment,YPfalse);
  T254 = fun_find_static_global_environment_356;
  T252 = XCALL2(1,VARREF(YPdefine_method),T253,T254);
  T251 = VARSET(YevalSastYfind_static_global_environment,T252);
  T248 = T251;
  return T248;
}

P YevalSastY___main_7___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119;
DEFCREGS();
loop:
  lit_750 = YPPlist(1,YPPsym((P)"r"));
  T0 = YPsig(LITREF(lit_750),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_357 = YPmet(FUNCODEREF(fun_find_static_global_environment_357),LITREF(lit_748),T0,ENVNUL,PNUL,sloc(1226));
  T2 = VARREF_OR(YevalSastYfind_static_global_environment,YPfalse);
  T3 = fun_find_static_global_environment_357;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSastYfind_static_global_environment,T1);
  lit_751 = YPPsym((P)"find-syntax-environment");
  lit_752 = YPPlist(1,YPPsym((P)"r"));
  T4 = YPsig(LITREF(lit_752),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_358 = YPmet(FUNCODEREF(fun_find_syntax_environment_358),LITREF(lit_751),T4,ENVNUL,PNUL,sloc(1230));
  T6 = VARREF_OR(YevalSastYfind_syntax_environment,YPfalse);
  T7 = fun_find_syntax_environment_358;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSastYfind_syntax_environment,T5);
  lit_753 = YPPsym((P)"find-environment-module");
  lit_754 = YPPlist(1,YPPsym((P)"r"));
  T8 = YPsig(LITREF(lit_754),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_359 = YPmet(FUNCODEREF(fun_find_environment_module_359),LITREF(lit_753),T8,ENVNUL,PNUL,sloc(1234));
  T10 = VARREF_OR(YevalSastYfind_environment_module,YPfalse);
  T11 = fun_find_environment_module_359;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSastYfind_environment_module,T9);
  lit_755 = YPPsym((P)"find-binding");
  lit_756 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_757 = YPPlist(1,YPPsym((P)"bindings"));
  T13 = YPsig(LITREF(lit_757),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_360 = YPmet(FUNCODEREF(fun_loop_360),LITREF(lit_260),T13,ENVNUL,PNUL,sloc(1238));
  T12 = YPsig(LITREF(lit_756),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_361 = YPmet(FUNCODEREF(fun_find_binding_361),LITREF(lit_755),T12,ENVNUL,PNUL,sloc(1237));
  T15 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T16 = fun_find_binding_361;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T16);
  VARSET(YevalSastYfind_binding,T14);
  lit_758 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T17 = YPsig(LITREF(lit_758),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_362 = YPmet(FUNCODEREF(fun_find_binding_362),LITREF(lit_755),T17,ENVNUL,PNUL,sloc(1247));
  T19 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T20 = fun_find_binding_362;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YevalSastYfind_binding,T18);
  lit_759 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T21 = YPsig(LITREF(lit_759),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_363 = YPmet(FUNCODEREF(fun_find_binding_363),LITREF(lit_755),T21,ENVNUL,PNUL,sloc(1250));
  T23 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T24 = fun_find_binding_363;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YevalSastYfind_binding,T22);
  lit_760 = YPPsym((P)"frame-bindings");
  lit_761 = YPPlist(1,YPPsym((P)"env"));
  T25 = YPsig(LITREF(lit_761),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_364 = YPmet(FUNCODEREF(fun_frame_bindings_364),LITREF(lit_760),T25,ENVNUL,PNUL,sloc(1256));
  T27 = VARREF_OR(YevalSastYframe_bindings,YPfalse);
  T28 = fun_frame_bindings_364;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YevalSastYframe_bindings,T26);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_762 = YPPsym((P)"register-magic-binding");
  lit_763 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T29 = YPsig(LITREF(lit_763),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_365 = YPmet(FUNCODEREF(fun_register_magic_binding_365),LITREF(lit_762),T29,ENVNUL,PNUL,sloc(1264));
  T31 = VARREF_OR(YevalSastYregister_magic_binding,YPfalse);
  T32 = fun_register_magic_binding_365;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YevalSastYregister_magic_binding,T30);
  lit_764 = YPPsym((P)"magic-bindings");
  T33 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_366 = YPmet(FUNCODEREF(fun_magic_bindings_366),LITREF(lit_764),T33,ENVNUL,PNUL,sloc(1267));
  T35 = VARREF_OR(YevalSastYmagic_bindings,YPfalse);
  T36 = fun_magic_bindings_366;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YevalSastYmagic_bindings,T34);
  lit_765 = YPPlist(1,YPPsym((P)"exp"));
  lit_766 = YPPlist(1,YPPsym((P)"return"));
  lit_767 = YPPsym((P)"x-1452");
  lit_768 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_769 = YPPsym((P)"define-magic-binding");
  lit_770 = YPsb((P)"special-");
  lit_771 = YPsb((P)"$sexpr-");
  lit_772 = YPsb((P)"-tag");
  lit_773 = YPPsym((P)"dv");
  lit_774 = YPPsym((P)"new");
  lit_775 = YPPsym((P)"binding-handler");
  lit_776 = YPPsym((P)"fun");
  T39 = YPsig(LITREF(lit_768),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1452_367 = YPmet(FUNCODEREF(fun_x_1452_367),LITREF(lit_767),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(LITREF(lit_766),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(LITREF(lit_765),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_369 = YPmet(FUNCODEREF(fun_369),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T40 = fun_369;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T40);
  lit_777 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T41 = YPsig(LITREF(lit_777),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T41,ENVNUL,PNUL,sloc(1282));
  T43 = fun_370;
  T42 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T43,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T42);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_729),VARREF(YevalSastYspecial_if));
  lit_778 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T44 = YPsig(LITREF(lit_778),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T44,ENVNUL,PNUL,sloc(1286));
  T46 = fun_371;
  T45 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T46,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T45);
  lit_779 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_779),VARREF(YevalSastYspecial_begin));
  lit_780 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_780));
  lit_781 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T47 = YPsig(LITREF(lit_781),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T47,ENVNUL,PNUL,sloc(1291));
  T49 = fun_372;
  T48 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T49,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T48);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_780),VARREF(YevalSastYspecial_Praw));
  lit_782 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T50 = YPsig(LITREF(lit_782),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T50,ENVNUL,PNUL,sloc(1294));
  T52 = fun_373;
  T51 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T52,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T51);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_556),VARREF(YevalSastYspecial_quote));
  lit_783 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T53 = YPsig(LITREF(lit_783),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T53,ENVNUL,PNUL,sloc(1297));
  T55 = fun_374;
  T54 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T55,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T54);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_10),VARREF(YevalSastYspecial_set));
  lit_784 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPsig(LITREF(lit_784),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPmet(FUNCODEREF(fun_375),YPfalse,T56,ENVNUL,PNUL,sloc(1301));
  T58 = fun_375;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T58,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T57);
  lit_785 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_785),VARREF(YevalSastYspecial_define));
  lit_786 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_786));
  lit_787 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPsig(LITREF(lit_787),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T59,ENVNUL,PNUL,sloc(1307));
  T61 = fun_376;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T61,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T60);
  lit_788 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_788),VARREF(YevalSastYspecial_define_dynamic));
  lit_789 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T62 = YPsig(LITREF(lit_789),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T62,ENVNUL,PNUL,sloc(1311));
  T64 = fun_377;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T64,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T63);
  lit_790 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_790),VARREF(YevalSastYspecial_define_syntax));
  lit_791 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_791));
  lit_792 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T65 = YPsig(LITREF(lit_792),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_378 = YPmet(FUNCODEREF(fun_378),YPfalse,T65,ENVNUL,PNUL,sloc(1317));
  T67 = fun_378;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T67,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T66);
  lit_793 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_793),VARREF(YevalSastYspecial_define_static_syntax));
  lit_794 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPsig(LITREF(lit_794),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T68,ENVNUL,PNUL,sloc(1321));
  T70 = fun_379;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T70,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T69);
  lit_795 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_795),VARREF(YevalSastYspecial_define_method));
  lit_796 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T71 = YPsig(LITREF(lit_796),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T71,ENVNUL,PNUL,sloc(1326));
  T73 = fun_380;
  T72 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T73,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T72);
  lit_797 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_797),VARREF(YevalSastYspecial_define_generic));
  lit_798 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T74 = YPsig(LITREF(lit_798),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T74,ENVNUL,PNUL,sloc(1330));
  T76 = fun_381;
  T75 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T76,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T75);
  lit_799 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_799),VARREF(YevalSastYspecial_define_function));
  lit_800 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T77 = YPsig(LITREF(lit_800),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T77,ENVNUL,PNUL,sloc(1335));
  T79 = fun_382;
  T78 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T79,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T78);
  lit_801 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_801),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_613));
  lit_802 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T80 = YPsig(LITREF(lit_802),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T80,ENVNUL,PNUL,sloc(1341));
  T82 = fun_383;
  T81 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T82,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T81);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_613),VARREF(YevalSastYspecial_boundQ));
  lit_803 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T83 = YPsig(LITREF(lit_803),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T83,ENVNUL,PNUL,sloc(1344));
  T85 = fun_384;
  T84 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T85,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T84);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_7),VARREF(YevalSastYspecial_let));
  lit_804 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T86 = YPsig(LITREF(lit_804),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T86,ENVNUL,PNUL,sloc(1350));
  T88 = fun_385;
  T87 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T88,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T87);
  lit_805 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_805),VARREF(YevalSastYspecial_def));
  lit_806 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T89 = YPsig(LITREF(lit_806),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T89,ENVNUL,PNUL,sloc(1353));
  T91 = fun_386;
  T90 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T91,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T90);
  lit_807 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_807),VARREF(YevalSastYspecial_locals));
  lit_808 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T92 = YPsig(LITREF(lit_808),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T92,ENVNUL,PNUL,sloc(1358));
  T94 = fun_387;
  T93 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T94,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T93);
  lit_809 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_809),VARREF(YevalSastYspecial_iterate));
  lit_810 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T95 = YPsig(LITREF(lit_810),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T95,ENVNUL,PNUL,sloc(1361));
  T97 = fun_388;
  T96 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T97,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T96);
  lit_811 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_811),VARREF(YevalSastYspecial_bind_exit));
  lit_812 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T98 = YPsig(LITREF(lit_812),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T98,ENVNUL,PNUL,sloc(1365));
  T100 = fun_389;
  T99 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T100,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T99);
  lit_813 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_813),VARREF(YevalSastYspecial_unwind_protect));
  lit_814 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T101 = YPsig(LITREF(lit_814),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T101,ENVNUL,PNUL,sloc(1371));
  T103 = fun_390;
  T102 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T103,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T102);
  lit_815 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_815),VARREF(YevalSastYspecial_monitor));
  lit_816 = YPPsym((P)"pairize");
  lit_817 = YPPlist(1,YPPsym((P)"args"));
  T104 = YPsig(LITREF(lit_817),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_391 = YPmet(FUNCODEREF(fun_pairize_391),LITREF(lit_816),T104,ENVNUL,PNUL,sloc(1375));
  T106 = VARREF_OR(YevalSastYpairize,YPfalse);
  T107 = fun_pairize_391;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSastYpairize,T105);
  lit_818 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_819 = YPPsym((P)"fab-class");
  T108 = YPsig(LITREF(lit_818),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T108,ENVNUL,PNUL,sloc(1380));
  T110 = fun_392;
  T109 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T110,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T109);
  lit_820 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_820),VARREF(YevalSastYspecial_define_class));
  lit_821 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_822 = YPPsym((P)"%prop");
  lit_823 = YPPsym((P)"%prop-unbound-error");
  T111 = YPsig(LITREF(lit_821),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T111,ENVNUL,PNUL,sloc(1385));
  T113 = fun_393;
  T112 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T113,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T112);
  lit_824 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_824),VARREF(YevalSastYspecial_prop));
  lit_825 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_825));
  lit_826 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T116 = YPsig(LITREF(lit_826),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T115 = fun_394 = YPmet(FUNCODEREF(fun_394),YPfalse,T116,ENVNUL,PNUL,sloc(1408));
  T119 = fun_394;
  T118 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T119,VARREF(YevalSastYbinding_freeQ),YPfalse);
  T117 = VARSET(YevalSastYspecial_compile_time,T118);
  T114 = T117;
  return T114;
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
  P T128,T129,T130,T131,T132,T133,T134;
DEFCREGS();
loop:
  lit_827 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_827),VARREF(YevalSastYspecial_compile_time));
  lit_828 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_828));
  lit_829 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_829),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_395 = YPmet(FUNCODEREF(fun_395),YPfalse,T0,ENVNUL,PNUL,sloc(1413));
  T2 = fun_395;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T1);
  lit_830 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_830),VARREF(YevalSastYspecial_compile_time_also));
  lit_831 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_831));
  lit_832 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPsig(LITREF(lit_832),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T3,ENVNUL,PNUL,sloc(1418));
  T5 = fun_396;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T4);
  lit_833 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_833),VARREF(YevalSastYspecial_define_primitive));
  lit_834 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPsig(LITREF(lit_834),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T6,ENVNUL,PNUL,sloc(1428));
  T8 = fun_397;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T8,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T7);
  lit_835 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_835),VARREF(YevalSastYspecial_quasiquote));
  lit_836 = YPPsym((P)"ast-macro-expand");
  lit_837 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = YPsig(LITREF(lit_837),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_398 = YPmet(FUNCODEREF(fun_ast_macro_expand_398),LITREF(lit_836),T9,ENVNUL,PNUL,sloc(1431));
  T11 = VARREF_OR(YevalSastYast_macro_expand,YPfalse);
  T12 = fun_ast_macro_expand_398;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YevalSastYast_macro_expand,T10);
  lit_838 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T13 = YPsig(LITREF(lit_838),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T13,ENVNUL,PNUL,sloc(1440));
  T15 = fun_399;
  T14 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T15,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T14);
  lit_839 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_839),VARREF(YevalSastYspecial_macro_expand));
  lit_840 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T16 = YPsig(LITREF(lit_840),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T16,ENVNUL,PNUL,sloc(1444));
  T18 = fun_400;
  T17 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T18,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T17);
  lit_841 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_841),VARREF(YevalSastYspecial_syntax_if));
  lit_842 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_842));
  lit_843 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T19 = YPsig(LITREF(lit_843),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_401 = YPmet(FUNCODEREF(fun_401),YPfalse,T19,ENVNUL,PNUL,sloc(1454));
  T21 = fun_401;
  T20 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T21,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T20);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_842),VARREF(YevalSastYspecial_export));
  lit_844 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_844));
  lit_845 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T22 = YPsig(LITREF(lit_845),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T22,ENVNUL,PNUL,sloc(1459));
  T24 = fun_402;
  T23 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T24,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T23);
  lit_846 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_846),VARREF(YevalSastYspecial_use_module));
  lit_847 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_847));
  lit_848 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T25 = YPsig(LITREF(lit_848),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T25,ENVNUL,PNUL,sloc(1464));
  T27 = fun_403;
  T26 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T27,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T26);
  lit_849 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_849),VARREF(YevalSastYspecial_use_mangle_module));
  lit_850 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_850));
  lit_851 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T28 = YPsig(LITREF(lit_851),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_404 = YPmet(FUNCODEREF(fun_404),YPfalse,T28,ENVNUL,PNUL,sloc(1469));
  T30 = fun_404;
  T29 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T30,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T29);
  lit_852 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_852),VARREF(YevalSastYspecial_use_include));
  lit_853 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_853));
  lit_854 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T31 = YPsig(LITREF(lit_854),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_405 = YPmet(FUNCODEREF(fun_405),YPfalse,T31,ENVNUL,PNUL,sloc(1474));
  T33 = fun_405;
  T32 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T33,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T32);
  lit_855 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_855),VARREF(YevalSastYspecial_use_library));
  lit_856 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_856));
  lit_857 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T34 = YPsig(LITREF(lit_857),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_406 = YPmet(FUNCODEREF(fun_406),YPfalse,T34,ENVNUL,PNUL,sloc(1479));
  T36 = fun_406;
  T35 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_578),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T36,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T35);
  lit_858 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_858),VARREF(YevalSastYspecial_useSexport_module));
  lit_859 = YPPsym((P)"<transaction>");
  T38 = (P)YPpair(VARREF(YLanyG),Ynil);
  T37 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_859),T38);
  VARSET(YevalSastYLtransactionG,T37);
  lit_860 = YPPsym((P)"transaction-implemented-bindings");
  lit_861 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_861),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_407 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_407),LITREF(lit_860),T39,ENVNUL,PNUL,sloc(1509));
  T41 = VARREF_OR(YevalSastYtransaction_implemented_bindings,YPfalse);
  T42 = fun_transaction_implemented_bindings_407;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T42);
  VARSET(YevalSastYtransaction_implemented_bindings,T40);
  lit_862 = YPPsym((P)"transaction-implemented-bindings-setter");
  lit_863 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_863),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_408 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_408),LITREF(lit_862),T43,ENVNUL,PNUL,sloc(1509));
  T45 = VARREF_OR(YevalSastYtransaction_implemented_bindings_setter,YPfalse);
  T46 = fun_transaction_implemented_bindings_setter_408;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T44);
  lit_864 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_864),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_409 = YPmet(FUNCODEREF(fun_409),YPfalse,T47,ENVNUL,PNUL,sloc(1509));
  T48 = fun_409;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T48);
  lit_865 = YPPsym((P)"transaction-dependents");
  lit_866 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_866),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_410 = YPmet(FUNCODEREF(fun_transaction_dependents_410),LITREF(lit_865),T49,ENVNUL,PNUL,sloc(1510));
  T51 = VARREF_OR(YevalSastYtransaction_dependents,YPfalse);
  T52 = fun_transaction_dependents_410;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T52);
  VARSET(YevalSastYtransaction_dependents,T50);
  lit_867 = YPPsym((P)"transaction-dependents-setter");
  lit_868 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_868),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_411 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_411),LITREF(lit_867),T53,ENVNUL,PNUL,sloc(1510));
  T55 = VARREF_OR(YevalSastYtransaction_dependents_setter,YPfalse);
  T56 = fun_transaction_dependents_setter_411;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YevalSastYtransaction_dependents_setter,T54);
  lit_869 = YPPlist(1,YPPsym((P)"_x"));
  T57 = YPsig(LITREF(lit_869),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_412 = YPmet(FUNCODEREF(fun_412),YPfalse,T57,ENVNUL,PNUL,sloc(1510));
  T58 = fun_412;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T58);
  VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  lit_870 = YPPsym((P)"transaction-register-implemented-binding");
  lit_871 = YPPlist(1,YPPsym((P)"b"));
  lit_872 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T59 = YPsig(LITREF(lit_871),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_870),T59,ENVNUL,PNUL,sloc(1514));
  T60 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T60);
  lit_873 = YPPsym((P)"transaction-register-dependent");
  lit_874 = YPPlist(1,YPPsym((P)"d"));
  lit_875 = YPsb((P)"Can't register dependent (no subtransaction)");
  T61 = YPsig(LITREF(lit_874),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_873),T61,ENVNUL,PNUL,sloc(1520));
  T62 = YevalSastYtransaction_register_dependent;
  VARSET(YevalSastYtransaction_register_dependent,T62);
  lit_876 = YPPsym((P)"transaction-empty?");
  lit_877 = YPPlist(1,YPPsym((P)"t"));
  T63 = YPsig(LITREF(lit_877),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_876),T63,ENVNUL,PNUL,sloc(1525));
  T64 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T64);
  lit_878 = YPPsym((P)"merge-transactions!");
  lit_879 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_880 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_881 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T67 = YPsig(LITREF(lit_880),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T67,ENVNUL,PNUL,sloc(1540));
  T66 = YPsig(LITREF(lit_881),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_417 = YPmet(FUNCODEREF(fun_417),YPfalse,T66,ENVNUL,PNUL,sloc(1541));
  T65 = YPsig(LITREF(lit_879),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_878),T65,ENVNUL,PNUL,sloc(1529));
  T68 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T68);
  lit_882 = YPPsym((P)"roll-back-transaction");
  lit_883 = YPPlist(1,YPPsym((P)"t"));
  lit_884 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"junk"));
  lit_885 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"junk"));
  T71 = YPsig(LITREF(lit_884),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_419 = YPmet(FUNCODEREF(fun_419),YPfalse,T71,ENVNUL,PNUL,sloc(1546));
  T70 = YPsig(LITREF(lit_885),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T70,ENVNUL,PNUL,sloc(1549));
  T69 = YPsig(LITREF(lit_883),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_882),T69,ENVNUL,PNUL,sloc(1544));
  T72 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T72);
  lit_886 = YPPsym((P)"call-with-subtransaction");
  lit_887 = YPPlist(2,YPPsym((P)"module"),YPPsym((P)"thunk"));
  T75 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_422 = YPmet(FUNCODEREF(fun_422),YPfalse,T75,ENVNUL,PNUL,sloc(1555));
  T74 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T74,ENVNUL,PNUL,sloc(1567));
  T73 = YPsig(LITREF(lit_887),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_886),T73,ENVNUL,PNUL,sloc(1552));
  T76 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T76);
  lit_888 = YPPlist(1,YPPsym((P)"exp"));
  lit_889 = YPPlist(1,YPPsym((P)"return"));
  lit_890 = YPPsym((P)"x-1456");
  lit_891 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_892 = YPPsym((P)"with-subtransaction");
  T79 = YPsig(LITREF(lit_891),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1456_425 = YPmet(FUNCODEREF(fun_x_1456_425),LITREF(lit_890),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_889),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_426 = YPmet(FUNCODEREF(fun_426),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_888),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_427 = YPmet(FUNCODEREF(fun_427),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T80 = fun_427;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T80);
  lit_893 = YPPsym((P)"objectify-with-subtransaction");
  lit_894 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T82 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_428 = YPmet(FUNCODEREF(fun_428),YPfalse,T82,ENVNUL,PNUL,sloc(1582));
  T81 = YPsig(LITREF(lit_894),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_893),T81,ENVNUL,PNUL,sloc(1581));
  T83 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T83);
  lit_895 = YPPsym((P)"<module-loader>");
  T85 = (P)YPpair(VARREF(YLanyG),Ynil);
  T84 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_895),T85);
  VARSET(YevalSastYLmodule_loaderG,T84);
  lit_896 = YPPsym((P)"module-loader-modules");
  lit_897 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_897),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_430 = YPmet(FUNCODEREF(fun_module_loader_modules_430),LITREF(lit_896),T86,ENVNUL,PNUL,sloc(1606));
  T88 = VARREF_OR(YevalSastYmodule_loader_modules,YPfalse);
  T89 = fun_module_loader_modules_430;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSastYmodule_loader_modules,T87);
  lit_898 = YPPsym((P)"module-loader-modules-setter");
  lit_899 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_899),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_431 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_431),LITREF(lit_898),T90,ENVNUL,PNUL,sloc(1606));
  T92 = VARREF_OR(YevalSastYmodule_loader_modules_setter,YPfalse);
  T93 = fun_module_loader_modules_setter_431;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSastYmodule_loader_modules_setter,T91);
  lit_900 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_900),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T94,ENVNUL,PNUL,sloc(1606));
  T95 = fun_432;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T95);
  lit_901 = YPPsym((P)"module-loader-stack");
  lit_902 = YPPlist(1,YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_902),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_433 = YPmet(FUNCODEREF(fun_module_loader_stack_433),LITREF(lit_901),T96,ENVNUL,PNUL,sloc(1609));
  T98 = VARREF_OR(YevalSastYmodule_loader_stack,YPfalse);
  T99 = fun_module_loader_stack_433;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSastYmodule_loader_stack,T97);
  lit_903 = YPPsym((P)"module-loader-stack-setter");
  lit_904 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_904),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_434 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_434),LITREF(lit_903),T100,ENVNUL,PNUL,sloc(1609));
  T102 = VARREF_OR(YevalSastYmodule_loader_stack_setter,YPfalse);
  T103 = fun_module_loader_stack_setter_434;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSastYmodule_loader_stack_setter,T101);
  lit_905 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_905),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_435 = YPmet(FUNCODEREF(fun_435),YPfalse,T104,ENVNUL,PNUL,sloc(1609));
  T105 = fun_435;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T105);
  lit_906 = YPPsym((P)"<module>");
  T107 = (P)YPpair(VARREF(YLanyG),Ynil);
  T106 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_906),T107);
  VARSET(YevalSastYLmoduleG,T106);
  lit_907 = YPPsym((P)"module-name");
  lit_908 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_908),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_436 = YPmet(FUNCODEREF(fun_module_name_436),LITREF(lit_907),T108,ENVNUL,PNUL,sloc(1614));
  T110 = VARREF_OR(YevalSastYmodule_name,YPfalse);
  T111 = fun_module_name_436;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSastYmodule_name,T109);
  lit_909 = YPPsym((P)"module-name-setter");
  lit_910 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_910),YPPlist(2,VARREF(YLsymG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_437 = YPmet(FUNCODEREF(fun_module_name_setter_437),LITREF(lit_909),T112,ENVNUL,PNUL,sloc(1614));
  T114 = VARREF_OR(YevalSastYmodule_name_setter,YPfalse);
  T115 = fun_module_name_setter_437;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSastYmodule_name_setter,T113);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),VARREF(YevalSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_911 = YPPsym((P)"module-mangled-name");
  lit_912 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_912),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_438 = YPmet(FUNCODEREF(fun_module_mangled_name_438),LITREF(lit_911),T116,ENVNUL,PNUL,sloc(1615));
  T118 = VARREF_OR(YevalSastYmodule_mangled_name,YPfalse);
  T119 = fun_module_mangled_name_438;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YevalSastYmodule_mangled_name,T117);
  lit_913 = YPPsym((P)"module-mangled-name-setter");
  lit_914 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T121 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T120 = YPsig(LITREF(lit_914),YPPlist(2,T121,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_439 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_439),LITREF(lit_913),T120,ENVNUL,PNUL,sloc(1615));
  T123 = VARREF_OR(YevalSastYmodule_mangled_name_setter,YPfalse);
  T124 = fun_module_mangled_name_setter_439;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSastYmodule_mangled_name_setter,T122);
  lit_915 = YPPlist(1,YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_915),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_440 = YPmet(FUNCODEREF(fun_440),YPfalse,T125,ENVNUL,PNUL,sloc(1615));
  T126 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T127 = fun_440;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T126,T127);
  lit_916 = YPPsym((P)"module-mangled-string-name");
  lit_917 = YPPlist(1,YPPsym((P)"_x"));
  T130 = YPsig(LITREF(lit_917),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T129 = fun_module_mangled_string_name_441 = YPmet(FUNCODEREF(fun_module_mangled_string_name_441),LITREF(lit_916),T130,ENVNUL,PNUL,sloc(1616));
  T133 = VARREF_OR(YevalSastYmodule_mangled_string_name,YPfalse);
  T134 = fun_module_mangled_string_name_441;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  T131 = VARSET(YevalSastYmodule_mangled_string_name,T132);
  T128 = T131;
  return T128;
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
  P T176,T177,T178,T179,T180;
DEFCREGS();
loop:
  lit_918 = YPPsym((P)"module-mangled-string-name-setter");
  lit_919 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T1 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T0 = YPsig(LITREF(lit_919),YPPlist(2,T1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_442 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_442),LITREF(lit_918),T0,ENVNUL,PNUL,sloc(1616));
  T3 = VARREF_OR(YevalSastYmodule_mangled_string_name_setter,YPfalse);
  T4 = fun_module_mangled_string_name_setter_442;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T4);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T2);
  lit_920 = YPPlist(1,YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_920),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_443 = YPmet(FUNCODEREF(fun_443),YPfalse,T5,ENVNUL,PNUL,sloc(1616));
  T6 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T7 = fun_443;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T6,T7);
  lit_921 = YPPsym((P)"module-target-environment");
  lit_922 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_922),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_444 = YPmet(FUNCODEREF(fun_module_target_environment_444),LITREF(lit_921),T8,ENVNUL,PNUL,sloc(1618));
  T10 = VARREF_OR(YevalSastYmodule_target_environment,YPfalse);
  T11 = fun_module_target_environment_444;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSastYmodule_target_environment,T9);
  lit_923 = YPPsym((P)"module-target-environment-setter");
  lit_924 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_924),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_445 = YPmet(FUNCODEREF(fun_module_target_environment_setter_445),LITREF(lit_923),T12,ENVNUL,PNUL,sloc(1618));
  T14 = VARREF_OR(YevalSastYmodule_target_environment_setter,YPfalse);
  T15 = fun_module_target_environment_setter_445;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSastYmodule_target_environment_setter,T13);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_925 = YPPsym((P)"module-syntax-environment");
  lit_926 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_926),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_446 = YPmet(FUNCODEREF(fun_module_syntax_environment_446),LITREF(lit_925),T16,ENVNUL,PNUL,sloc(1619));
  T18 = VARREF_OR(YevalSastYmodule_syntax_environment,YPfalse);
  T19 = fun_module_syntax_environment_446;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSastYmodule_syntax_environment,T17);
  lit_927 = YPPsym((P)"module-syntax-environment-setter");
  lit_928 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_928),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_447 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_447),LITREF(lit_927),T20,ENVNUL,PNUL,sloc(1619));
  T22 = VARREF_OR(YevalSastYmodule_syntax_environment_setter,YPfalse);
  T23 = fun_module_syntax_environment_setter_447;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSastYmodule_syntax_environment_setter,T21);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_929 = YPPsym((P)"%module-exports");
  lit_930 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_930),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_448 = YPmet(FUNCODEREF(fun_Pmodule_exports_448),LITREF(lit_929),T24,ENVNUL,PNUL,sloc(1621));
  T26 = VARREF_OR(YevalSastYPmodule_exports,YPfalse);
  T27 = fun_Pmodule_exports_448;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSastYPmodule_exports,T25);
  lit_931 = YPPsym((P)"%module-exports-setter");
  lit_932 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_932),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_449 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_449),LITREF(lit_931),T28,ENVNUL,PNUL,sloc(1621));
  T30 = VARREF_OR(YevalSastYPmodule_exports_setter,YPfalse);
  T31 = fun_Pmodule_exports_setter_449;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSastYPmodule_exports_setter,T29);
  lit_933 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_933),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_450 = YPmet(FUNCODEREF(fun_450),YPfalse,T32,ENVNUL,PNUL,sloc(1621));
  T33 = fun_450;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),VARREF(YevalSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T33);
  lit_934 = YPPsym((P)"module-data-processed?");
  lit_935 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_935),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_451 = YPmet(FUNCODEREF(fun_module_data_processedQ_451),LITREF(lit_934),T34,ENVNUL,PNUL,sloc(1622));
  T36 = VARREF_OR(YevalSastYmodule_data_processedQ,YPfalse);
  T37 = fun_module_data_processedQ_451;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSastYmodule_data_processedQ,T35);
  lit_936 = YPPsym((P)"module-data-processed?-setter");
  lit_937 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_937),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_452 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_452),LITREF(lit_936),T38,ENVNUL,PNUL,sloc(1622));
  T40 = VARREF_OR(YevalSastYmodule_data_processedQ_setter,YPfalse);
  T41 = fun_module_data_processedQ_setter_452;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSastYmodule_data_processedQ_setter,T39);
  lit_938 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_938),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_453 = YPmet(FUNCODEREF(fun_453),YPfalse,T42,ENVNUL,PNUL,sloc(1622));
  T43 = fun_453;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T43);
  lit_939 = YPPsym((P)"module-runtime-data");
  lit_940 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_940),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_454 = YPmet(FUNCODEREF(fun_module_runtime_data_454),LITREF(lit_939),T44,ENVNUL,PNUL,sloc(1623));
  T46 = VARREF_OR(YevalSastYmodule_runtime_data,YPfalse);
  T47 = fun_module_runtime_data_454;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSastYmodule_runtime_data,T45);
  lit_941 = YPPsym((P)"module-runtime-data-setter");
  lit_942 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_942),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_455 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_455),LITREF(lit_941),T48,ENVNUL,PNUL,sloc(1623));
  T50 = VARREF_OR(YevalSastYmodule_runtime_data_setter,YPfalse);
  T51 = fun_module_runtime_data_setter_455;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSastYmodule_runtime_data_setter,T49);
  lit_943 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_943),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_456 = YPmet(FUNCODEREF(fun_456),YPfalse,T52,ENVNUL,PNUL,sloc(1623));
  T53 = fun_456;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T53);
  lit_944 = YPPsym((P)"module-transaction");
  lit_945 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_945),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_457 = YPmet(FUNCODEREF(fun_module_transaction_457),LITREF(lit_944),T54,ENVNUL,PNUL,sloc(1624));
  T56 = VARREF_OR(YevalSastYmodule_transaction,YPfalse);
  T57 = fun_module_transaction_457;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSastYmodule_transaction,T55);
  lit_946 = YPPsym((P)"module-transaction-setter");
  lit_947 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_947),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_458 = YPmet(FUNCODEREF(fun_module_transaction_setter_458),LITREF(lit_946),T58,ENVNUL,PNUL,sloc(1624));
  T60 = VARREF_OR(YevalSastYmodule_transaction_setter,YPfalse);
  T61 = fun_module_transaction_setter_458;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalSastYmodule_transaction_setter,T59);
  lit_948 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_948),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_459 = YPmet(FUNCODEREF(fun_459),YPfalse,T62,ENVNUL,PNUL,sloc(1624));
  T63 = fun_459;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T63);
  lit_949 = YPPsym((P)"module-uses-c-files");
  lit_950 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_950),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_460 = YPmet(FUNCODEREF(fun_module_uses_c_files_460),LITREF(lit_949),T64,ENVNUL,PNUL,sloc(1625));
  T66 = VARREF_OR(YevalSastYmodule_uses_c_files,YPfalse);
  T67 = fun_module_uses_c_files_460;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSastYmodule_uses_c_files,T65);
  lit_951 = YPPsym((P)"module-uses-c-files-setter");
  lit_952 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_952),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_setter_461 = YPmet(FUNCODEREF(fun_module_uses_c_files_setter_461),LITREF(lit_951),T68,ENVNUL,PNUL,sloc(1625));
  T70 = VARREF_OR(YevalSastYmodule_uses_c_files_setter,YPfalse);
  T71 = fun_module_uses_c_files_setter_461;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YevalSastYmodule_uses_c_files_setter,T69);
  lit_953 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_953),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_462 = YPmet(FUNCODEREF(fun_462),YPfalse,T72,ENVNUL,PNUL,sloc(1625));
  T73 = fun_462;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_files),VARREF(YevalSastYmodule_uses_c_files_setter),VARREF(YgooScolsSvecYLvecG),T73);
  lit_954 = YPPsym((P)"module-uses-c-includes");
  lit_955 = YPPlist(1,YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_955),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_463 = YPmet(FUNCODEREF(fun_module_uses_c_includes_463),LITREF(lit_954),T74,ENVNUL,PNUL,sloc(1626));
  T76 = VARREF_OR(YevalSastYmodule_uses_c_includes,YPfalse);
  T77 = fun_module_uses_c_includes_463;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSastYmodule_uses_c_includes,T75);
  lit_956 = YPPsym((P)"module-uses-c-includes-setter");
  lit_957 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_957),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_setter_464 = YPmet(FUNCODEREF(fun_module_uses_c_includes_setter_464),LITREF(lit_956),T78,ENVNUL,PNUL,sloc(1626));
  T80 = VARREF_OR(YevalSastYmodule_uses_c_includes_setter,YPfalse);
  T81 = fun_module_uses_c_includes_setter_464;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSastYmodule_uses_c_includes_setter,T79);
  lit_958 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_958),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_465 = YPmet(FUNCODEREF(fun_465),YPfalse,T82,ENVNUL,PNUL,sloc(1626));
  T83 = fun_465;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_includes),VARREF(YevalSastYmodule_uses_c_includes_setter),VARREF(YgooScolsSvecYLvecG),T83);
  lit_959 = YPPsym((P)"module-uses-c-libraries");
  lit_960 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_960),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_466 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_466),LITREF(lit_959),T84,ENVNUL,PNUL,sloc(1627));
  T86 = VARREF_OR(YevalSastYmodule_uses_c_libraries,YPfalse);
  T87 = fun_module_uses_c_libraries_466;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YevalSastYmodule_uses_c_libraries,T85);
  lit_961 = YPPsym((P)"module-uses-c-libraries-setter");
  lit_962 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_962),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_setter_467 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_setter_467),LITREF(lit_961),T88,ENVNUL,PNUL,sloc(1627));
  T90 = VARREF_OR(YevalSastYmodule_uses_c_libraries_setter,YPfalse);
  T91 = fun_module_uses_c_libraries_setter_467;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSastYmodule_uses_c_libraries_setter,T89);
  lit_963 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_963),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_468 = YPmet(FUNCODEREF(fun_468),YPfalse,T92,ENVNUL,PNUL,sloc(1627));
  T93 = fun_468;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_libraries),VARREF(YevalSastYmodule_uses_c_libraries_setter),VARREF(YgooScolsSvecYLvecG),T93);
  VARSET(YevalSastYmodule_exports_setter,VARREF(YevalSastYPmodule_exports_setter));
  lit_964 = YPPsym((P)"module-exports");
  lit_965 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPsig(LITREF(lit_965),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_469 = YPmet(FUNCODEREF(fun_module_exports_469),LITREF(lit_964),T94,ENVNUL,PNUL,sloc(1630));
  T96 = VARREF_OR(YevalSastYmodule_exports,YPfalse);
  T97 = fun_module_exports_469;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YevalSastYmodule_exports,T95);
  lit_966 = YPPsym((P)"set-module-environments");
  lit_967 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"syntax-env"),YPPsym((P)"target-env"));
  T98 = YPsig(LITREF(lit_967),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_966),T98,ENVNUL,PNUL,sloc(1640));
  T99 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T99);
  lit_968 = YPPsym((P)"do-module-loader-modules");
  lit_969 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"loader"));
  lit_970 = YPPlist(1,YPPsym((P)"mod"));
  T101 = YPsig(LITREF(lit_970),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_471 = YPmet(FUNCODEREF(fun_471),YPfalse,T101,ENVNUL,PNUL,sloc(1648));
  T100 = YPsig(LITREF(lit_969),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_968),T100,ENVNUL,PNUL,sloc(1647));
  T102 = YevalSastYdo_module_loader_modules;
  VARSET(YevalSastYdo_module_loader_modules,T102);
  lit_971 = YPPsym((P)"module-loader-module-type");
  lit_972 = YPPlist(1,YPPsym((P)"loader"));
  T103 = YPsig(LITREF(lit_972),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_473 = YPmet(FUNCODEREF(fun_module_loader_module_type_473),LITREF(lit_971),T103,ENVNUL,PNUL,sloc(1653));
  T105 = VARREF_OR(YevalSastYmodule_loader_module_type,YPfalse);
  T106 = fun_module_loader_module_type_473;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSastYmodule_loader_module_type,T104);
  lit_973 = YPPsym((P)"register-module!");
  lit_974 = YPPlist(2,YPPsym((P)"module-loader"),YPPsym((P)"mod"));
  T107 = YPsig(LITREF(lit_974),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_973),T107,ENVNUL,PNUL,sloc(1657));
  T108 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T108);
  lit_975 = YPPsym((P)"probe-module");
  lit_976 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T109 = YPsig(LITREF(lit_976),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_975),T109,ENVNUL,PNUL,sloc(1663));
  T110 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T110);
  lit_977 = YPPsym((P)"load-and-register-module");
  lit_978 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_979 = YPsb((P)"  ");
  lit_980 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_981 = YPsb((P)"%s[Loading module %s...\n");
  lit_982 = YPsb((P)"%s]\n");
  T113 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_476 = YPmet(FUNCODEREF(fun_476),YPfalse,T113,ENVNUL,PNUL,sloc(1684));
  T112 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_477 = YPmet(FUNCODEREF(fun_477),YPfalse,T112,ENVNUL,PNUL,sloc(1685));
  T111 = YPsig(LITREF(lit_978),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_977),T111,ENVNUL,PNUL,sloc(1668));
  T114 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T114);
  lit_983 = YPPsym((P)"load-module");
  lit_984 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T116 = YPsig(LITREF(lit_984),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T115 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_983),T116,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T115);
  lit_985 = YPPsym((P)"export-binding!");
  lit_986 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"name"),YPPsym((P)"binding"));
  lit_987 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T118 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T117 = YPsig(LITREF(lit_986),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T118,Ynil);
  YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_985),T117,ENVNUL,PNUL,sloc(1701));
  T119 = YevalSastYexport_bindingX;
  VARSET(YevalSastYexport_bindingX,T119);
  lit_988 = YPPsym((P)"binding-native-to?");
  lit_989 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"module"));
  T120 = YPsig(LITREF(lit_989),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_988),T120,ENVNUL,PNUL,sloc(1714));
  T121 = YevalSastYbinding_native_toQ;
  VARSET(YevalSastYbinding_native_toQ,T121);
  lit_990 = YPPsym((P)"report-undefined-global-bindings");
  lit_991 = YPPlist(1,YPPsym((P)"mod"));
  lit_992 = YPPlist(1,YPPsym((P)"binding"));
  lit_993 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T123 = YPsig(LITREF(lit_992),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_481 = YPmet(FUNCODEREF(fun_481),YPfalse,T123,ENVNUL,PNUL,sloc(1720));
  T122 = YPsig(LITREF(lit_991),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_990),T122,ENVNUL,PNUL,sloc(1718));
  T124 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T124);
  lit_994 = YPPsym((P)"compute-transitive-users");
  lit_995 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_996 = YPPsym((P)"add-user");
  lit_997 = YPPlist(1,YPPsym((P)"modname"));
  lit_998 = YPPlist(1,YPPsym((P)"mod"));
  lit_999 = YPPlist(1,YPPsym((P)"uses-mod"));
  lit_1000 = YPPlist(1,YPPsym((P)"v"));
  T129 = YPsig(LITREF(lit_999),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_483 = YPmet(FUNCODEREF(fun_483),YPfalse,T129,ENVNUL,PNUL,sloc(1739));
  T128 = YPsig(LITREF(lit_998),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_484 = YPmet(FUNCODEREF(fun_484),YPfalse,T128,ENVNUL,PNUL,sloc(1737));
  T127 = YPsig(LITREF(lit_997),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_485 = YPmet(FUNCODEREF(fun_add_user_485),LITREF(lit_996),T127,ENVNUL,PNUL,sloc(1733));
  T126 = YPsig(LITREF(lit_1000),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_486 = YPmet(FUNCODEREF(fun_486),YPfalse,T126,ENVNUL,PNUL,sloc(1745));
  T125 = YPsig(LITREF(lit_995),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_994),T125,ENVNUL,PNUL,sloc(1730));
  T130 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T130);
  lit_1001 = YPPsym((P)"remove-module-internal!");
  lit_1002 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  T131 = YPsig(LITREF(lit_1002),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_1001),T131,ENVNUL,PNUL,sloc(1750));
  T132 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T132);
  lit_1003 = YPPsym((P)"remove-modules-by-name!");
  lit_1004 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_1005 = YPPlist(1,YPPsym((P)"modname"));
  T135 = YPsig(LITREF(lit_1005),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_489 = YPmet(FUNCODEREF(fun_489),YPfalse,T135,ENVNUL,PNUL,sloc(1757));
  T134 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T133 = YPsig(LITREF(lit_1004),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T134,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_1003),T133,ENVNUL,PNUL,sloc(1755));
  T136 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T136);
  lit_1006 = YPPsym((P)"module-name-to-relpath");
  lit_1007 = YPPlist(1,YPPsym((P)"name"));
  T137 = YPsig(LITREF(lit_1007),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_1006),T137,ENVNUL,PNUL,sloc(1765));
  T138 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T138);
  lit_1008 = YPPsym((P)"install-initial-bindings");
  lit_1009 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_1010 = YPPlist(1,YPPsym((P)"name"));
  lit_1011 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T140 = YPsig(LITREF(lit_1010),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_492 = YPmet(FUNCODEREF(fun_492),YPfalse,T140,ENVNUL,PNUL,sloc(1776));
  T139 = YPsig(LITREF(lit_1009),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_1008),T139,ENVNUL,PNUL,sloc(1772));
  T141 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T141);
  lit_1012 = YPPsym((P)"fab-static-global-environment");
  lit_1013 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"module-loader"),YPPsym((P)"allow-foreign-names?"));
  T142 = YPsig(LITREF(lit_1013),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_1012),T142,ENVNUL,PNUL,sloc(1820));
  T143 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T143);
  lit_1014 = YPPsym((P)"fab-subset-environment");
  lit_1015 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"src-module"),YPPsym((P)"excluded"));
  lit_1016 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"binding"));
  T145 = YPsig(LITREF(lit_1016),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T145,ENVNUL,PNUL,sloc(1841));
  T144 = YPsig(LITREF(lit_1015),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_1014),T144,ENVNUL,PNUL,sloc(1834));
  T146 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T146);
  lit_1017 = YPPsym((P)"<runtime-module-loader>");
  T148 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T147 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_1017),T148);
  VARSET(YevalSastYLruntime_module_loaderG,T147);
  DYNDEFSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_1018 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_1019 = YPsb((P)"Unable to find module %s");
  T153 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_497 = YPmet(FUNCODEREF(fun_497),YPfalse,T153,ENVNUL,PNUL,sloc(1877));
  T152 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_498 = YPmet(FUNCODEREF(fun_498),YPfalse,T152,ENVNUL,PNUL,sloc(1877));
  T151 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_499 = YPmet(FUNCODEREF(fun_499),YPfalse,T151,ENVNUL,PNUL,sloc(1874));
  T150 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_500 = YPmet(FUNCODEREF(fun_500),YPfalse,T150,ENVNUL,PNUL,sloc(1893));
  T149 = YPsig(LITREF(lit_1018),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_501 = YPmet(FUNCODEREF(fun_load_module_501),LITREF(lit_983),T149,ENVNUL,PNUL,sloc(1864));
  T155 = VARREF_OR(YevalSastYload_module,YPfalse);
  T156 = fun_load_module_501;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T156);
  VARSET(YevalSastYload_module,T154);
  T157 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T157);
  lit_1020 = YPPsym((P)"runtime-module-loader");
  T158 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_1020),T158,ENVNUL,PNUL,sloc(1896));
  T159 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T159);
  lit_1021 = YPPsym((P)"runtime-module");
  lit_1022 = YPPlist(1,YPPsym((P)"modname"));
  T160 = YPsig(LITREF(lit_1022),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_1021),T160,ENVNUL,PNUL,sloc(1897));
  T161 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T161);
  lit_1023 = YPPsym((P)"runtime-environment");
  lit_1024 = YPPlist(1,YPPsym((P)"modname"));
  T162 = YPsig(LITREF(lit_1024),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_1023),T162,ENVNUL,PNUL,sloc(1899));
  T163 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T163);
  lit_1025 = YPPsym((P)"runtime-core-environment");
  lit_1026 = YPPlist(1,YPPsym((P)"modname"));
  T164 = YPsig(LITREF(lit_1026),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_1025),T164,ENVNUL,PNUL,sloc(1903));
  T165 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T165);
  lit_1027 = YPPsym((P)"unchecked-runtime-environment");
  lit_1028 = YPPlist(1,YPPsym((P)"modname"));
  T166 = YPsig(LITREF(lit_1028),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_1027),T166,ENVNUL,PNUL,sloc(1905));
  T167 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T167);
  lit_1029 = YPPsym((P)"reloader-do-create-module");
  lit_1030 = YPPlist(2,YPPsym((P)"modname"),YPPsym((P)"data"));
  T168 = YPsig(LITREF(lit_1030),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_1029),T168,ENVNUL,PNUL,sloc(1914));
  T169 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T169);
  lit_1031 = YPPsym((P)"reloader-do-use-module");
  lit_1032 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"uses"));
  T170 = YPsig(LITREF(lit_1032),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_1031),T170,ENVNUL,PNUL,sloc(1925));
  T171 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T171);
  lit_1033 = YPPsym((P)"reloader-do-import");
  lit_1034 = YPPlist(4,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"from-mod"),YPPsym((P)"original-name"));
  lit_1035 = YPsb((P)"Can't find %s from %s for %s\n");
  T172 = YPsig(LITREF(lit_1034),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_1033),T172,ENVNUL,PNUL,sloc(1928));
  T173 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T173);
  lit_1036 = YPPsym((P)"process-module-data");
  lit_1037 = YPPlist(1,YPPsym((P)"module"));
  T174 = YPsig(LITREF(lit_1037),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_1036),T174,ENVNUL,PNUL,sloc(1938));
  T175 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T175);
  lit_1038 = YPPsym((P)"ensure-module-data");
  lit_1039 = YPPlist(1,YPPsym((P)"module"));
  T178 = YPsig(LITREF(lit_1039),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T177 = YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_1038),T178,ENVNUL,PNUL,sloc(1943));
  T180 = YevalSastYensure_module_data;
  T179 = VARSET(YevalSastYensure_module_data,T180);
  T176 = T179;
  return T176;
}

P YevalSastY___main_10___() {
  P tmpF2910;
  P tmpF2909;
  P tmpF2908;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
DEFCREGS();
loop:
  lit_1040 = YPPsym((P)"reloader-do-runtime-binding");
  lit_1041 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T0 = YPsig(LITREF(lit_1041),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_1040),T0,ENVNUL,PNUL,sloc(1949));
  T1 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T1);
  lit_1042 = YPPsym((P)"reloader-do-dynamic-binding");
  lit_1043 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T2 = YPsig(LITREF(lit_1043),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_dynamic_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_dynamic_binding),LITREF(lit_1042),T2,ENVNUL,PNUL,sloc(1958));
  T3 = YevalSastYreloader_do_dynamic_binding;
  VARSET(YevalSastYreloader_do_dynamic_binding,T3);
  lit_1044 = YPPsym((P)"reloader-do-other-binding");
  lit_1045 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T4 = YPsig(LITREF(lit_1045),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_1044),T4,ENVNUL,PNUL,sloc(1971));
  T5 = YevalSastYreloader_do_other_binding;
  VARSET(YevalSastYreloader_do_other_binding,T5);
  lit_1046 = YPPsym((P)"reloader-do-export");
  lit_1047 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"as-name"));
  lit_1048 = YPsb((P)"Can't find %s in %s\n");
  T6 = YPsig(LITREF(lit_1047),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_1046),T6,ENVNUL,PNUL,sloc(1979));
  T7 = YevalSastYreloader_do_export;
  VARSET(YevalSastYreloader_do_export,T7);
  lit_1049 = YPPsym((P)"reload-modules");
  T8 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_1049),T8,ENVNUL,PNUL,sloc(1986));
  T9 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T9);
  lit_1050 = YPPsym((P)"install-magic-bindings");
  lit_1051 = YPPlist(1,YPPsym((P)"env"));
  lit_1052 = YPPlist(1,YPPsym((P)"binding"));
  T11 = YPsig(LITREF(lit_1052),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_517 = YPmet(FUNCODEREF(fun_517),YPfalse,T11,ENVNUL,PNUL,sloc(1998));
  T10 = YPsig(LITREF(lit_1051),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_1050),T10,ENVNUL,PNUL,sloc(1996));
  T12 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T12);
  lit_1053 = YPPsym((P)"reload-macros");
  T13 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_1053),T13,ENVNUL,PNUL,sloc(2004));
  T14 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T14);
  lit_1054 = YPPsym((P)"install-interpreter-hacks");
  lit_1055 = YPPlist(1,YPPsym((P)"env"));
  T15 = YPsig(LITREF(lit_1055),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_1054),T15,ENVNUL,PNUL,sloc(2011));
  T16 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T16);
  lit_1056 = YPPsym((P)"init-runtime");
  T17 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_1056),T17,ENVNUL,PNUL,sloc(2014));
  T18 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T18);
  lit_1057 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_1057));
  lit_1058 = YPPsym((P)"fab-syntax-environment");
  lit_1059 = YPPlist(1,YPPsym((P)"module"));
  lit_1060 = YPPsym((P)"goo");
  T19 = YPsig(LITREF(lit_1059),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_1058),T19,ENVNUL,PNUL,sloc(2038));
  T20 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T20);
  lit_1061 = YPPsym((P)"fab-g2c-module");
  lit_1062 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T21 = YPsig(LITREF(lit_1062),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_1061),T21,ENVNUL,PNUL,sloc(2043));
  T22 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T22);
  lit_1063 = YPPsym((P)"init-g2c-boot-environment");
  lit_1064 = YPPlist(1,YPPsym((P)"env"));
  T23 = YPsig(LITREF(lit_1064),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_1063),T23,ENVNUL,PNUL,sloc(2056));
  T24 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T24);
  lit_1065 = YPPsym((P)"init-g2c-regular-environment");
  lit_1066 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T25 = YPsig(LITREF(lit_1066),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_1065),T25,ENVNUL,PNUL,sloc(2062));
  T26 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T26);
  lit_1067 = YPPsym((P)"init-ast");
  T27 = YPsig(LITREF(lit_617),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_1067),T27,ENVNUL,PNUL,sloc(2071));
  T28 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T28);
  lit_1068 = YPPsym((P)"do-static-global-bindings");
  lit_1069 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  lit_1070 = YPPlist(1,YPPsym((P)"env"));
  T30 = YPsig(LITREF(lit_1070),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_527 = YPmet(FUNCODEREF(fun_loop_527),LITREF(lit_260),T30,ENVNUL,PNUL,sloc(2076));
  T29 = YPsig(LITREF(lit_1069),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_1068),T29,ENVNUL,PNUL,sloc(2075));
  T31 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T31);
  lit_1071 = YPPsym((P)"do-named-static-global-bindings");
  lit_1072 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  lit_1073 = YPPlist(1,YPPsym((P)"env"));
  T33 = YPsig(LITREF(lit_1073),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_529 = YPmet(FUNCODEREF(fun_loop_529),LITREF(lit_260),T33,ENVNUL,PNUL,sloc(2083));
  T32 = YPsig(LITREF(lit_1072),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_1071),T32,ENVNUL,PNUL,sloc(2082));
  T34 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T34);
  tmpF2908 = YPfalse;
  if (tmpF2908 != YPfalse) {
    T35 = VARREF(YevalSastYast_evaluate);
  } else {
    T35 = YPfalse;
  }
  tmpF2909 = YPfalse;
  if (tmpF2909 != YPfalse) {
    T36 = VARREF(YevalSastYinit_environment_for_eval);
  } else {
    T36 = YPfalse;
  }
  tmpF2910 = YPfalse;
  if (tmpF2910 != YPfalse) {
    T37 = VARREF(YevalSastYload_in);
  } else {
    T37 = YPfalse;
  }
  T38 = YPfalse;
  return T38;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSlate_macros;

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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"$empty-dependency", &module_info_evalSdependency, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"dependency-empty?", &module_info_evalSdependency, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"environment-uses-modules", CVAR, &YevalSastYenvironment_uses_modules},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"---main-1---", PVAR, NULL},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"module-data-processed?-setter", CVAR, &YevalSastYmodule_data_processedQ_setter},
  {"module-name-to-relpath", CVAR, &YevalSastYmodule_name_to_relpath},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"<module-loader>", CVAR, &YevalSastYLmodule_loaderG},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"binding-inferred-type-setter", CVAR, &YevalSastYbinding_inferred_type_setter},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"transaction-empty?", CVAR, &YevalSastYtransaction_emptyQ},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"bound?-default-setter", CVAR, &YevalSastYboundQ_default_setter},
  {"module-uses-c-includes", CVAR, &YevalSastYmodule_uses_c_includes},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"binding-locative", CVAR, &YevalSastYbinding_locative},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"transaction-implemented-bindings", CVAR, &YevalSastYtransaction_implemented_bindings},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"set-module-environments", CVAR, &YevalSastYset_module_environments},
  {"binding-kind", CVAR, &YevalSastYbinding_kind},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"with-dependent", PVAR, NULL},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"arguments", CVAR, &YevalSastYarguments},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"<static-local-environment>", CVAR, &YevalSastYLstatic_local_environmentG},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"environment-next", CVAR, &YevalSastYenvironment_next},
  {"*current-subtransaction*", CVAR, &YevalSastYTcurrent_subtransactionT},
  {"binding-handler", CVAR, &YevalSastYbinding_handler},
  {"register-module!", CVAR, &YevalSastYregister_moduleX},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"runtime-module", CVAR, &YevalSastYruntime_module},
  {"module-runtime-data", CVAR, &YevalSastYmodule_runtime_data},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"find-syntax-environment", CVAR, &YevalSastYfind_syntax_environment},
  {"<transaction>", CVAR, &YevalSastYLtransactionG},
  {"$goo-boot-module-name", CVAR, &YevalSastYDgoo_boot_module_name},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"module-loader-stack-setter", CVAR, &YevalSastYmodule_loader_stack_setter},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"binding-info-setter", CVAR, &YevalSastYbinding_info_setter},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"%module-exports-setter", CVAR, &YevalSastYPmodule_exports_setter},
  {"compute-transitive-users", CVAR, &YevalSastYcompute_transitive_users},
  {"pairize", CVAR, &YevalSastYpairize},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"import-global!", CVAR, &YevalSastYimport_globalX},
  {"module-uses-c-libraries-setter", CVAR, &YevalSastYmodule_uses_c_libraries_setter},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"load-and-register-module", CVAR, &YevalSastYload_and_register_module},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"define-magic-binding", PVAR, NULL},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"binding-native-to?", CVAR, &YevalSastYbinding_native_toQ},
  {"module-uses-c-files-setter", CVAR, &YevalSastYmodule_uses_c_files_setter},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"binding-handler-setter", CVAR, &YevalSastYbinding_handler_setter},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"reloader-do-create-module", CVAR, &YevalSastYreloader_do_create_module},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"transaction-dependents", CVAR, &YevalSastYtransaction_dependents},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"module-target-environment-setter", CVAR, &YevalSastYmodule_target_environment_setter},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"runtime-module-loader", CVAR, &YevalSastYruntime_module_loader},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"function-data-refs-setter", CVAR, &YevalSastYfunction_data_refs_setter},
  {"function-self-recursive?", CVAR, &YevalSastYfunction_self_recursiveQ},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"module-data-processed?", CVAR, &YevalSastYmodule_data_processedQ},
  {"remove-modules-by-name!", CVAR, &YevalSastYremove_modules_by_nameX},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"do-module-loader-modules", CVAR, &YevalSastYdo_module_loader_modules},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"def-programs", PVAR, NULL},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"binding-mangled-name", CVAR, &YevalSastYbinding_mangled_name},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"<module-binding>", CVAR, &YevalSastYLmodule_bindingG},
  {"binding-global-box-setter", CVAR, &YevalSastYbinding_global_box_setter},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"module-exports-setter", CVAR, &YevalSastYmodule_exports_setter},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"bound?-default", CVAR, &YevalSastYboundQ_default},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"reloader-do-import", CVAR, &YevalSastYreloader_do_import},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"req-sig-specs", CVAR, &YevalSastYreq_sig_specs},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"<static-environment>", CVAR, &YevalSastYLstatic_environmentG},
  {"---main-7---", PVAR, NULL},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"---main-6---", PVAR, NULL},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"reloader-do-runtime-binding", CVAR, &YevalSastYreloader_do_runtime_binding},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"binding-type-setter", CVAR, &YevalSastYbinding_type_setter},
  {"<binding>", CVAR, &YevalSastYLbindingG},
  {"reloader-do-use-module", CVAR, &YevalSastYreloader_do_use_module},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"ensure-module-data", CVAR, &YevalSastYensure_module_data},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"reloader-do-dynamic-binding", CVAR, &YevalSastYreloader_do_dynamic_binding},
  {"reloader-do-other-binding", CVAR, &YevalSastYreloader_do_other_binding},
  {"---main-5---", PVAR, NULL},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"fab-static-global-environment", CVAR, &YevalSastYfab_static_global_environment},
  {"<runtime-module-loader>", CVAR, &YevalSastYLruntime_module_loaderG},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"find-environment-module", CVAR, &YevalSastYfind_environment_module},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"binding-locative-setter", CVAR, &YevalSastYbinding_locative_setter},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"module-mangled-name", CVAR, &YevalSastYmodule_mangled_name},
  {"<static-global-environment>", CVAR, &YevalSastYLstatic_global_environmentG},
  {"report-undefined-global-bindings", CVAR, &YevalSastYreport_undefined_global_bindings},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"probe-module", CVAR, &YevalSastYprobe_module},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"<global-box>", CVAR, &YevalSastYLglobal_boxG},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"unchecked-runtime-environment", CVAR, &YevalSastYunchecked_runtime_environment},
  {"namespace-error", CVAR, &YevalSastYnamespace_error},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"do-static-global-bindings", CVAR, &YevalSastYdo_static_global_bindings},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"binding-info", CVAR, &YevalSastYbinding_info},
  {"transaction-dependents-setter", CVAR, &YevalSastYtransaction_dependents_setter},
  {"module-uses-c-includes-setter", CVAR, &YevalSastYmodule_uses_c_includes_setter},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"module-uses-c-libraries", CVAR, &YevalSastYmodule_uses_c_libraries},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"module-exports", CVAR, &YevalSastYmodule_exports},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"%module-exports", CVAR, &YevalSastYPmodule_exports},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"environment-module-setter", CVAR, &YevalSastYenvironment_module_setter},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"frame-bindings", CVAR, &YevalSastYframe_bindings},
  {"---main-10---", PVAR, NULL},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"remove-module-internal!", CVAR, &YevalSastYremove_module_internalX},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"reloader-do-export", CVAR, &YevalSastYreloader_do_export},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"module-syntax-environment", CVAR, &YevalSastYmodule_syntax_environment},
  {"module-uses-c-files", CVAR, &YevalSastYmodule_uses_c_files},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"binding-global-box", CVAR, &YevalSastYbinding_global_box},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"module-target-environment", CVAR, &YevalSastYmodule_target_environment},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"do-named-static-global-bindings", CVAR, &YevalSastYdo_named_static_global_bindings},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"roll-back-transaction", CVAR, &YevalSastYroll_back_transaction},
  {"insert-and-mangle-global!", CVAR, &YevalSastYinsert_and_mangle_globalX},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"ftype", CVAR, &YevalSastYftype},
  {"---main-3---", PVAR, NULL},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"with-subtransaction", PVAR, NULL},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"---main-8---", PVAR, NULL},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"---main-0---", PVAR, NULL},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"---main-2---", PVAR, NULL},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"module-name-setter", CVAR, &YevalSastYmodule_name_setter},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"program-line-setter", CVAR, &YevalSastYprogram_line_setter},
  {"binding-free?-setter", CVAR, &YevalSastYbinding_freeQ_setter},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"binding-prop", CVAR, &YevalSastYbinding_prop},
  {"*runtime-module-loader*", CVAR, &YevalSastYTruntime_module_loaderT},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"module-runtime-data-setter", CVAR, &YevalSastYmodule_runtime_data_setter},
  {"reload-modules", CVAR, &YevalSastYreload_modules},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"binding-kind-setter", CVAR, &YevalSastYbinding_kind_setter},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"---main-9---", PVAR, NULL},
  {"binding-module-setter", CVAR, &YevalSastYbinding_module_setter},
  {"process-module-data", CVAR, &YevalSastYprocess_module_data},
  {"module-syntax-environment-setter", CVAR, &YevalSastYmodule_syntax_environment_setter},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"module-mangled-name-setter", CVAR, &YevalSastYmodule_mangled_name_setter},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"binding-mangled-name-setter", CVAR, &YevalSastYbinding_mangled_name_setter},
  {"binding-type", CVAR, &YevalSastYbinding_type},
  {"binding-inferred-type", CVAR, &YevalSastYbinding_inferred_type},
  {"sequential", CVAR, &YevalSastYsequential},
  {"insert-globals!", CVAR, &YevalSastYinsert_globalsX},
  {"environment-module-loader-setter", CVAR, &YevalSastYenvironment_module_loader_setter},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"environment-next-setter", CVAR, &YevalSastYenvironment_next_setter},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"module-loader-stack", CVAR, &YevalSastYmodule_loader_stack},
  {"module-transaction-setter", CVAR, &YevalSastYmodule_transaction_setter},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"<module>", CVAR, &YevalSastYLmoduleG},
  {"call-with-subtransaction", CVAR, &YevalSastYcall_with_subtransaction},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"<binding-name>", CVAR, &YevalSastYLbinding_nameG},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"---main-4---", PVAR, NULL},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"module-loader-modules-setter", CVAR, &YevalSastYmodule_loader_modules_setter},
  {"binding-name-setter", CVAR, &YevalSastYbinding_name_setter},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"transaction-register-dependent", CVAR, &YevalSastYtransaction_register_dependent},
  {"transaction-register-implemented-binding", CVAR, &YevalSastYtransaction_register_implemented_binding},
  {"environment-module", CVAR, &YevalSastYenvironment_module},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"module-mangled-string-name", CVAR, &YevalSastYmodule_mangled_string_name},
  {"$sequential-empty", CVAR, &YevalSastYDsequential_empty},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"*now-rt-env*", DVAR, &YevalSastYTnow_rt_envT},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"runtime-core-environment", CVAR, &YevalSastYruntime_core_environment},
  {"binding-free?", CVAR, &YevalSastYbinding_freeQ},
  {"install-initial-bindings", CVAR, &YevalSastYinstall_initial_bindings},
  {"global-box-value-setter", CVAR, &YevalSastYglobal_box_value_setter},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"ast-<bot>", CVAR, &YevalSastYast_LbotG},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"environment-uses-modules-setter", CVAR, &YevalSastYenvironment_uses_modules_setter},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"load-in", CVAR, &YevalSastYload_in},
  {"find-static-global-environment", CVAR, &YevalSastYfind_static_global_environment},
  {"find-binding", CVAR, &YevalSastYfind_binding},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"fab-subset-environment", CVAR, &YevalSastYfab_subset_environment},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"transaction-implemented-bindings-setter", CVAR, &YevalSastYtransaction_implemented_bindings_setter},
  {"environment-bindings", CVAR, &YevalSastYenvironment_bindings},
  {"export-binding!", CVAR, &YevalSastYexport_bindingX},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"<static-empty-environment>", CVAR, &YevalSastYLstatic_empty_environmentG},
  {"$functions-empty", CVAR, &YevalSastYDfunctions_empty},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"binding-module-name", CVAR, &YevalSastYbinding_module_name},
  {"$arguments-empty", CVAR, &YevalSastYDarguments_empty},
  {"import-and-mangle-global!", CVAR, &YevalSastYimport_and_mangle_globalX},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"module-name", CVAR, &YevalSastYmodule_name},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"program-line", CVAR, &YevalSastYprogram_line},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"functions", CVAR, &YevalSastYfunctions},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"module-loader-module-type", CVAR, &YevalSastYmodule_loader_module_type},
  {"$empty-static-environment", CVAR, &YevalSastYDempty_static_environment},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"binding-module", CVAR, &YevalSastYbinding_module},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"insert-global!", CVAR, &YevalSastYinsert_globalX},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"merge-transactions!", CVAR, &YevalSastYmerge_transactionsX},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"function-self-recursive?-setter", CVAR, &YevalSastYfunction_self_recursiveQ_setter},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"binding-prop-setter", CVAR, &YevalSastYbinding_prop_setter},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"environment-module-loader", CVAR, &YevalSastYenvironment_module_loader},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"function-data-refs", CVAR, &YevalSastYfunction_data_refs},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"$fab-list-empty", CVAR, &YevalSastYDfab_list_empty},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"environment-bindings-setter", CVAR, &YevalSastYenvironment_bindings_setter},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"binding-name", CVAR, &YevalSastYbinding_name},
  {"$free-environment-empty", CVAR, &YevalSastYDfree_environment_empty},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"module-transaction", CVAR, &YevalSastYmodule_transaction},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"<namespace-error>", CVAR, &YevalSastYLnamespace_errorG},
  {"env-object-name", CVAR, &YevalSastYenv_object_name},
  {"runtime-environment", CVAR, &YevalSastYruntime_environment},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"load-module", CVAR, &YevalSastYload_module},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"module-mangled-string-name-setter", CVAR, &YevalSastYmodule_mangled_string_name_setter},
  {"environment-allows-foreign-names?", CVAR, &YevalSastYenvironment_allows_foreign_namesQ},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"module-loader-modules", CVAR, &YevalSastYmodule_loader_modules},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"global-box-value", CVAR, &YevalSastYglobal_box_value},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"environment-uses-modules", NULL},
  {"binding-index", NULL},
  {"module-name-to-relpath", NULL},
  {"<module-loader>", NULL},
  {"signature-value-setter", NULL},
  {"binding-inferred-type-setter", NULL},
  {"binding-mangled-name-setter", NULL},
  {"module-binding", NULL},
  {"binding-value-setter", NULL},
  {"reference-called-function?-setter", NULL},
  {"<monitor>", NULL},
  {"<immediate-constant>", NULL},
  {"binding-dynamic-extent?-setter", NULL},
  {"monitor-handler", NULL},
  {"module-uses-c-includes", NULL},
  {"<global-assignment>", NULL},
  {"assignment-form-setter", NULL},
  {"unwind-protect-cleanup-thunk", NULL},
  {"binding-kind", NULL},
  {"reference-frame-number", NULL},
  {"<predefined-application>", NULL},
  {"monitor-type", NULL},
  {"<magic-reference>", NULL},
  {"find-binding", NULL},
  {"<fab-list>", NULL},
  {"function-body", NULL},
  {"application-known?-setter", NULL},
  {"as-lst", NULL},
  {"<passive-program>", NULL},
  {"constant-index-setter", NULL},
  {"monitor-info", NULL},
  {"<local-binding>", NULL},
  {"application-function", NULL},
  {"function-self-recursive?", NULL},
  {"monitor-test", NULL},
  {"function-debug-name", NULL},
  {"do-named-static-global-bindings", NULL},
  {"fab-g2c-module", NULL},
  {"assignment-reference", NULL},
  {"binding-type", NULL},
  {"function-source-setter", NULL},
  {"binding-info-setter", NULL},
  {"function-temporaries", NULL},
  {"program-type-setter", NULL},
  {"binding-dotted?", NULL},
  {"environment-bindings", NULL},
  {"function-free", NULL},
  {"<bound?>", NULL},
  {"<ast-generic>", NULL},
  {"<alternative>", NULL},
  {"ast-walk", NULL},
  {"<ast-primitive>", NULL},
  {"def-list", NULL},
  {"function-adjectives", NULL},
  {"binding-locative", NULL},
  {"<dynamic-assignment>", NULL},
  {"signature-arity-setter", NULL},
  {"binding-dynamic-extent?", NULL},
  {"<constant>", NULL},
  {"bound?-reference", NULL},
  {"remove-modules-by-name!", NULL},
  {"function-binding", NULL},
  {"do-module-loader-modules", NULL},
  {"signature-value", NULL},
  {"binding-inferred-type", NULL},
  {"<ast-primitive-definition>", NULL},
  {"binding-mangled-name", NULL},
  {"<assignment>", NULL},
  {"constant-value", NULL},
  {"binding-value", NULL},
  {"<module-binding>", NULL},
  {"reference-called-function?", NULL},
  {"<runtime-reference>", NULL},
  {"function-nary?", NULL},
  {"binding-mutable?", NULL},
  {"function-value", NULL},
  {"bound?-default", NULL},
  {"assignment-form", NULL},
  {"req-sig-specs", NULL},
  {"ast-define-binding", NULL},
  {"signature-nary?-setter", NULL},
  {"function-frame-len-setter", NULL},
  {"<binding>", NULL},
  {"<raw-constant>", NULL},
  {"application-known?", NULL},
  {"signature-bindings", NULL},
  {"constant-index", NULL},
  {"find-environment-module", NULL},
  {"<module-binding-reference>", NULL},
  {"binding-locative-setter", NULL},
  {"sequentialize", NULL},
  {"<static-global-environment>", NULL},
  {"report-undefined-global-bindings", NULL},
  {"probe-module", NULL},
  {"env-object-name", NULL},
  {"<global-box>", NULL},
  {"function-registers-setter", NULL},
  {"unchecked-runtime-environment", NULL},
  {"<local-assignment>", NULL},
  {"do-static-global-bindings", NULL},
  {"<sequential>", NULL},
  {"fix-let-body-setter", NULL},
  {"function-source", NULL},
  {"<runtime-assignment>", NULL},
  {"binding-info", NULL},
  {"fix-let-bindings-setter", NULL},
  {"module-exports", NULL},
  {"<programs>", NULL},
  {"program-type", NULL},
  {"function-index-setter", NULL},
  {"fix-let-arguments-setter", NULL},
  {"alternative-condition", NULL},
  {"program-register-setter", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"fix-let-types-setter", NULL},
  {"module-uses-c-libraries", NULL},
  {"<dynamic-definition>", NULL},
  {"<static-module-binding-reference>", NULL},
  {"alternative-alternant", NULL},
  {"signature-arity", NULL},
  {"module-syntax-environment", NULL},
  {"module-uses-c-files", NULL},
  {"alternative-consequent", NULL},
  {"objectify-quotation", NULL},
  {"module-target-environment", NULL},
  {"ast-evaluate", NULL},
  {"<low-let>", NULL},
  {"ast-error", NULL},
  {"<local-reference>", NULL},
  {"<ast-macro-definition>", NULL},
  {"compile-time-program", NULL},
  {"signature-specs-setter", NULL},
  {"init-ast", NULL},
  {"binding-native-to?", NULL},
  {"binding-module-name", NULL},
  {"signature-names-setter", NULL},
  {"signature-bindings-setter", NULL},
  {"function-frame-len", NULL},
  {"%%macro", NULL},
  {"<ast-method>", NULL},
  {"program-register", NULL},
  {"module-mangled-name-setter", NULL},
  {"<dynamic-reference>", NULL},
  {"function-registers", NULL},
  {"<fix-let>", NULL},
  {"locals-bindings-setter", NULL},
  {"fix-let-body", NULL},
  {"objectify-with-subtransaction", NULL},
  {"function-data-refs-setter", NULL},
  {"function-signature-setter", NULL},
  {"signature-nary?", NULL},
  {"fix-let-bindings", NULL},
  {"function-bindings", NULL},
  {"function-index", NULL},
  {"locals-functions-setter", NULL},
  {"$goo-boot-module-name", NULL},
  {"fix-let-arguments", NULL},
  {"environment-module", NULL},
  {"<definition>", NULL},
  {"<ast-function>", NULL},
  {"module-mangled-string-name", NULL},
  {"set-module-environments", NULL},
  {"locals-body-setter", NULL},
  {"fix-let-types", NULL},
  {"reference-binding", NULL},
  {"ast-walk!", NULL},
  {"<free-environment>", NULL},
  {"install-initial-bindings", NULL},
  {"global-box-value-setter", NULL},
  {"binding-index-setter", NULL},
  {"reference-frame-offset", NULL},
  {"<application>", NULL},
  {"application-binding", NULL},
  {"<compile-time>", NULL},
  {"<regular-application>", NULL},
  {"load-in", NULL},
  {"application-arguments", NULL},
  {"signature-specs", NULL},
  {"<ast-signature>", NULL},
  {"assignment-binding", NULL},
  {"binding-global-box-setter", NULL},
  {"<module>", NULL},
  {"signature-names", NULL},
  {"binding-global-box", NULL},
  {"module-name", NULL},
  {"program-line", NULL},
  {"application-tail?", NULL},
  {"function-body-setter", NULL},
  {"<program>", NULL},
  {"binding-module", NULL},
  {"<reference>", NULL},
  {"<locals>", NULL},
  {"<computed-program>", NULL},
  {"function-self-recursive?-setter", NULL},
  {"<bind-exit>", NULL},
  {"module-mangled-name", NULL},
  {"function-debug-name-setter", NULL},
  {"<real-reference>", NULL},
  {"locals-bindings", NULL},
  {"binding-type-setter", NULL},
  {"monitor-main-thunk", NULL},
  {"<macro-reference>", NULL},
  {"init-environment-for-eval", NULL},
  {"bind-exit-main-fun", NULL},
  {"function-data-refs", NULL},
  {"function-signature", NULL},
  {"<global-reference>", NULL},
  {"objectify-signature", NULL},
  {"<arguments>", NULL},
  {"module-loader-module-type", NULL},
  {"function-temporaries-setter", NULL},
  {"binding-dotted?-setter", NULL},
  {"function-free-setter", NULL},
  {"binding-name", NULL},
  {"free-environment", NULL},
  {"locals-functions", NULL},
  {"<unwind-protect>", NULL},
  {"def-programs", NULL},
  {"locals-body", NULL},
  {"runtime-environment", NULL},
  {"load-module", NULL},
  {"unwind-protect-protected-thunk", NULL},
  {"global-box-value", NULL},
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
