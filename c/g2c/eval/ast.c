/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast */

EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YOelt,"goo/boot","@elt");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DEF(YevalSastYinsert_and_mangle_globalX,"eval/ast","insert-and-mangle-global!");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DEF(YevalSastYprogram_line_setter,"eval/ast","program-line-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DYNDEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
DEF(YevalSastYbinding_prop,"eval/ast","binding-prop");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
DEF(YevalSastYobjectify_define_property,"eval/ast","objectify-define-property");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
DEF(YevalSastYbind_exit_lightQ_setter,"eval/ast","bind-exit-light?-setter");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
DEF(YevalSastYftype,"eval/ast","ftype");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(Ytail,"goo/boot","tail");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
DEF(YevalSastYbinding_prop_setter,"eval/ast","binding-prop-setter");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YOOemptyQ,"goo/boot","@@empty?");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
EXT(YOallQ,"goo/boot","@all?");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSastYobjectify,"eval/ast","objectify");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSastYobjectify_function_using,"eval/ast","objectify-function-using");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSastYfunctions,"eval/ast","functions");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YOnew,"goo/boot","@new");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalSastYloop_body,"eval/ast","loop-body");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSastYapplication_loop_setter,"eval/ast","application-loop-setter");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
DEF(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
EXT(YgooSmathY_,"goo/math","-");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
DEF(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
DEF(YevalSastYspecial_define_constant,"eval/ast","special-define-constant");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
EXT(YLnumG,"goo/boot","<num>");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSastYincf_ref_count,"eval/ast","incf-ref-count");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
DEF(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
DEF(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YOmemQ,"goo/boot","@mem?");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSastYimport_and_mangle_globalX,"eval/ast","import-and-mangle-global!");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(Yhead,"goo/boot","head");
DEF(YevalSastYpairize,"eval/ast","pairize");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
DEF(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSastYnamespace_error,"eval/ast","namespace-error");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYspecial_propX,"eval/ast","special-prop!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
DEF(YevalSastYLnamespace_errorG,"eval/ast","<namespace-error>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
DEF(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
DEF(YevalSastYreloader_do_dynamic_binding,"eval/ast","reloader-do-dynamic-binding");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
DEF(YevalSastYboundQ_default,"eval/ast","bound?-default");
DEF(YevalSastYboundQ_default_setter,"eval/ast","bound?-default-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
DEF(YevalSastYarguments,"eval/ast","arguments");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
DEF(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
DEF(YevalSastYsequential,"eval/ast","sequential");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
DEF(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YOrev,"goo/boot","@rev");
EXT(Yas_error,"goo/boot","as-error");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSmathYT,"goo/math","*");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_17);
DEFLIT(lit_221);
DEFLIT(lit_70);
DEFLIT(lit_247);
DEFLIT(lit_351);
DEFLIT(lit_106);
DEFLIT(lit_846);
DEFLIT(lit_678);
DEFLIT(lit_127);
DEFLIT(lit_562);
DEFLIT(lit_654);
DEFLIT(lit_1034);
DEFLIT(lit_307);
DEFLIT(lit_272);
DEFLIT(lit_358);
DEFLIT(lit_794);
DEFLIT(lit_472);
DEFLIT(lit_430);
DEFLIT(lit_840);
DEFLIT(lit_919);
DEFLIT(lit_639);
DEFLIT(lit_943);
DEFLIT(lit_589);
DEFLIT(lit_910);
DEFLIT(lit_694);
DEFLIT(lit_534);
DEFLIT(lit_11);
DEFLIT(lit_517);
DEFLIT(lit_36);
DEFLIT(lit_223);
DEFLIT(lit_141);
DEFLIT(lit_903);
DEFLIT(lit_404);
DEFLIT(lit_515);
DEFLIT(lit_732);
DEFLIT(lit_1086);
DEFLIT(lit_231);
DEFLIT(lit_406);
DEFLIT(lit_511);
DEFLIT(lit_402);
DEFLIT(lit_795);
DEFLIT(lit_521);
DEFLIT(lit_1036);
DEFLIT(lit_593);
DEFLIT(lit_695);
DEFLIT(lit_403);
DEFLIT(lit_720);
DEFLIT(lit_259);
DEFLIT(lit_124);
DEFLIT(lit_1029);
DEFLIT(lit_828);
DEFLIT(lit_862);
DEFLIT(lit_89);
DEFLIT(lit_217);
DEFLIT(lit_428);
DEFLIT(lit_949);
DEFLIT(lit_2);
DEFLIT(lit_746);
DEFLIT(lit_637);
DEFLIT(lit_314);
DEFLIT(lit_265);
DEFLIT(lit_992);
DEFLIT(lit_1095);
DEFLIT(lit_438);
DEFLIT(lit_241);
DEFLIT(lit_43);
DEFLIT(lit_232);
DEFLIT(lit_249);
DEFLIT(lit_1031);
DEFLIT(lit_444);
DEFLIT(lit_26);
DEFLIT(lit_893);
DEFLIT(lit_9);
DEFLIT(lit_778);
DEFLIT(lit_254);
DEFLIT(lit_29);
DEFLIT(lit_107);
DEFLIT(lit_144);
DEFLIT(lit_318);
DEFLIT(lit_875);
DEFLIT(lit_219);
DEFLIT(lit_519);
DEFLIT(lit_125);
DEFLIT(lit_559);
DEFLIT(lit_1044);
DEFLIT(lit_97);
DEFLIT(lit_712);
DEFLIT(lit_502);
DEFLIT(lit_135);
DEFLIT(lit_386);
DEFLIT(lit_766);
DEFLIT(lit_296);
DEFLIT(lit_88);
DEFLIT(lit_979);
DEFLIT(lit_1060);
DEFLIT(lit_707);
DEFLIT(lit_441);
DEFLIT(lit_201);
DEFLIT(lit_121);
DEFLIT(lit_1032);
DEFLIT(lit_961);
DEFLIT(lit_1061);
DEFLIT(lit_96);
DEFLIT(lit_147);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_93);
DEFLIT(lit_164);
DEFLIT(lit_987);
DEFLIT(lit_763);
DEFLIT(lit_308);
DEFLIT(lit_85);
DEFLIT(lit_1021);
DEFLIT(lit_938);
DEFLIT(lit_711);
DEFLIT(lit_102);
DEFLIT(lit_326);
DEFLIT(lit_71);
DEFLIT(lit_762);
DEFLIT(lit_322);
DEFLIT(lit_977);
DEFLIT(lit_490);
DEFLIT(lit_393);
DEFLIT(lit_644);
DEFLIT(lit_994);
DEFLIT(lit_280);
DEFLIT(lit_371);
DEFLIT(lit_407);
DEFLIT(lit_185);
DEFLIT(lit_1082);
DEFLIT(lit_82);
DEFLIT(lit_235);
DEFLIT(lit_613);
DEFLIT(lit_612);
DEFLIT(lit_523);
DEFLIT(lit_668);
DEFLIT(lit_599);
DEFLIT(lit_497);
DEFLIT(lit_15);
DEFLIT(lit_607);
DEFLIT(lit_418);
DEFLIT(lit_341);
DEFLIT(lit_250);
DEFLIT(lit_1079);
DEFLIT(lit_508);
DEFLIT(lit_252);
DEFLIT(lit_682);
DEFLIT(lit_157);
DEFLIT(lit_416);
DEFLIT(lit_269);
DEFLIT(lit_137);
DEFLIT(lit_281);
DEFLIT(lit_352);
DEFLIT(lit_915);
DEFLIT(lit_609);
DEFLIT(lit_659);
DEFLIT(lit_313);
DEFLIT(lit_577);
DEFLIT(lit_974);
DEFLIT(lit_203);
DEFLIT(lit_60);
DEFLIT(lit_196);
DEFLIT(lit_847);
DEFLIT(lit_465);
DEFLIT(lit_188);
DEFLIT(lit_669);
DEFLIT(lit_663);
DEFLIT(lit_946);
DEFLIT(lit_293);
DEFLIT(lit_810);
DEFLIT(lit_750);
DEFLIT(lit_636);
DEFLIT(lit_238);
DEFLIT(lit_366);
DEFLIT(lit_175);
DEFLIT(lit_25);
DEFLIT(lit_674);
DEFLIT(lit_389);
DEFLIT(lit_1078);
DEFLIT(lit_618);
DEFLIT(lit_513);
DEFLIT(lit_243);
DEFLIT(lit_364);
DEFLIT(lit_757);
DEFLIT(lit_204);
DEFLIT(lit_976);
DEFLIT(lit_722);
DEFLIT(lit_47);
DEFLIT(lit_394);
DEFLIT(lit_306);
DEFLIT(lit_321);
DEFLIT(lit_888);
DEFLIT(lit_541);
DEFLIT(lit_392);
DEFLIT(lit_832);
DEFLIT(lit_879);
DEFLIT(lit_399);
DEFLIT(lit_301);
DEFLIT(lit_779);
DEFLIT(lit_152);
DEFLIT(lit_432);
DEFLIT(lit_38);
DEFLIT(lit_276);
DEFLIT(lit_894);
DEFLIT(lit_417);
DEFLIT(lit_1041);
DEFLIT(lit_446);
DEFLIT(lit_906);
DEFLIT(lit_64);
DEFLIT(lit_841);
DEFLIT(lit_353);
DEFLIT(lit_544);
DEFLIT(lit_458);
DEFLIT(lit_91);
DEFLIT(lit_1097);
DEFLIT(lit_1077);
DEFLIT(lit_676);
DEFLIT(lit_388);
DEFLIT(lit_5);
DEFLIT(lit_1040);
DEFLIT(lit_190);
DEFLIT(lit_466);
DEFLIT(lit_21);
DEFLIT(lit_453);
DEFLIT(lit_0);
DEFLIT(lit_1083);
DEFLIT(lit_785);
DEFLIT(lit_1000);
DEFLIT(lit_46);
DEFLIT(lit_947);
DEFLIT(lit_530);
DEFLIT(lit_960);
DEFLIT(lit_67);
DEFLIT(lit_575);
DEFLIT(lit_978);
DEFLIT(lit_1064);
DEFLIT(lit_227);
DEFLIT(lit_171);
DEFLIT(lit_459);
DEFLIT(lit_311);
DEFLIT(lit_553);
DEFLIT(lit_683);
DEFLIT(lit_12);
DEFLIT(lit_325);
DEFLIT(lit_167);
DEFLIT(lit_646);
DEFLIT(lit_212);
DEFLIT(lit_572);
DEFLIT(lit_501);
DEFLIT(lit_324);
DEFLIT(lit_27);
DEFLIT(lit_535);
DEFLIT(lit_900);
DEFLIT(lit_373);
DEFLIT(lit_653);
DEFLIT(lit_76);
DEFLIT(lit_414);
DEFLIT(lit_68);
DEFLIT(lit_525);
DEFLIT(lit_6);
DEFLIT(lit_425);
DEFLIT(lit_209);
DEFLIT(lit_343);
DEFLIT(lit_421);
DEFLIT(lit_361);
DEFLIT(lit_606);
DEFLIT(lit_1090);
DEFLIT(lit_498);
DEFLIT(lit_756);
DEFLIT(lit_804);
DEFLIT(lit_471);
DEFLIT(lit_462);
DEFLIT(lit_647);
DEFLIT(lit_578);
DEFLIT(lit_474);
DEFLIT(lit_816);
DEFLIT(lit_797);
DEFLIT(lit_410);
DEFLIT(lit_470);
DEFLIT(lit_860);
DEFLIT(lit_230);
DEFLIT(lit_1037);
DEFLIT(lit_198);
DEFLIT(lit_868);
DEFLIT(lit_119);
DEFLIT(lit_556);
DEFLIT(lit_941);
DEFLIT(lit_1038);
DEFLIT(lit_19);
DEFLIT(lit_350);
DEFLIT(lit_984);
DEFLIT(lit_608);
DEFLIT(lit_969);
DEFLIT(lit_774);
DEFLIT(lit_965);
DEFLIT(lit_10);
DEFLIT(lit_172);
DEFLIT(lit_166);
DEFLIT(lit_299);
DEFLIT(lit_552);
DEFLIT(lit_139);
DEFLIT(lit_697);
DEFLIT(lit_208);
DEFLIT(lit_287);
DEFLIT(lit_741);
DEFLIT(lit_540);
DEFLIT(lit_605);
DEFLIT(lit_1039);
DEFLIT(lit_151);
DEFLIT(lit_664);
DEFLIT(lit_1093);
DEFLIT(lit_206);
DEFLIT(lit_688);
DEFLIT(lit_972);
DEFLIT(lit_401);
DEFLIT(lit_912);
DEFLIT(lit_512);
DEFLIT(lit_546);
DEFLIT(lit_199);
DEFLIT(lit_980);
DEFLIT(lit_122);
DEFLIT(lit_998);
DEFLIT(lit_529);
DEFLIT(lit_1014);
DEFLIT(lit_545);
DEFLIT(lit_149);
DEFLIT(lit_328);
DEFLIT(lit_215);
DEFLIT(lit_560);
DEFLIT(lit_667);
DEFLIT(lit_951);
DEFLIT(lit_955);
DEFLIT(lit_1045);
DEFLIT(lit_554);
DEFLIT(lit_887);
DEFLIT(lit_601);
DEFLIT(lit_580);
DEFLIT(lit_576);
DEFLIT(lit_878);
DEFLIT(lit_851);
DEFLIT(lit_50);
DEFLIT(lit_916);
DEFLIT(lit_338);
DEFLIT(lit_349);
DEFLIT(lit_493);
DEFLIT(lit_719);
DEFLIT(lit_457);
DEFLIT(lit_150);
DEFLIT(lit_1073);
DEFLIT(lit_655);
DEFLIT(lit_787);
DEFLIT(lit_480);
DEFLIT(lit_679);
DEFLIT(lit_761);
DEFLIT(lit_899);
DEFLIT(lit_709);
DEFLIT(lit_904);
DEFLIT(lit_569);
DEFLIT(lit_211);
DEFLIT(lit_706);
DEFLIT(lit_866);
DEFLIT(lit_927);
DEFLIT(lit_95);
DEFLIT(lit_831);
DEFLIT(lit_40);
DEFLIT(lit_999);
DEFLIT(lit_796);
DEFLIT(lit_905);
DEFLIT(lit_354);
DEFLIT(lit_603);
DEFLIT(lit_356);
DEFLIT(lit_768);
DEFLIT(lit_186);
DEFLIT(lit_897);
DEFLIT(lit_173);
DEFLIT(lit_207);
DEFLIT(lit_981);
DEFLIT(lit_876);
DEFLIT(lit_666);
DEFLIT(lit_784);
DEFLIT(lit_642);
DEFLIT(lit_945);
DEFLIT(lit_331);
DEFLIT(lit_55);
DEFLIT(lit_294);
DEFLIT(lit_574);
DEFLIT(lit_310);
DEFLIT(lit_539);
DEFLIT(lit_588);
DEFLIT(lit_298);
DEFLIT(lit_507);
DEFLIT(lit_94);
DEFLIT(lit_367);
DEFLIT(lit_1035);
DEFLIT(lit_155);
DEFLIT(lit_261);
DEFLIT(lit_391);
DEFLIT(lit_922);
DEFLIT(lit_279);
DEFLIT(lit_496);
DEFLIT(lit_790);
DEFLIT(lit_895);
DEFLIT(lit_867);
DEFLIT(lit_818);
DEFLIT(lit_823);
DEFLIT(lit_727);
DEFLIT(lit_283);
DEFLIT(lit_825);
DEFLIT(lit_270);
DEFLIT(lit_80);
DEFLIT(lit_174);
DEFLIT(lit_495);
DEFLIT(lit_56);
DEFLIT(lit_1026);
DEFLIT(lit_335);
DEFLIT(lit_954);
DEFLIT(lit_849);
DEFLIT(lit_375);
DEFLIT(lit_626);
DEFLIT(lit_822);
DEFLIT(lit_368);
DEFLIT(lit_336);
DEFLIT(lit_72);
DEFLIT(lit_657);
DEFLIT(lit_627);
DEFLIT(lit_86);
DEFLIT(lit_650);
DEFLIT(lit_216);
DEFLIT(lit_717);
DEFLIT(lit_859);
DEFLIT(lit_877);
DEFLIT(lit_455);
DEFLIT(lit_918);
DEFLIT(lit_159);
DEFLIT(lit_202);
DEFLIT(lit_604);
DEFLIT(lit_467);
DEFLIT(lit_713);
DEFLIT(lit_58);
DEFLIT(lit_285);
DEFLIT(lit_464);
DEFLIT(lit_168);
DEFLIT(lit_1024);
DEFLIT(lit_503);
DEFLIT(lit_590);
DEFLIT(lit_305);
DEFLIT(lit_764);
DEFLIT(lit_422);
DEFLIT(lit_806);
DEFLIT(lit_799);
DEFLIT(lit_73);
DEFLIT(lit_1071);
DEFLIT(lit_834);
DEFLIT(lit_372);
DEFLIT(lit_339);
DEFLIT(lit_898);
DEFLIT(lit_765);
DEFLIT(lit_161);
DEFLIT(lit_33);
DEFLIT(lit_532);
DEFLIT(lit_237);
DEFLIT(lit_548);
DEFLIT(lit_747);
DEFLIT(lit_995);
DEFLIT(lit_783);
DEFLIT(lit_450);
DEFLIT(lit_286);
DEFLIT(lit_628);
DEFLIT(lit_932);
DEFLIT(lit_118);
DEFLIT(lit_1033);
DEFLIT(lit_114);
DEFLIT(lit_839);
DEFLIT(lit_883);
DEFLIT(lit_708);
DEFLIT(lit_805);
DEFLIT(lit_1048);
DEFLIT(lit_1055);
DEFLIT(lit_397);
DEFLIT(lit_74);
DEFLIT(lit_710);
DEFLIT(lit_853);
DEFLIT(lit_730);
DEFLIT(lit_619);
DEFLIT(lit_953);
DEFLIT(lit_520);
DEFLIT(lit_182);
DEFLIT(lit_892);
DEFLIT(lit_482);
DEFLIT(lit_775);
DEFLIT(lit_826);
DEFLIT(lit_126);
DEFLIT(lit_745);
DEFLIT(lit_379);
DEFLIT(lit_267);
DEFLIT(lit_624);
DEFLIT(lit_1065);
DEFLIT(lit_213);
DEFLIT(lit_753);
DEFLIT(lit_54);
DEFLIT(lit_456);
DEFLIT(lit_435);
DEFLIT(lit_997);
DEFLIT(lit_792);
DEFLIT(lit_42);
DEFLIT(lit_793);
DEFLIT(lit_615);
DEFLIT(lit_942);
DEFLIT(lit_1003);
DEFLIT(lit_1050);
DEFLIT(lit_634);
DEFLIT(lit_136);
DEFLIT(lit_743);
DEFLIT(lit_665);
DEFLIT(lit_700);
DEFLIT(lit_809);
DEFLIT(lit_236);
DEFLIT(lit_225);
DEFLIT(lit_169);
DEFLIT(lit_376);
DEFLIT(lit_340);
DEFLIT(lit_934);
DEFLIT(lit_445);
DEFLIT(lit_611);
DEFLIT(lit_214);
DEFLIT(lit_558);
DEFLIT(lit_210);
DEFLIT(lit_685);
DEFLIT(lit_218);
DEFLIT(lit_617);
DEFLIT(lit_908);
DEFLIT(lit_334);
DEFLIT(lit_748);
DEFLIT(lit_651);
DEFLIT(lit_814);
DEFLIT(lit_193);
DEFLIT(lit_1006);
DEFLIT(lit_829);
DEFLIT(lit_510);
DEFLIT(lit_327);
DEFLIT(lit_1051);
DEFLIT(lit_656);
DEFLIT(lit_533);
DEFLIT(lit_643);
DEFLIT(lit_902);
DEFLIT(lit_3);
DEFLIT(lit_412);
DEFLIT(lit_514);
DEFLIT(lit_563);
DEFLIT(lit_83);
DEFLIT(lit_516);
DEFLIT(lit_28);
DEFLIT(lit_492);
DEFLIT(lit_248);
DEFLIT(lit_116);
DEFLIT(lit_309);
DEFLIT(lit_377);
DEFLIT(lit_262);
DEFLIT(lit_640);
DEFLIT(lit_1089);
DEFLIT(lit_1015);
DEFLIT(lit_848);
DEFLIT(lit_460);
DEFLIT(lit_105);
DEFLIT(lit_704);
DEFLIT(lit_963);
DEFLIT(lit_1020);
DEFLIT(lit_53);
DEFLIT(lit_473);
DEFLIT(lit_408);
DEFLIT(lit_957);
DEFLIT(lit_1099);
DEFLIT(lit_41);
DEFLIT(lit_469);
DEFLIT(lit_509);
DEFLIT(lit_865);
DEFLIT(lit_485);
DEFLIT(lit_117);
DEFLIT(lit_222);
DEFLIT(lit_996);
DEFLIT(lit_84);
DEFLIT(lit_348);
DEFLIT(lit_885);
DEFLIT(lit_967);
DEFLIT(lit_424);
DEFLIT(lit_170);
DEFLIT(lit_991);
DEFLIT(lit_297);
DEFLIT(lit_288);
DEFLIT(lit_344);
DEFLIT(lit_449);
DEFLIT(lit_929);
DEFLIT(lit_30);
DEFLIT(lit_158);
DEFLIT(lit_989);
DEFLIT(lit_687);
DEFLIT(lit_239);
DEFLIT(lit_850);
DEFLIT(lit_950);
DEFLIT(lit_585);
DEFLIT(lit_869);
DEFLIT(lit_631);
DEFLIT(lit_1019);
DEFLIT(lit_952);
DEFLIT(lit_587);
DEFLIT(lit_623);
DEFLIT(lit_726);
DEFLIT(lit_1008);
DEFLIT(lit_798);
DEFLIT(lit_92);
DEFLIT(lit_156);
DEFLIT(lit_527);
DEFLIT(lit_120);
DEFLIT(lit_852);
DEFLIT(lit_696);
DEFLIT(lit_1067);
DEFLIT(lit_1057);
DEFLIT(lit_677);
DEFLIT(lit_263);
DEFLIT(lit_1);
DEFLIT(lit_597);
DEFLIT(lit_48);
DEFLIT(lit_733);
DEFLIT(lit_304);
DEFLIT(lit_491);
DEFLIT(lit_820);
DEFLIT(lit_148);
DEFLIT(lit_22);
DEFLIT(lit_160);
DEFLIT(lit_333);
DEFLIT(lit_767);
DEFLIT(lit_524);
DEFLIT(lit_737);
DEFLIT(lit_1070);
DEFLIT(lit_143);
DEFLIT(lit_32);
DEFLIT(lit_681);
DEFLIT(lit_788);
DEFLIT(lit_537);
DEFLIT(lit_273);
DEFLIT(lit_205);
DEFLIT(lit_921);
DEFLIT(lit_197);
DEFLIT(lit_782);
DEFLIT(lit_413);
DEFLIT(lit_98);
DEFLIT(lit_815);
DEFLIT(lit_266);
DEFLIT(lit_698);
DEFLIT(lit_129);
DEFLIT(lit_434);
DEFLIT(lit_528);
DEFLIT(lit_758);
DEFLIT(lit_645);
DEFLIT(lit_292);
DEFLIT(lit_192);
DEFLIT(lit_454);
DEFLIT(lit_319);
DEFLIT(lit_925);
DEFLIT(lit_813);
DEFLIT(lit_610);
DEFLIT(lit_184);
DEFLIT(lit_23);
DEFLIT(lit_857);
DEFLIT(lit_940);
DEFLIT(lit_362);
DEFLIT(lit_277);
DEFLIT(lit_1011);
DEFLIT(lit_1027);
DEFLIT(lit_632);
DEFLIT(lit_789);
DEFLIT(lit_411);
DEFLIT(lit_494);
DEFLIT(lit_759);
DEFLIT(lit_725);
DEFLIT(lit_749);
DEFLIT(lit_557);
DEFLIT(lit_179);
DEFLIT(lit_858);
DEFLIT(lit_662);
DEFLIT(lit_812);
DEFLIT(lit_390);
DEFLIT(lit_130);
DEFLIT(lit_1013);
DEFLIT(lit_693);
DEFLIT(lit_77);
DEFLIT(lit_724);
DEFLIT(lit_1016);
DEFLIT(lit_573);
DEFLIT(lit_431);
DEFLIT(lit_670);
DEFLIT(lit_4);
DEFLIT(lit_345);
DEFLIT(lit_200);
DEFLIT(lit_602);
DEFLIT(lit_478);
DEFLIT(lit_777);
DEFLIT(lit_31);
DEFLIT(lit_781);
DEFLIT(lit_584);
DEFLIT(lit_337);
DEFLIT(lit_176);
DEFLIT(lit_884);
DEFLIT(lit_723);
DEFLIT(lit_246);
DEFLIT(lit_224);
DEFLIT(lit_113);
DEFLIT(lit_838);
DEFLIT(lit_360);
DEFLIT(lit_1056);
DEFLIT(lit_538);
DEFLIT(lit_489);
DEFLIT(lit_690);
DEFLIT(lit_1049);
DEFLIT(lit_791);
DEFLIT(lit_370);
DEFLIT(lit_586);
DEFLIT(lit_383);
DEFLIT(lit_442);
DEFLIT(lit_622);
DEFLIT(lit_837);
DEFLIT(lit_752);
DEFLIT(lit_564);
DEFLIT(lit_971);
DEFLIT(lit_993);
DEFLIT(lit_567);
DEFLIT(lit_477);
DEFLIT(lit_1046);
DEFLIT(lit_701);
DEFLIT(lit_461);
DEFLIT(lit_986);
DEFLIT(lit_51);
DEFLIT(lit_405);
DEFLIT(lit_101);
DEFLIT(lit_49);
DEFLIT(lit_880);
DEFLIT(lit_566);
DEFLIT(lit_1030);
DEFLIT(lit_300);
DEFLIT(lit_871);
DEFLIT(lit_518);
DEFLIT(lit_138);
DEFLIT(lit_382);
DEFLIT(lit_275);
DEFLIT(lit_620);
DEFLIT(lit_181);
DEFLIT(lit_484);
DEFLIT(lit_18);
DEFLIT(lit_52);
DEFLIT(lit_316);
DEFLIT(lit_1094);
DEFLIT(lit_452);
DEFLIT(lit_359);
DEFLIT(lit_357);
DEFLIT(lit_760);
DEFLIT(lit_914);
DEFLIT(lit_63);
DEFLIT(lit_1087);
DEFLIT(lit_526);
DEFLIT(lit_20);
DEFLIT(lit_939);
DEFLIT(lit_488);
DEFLIT(lit_821);
DEFLIT(lit_616);
DEFLIT(lit_264);
DEFLIT(lit_944);
DEFLIT(lit_100);
DEFLIT(lit_378);
DEFLIT(lit_342);
DEFLIT(lit_131);
DEFLIT(lit_827);
DEFLIT(lit_384);
DEFLIT(lit_346);
DEFLIT(lit_1088);
DEFLIT(lit_374);
DEFLIT(lit_443);
DEFLIT(lit_69);
DEFLIT(lit_257);
DEFLIT(lit_958);
DEFLIT(lit_1091);
DEFLIT(lit_660);
DEFLIT(lit_145);
DEFLIT(lit_317);
DEFLIT(lit_1042);
DEFLIT(lit_561);
DEFLIT(lit_111);
DEFLIT(lit_935);
DEFLIT(lit_751);
DEFLIT(lit_705);
DEFLIT(lit_481);
DEFLIT(lit_911);
DEFLIT(lit_715);
DEFLIT(lit_1017);
DEFLIT(lit_1076);
DEFLIT(lit_684);
DEFLIT(lit_968);
DEFLIT(lit_1080);
DEFLIT(lit_658);
DEFLIT(lit_917);
DEFLIT(lit_889);
DEFLIT(lit_931);
DEFLIT(lit_773);
DEFLIT(lit_16);
DEFLIT(lit_833);
DEFLIT(lit_387);
DEFLIT(lit_721);
DEFLIT(lit_323);
DEFLIT(lit_964);
DEFLIT(lit_842);
DEFLIT(lit_506);
DEFLIT(lit_731);
DEFLIT(lit_433);
DEFLIT(lit_836);
DEFLIT(lit_621);
DEFLIT(lit_874);
DEFLIT(lit_1063);
DEFLIT(lit_736);
DEFLIT(lit_896);
DEFLIT(lit_347);
DEFLIT(lit_582);
DEFLIT(lit_440);
DEFLIT(lit_901);
DEFLIT(lit_312);
DEFLIT(lit_178);
DEFLIT(lit_220);
DEFLIT(lit_581);
DEFLIT(lit_256);
DEFLIT(lit_959);
DEFLIT(lit_115);
DEFLIT(lit_451);
DEFLIT(lit_500);
DEFLIT(lit_1022);
DEFLIT(lit_692);
DEFLIT(lit_625);
DEFLIT(lit_873);
DEFLIT(lit_447);
DEFLIT(lit_499);
DEFLIT(lit_652);
DEFLIT(lit_638);
DEFLIT(lit_183);
DEFLIT(lit_81);
DEFLIT(lit_194);
DEFLIT(lit_772);
DEFLIT(lit_598);
DEFLIT(lit_802);
DEFLIT(lit_923);
DEFLIT(lit_274);
DEFLIT(lit_673);
DEFLIT(lit_1004);
DEFLIT(lit_648);
DEFLIT(lit_395);
DEFLIT(lit_39);
DEFLIT(lit_90);
DEFLIT(lit_845);
DEFLIT(lit_591);
DEFLIT(lit_975);
DEFLIT(lit_303);
DEFLIT(lit_289);
DEFLIT(lit_234);
DEFLIT(lit_549);
DEFLIT(lit_714);
DEFLIT(lit_153);
DEFLIT(lit_226);
DEFLIT(lit_924);
DEFLIT(lit_244);
DEFLIT(lit_268);
DEFLIT(lit_551);
DEFLIT(lit_629);
DEFLIT(lit_800);
DEFLIT(lit_302);
DEFLIT(lit_486);
DEFLIT(lit_369);
DEFLIT(lit_937);
DEFLIT(lit_649);
DEFLIT(lit_282);
DEFLIT(lit_57);
DEFLIT(lit_983);
DEFLIT(lit_855);
DEFLIT(lit_672);
DEFLIT(lit_686);
DEFLIT(lit_522);
DEFLIT(lit_729);
DEFLIT(lit_718);
DEFLIT(lit_728);
DEFLIT(lit_543);
DEFLIT(lit_1069);
DEFLIT(lit_956);
DEFLIT(lit_278);
DEFLIT(lit_228);
DEFLIT(lit_735);
DEFLIT(lit_786);
DEFLIT(lit_45);
DEFLIT(lit_505);
DEFLIT(lit_635);
DEFLIT(lit_233);
DEFLIT(lit_59);
DEFLIT(lit_1052);
DEFLIT(lit_811);
DEFLIT(lit_476);
DEFLIT(lit_742);
DEFLIT(lit_195);
DEFLIT(lit_780);
DEFLIT(lit_856);
DEFLIT(lit_44);
DEFLIT(lit_1098);
DEFLIT(lit_109);
DEFLIT(lit_870);
DEFLIT(lit_329);
DEFLIT(lit_146);
DEFLIT(lit_320);
DEFLIT(lit_1068);
DEFLIT(lit_703);
DEFLIT(lit_926);
DEFLIT(lit_134);
DEFLIT(lit_420);
DEFLIT(lit_542);
DEFLIT(lit_140);
DEFLIT(lit_99);
DEFLIT(lit_970);
DEFLIT(lit_79);
DEFLIT(lit_872);
DEFLIT(lit_755);
DEFLIT(lit_1066);
DEFLIT(lit_769);
DEFLIT(lit_854);
DEFLIT(lit_776);
DEFLIT(lit_1072);
DEFLIT(lit_734);
DEFLIT(lit_824);
DEFLIT(lit_891);
DEFLIT(lit_844);
DEFLIT(lit_633);
DEFLIT(lit_614);
DEFLIT(lit_882);
DEFLIT(lit_702);
DEFLIT(lit_1054);
DEFLIT(lit_570);
DEFLIT(lit_1053);
DEFLIT(lit_1062);
DEFLIT(lit_187);
DEFLIT(lit_87);
DEFLIT(lit_1043);
DEFLIT(lit_738);
DEFLIT(lit_104);
DEFLIT(lit_128);
DEFLIT(lit_1058);
DEFLIT(lit_75);
DEFLIT(lit_380);
DEFLIT(lit_103);
DEFLIT(lit_920);
DEFLIT(lit_415);
DEFLIT(lit_429);
DEFLIT(lit_291);
DEFLIT(lit_661);
DEFLIT(lit_973);
DEFLIT(lit_62);
DEFLIT(lit_409);
DEFLIT(lit_365);
DEFLIT(lit_78);
DEFLIT(lit_437);
DEFLIT(lit_1002);
DEFLIT(lit_398);
DEFLIT(lit_630);
DEFLIT(lit_595);
DEFLIT(lit_191);
DEFLIT(lit_34);
DEFLIT(lit_284);
DEFLIT(lit_835);
DEFLIT(lit_740);
DEFLIT(lit_886);
DEFLIT(lit_1092);
DEFLIT(lit_1007);
DEFLIT(lit_1081);
DEFLIT(lit_253);
DEFLIT(lit_936);
DEFLIT(lit_487);
DEFLIT(lit_463);
DEFLIT(lit_251);
DEFLIT(lit_571);
DEFLIT(lit_771);
DEFLIT(lit_744);
DEFLIT(lit_315);
DEFLIT(lit_565);
DEFLIT(lit_475);
DEFLIT(lit_1005);
DEFLIT(lit_531);
DEFLIT(lit_1010);
DEFLIT(lit_35);
DEFLIT(lit_739);
DEFLIT(lit_1018);
DEFLIT(lit_1023);
DEFLIT(lit_1025);
DEFLIT(lit_641);
DEFLIT(lit_819);
DEFLIT(lit_189);
DEFLIT(lit_807);
DEFLIT(lit_436);
DEFLIT(lit_948);
DEFLIT(lit_1012);
DEFLIT(lit_439);
DEFLIT(lit_1096);
DEFLIT(lit_8);
DEFLIT(lit_180);
DEFLIT(lit_65);
DEFLIT(lit_864);
DEFLIT(lit_1075);
DEFLIT(lit_1028);
DEFLIT(lit_1085);
DEFLIT(lit_240);
DEFLIT(lit_132);
DEFLIT(lit_550);
DEFLIT(lit_229);
DEFLIT(lit_381);
DEFLIT(lit_245);
DEFLIT(lit_579);
DEFLIT(lit_177);
DEFLIT(lit_671);
DEFLIT(lit_675);
DEFLIT(lit_863);
DEFLIT(lit_594);
DEFLIT(lit_907);
DEFLIT(lit_163);
DEFLIT(lit_568);
DEFLIT(lit_165);
DEFLIT(lit_1074);
DEFLIT(lit_801);
DEFLIT(lit_830);
DEFLIT(lit_966);
DEFLIT(lit_1001);
DEFLIT(lit_108);
DEFLIT(lit_271);
DEFLIT(lit_754);
DEFLIT(lit_583);
DEFLIT(lit_930);
DEFLIT(lit_680);
DEFLIT(lit_242);
DEFLIT(lit_61);
DEFLIT(lit_913);
DEFLIT(lit_419);
DEFLIT(lit_24);
DEFLIT(lit_547);
DEFLIT(lit_66);
DEFLIT(lit_255);
DEFLIT(lit_1059);
DEFLIT(lit_142);
DEFLIT(lit_355);
DEFLIT(lit_483);
DEFLIT(lit_928);
DEFLIT(lit_13);
DEFLIT(lit_861);
DEFLIT(lit_933);
DEFLIT(lit_479);
DEFLIT(lit_123);
DEFLIT(lit_332);
DEFLIT(lit_985);
DEFLIT(lit_468);
DEFLIT(lit_37);
DEFLIT(lit_982);
DEFLIT(lit_330);
DEFLIT(lit_890);
DEFLIT(lit_843);
DEFLIT(lit_154);
DEFLIT(lit_448);
DEFLIT(lit_258);
DEFLIT(lit_1009);
DEFLIT(lit_881);
DEFLIT(lit_536);
DEFLIT(lit_1084);
DEFLIT(lit_112);
DEFLIT(lit_133);
DEFLIT(lit_716);
DEFLIT(lit_817);
DEFLIT(lit_385);
DEFLIT(lit_596);
DEFLIT(lit_962);
DEFLIT(lit_162);
DEFLIT(lit_504);
DEFLIT(lit_691);
DEFLIT(lit_689);
DEFLIT(lit_803);
DEFLIT(lit_592);
DEFLIT(lit_555);
DEFLIT(lit_699);
DEFLIT(lit_990);
DEFLIT(lit_400);
DEFLIT(lit_808);
DEFLIT(lit_110);
DEFLIT(lit_1047);
DEFLIT(lit_426);
DEFLIT(lit_290);
DEFLIT(lit_770);
DEFLIT(lit_600);
DEFLIT(lit_427);
DEFLIT(lit_295);
DEFLIT(lit_260);
DEFLIT(lit_396);
DEFLIT(lit_988);
DEFLIT(lit_909);
DEFLIT(lit_423);
DEFLIT(lit_363);

/* FUNCTIONS: */

LOCFOR(fun_x_2328_0);
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
LOCFOR(fun_binding_closed_overQ_56);
LOCFOR(fun_binding_closed_overQ_setter_57);
LOCFOR(fun_58);
LOCFOR(fun_binding_index_59);
LOCFOR(fun_binding_index_setter_60);
LOCFOR(fun_61);
LOCFOR(fun_compile_time_program_62);
LOCFOR(fun_compile_time_program_setter_63);
LOCFOR(fun_reference_binding_64);
LOCFOR(fun_reference_binding_setter_65);
LOCFOR(fun_reference_called_functionQ_66);
LOCFOR(fun_reference_called_functionQ_setter_67);
LOCFOR(fun_68);
LOCFOR(fun_reference_frame_number_69);
LOCFOR(fun_reference_frame_number_setter_70);
LOCFOR(fun_reference_frame_offset_71);
LOCFOR(fun_reference_frame_offset_setter_72);
LOCFOR(fun_boundQ_reference_73);
LOCFOR(fun_boundQ_reference_setter_74);
LOCFOR(fun_boundQ_default_75);
LOCFOR(fun_boundQ_default_setter_76);
LOCFOR(fun_assignment_form_77);
LOCFOR(fun_assignment_form_setter_78);
LOCFOR(fun_assignment_reference_79);
LOCFOR(fun_assignment_reference_setter_80);
LOCFOR(fun_assignment_binding_81);
LOCFOR(fun_assignment_binding_setter_82);
LOCFOR(fun_signature_bindings_83);
LOCFOR(fun_signature_bindings_setter_84);
LOCFOR(fun_85);
LOCFOR(fun_signature_names_86);
LOCFOR(fun_signature_names_setter_87);
LOCFOR(fun_88);
LOCFOR(fun_signature_specs_89);
LOCFOR(fun_signature_specs_setter_90);
LOCFOR(fun_91);
LOCFOR(fun_signature_naryQ_92);
LOCFOR(fun_signature_naryQ_setter_93);
LOCFOR(fun_94);
LOCFOR(fun_signature_arity_95);
LOCFOR(fun_signature_arity_setter_96);
LOCFOR(fun_97);
LOCFOR(fun_signature_value_98);
LOCFOR(fun_signature_value_setter_99);
LOCFOR(fun_100);
LOCFOR(fun_req_sig_specs_101);
LOCFOR(fun_function_binding_102);
LOCFOR(fun_function_binding_setter_103);
LOCFOR(fun_104);
LOCFOR(fun_function_debug_name_105);
LOCFOR(fun_function_debug_name_setter_106);
LOCFOR(fun_107);
LOCFOR(fun_function_signature_108);
LOCFOR(fun_function_signature_setter_109);
FUNFOR(YevalSastYfunction_bindings);
FUNFOR(YevalSastYfunction_specs);
FUNFOR(YevalSastYfunction_naryQ);
FUNFOR(YevalSastYfunction_value);
LOCFOR(fun_function_kind_114);
FUNFOR(YevalSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_116);
LOCFOR(fun_as_lst_117);
LOCFOR(fun_x_2334_118);
LOCFOR(fun_119);
LOCFOR(fun_120);
LOCFOR(fun_function_body_121);
LOCFOR(fun_function_body_setter_122);
LOCFOR(fun_123);
LOCFOR(fun_function_index_124);
LOCFOR(fun_function_index_setter_125);
LOCFOR(fun_126);
LOCFOR(fun_function_temporaries_127);
LOCFOR(fun_function_temporaries_setter_128);
LOCFOR(fun_129);
LOCFOR(fun_function_registers_130);
LOCFOR(fun_function_registers_setter_131);
LOCFOR(fun_132);
LOCFOR(fun_function_loop_133);
LOCFOR(fun_function_loop_setter_134);
LOCFOR(fun_135);
LOCFOR(fun_function_source_136);
LOCFOR(fun_function_source_setter_137);
LOCFOR(fun_138);
LOCFOR(fun_function_frame_len_139);
LOCFOR(fun_function_frame_len_setter_140);
LOCFOR(fun_141);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_empty_143);
LOCFOR(fun_function_ref_count_144);
LOCFOR(fun_function_ref_count_setter_145);
LOCFOR(fun_146);
LOCFOR(fun_function_free_147);
LOCFOR(fun_function_free_setter_148);
LOCFOR(fun_149);
LOCFOR(fun_incf_ref_count_150);
LOCFOR(fun_incf_ref_count_151);
LOCFOR(fun_function_kind_152);
LOCFOR(fun_function_adjectives_153);
LOCFOR(fun_function_adjectives_setter_154);
LOCFOR(fun_155);
LOCFOR(fun_function_kind_156);
LOCFOR(fun_function_kind_157);
LOCFOR(fun_alternative_condition_158);
LOCFOR(fun_alternative_condition_setter_159);
LOCFOR(fun_alternative_consequent_160);
LOCFOR(fun_alternative_consequent_setter_161);
LOCFOR(fun_alternative_alternant_162);
LOCFOR(fun_alternative_alternant_setter_163);
LOCFOR(fun_loop_bindings_164);
LOCFOR(fun_loop_bindings_setter_165);
LOCFOR(fun_loop_body_166);
LOCFOR(fun_loop_body_setter_167);
LOCFOR(fun_loop_continue_168);
LOCFOR(fun_loop_continue_setter_169);
FUNFOR(YevalSastYsequential);
LOCFOR(fun_empty_171);
LOCFOR(fun_constant_value_172);
LOCFOR(fun_constant_value_setter_173);
LOCFOR(fun_constant_index_174);
LOCFOR(fun_constant_index_setter_175);
LOCFOR(fun_application_arguments_176);
LOCFOR(fun_application_arguments_setter_177);
LOCFOR(fun_application_tailQ_178);
LOCFOR(fun_application_tailQ_setter_179);
LOCFOR(fun_180);
LOCFOR(fun_application_loop_181);
LOCFOR(fun_application_loop_setter_182);
LOCFOR(fun_application_tailQ_183);
LOCFOR(fun_application_function_184);
LOCFOR(fun_application_function_setter_185);
LOCFOR(fun_application_knownQ_186);
LOCFOR(fun_application_knownQ_setter_187);
LOCFOR(fun_188);
LOCFOR(fun_application_next_methods_189);
LOCFOR(fun_application_next_methods_setter_190);
LOCFOR(fun_application_binding_191);
LOCFOR(fun_application_binding_setter_192);
LOCFOR(fun_fix_let_bindings_193);
LOCFOR(fun_fix_let_bindings_setter_194);
LOCFOR(fun_fix_let_types_195);
LOCFOR(fun_fix_let_types_setter_196);
LOCFOR(fun_fix_let_arguments_197);
LOCFOR(fun_fix_let_arguments_setter_198);
LOCFOR(fun_fix_let_body_199);
LOCFOR(fun_fix_let_body_setter_200);
FUNFOR(YevalSastYfab_list);
LOCFOR(fun_empty_202);
FUNFOR(YevalSastYarguments);
LOCFOR(fun_empty_204);
LOCFOR(fun_locals_bindings_205);
LOCFOR(fun_locals_bindings_setter_206);
LOCFOR(fun_locals_functions_207);
LOCFOR(fun_locals_functions_setter_208);
LOCFOR(fun_locals_body_209);
LOCFOR(fun_locals_body_setter_210);
LOCFOR(fun_bind_exit_main_fun_211);
LOCFOR(fun_bind_exit_main_fun_setter_212);
LOCFOR(fun_bind_exit_lightQ_213);
LOCFOR(fun_bind_exit_lightQ_setter_214);
LOCFOR(fun_215);
LOCFOR(fun_unwind_protect_protected_thunk_216);
LOCFOR(fun_unwind_protect_protected_thunk_setter_217);
LOCFOR(fun_unwind_protect_cleanup_thunk_218);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_219);
LOCFOR(fun_monitor_type_220);
LOCFOR(fun_monitor_type_setter_221);
LOCFOR(fun_monitor_info_222);
LOCFOR(fun_monitor_info_setter_223);
LOCFOR(fun_monitor_test_224);
LOCFOR(fun_monitor_test_setter_225);
LOCFOR(fun_monitor_handler_226);
LOCFOR(fun_monitor_handler_setter_227);
LOCFOR(fun_monitor_main_thunk_228);
LOCFOR(fun_monitor_main_thunk_setter_229);
LOCFOR(fun_ast_walkX_230);
LOCFOR(fun_ast_walk_231);
LOCFOR(fun_ast_walk_232);
LOCFOR(fun_ast_copy_233);
LOCFOR(fun_ast_copy_234);
LOCFOR(fun_environment_next_235);
LOCFOR(fun_environment_next_setter_236);
LOCFOR(fun_237);
LOCFOR(fun_environment_bindings_238);
LOCFOR(fun_environment_bindings_setter_239);
LOCFOR(fun_environment_module_240);
LOCFOR(fun_environment_module_setter_241);
LOCFOR(fun_environment_module_loader_242);
LOCFOR(fun_environment_module_loader_setter_243);
LOCFOR(fun_environment_uses_modules_244);
LOCFOR(fun_environment_uses_modules_setter_245);
LOCFOR(fun_246);
LOCFOR(fun_environment_allows_foreign_namesQ_247);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_248);
LOCFOR(fun_249);
LOCFOR(fun_250);
LOCFOR(fun_251);
LOCFOR(fun_env_object_name_252);
LOCFOR(fun_objectify_253);
LOCFOR(fun_objectify_list_254);
LOCFOR(fun_objectify_list_255);
LOCFOR(fun_objectify_list_256);
LOCFOR(fun_objectify_257);
LOCFOR(fun_objectify_258);
LOCFOR(fun_objectify_259);
LOCFOR(fun_objectify_260);
LOCFOR(fun_objectify_261);
LOCFOR(fun_objectify_quotation_262);
LOCFOR(fun_objectify_quotation_263);
LOCFOR(fun_objectify_quotation_264);
LOCFOR(fun_objectify_raw_265);
LOCFOR(fun_objectify_boundQ_266);
LOCFOR(fun_objectify_compile_time_267);
LOCFOR(fun_objectify_alternative_268);
LOCFOR(fun_loop_269);
LOCFOR(fun_sequentialize_270);
LOCFOR(fun_transform_defs_271);
LOCFOR(fun_objectify_sequential_272);
LOCFOR(fun_273);
LOCFOR(fun_objectify_application_274);
LOCFOR(fun_275);
LOCFOR(fun_objectify_application_276);
LOCFOR(fun_277);
LOCFOR(fun_objectify_application_278);
LOCFOR(fun_process_closed_application_279);
LOCFOR(fun_pack_nary_args_280);
LOCFOR(fun_pack_args_281);
LOCFOR(fun_process_nary_closed_application_282);
LOCFOR(fun_convert2arguments_283);
LOCFOR(fun_objectify_assignment_284);
LOCFOR(fun_objectify_assignment_285);
LOCFOR(fun_objectify_assignment_using_286);
LOCFOR(fun_objectify_assignment_using_287);
LOCFOR(fun_objectify_assignment_using_288);
LOCFOR(fun_objectify_assignment_using_289);
LOCFOR(fun_objectify_assignment_using_290);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_292);
LOCFOR(fun_objectify_definition_293);
LOCFOR(fun_objectify_variable_definition_294);
LOCFOR(fun_objectify_dynamic_definition_295);
LOCFOR(fun_expand_296);
FUNFOR(YevalSastYPPPmacro);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_299);
LOCFOR(fun_objectify_function_definition_300);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_302);
LOCFOR(fun_objectify_generic_definition_303);
LOCFOR(fun_objectify_method_definition_304);
LOCFOR(fun_305);
LOCFOR(fun_306);
LOCFOR(fun_307);
LOCFOR(fun_308);
LOCFOR(fun_objectify_function_source_309);
LOCFOR(fun_310);
LOCFOR(fun_311);
LOCFOR(fun_objectify_function_using_312);
LOCFOR(fun_objectify_function_313);
LOCFOR(fun_objectify_signature_314);
LOCFOR(fun_compute_local_reference_offsets_315);
LOCFOR(fun_objectify_binding_316);
LOCFOR(fun_binding_reference_class_317);
LOCFOR(fun_objectify_binding_318);
LOCFOR(fun_objectify_binding_319);
LOCFOR(fun_default_type_320);
LOCFOR(fun_objectify_free_global_reference_321);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_323);
LOCFOR(fun_objectify_symbol_324);
LOCFOR(fun_ftype_325);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_empty_327);
LOCFOR(fun_328);
LOCFOR(fun_329);
LOCFOR(fun_330);
LOCFOR(fun_objectify_locals_331);
LOCFOR(fun_objectify_bind_exit_332);
LOCFOR(fun_objectify_unwind_protect_333);
LOCFOR(fun_objectify_monitor_334);
LOCFOR(fun_335);
LOCFOR(fun_336);
LOCFOR(fun_337);
LOCFOR(fun_338);
LOCFOR(fun_339);
LOCFOR(fun_objectify_export_340);
FUNFOR(YevalSastYimport_globalX);
LOCFOR(fun_342);
LOCFOR(fun_objectify_useSexport_module_343);
LOCFOR(fun_344);
LOCFOR(fun_objectify_use_include_345);
LOCFOR(fun_346);
LOCFOR(fun_objectify_use_library_347);
LOCFOR(fun_348);
LOCFOR(fun_use_mod_349);
LOCFOR(fun_use_c_mod_350);
LOCFOR(fun_objectify_use_module_351);
LOCFOR(fun_insert_and_mangle_globalX_352);
FUNFOR(YevalSastYimport_and_mangle_globalX);
LOCFOR(fun_354);
LOCFOR(fun_objectify_use_mangle_module_355);
LOCFOR(fun_expand_bind_list_356);
LOCFOR(fun_expand_bind_list_357);
LOCFOR(fun_expand_bind_list_358);
LOCFOR(fun_expand_bind_listT_359);
LOCFOR(fun_expand_bind_listT_360);
LOCFOR(fun_expand_bind_element_361);
LOCFOR(fun_expand_bind_element_362);
LOCFOR(fun_expand_pattern_363);
LOCFOR(fun_364);
LOCFOR(fun_expand_syntax_if_365);
LOCFOR(fun_r_extendT_366);
LOCFOR(fun_insert_globalX_367);
LOCFOR(fun_368);
LOCFOR(fun_insert_globalsX_369);
LOCFOR(fun_find_static_global_environment_370);
LOCFOR(fun_find_static_global_environment_371);
LOCFOR(fun_find_syntax_environment_372);
LOCFOR(fun_find_environment_module_373);
LOCFOR(fun_find_binding_374);
LOCFOR(fun_find_binding_375);
LOCFOR(fun_find_binding_376);
LOCFOR(fun_frame_bindings_377);
LOCFOR(fun_register_magic_binding_378);
LOCFOR(fun_magic_bindings_379);
LOCFOR(fun_x_2355_380);
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
LOCFOR(fun_391);
LOCFOR(fun_392);
LOCFOR(fun_393);
LOCFOR(fun_394);
LOCFOR(fun_395);
LOCFOR(fun_396);
LOCFOR(fun_397);
LOCFOR(fun_398);
LOCFOR(fun_399);
LOCFOR(fun_400);
LOCFOR(fun_401);
LOCFOR(fun_402);
LOCFOR(fun_403);
LOCFOR(fun_404);
LOCFOR(fun_pairize_405);
LOCFOR(fun_406);
LOCFOR(fun_objectify_define_property_407);
LOCFOR(fun_408);
LOCFOR(fun_409);
LOCFOR(fun_410);
LOCFOR(fun_411);
LOCFOR(fun_412);
LOCFOR(fun_413);
LOCFOR(fun_ast_macro_expand_414);
LOCFOR(fun_415);
LOCFOR(fun_416);
LOCFOR(fun_417);
LOCFOR(fun_418);
LOCFOR(fun_419);
LOCFOR(fun_420);
LOCFOR(fun_421);
LOCFOR(fun_422);
LOCFOR(fun_transaction_implemented_bindings_423);
LOCFOR(fun_transaction_implemented_bindings_setter_424);
LOCFOR(fun_425);
LOCFOR(fun_transaction_dependents_426);
LOCFOR(fun_transaction_dependents_setter_427);
LOCFOR(fun_428);
FUNFOR(YevalSastYtransaction_register_implemented_binding);
FUNFOR(YevalSastYtransaction_register_dependent);
FUNFOR(YevalSastYtransaction_emptyQ);
LOCFOR(fun_432);
LOCFOR(fun_433);
FUNFOR(YevalSastYmerge_transactionsX);
LOCFOR(fun_435);
LOCFOR(fun_436);
FUNFOR(YevalSastYroll_back_transaction);
LOCFOR(fun_438);
LOCFOR(fun_439);
FUNFOR(YevalSastYcall_with_subtransaction);
LOCFOR(fun_x_2359_441);
LOCFOR(fun_442);
LOCFOR(fun_443);
LOCFOR(fun_444);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_446);
LOCFOR(fun_module_loader_modules_setter_447);
LOCFOR(fun_448);
LOCFOR(fun_module_loader_stack_449);
LOCFOR(fun_module_loader_stack_setter_450);
LOCFOR(fun_451);
LOCFOR(fun_module_name_452);
LOCFOR(fun_module_mangled_name_453);
LOCFOR(fun_module_mangled_name_setter_454);
LOCFOR(fun_455);
LOCFOR(fun_module_mangled_string_name_456);
LOCFOR(fun_module_mangled_string_name_setter_457);
LOCFOR(fun_458);
LOCFOR(fun_module_target_environment_459);
LOCFOR(fun_module_target_environment_setter_460);
LOCFOR(fun_module_syntax_environment_461);
LOCFOR(fun_module_syntax_environment_setter_462);
LOCFOR(fun_Pmodule_exports_463);
LOCFOR(fun_464);
LOCFOR(fun_module_data_processedQ_465);
LOCFOR(fun_module_data_processedQ_setter_466);
LOCFOR(fun_467);
LOCFOR(fun_module_runtime_data_468);
LOCFOR(fun_module_runtime_data_setter_469);
LOCFOR(fun_470);
LOCFOR(fun_module_transaction_471);
LOCFOR(fun_module_transaction_setter_472);
LOCFOR(fun_473);
LOCFOR(fun_module_uses_c_files_474);
LOCFOR(fun_475);
LOCFOR(fun_module_uses_c_includes_476);
LOCFOR(fun_477);
LOCFOR(fun_module_uses_c_libraries_478);
LOCFOR(fun_479);
LOCFOR(fun_module_exports_480);
FUNFOR(YevalSastYset_module_environments);
LOCFOR(fun_482);
FUNFOR(YevalSastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_484);
FUNFOR(YevalSastYregister_moduleX);
FUNFOR(YevalSastYprobe_module);
LOCFOR(fun_487);
LOCFOR(fun_488);
FUNFOR(YevalSastYload_and_register_module);
FUNFOR(YevalSastYexport_bindingX);
FUNFOR(YevalSastYbinding_native_toQ);
LOCFOR(fun_492);
FUNFOR(YevalSastYreport_undefined_global_bindings);
LOCFOR(fun_494);
LOCFOR(fun_495);
LOCFOR(fun_add_user_496);
LOCFOR(fun_497);
FUNFOR(YevalSastYcompute_transitive_users);
FUNFOR(YevalSastYremove_module_internalX);
LOCFOR(fun_500);
FUNFOR(YevalSastYremove_modules_by_nameX);
FUNFOR(YevalSastYmodule_name_to_relpath);
LOCFOR(fun_503);
FUNFOR(YevalSastYinstall_initial_bindings);
FUNFOR(YevalSastYfab_static_global_environment);
LOCFOR(fun_506);
FUNFOR(YevalSastYfab_subset_environment);
LOCFOR(fun_508);
LOCFOR(fun_509);
LOCFOR(fun_510);
LOCFOR(fun_511);
LOCFOR(fun_load_module_512);
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
LOCFOR(fun_528);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
FUNFOR(YevalSastYdo_static_global_bindings);
FUNFOR(YevalSastYdo_named_static_global_bindings);
LOCFOR(fun_ast_contains_funQ_540);
LOCFOR(fun_walk_541);
LOCFOR(fun_542);
LOCFOR(fun_ast_contains_funQ_543);
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
extern P YevalSastY___main_11___ ();
extern P YevalSastY___main_12___ ();
extern P YevalSastY___main_13___ ();
extern P YevalSastY___main_14___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_2328_0) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_5),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P return_;
  P saved_dependentF8991;
  P x_2327F8990;
  P x_2327F8989;
  P x_2327F8988;
  P x_2327F8987;
  P x_2327F8986;
  P bodyF8985;
  P dependentF8984;
  P x_2327F8983;
  P x_2328F8982;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_2328_0,2);
  x_2328F8982 = T38;
  FUNINIT(x_2328F8982, 2,FREEREF(0),return_);
  x_2327F8983 = FREEREF(0);
  dependentF8984 = YPfalse;
  bodyF8985 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2327F8983,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2327F8983,LITREF(lit_5),x_2328F8982);
    x_2327F8986 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2327F8986,x_2328F8982);
    dependentF8984 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2327F8986);
    x_2327F8987 = T8;
    bodyF8985 = x_2327F8987;
    x_2327F8988 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2327F8988,x_2328F8982);
    x_2327F8989 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2327F8989,x_2328F8982);
    T6 = CALL1(1,VARREF(Ytail),x_2327F8988);
    x_2327F8990 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2327F8990,x_2328F8982);
  } else {
    T10 = CALL2(1,x_2328F8982,LITREF(lit_6),x_2327F8983);
  }
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF8991 = T37;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T17 = CALL1(1,VARREF(Ylst),saved_dependentF8991);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_9));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_9));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T24 = dependentF8984;
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T31 = bodyF8985;
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T36 = CALL1(1,VARREF(Ylst),saved_dependentF8991);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T32,LITREF(lit_9));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T19,T25,LITREF(lit_9));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_2) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_error_3) {
  P message_,arguments_;
  P T0,T1,T2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  T2 = CALL1(1,message_,VARREF(YLstrG));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLsimple_ast_errorG),VARREF(YgooSconditionsYcondition_message),T2,VARREF(YgooSconditionsYcondition_arguments),arguments_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_namespace_error_4) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLnamespace_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_type_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_type_setter_6) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_line_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_line_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_program_register_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_register_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_name_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_name_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mangled_name_15) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mangled_name_setter_16) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_type_18) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_type_setter_19) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_20) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_setter_21) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(VARREF(YevalSastYast_LbotG));
}

FUNCODEDEF(fun_global_box_value_23) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_global_box_value_setter_24) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_binding_kind_26) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_kind_setter_27) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_69));
}

FUNCODEDEF(fun_binding_module_29) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_module_setter_30) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_freeQ_32) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_freeQ_setter_33) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_info_35) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_info_setter_36) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_prop_38) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_prop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_prop_setter_39) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_prop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_module_name_41) {
  P b_;
  P modF8992;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF8992 = T2;
  if (modF8992 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYmodule_name),modF8992);
    T0 = T1;
  } else {
    T0 = VARREF(YevalSastYDgoo_boot_module_name);
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmaybe_log_dependency) {
  P dependable_,dtype_;
  P T0,T1;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dtype_, 1);
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
LINK_STACK();
  ARG(macro_binding_, 0);
  CALL2(1,VARREF(YevalSastYmaybe_log_dependency),macro_binding_,VARREF(YevalSdependencyYDexpansion_parse_dependency));
  T0 = CALL1(1,VARREF(YevalSastYbinding_handler),macro_binding_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_value_44) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_value_setter_45) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_mutableQ_47) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mutableQ_setter_48) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_setter_51) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_binding_dottedQ_53) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dottedQ_setter_54) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_closed_overQ_56) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_closed_overQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_closed_overQ_setter_57) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_closed_overQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_index_59) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_60) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compile_time_program_62) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_time_program_setter_63) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_64) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_setter_65) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_66) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_setter_67) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reference_frame_number_69) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_number_setter_70) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_71) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_setter_72) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_73) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_setter_74) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_default_75) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_default_setter_76) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_77) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_setter_78) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_79) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_setter_80) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_81) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_setter_82) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_83) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_setter_84) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_names_86) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_names_setter_87) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_specs_89) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_specs_setter_90) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_naryQ_92) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_naryQ_setter_93) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_arity_95) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_arity_setter_96) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_value_98) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_value_setter_99) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_req_sig_specs_101) {
  P sig_;
  P typesF8993;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(sig_, 0);
  T6 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF8993 = T6;
  T2 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),typesF8993);
    T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF8993,YPint((P)0),T4);
    T0 = T3;
  } else {
    T0 = typesF8993;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_binding_102) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_binding_setter_103) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_debug_name_105) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_debug_name_setter_106) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_signature_108) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_signature_setter_109) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_bindings) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_bindings),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_specs) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_naryQ) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_naryQ),T2);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_value) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_kind_114) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_252));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_2330F8996;
  P x_2329F8995;
  P bF8994;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  T8 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF8994 = T8;
  x_2329F8995 = bF8994;
  x_2330F8996 = VARREF(YisaQ);
  T1 = CALL2(1,x_2330F8996,x_2329F8995,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF8994);
    T0 = T2;
  } else {
    T4 = CALL2(1,x_2330F8996,x_2329F8995,VARREF(YevalSastYLmodule_bindingG));
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF8994);
      T7 = CALL1(1,VARREF(YevalSastYbinding_name),bF8994);
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_255),T6,T7);
      T3 = T5;
    } else {
      T3 = LITREF(lit_256);
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_116) {
  P dependent_,dependable_,dtype_;
  P nameF8997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF8997 = T8;
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_259),nameF8997);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T4 != YPfalse) {
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_260),nameF8997);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_261),nameF8997);
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_lst_117) {
  P e_;
  P eF8999;
  P resF8998;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  resF8998 = Ynil;
  eF8999 = e_;
  LOOP_422: {
    P a422_0,a422_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eF8999);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF8998);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(Yhead),eF8999);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF8998);
      T6 = CALL1(1,VARREF(Ytail),eF8999);
      a422_0 = T4;
      a422_1 = T6;
      resF8998 = a422_0;
      eF8999 = a422_1;
      goto LOOP_422;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2334_118) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_269),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  P return_;
  P x_2333F9006;
  P x_2333F9005;
  P x_2333F9004;
  P x_2333F9003;
  P nameF9002;
  P x_2333F9001;
  P x_2334F9000;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_2334_118,2);
  x_2334F9000 = T17;
  FUNINIT(x_2334F9000, 2,FREEREF(0),return_);
  x_2333F9001 = FREEREF(0);
  nameF9002 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2333F9001,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2333F9001,LITREF(lit_269),x_2334F9000);
    x_2333F9003 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2333F9003,x_2334F9000);
    nameF9002 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2333F9003);
    x_2333F9004 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2333F9004,x_2334F9000);
    x_2333F9005 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2333F9005,x_2334F9000);
    T5 = CALL1(1,VARREF(Ytail),x_2333F9004);
    x_2333F9006 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2333F9006,x_2334F9000);
  } else {
    T9 = CALL2(1,x_2334F9000,LITREF(lit_6),x_2333F9001);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_270));
  T13 = nameF9002;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T15 = CALL2(1,VARREF(YgooSmacrosYcat),T16,LITREF(lit_9));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T14,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_120) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_119,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_121) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_setter_122) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_123) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_index_124) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_index_setter_125) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_126) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_function_temporaries_127) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_128) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_130) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_131) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_132) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_loop_133) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_loop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_loop_setter_134) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_loop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_source_136) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_source_setter_137) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_frame_len_139) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_frame_len_setter_140) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYfree_environment) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_143) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_empty));
}

FUNCODEDEF(fun_function_ref_count_144) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_ref_count_setter_145) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_146) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_function_free_147) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_free_setter_148) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_149) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfree_environmentG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incf_ref_count_150) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_incf_ref_count_151) {
  P x_;
  P x_2335F9007;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  x_2335F9007 = x_;
  T2 = CALL1(1,VARREF(YevalSastYfunction_ref_count),x_2335F9007);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T1,x_2335F9007);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_kind_152) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_327));
}

FUNCODEDEF(fun_function_adjectives_153) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_adjectives_setter_154) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_155) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_kind_156) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_335));
}

FUNCODEDEF(fun_function_kind_157) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_338));
}

FUNCODEDEF(fun_alternative_condition_158) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_condition_setter_159) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_160) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_setter_161) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_162) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_setter_163) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_bindings_164) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_bindings_setter_165) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_body_166) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_body_setter_167) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_continue_168) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_continue));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_continue_setter_169) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_continue));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYsequential) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_171) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_172) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_value_setter_173) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_174) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_setter_175) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_176) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_setter_177) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_178) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_setter_179) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_loop_181) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_loop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_loop_setter_182) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_loop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_183) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_application_function_184) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_function_setter_185) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_186) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_setter_187) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_next_methods_189) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_next_methods_setter_190) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_191) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_setter_192) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_193) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_setter_194) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_195) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_setter_196) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_197) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_setter_198) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_199) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_setter_200) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_list) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_202) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfab_list_empty));
}

FUNCODEDEF(YevalSastYarguments) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_204) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDarguments_empty));
}

FUNCODEDEF(fun_locals_bindings_205) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_bindings_setter_206) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_functions_207) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_functions_setter_208) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_body_209) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_body_setter_210) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_main_fun_211) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_main_fun_setter_212) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_lightQ_213) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_lightQ_setter_214) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_215) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_unwind_protect_protected_thunk_216) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_217) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_218) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_219) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_type_220) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_type_setter_221) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_info_222) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_info_setter_223) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_test_224) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_test_setter_225) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_handler_226) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_handler_setter_227) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_main_thunk_228) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_main_thunk_setter_229) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walkX_230) {
  P g_,o_,args_;
  P xF9013;
  P tmpF9012;
  P setterF9011;
  P getterF9010;
  P propF9009;
  P x_2336F9008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T20 = CALL1(1,VARREF(Yobject_props),o_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_2336F9008 = T19;
  LOOP_423: {
    P a423_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2336F9008);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_2336F9008);
      propF9009 = T18;
      T17 = CALL1(1,VARREF(Yprop_getter),propF9009);
      getterF9010 = T17;
      T16 = CALL1(1,VARREF(Yprop_setter),propF9009);
      setterF9011 = T16;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF9010,VARREF(YevalSastYbinding_value));
      tmpF9012 = T6;
      if (tmpF9012 != YPfalse) {
        T4 = tmpF9012;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF9010,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF9010);
        if (T8 != YPfalse) {
          T13 = CALL1(0,getterF9010,o_);
          xF9013 = T13;
          T10 = CALL2(1,VARREF(YisaQ),xF9013,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T12 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF9013,args_);
            T11 = CALL2(1,setterF9011,T12,o_);
            T9 = T11;
          } else {
            T9 = YPfalse;
          }
          T7 = T9;
        } else {
          T7 = YPfalse;
        }
      } else {
      }
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2336F9008);
      a423_0 = T15;
      x_2336F9008 = a423_0;
      goto LOOP_423;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_walk_231) {
  P g_,o_,args_;
  P xF9018;
  P tmpF9017;
  P getterF9016;
  P propF9015;
  P x_2338F9014;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T18 = CALL1(1,VARREF(Yobject_props),o_);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_2338F9014 = T17;
  LOOP_424: {
    P a424_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2338F9014);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2338F9014);
      propF9015 = T16;
      T15 = CALL1(1,VARREF(Yprop_getter),propF9015);
      getterF9016 = T15;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF9016,VARREF(YevalSastYbinding_value));
      tmpF9017 = T6;
      if (tmpF9017 != YPfalse) {
        T4 = tmpF9017;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF9016,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF9016);
        if (T8 != YPfalse) {
          T12 = CALL1(0,getterF9016,o_);
          xF9018 = T12;
          T10 = CALL2(1,VARREF(YisaQ),xF9018,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T11 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF9018,args_);
            T9 = T11;
          } else {
            T9 = YPfalse;
          }
          T7 = T9;
        } else {
          T7 = YPfalse;
        }
      } else {
      }
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2338F9014);
      a424_0 = T14;
      x_2338F9014 = a424_0;
      goto LOOP_424;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_walk_232) {
  P g_,o_,args_;
  P eF9020;
  P xF9019;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  xF9019 = o_;
  LOOP_425: {
    P a425_0;
    T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF9019);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(Yhead),xF9019);
      eF9020 = T7;
      T3 = CALL2(1,VARREF(YisaQ),eF9020,VARREF(YevalSastYLprogramG));
      if (T3 != YPfalse) {
        T4 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,eF9020,args_);
      } else {
      }
      T6 = CALL1(1,VARREF(Ytail),xF9019);
      a425_0 = T6;
      xF9019 = a425_0;
      goto LOOP_425;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_copy_233) {
  P x_;
  P copyF9021;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSclassYclone),x_);
  copyF9021 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF9021);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF9021);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_copy_234) {
  P x_;
  P next_metsF9022;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T6 = (P)YPfun_reg();
    T7 = (P)YPnext_methods();
    T5 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T6,T7,x_);
    next_metsF9022 = T5;
    T3 = CALL1(1,VARREF(Yhead),next_metsF9022);
    T4 = CALL1(1,VARREF(Ytail),next_metsF9022);
    T2 = CALL4(1,VARREF(YgooSmacrosYnapp),T3,T4,x_,Ynil);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_235) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_setter_236) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_237) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_238) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_bindings_setter_239) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_240) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_setter_241) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_242) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_setter_243) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_244) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_setter_245) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_246) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_247) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_setter_248) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_249) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_250) {
  P binding_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(binding_, 0);
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_69));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
      T7 = CALL1(1,VARREF(YevalSastYglobal_box_value),T8);
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T7);
      T4 = T6;
    } else {
      T4 = YPfalse;
    }
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T9 = CALL1(0,FREEREF(1),T10);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_251) {
  P return_;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T0 = FUNFAB(fun_250,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_252) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_251,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_253) {
  P e_,r_,tailQ_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
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

FUNCODEDEF(fun_objectify_list_254) {
  P f_,e_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T1 = CALL1(1,VARREF(Ytail),e_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_application),f_,T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_255) {
  P f_,e_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),f_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_handler),T2);
  T0 = CALL3(1,T1,e_,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_256) {
  P f_,e_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T3 = CALL1(1,VARREF(YevalSastYreference_binding),f_);
  T2 = CALL1(1,VARREF(YevalSastYmacro_expander),T3);
  T1 = CALL3(1,T2,e_,r_,tailQ_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_257) {
  P e_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_258) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

FUNCODEDEF(fun_objectify_259) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

FUNCODEDEF(fun_objectify_260) {
  P e_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_261) {
  P e_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_quotation_262) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_quotation_263) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_quotation_264) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_raw_265) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLraw_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_boundQ_266) {
  P e_,default_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(default_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),default_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),T1,VARREF(YevalSastYboundQ_default),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_267) {
  P program_,r_,tailQ_,rtQ_;
  P astF9026;
  P target_envF9025;
  P syntax_envF9024;
  P modF9023;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
  T8 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF9023 = T8;
  T7 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF9023);
  syntax_envF9024 = T7;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF9023);
  target_envF9025 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF9024,tailQ_);
  astF9026 = T5;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF9026);
  if (rtQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF9024,target_envF9025);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YevalSastYobjectify),program_,r_,tailQ_);
    T0 = T3;
  } else {
    T4 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_alternative_268) {
  P t_,c_,a_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(t_, 0);
  ARG(c_, 1);
  ARG(a_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),t_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),c_,r_,tailQ_);
  T3 = CALL3(1,VARREF(YevalSastYobjectify),a_,r_,tailQ_);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),T1,VARREF(YevalSastYalternative_consequent),T2,VARREF(YevalSastYalternative_alternant),T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_269) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(eT_, 0);
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

FUNCODEDEF(fun_sequentialize_270) {
  P eT_;
  P loopF9027;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(eT_, 0);
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
      T8 = FUNSHELL(1,fun_loop_269,1);
      loopF9027 = T8;
      FUNINIT(loopF9027, 1,loopF9027);
      T7 = CALL1(1,loopF9027,eT_);
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_271) {
  P eT_;
  P eF9028;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T22 = CALL1(1,VARREF(Yhead),eT_);
    eF9028 = T22;
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF9028);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
      T13 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF9028);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF9028);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_9));
      T10 = CALL1(1,VARREF(Ylst),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYcat),T10,LITREF(lit_9));
      T8 = CALL1(1,VARREF(Ylst),T9);
      T17 = CALL1(1,VARREF(Ytail),eT_);
      T16 = CALL1(1,VARREF(YevalSastYtransform_defs),T17);
      T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T16,LITREF(lit_9));
      T5 = CALL1(1,VARREF(Ylst),T6);
      T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_9));
      T2 = T4;
    } else {
      T19 = CALL1(1,VARREF(Ylst),eF9028);
      T21 = CALL1(1,VARREF(Ytail),eT_);
      T20 = CALL1(1,VARREF(YevalSastYtransform_defs),T21);
      T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_9));
      T2 = T18;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_sequential_272) {
  P eT_,r_,tailQ_;
  P astsF9033;
  P headF9032;
  P tailQF9031;
  P eTF9030;
  P resF9029;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  resF9029 = Ynil;
  T12 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  eTF9030 = T12;
  LOOP_426: {
    P a426_0,a426_1;
    T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eTF9030);
    if (T2 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF9029);
      T1 = T3;
    } else {
      T11 = CALL1(1,VARREF(Ytail),eTF9030);
      T10 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T11);
      if (T10 != YPfalse) {
        T9 = tailQ_;
      } else {
        T9 = YPfalse;
      }
      tailQF9031 = T9;
      T8 = CALL1(1,VARREF(Yhead),eTF9030);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,r_,tailQF9031);
      headF9032 = T7;
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),headF9032,resF9029);
      T6 = CALL1(1,VARREF(Ytail),eTF9030);
      a426_0 = T5;
      a426_1 = T6;
      resF9029 = a426_0;
      eTF9030 = a426_1;
      goto LOOP_426;
      T1 = T4;
    }
  }
  astsF9033 = T1;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),astsF9033);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_273) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_274) {
  P ff_,eT_,r_,tailQ_;
  P eeTF9034;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T3 = FUNFAB(fun_273,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF9034 = T1;
  T0 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF9034,r_,tailQ_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_275) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_276) {
  P ff_,eT_,r_,tailQ_;
  P primF9037;
  P fvfF9036;
  P eeTF9035;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = FUNFAB(fun_275,1,r_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,eT_);
  T6 = CALL1(1,VARREF(YevalSastYconvert2arguments),T7);
  eeTF9035 = T6;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF9036 = T5;
  T4 = CALL1(1,VARREF(YevalSastYbinding_prop),fvfF9036);
  primF9037 = T4;
  if (primF9037 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYast_copy),primF9037);
    T1 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T2,eeTF9035,r_,tailQ_);
    T0 = T1;
  } else {
    T3 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF9036,VARREF(YevalSastYapplication_arguments),eeTF9035,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_277) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_278) {
  P ff_,eT_,r_,tailQ_;
  P eeTF9038;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T5 = FUNFAB(fun_277,1,r_);
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),T5,eT_);
  T3 = CALL1(1,VARREF(YevalSastYconvert2arguments),T4);
  eeTF9038 = T3;
  T0 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T2 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF9038,VARREF(YevalSastYapplication_tailQ),tailQ_);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_process_closed_application_279) {
  P f_,eT_,r_,tailQ_;
  P bF9040;
  P vTF9039;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T16 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF9039 = T16;
  T15 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF9040 = T15;
  T1 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
  if (T1 != YPfalse) {
    T2 = CALL4(1,VARREF(YevalSastYprocess_nary_closed_application),f_,eT_,r_,tailQ_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),eT_);
    T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSmathYE),T5,T6);
    if (T4 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      if (T10 != YPfalse) {
        T9 = VARREF(YevalSastYLlow_letG);
      } else {
        T9 = VARREF(YevalSastYLfix_letG);
      }
      T11 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
      T12 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
      T13 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
      T8 = CALLN(1,VARREF(Ynew),9,T9,VARREF(YevalSastYfix_let_bindings),T11,VARREF(YevalSastYfix_let_types),T12,VARREF(YevalSastYfix_let_arguments),eT_,VARREF(YevalSastYfix_let_body),T13);
      T3 = T8;
    } else {
      T14 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_578),f_,eT_);
      T3 = T14;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_280) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_583),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_584),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pack_args_281) {
  P eT_,vT_,tT_;
  P lst_typeF9042;
  P varF9041;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
  T16 = CALL1(1,VARREF(Yhead),vT_);
  varF9041 = T16;
  T1 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF9041);
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_587),FREEREF(0),YPfalse);
    lst_typeF9042 = T6;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF9041);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF9042,varF9041);
    CALL2(1,VARREF(Yhead_setter),lst_typeF9042,tT_);
    T4 = CALL1(1,FREEREF(1),eT_);
    T3 = CALL3(1,VARREF(YevalSastYobjectify),T4,FREEREF(0),YPfalse);
    T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T2 = CALL2(1,VARREF(YevalSastYarguments),T3,T5);
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T8 != YPfalse) {
      T9 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_588),FREEREF(2),eT_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(Yhead),eT_);
      T13 = CALL1(1,VARREF(Ytail),eT_);
      T14 = CALL1(1,VARREF(Ytail),vT_);
      T15 = CALL1(1,VARREF(Ytail),tT_);
      T12 = CALL3(0,FREEREF(3),T13,T14,T15);
      T10 = CALL2(1,VARREF(YevalSastYarguments),T11,T12);
      T7 = T10;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_process_nary_closed_application_282) {
  P f_,eT_,r_,tailQ_;
  P oF9046;
  P vTF9045;
  P pack_argsF9044;
  P pack_nary_argsF9043;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T6 = FUNSHELL(1,fun_pack_nary_args_280,1);
  pack_nary_argsF9043 = T6;
  T7 = FUNSHELL(1,fun_pack_args_281,4);
  pack_argsF9044 = T7;
  FUNINIT(pack_nary_argsF9043, 1,pack_nary_argsF9043);
  FUNINIT(pack_argsF9044, 4,r_,pack_nary_argsF9043,f_,pack_argsF9044);
  T5 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF9045 = T5;
  T1 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T2 = CALL3(1,pack_argsF9044,eT_,vTF9045,T3);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF9045,VARREF(YevalSastYfix_let_types),T1,VARREF(YevalSastYfix_let_arguments),T2,VARREF(YevalSastYfix_let_body),T4);
  oF9046 = T0;
UNLINK_STACK();
  RET(oF9046);
}

FUNCODEDEF(fun_convert2arguments_283) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(eT_, 0);
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

FUNCODEDEF(fun_objectify_assignment_284) {
  P binding_,e_,r_,tailQ_;
  P opF9047;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF9047 = T9;
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF9047);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF9047);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T7);
    T3 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T4,T6);
    T2 = CALL3(1,VARREF(YevalSastYobjectify),T3,r_,tailQ_);
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_593),e_);
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_285) {
  P binding_,e_,r_,tailQ_;
  P valF9049;
  P refF9048;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF9048 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF9049 = T1;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF9048,valF9049);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_286) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T0 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  CALL2(1,VARREF(YevalSastYbinding_mutableQ_setter),YPtrue,T0);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),ref_,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_objectify_assignment_using_287) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_288) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_289) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_290) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_601),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF9050;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
  T4 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T3 = CALL2(1,VARREF(YgooSmathYNEE),T4,LITREF(lit_604));
  tmpF9050 = T3;
  if (tmpF9050 != YPfalse) {
    T1 = tmpF9050;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_605));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_604));
    if (T7 != YPfalse) {
      T6 = YPtrue;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_69));
      if (T9 != YPfalse) {
        T8 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T12 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T11 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_606),T12,new_kind_);
          T10 = T11;
        } else {
          T10 = YPfalse;
        }
        T8 = T10;
      }
      T6 = T8;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_define_binding_292) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF9058;
  P bindingF9057;
  P modF9056;
  P foreignQF9055;
  P tmpF9054;
  P modF9053;
  P grF9052;
  P existing_bindingF9051;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
  T15 = CALL2(1,VARREF(YevalSastYfind_binding),name_,r_);
  existing_bindingF9051 = T15;
  T14 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF9052 = T14;
  T13 = CALL1(1,VARREF(YevalSastYenvironment_module),grF9052);
  modF9053 = T13;
  if (existing_bindingF9051 != YPfalse) {
    T10 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF9051,modF9053);
    tmpF9054 = T10;
    if (tmpF9054 != YPfalse) {
      T9 = tmpF9054;
    } else {
      T9 = defining_methodQ_;
    }
    T8 = CALL1(1,VARREF(Ynot),T9);
    foreignQF9055 = T8;
    T1 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF9051);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF9051);
      if (foreignQF9055 != YPfalse) {
        T3 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF9051);
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
    } else {
      if (foreignQF9055 != YPfalse) {
        T6 = CALL1(1,VARREF(YevalSastYmodule_name),modF9053);
        T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF9051);
        T5 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_609),T6,name_,T7);
        T4 = T5;
      } else {
        T4 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF9051,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF9051,kind_);
    T0 = existing_bindingF9051;
  } else {
    T12 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF9056 = T12;
    T11 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF9056);
    bindingF9057 = T11;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF9057,grF9052);
    T0 = bindingF9057;
  }
  bindingF9058 = T0;
UNLINK_STACK();
  QRET(bindingF9058);
}

FUNCODEDEF(fun_objectify_definition_293) {
  P type_,kind_,var_,e_,r_;
  P defnF9061;
  P bindingF9060;
  P nameF9059;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(type_, 0);
  ARG(kind_, 1);
  ARG(var_, 2);
  ARG(e_, 3);
  ARG(r_, 4);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),var_);
  nameF9059 = T3;
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF9059,YPfalse,kind_);
  bindingF9060 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF9060,VARREF(YevalSastYassignment_form),T1);
  defnF9061 = T0;
UNLINK_STACK();
  QRET(defnF9061);
}

FUNCODEDEF(fun_objectify_variable_definition_294) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_69),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_dynamic_definition_295) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_616),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_296) {
  P x_,r_,tailQ_;
  P expF9062;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_621));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_622));
  } else {
  }
  T3 = CALL1(1,FREEREF(0),x_);
  T2 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),x_,T3);
  expF9062 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_623));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF9062);
    T1 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_624));
  } else {
  }
UNLINK_STACK();
  QRET(expF9062);
}

FUNCODEDEF(YevalSastYPPPmacro) {
  P binding_,expander_;
  P T0;
LINK_STACK();
  ARG(binding_, 0);
  ARG(expander_, 1);
  T0 = FUNFAB(fun_expand_296,1,expander_);
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),T0,binding_);
UNLINK_STACK();
  RET(binding_);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF9065;
  P envF9064;
  P tmpF9063;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
  tmpF9063 = env_or_false_;
  if (tmpF9063 != YPfalse) {
    T2 = tmpF9063;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T2 = T3;
  }
  envF9064 = T2;
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),envF9064,name_,YPfalse,LITREF(lit_627));
  bindingF9065 = T1;
  T0 = CALL2(1,VARREF(YevalSastYPPPmacro),bindingF9065,expander_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_299) {
  P name_,e_,r_,rtQ_;
  P bindingF9071;
  P modnameF9070;
  P expanderF9069;
  P ast_expanderF9068;
  P syntax_envF9067;
  P sep_expanderF9066;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
  T14 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_macro_function),name_,e_);
  sep_expanderF9066 = T14;
  T13 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF9067 = T13;
  T12 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF9066,syntax_envF9067,YPfalse);
  ast_expanderF9068 = T12;
  T11 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF9068);
  expanderF9069 = T11;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF9070 = T9;
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T7 = CALL4(1,VARREF(YPPmacro),modnameF9070,name_,expanderF9069,T8);
  bindingF9071 = T7;
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T0 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF9067,T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF9071,syntax_envF9067);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF9066,r_,YPfalse);
    T4 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF9071,VARREF(YevalSastYassignment_form),T5);
    T3 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,r_);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_objectify_function_definition_300) {
  P name_,e_,r_;
  P defnF9074;
  P fF9073;
  P bindingF9072;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF9072 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF9073 = T2;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF9072,fF9073);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,fF9073);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF9072,VARREF(YevalSastYassignment_form),fF9073);
  defnF9074 = T1;
UNLINK_STACK();
  RET(defnF9074);
}

FUNCODEDEF(YevalSastYmodule_binding) {
  P kind_;
  P T0;
LINK_STACK();
  ARG(kind_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_primitive_definition_302) {
  P name_,mods_,sig_,body_,r_;
  P defnF9080;
  P formF9079;
  P bodyF9078;
  P new_rF9077;
  P signatureF9076;
  P bindingF9075;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_636));
  bindingF9075 = T9;
  T8 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF9076 = T8;
  T7 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF9076);
  T6 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T7);
  new_rF9077 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF9077,YPtrue);
  bodyF9078 = T5;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T3 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF9075,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T4,VARREF(YevalSastYfunction_signature),signatureF9076,VARREF(YevalSastYfunction_body),bodyF9078);
  formF9079 = T3;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_637));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSastYbinding_prop_setter),formF9079,bindingF9075);
  } else {
  }
  T2 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF9075,VARREF(YevalSastYassignment_form),formF9079);
  defnF9080 = T2;
UNLINK_STACK();
  RET(defnF9080);
}

FUNCODEDEF(fun_objectify_generic_definition_303) {
  P name_,sig_,r_;
  P defnF9084;
  P formF9083;
  P signatureF9082;
  P bindingF9081;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
  T4 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF9081 = T4;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF9082 = T3;
  T2 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF9081,VARREF(YevalSastYfunction_debug_name),T2,VARREF(YevalSastYfunction_signature),signatureF9082);
  formF9083 = T1;
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF9081,VARREF(YevalSastYassignment_form),formF9083);
  defnF9084 = T0;
UNLINK_STACK();
  RET(defnF9084);
}

FUNCODEDEF(fun_objectify_method_definition_304) {
  P name_,e_,r_;
  P defnF9090;
  P formF9089;
  P callF9088;
  P metF9087;
  P genF9086;
  P bindingF9085;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_69));
  bindingF9085 = T9;
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_642));
  T7 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL1(1,VARREF(Ylst),YPfalse);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_9));
  genF9086 = T5;
  T4 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF9087 = T4;
  T3 = CALL3(1,VARREF(Ylst),LITREF(lit_643),genF9086,metF9087);
  callF9088 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),callF9088,r_,YPfalse);
  formF9089 = T2;
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF9085,VARREF(YevalSastYassignment_form),formF9089);
  defnF9090 = T1;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF9087);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,metF9087);
UNLINK_STACK();
  RET(defnF9090);
}

FUNCODEDEF(fun_305) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  if (DYNREF(YevalSastYTrecord_sourceQT) != YPfalse) {
    T4 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_12),FREEREF(1));
      T3 = T5;
    } else {
      T3 = FREEREF(1);
    }
    T2 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_647),FREEREF(0),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_306) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_307) {
  P x_2341F9091;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_2341F9091 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T1 = FUNFAB(fun_305,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T2 = FUNFAB(fun_306,1,x_2341F9091);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_308) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_309) {
  P sig_,body_,r_;
  P x_2340F9092;
  P T0,T1,T2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  x_2340F9092 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T1 = FUNFAB(fun_307,3,sig_,body_,r_);
  T2 = FUNFAB(fun_308,1,x_2340F9092);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_310) {
  P bodyF9095;
  P new_rF9094;
  P signatureF9093;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T5 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF9093 = T5;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF9093);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF9094 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF9094,YPtrue);
  bodyF9095 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF9093,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bodyF9095,FREEREF(3));
  T1 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),bodyF9095,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T1,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(3));
}

FUNCODEDEF(fun_311) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_using_312) {
  P met_,sig_,body_,r_,tailQ_;
  P x_2342F9096;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  x_2342F9096 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,met_);
  T1 = FUNFAB(fun_310,4,sig_,r_,body_,met_);
  T2 = FUNFAB(fun_311,1,x_2342F9096);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_function_313) {
  P sig_,body_,line_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),line_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_function_using),T1,sig_,body_,r_,tailQ_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_signature_314) {
  P sig_,r_;
  P bindingF9113;
  P typeF9112;
  P stypeF9111;
  P dottedQF9110;
  P stypeF9109;
  P snameF9108;
  P paramF9107;
  P arityF9106;
  P valueF9105;
  P tmpF9104;
  P sexpr_valueF9103;
  P typesF9102;
  P namesF9101;
  P bindingsF9100;
  P naryQF9099;
  P paramsF9098;
  P sexpr_paramsF9097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
  T30 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF9097 = T30;
  paramsF9098 = sexpr_paramsF9097;
  naryQF9099 = YPfalse;
  bindingsF9100 = Ynil;
  T28 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  namesF9101 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  typesF9102 = T29;
  LOOP_427: {
    P a427_0,a427_1,a427_2,a427_3,a427_4;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),paramsF9098);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sig_);
      sexpr_valueF9103 = T15;
      tmpF9104 = sexpr_valueF9103;
      if (tmpF9104 != YPfalse) {
        T13 = tmpF9104;
      } else {
        T14 = CALL1(1,VARREF(YevalSastYdefault_type),r_);
        T13 = T14;
      }
      T12 = CALL3(1,VARREF(YevalSastYobjectify),T13,r_,YPfalse);
      valueF9105 = T12;
      T10 = CALL1(1,VARREF(YgooStypesYlen),namesF9101);
      if (naryQF9099 != YPfalse) {
        T11 = YPint((P)1);
      } else {
        T11 = YPint((P)0);
      }
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
      arityF9106 = T9;
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),bindingsF9100);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),namesF9101);
      T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T5,r_);
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),typesF9102);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),naryQF9099,r_,YPfalse);
      T8 = CALL3(1,VARREF(YevalSastYobjectify),arityF9106,r_,YPfalse);
      T2 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T3,VARREF(YevalSastYsignature_names),T4,VARREF(YevalSastYsignature_specs),T6,VARREF(YevalSastYsignature_naryQ),T7,VARREF(YevalSastYsignature_arity),T8,VARREF(YevalSastYsignature_value),valueF9105);
      T0 = T2;
    } else {
      T27 = CALL1(1,VARREF(Yhead),paramsF9098);
      paramF9107 = T27;
      T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF9107);
      snameF9108 = T26;
      T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF9107);
      stypeF9109 = T25;
      T24 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF9109,VARREF(YevalSastYDsexpr_optionals_tag));
      dottedQF9110 = T24;
      if (dottedQF9110 != YPfalse) {
        T23 = VARREF(YevalSastYDsexpr_optionals_type_name);
      } else {
        T23 = stypeF9109;
      }
      stypeF9111 = T23;
      T22 = CALL3(1,VARREF(YevalSastYobjectify),stypeF9111,r_,YPfalse);
      typeF9112 = T22;
      T21 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF9108,VARREF(YevalSastYbinding_type),typeF9112,VARREF(YevalSastYbinding_dottedQ),dottedQF9110);
      bindingF9113 = T21;
      T17 = CALL1(1,VARREF(Ytail),paramsF9098);
      T18 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF9113,bindingsF9100);
      T19 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF9108,VARREF(Ytail),namesF9101);
      T20 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF9112,VARREF(Ytail),typesF9102);
      a427_0 = T17;
      a427_1 = dottedQF9110;
      a427_2 = T18;
      a427_3 = T19;
      a427_4 = T20;
      paramsF9098 = a427_0;
      naryQF9099 = a427_1;
      bindingsF9100 = a427_2;
      namesF9101 = a427_3;
      typesF9102 = a427_4;
      goto LOOP_427;
      T0 = T16;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_315) {
  P binding_,r_;
  P bindingsF9117;
  P jF9116;
  P rF9115;
  P iF9114;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  iF9114 = YPint((P)0);
  rF9115 = r_;
  LOOP_428: {
    P a428_0,a428_1;
    T1 = CALL2(1,VARREF(YisaQ),rF9115,VARREF(YevalSastYLstatic_local_environmentG));
    if (T1 != YPfalse) {
      jF9116 = YPint((P)0);
      T14 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF9115);
      bindingsF9117 = T14;
      LOOP_429: {
        P a429_0,a429_1;
        T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF9117);
        if (T3 != YPfalse) {
          T5 = CALL2(1,VARREF(YgooSmathYA),iF9114,YPint((P)1));
          T6 = CALL1(1,VARREF(YevalSastYenvironment_next),rF9115);
          a428_0 = T5;
          a428_1 = T6;
          iF9114 = a428_0;
          rF9115 = a428_1;
          goto LOOP_428;
          T2 = T4;
        } else {
          T9 = CALL1(1,VARREF(Yhead),bindingsF9117);
          T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,binding_);
          if (T8 != YPfalse) {
            T10 = CALL2(1,VARREF(Ytup),iF9114,jF9116);
            T7 = T10;
          } else {
            T12 = CALL2(1,VARREF(YgooSmathYA),jF9116,YPint((P)1));
            T13 = CALL1(1,VARREF(Ytail),bindingsF9117);
            a429_0 = T12;
            a429_1 = T13;
            jF9116 = a429_0;
            bindingsF9117 = a429_1;
            goto LOOP_429;
            T7 = T11;
          }
          T2 = T7;
        }
      }
      T0 = T2;
    } else {
      T16 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T15 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_658),T16,rF9115);
      T0 = T15;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_316) {
  P n_,b_,r_;
  P jF9120;
  P iF9119;
  P tup66F9118;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T4 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup66F9118 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup66F9118,YPint((P)0));
  iF9119 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup66F9118,YPint((P)1));
  jF9120 = T2;
  T0 = CALL1(1,VARREF(YevalSastYbinding_value),b_);
  CALL1(1,VARREF(YevalSastYincf_ref_count),T0);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF9119,VARREF(YevalSastYreference_frame_offset),jF9120);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_binding_reference_class_317) {
  P b_;
  P x_2344F9122;
  P x_2343F9121;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(b_, 0);
  T14 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_2343F9121 = T14;
  x_2344F9122 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_2344F9122,x_2343F9121,LITREF(lit_69));
  if (T1 != YPfalse) {
    T0 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T3 = CALL2(1,x_2344F9122,x_2343F9121,LITREF(lit_636));
    if (T3 != YPfalse) {
      T2 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T5 = CALL2(1,x_2344F9122,x_2343F9121,LITREF(lit_604));
      if (T5 != YPfalse) {
        T4 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T7 = CALL2(1,x_2344F9122,x_2343F9121,LITREF(lit_616));
        if (T7 != YPfalse) {
          T6 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T9 = CALL2(1,x_2344F9122,x_2343F9121,LITREF(lit_627));
          if (T9 != YPfalse) {
            T8 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T11 = CALL2(1,x_2344F9122,x_2343F9121,LITREF(lit_605));
            if (T11 != YPfalse) {
              T10 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T13 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
              T12 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_663),T13);
              T10 = T12;
            }
            T8 = T10;
          }
          T6 = T8;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_318) {
  P n_,b_,r_;
  P LrefGF9123;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF9123 = T1;
  T0 = CALL3(1,VARREF(Ynew),LrefGF9123,VARREF(YevalSastYreference_binding),b_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_319) {
  P n_,b_,r_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_free_global_reference),n_,r_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_type_320) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_668),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_321) {
  P name_,r_;
  P bF9125;
  P grF9124;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF9124 = T8;
  T2 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF9124);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYforeign_nameQ),name_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYobjectify_foreign_reference),name_,r_);
    T0 = T4;
  } else {
    T7 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),YPtrue,VARREF(YevalSastYbinding_kind),LITREF(lit_69),VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_module),T7);
    bF9125 = T6;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF9125,grF9124);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF9125);
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYforeign_nameQ) {
  P name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),T2,YPchr((P)58));
  T0 = CALL2(1,VARREF(YgooSmathYNEE),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_foreign_reference_323) {
  P name_,r_;
  P bindingF9133;
  P modF9132;
  P loaderF9131;
  P grF9130;
  P varnameF9129;
  P modnameF9128;
  P breakF9127;
  P namestrF9126;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF9126 = T22;
  T21 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF9126,YPchr((P)58));
  breakF9127 = T21;
  T20 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF9126,YPint((P)0),breakF9127);
  modnameF9128 = T20;
  T18 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF9127);
  T19 = CALL1(1,VARREF(YgooStypesYlen),namestrF9126);
  T17 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF9126,T18,T19);
  varnameF9129 = T17;
  T3 = CALL1(1,VARREF(YgooStypesYlen),modnameF9128);
  T2 = CALL2(1,VARREF(YgooSmagYG),T3,YPint((P)0));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),varnameF9129);
    T4 = CALL2(1,VARREF(YgooSmagYG),T5,YPint((P)0));
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_675),name_);
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF9130 = T16;
  T15 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF9130);
  loaderF9131 = T15;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF9128);
  T13 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF9131,T14);
  modF9132 = T13;
  T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF9129);
  T12 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF9132);
  T10 = CALL2(1,VARREF(YevalSastYfind_binding),T11,T12);
  bindingF9133 = T10;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF9133,grF9130);
  T7 = CALL1(1,VARREF(Ynot),bindingF9133);
  if (T7 != YPfalse) {
    T8 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_676),varnameF9129,modnameF9128);
  } else {
  }
  T9 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF9133,r_);
UNLINK_STACK();
  RET(T9);
}

FUNCODEDEF(fun_objectify_symbol_324) {
  P name_,r_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,r_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ftype_325) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_681),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunctions) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_327) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_empty));
}

FUNCODEDEF(fun_328) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = CALL1(1,VARREF(YevalSastYftype),FREEREF(0));
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),n_,VARREF(YevalSastYbinding_type),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_329) {
  P sig_,body_;
  P lineF9135;
  P tmpF9134;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),sig_);
  tmpF9134 = T3;
  if (tmpF9134 != YPfalse) {
    T1 = tmpF9134;
  } else {
    T2 = CALL1(1,VARREF(YgooScolsSlstYline_of),body_);
    T1 = T2;
  }
  lineF9135 = T1;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),lineF9135);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_330) {
  P f_,b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(b_, 1);
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),b_,f_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T2,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T1,f_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_locals_331) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P sigF9149;
  P bodyF9148;
  P metF9147;
  P varF9146;
  P tmpF9145;
  P tmpF9144;
  P tmpF9143;
  P x_2345F9142;
  P x_2346F9141;
  P x_2347F9140;
  P x_2348F9139;
  P metsF9138;
  P new_rF9137;
  P varsF9136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(names_, 0);
  ARG(sigs_, 1);
  ARG(bodies_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  ARG(tailQ_, 5);
  T30 = FUNFAB(fun_328,1,r_);
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),T30,names_);
  varsF9136 = T29;
  T28 = CALL2(1,VARREF(YevalSastYr_extendT),r_,varsF9136);
  new_rF9137 = T28;
  T27 = fun_329;
  T26 = CALL3(1,VARREF(YgooSmacrosYmap2),T27,sigs_,bodies_);
  metsF9138 = T26;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),varsF9136);
  x_2348F9139 = T18;
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),metsF9138);
  x_2347F9140 = T19;
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),bodies_);
  x_2346F9141 = T20;
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),sigs_);
  x_2345F9142 = T21;
  LOOP_430: {
    P a430_0,a430_1,a430_2,a430_3;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2348F9139);
    tmpF9143 = T8;
    if (tmpF9143 != YPfalse) {
      T2 = tmpF9143;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2347F9140);
      tmpF9144 = T7;
      if (tmpF9144 != YPfalse) {
        T3 = tmpF9144;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2346F9141);
        tmpF9145 = T6;
        if (tmpF9145 != YPfalse) {
          T4 = tmpF9145;
        } else {
          T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2345F9142);
          T4 = T5;
        }
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_2348F9139);
      varF9146 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2347F9140);
      metF9147 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2346F9141);
      bodyF9148 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2345F9142);
      sigF9149 = T14;
      CALL2(1,VARREF(YevalSastYbinding_value_setter),metF9147,varF9146);
      CALL5(1,VARREF(YevalSastYobjectify_function_using),metF9147,sigF9149,bodyF9148,new_rF9137,YPfalse);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2348F9139);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2347F9140);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2346F9141);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2345F9142);
      a430_0 = T10;
      a430_1 = T11;
      a430_2 = T12;
      a430_3 = T13;
      x_2348F9139 = a430_0;
      x_2347F9140 = a430_1;
      x_2346F9141 = a430_2;
      x_2345F9142 = a430_3;
      goto LOOP_430;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = FUNFAB(fun_330,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T22,metsF9138,varsF9136);
  T24 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),metsF9138);
  T25 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF9137,YPtrue);
  T23 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),varsF9136,VARREF(YevalSastYlocals_functions),T24,VARREF(YevalSastYlocals_body),T25);
UNLINK_STACK();
  RET(T23);
}

FUNCODEDEF(fun_objectify_bind_exit_332) {
  P name_,body_,line_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(body_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T3 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,name_);
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T3,body_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,YPfalse);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_unwind_protect_333) {
  P protected_form_,cleanup_forms_,line_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(protected_form_, 0);
  ARG(cleanup_forms_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T3 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,protected_form_);
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,T3);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,YPfalse);
  T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,cleanup_forms_);
  T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),T1,VARREF(YevalSastYunwind_protect_cleanup_thunk),T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_monitor_334) {
  P type_,info_,test_,handler_,body_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(handler_, 3);
  ARG(body_, 4);
  ARG(r_, 5);
  ARG(tailQ_, 6);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),type_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),info_,r_,YPfalse);
  T3 = CALL3(1,VARREF(YevalSastYobjectify),test_,r_,YPfalse);
  T4 = CALL3(1,VARREF(YevalSastYobjectify),handler_,r_,YPfalse);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),body_,r_,YPfalse);
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),T1,VARREF(YevalSastYmonitor_info),T2,VARREF(YevalSastYmonitor_test),T3,VARREF(YevalSastYmonitor_handler),T4,VARREF(YevalSastYmonitor_main_thunk),T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_335) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_336) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_337) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_704),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_338) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(exit_, 0);
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_702),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_335;
  T4 = FUNFAB(fun_336,1,exit_);
  T5 = FUNFAB(fun_337,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_339) {
  P name_;
  P bindingF9150;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(name_, 0);
  T5 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF9150 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF9150,YPfalse);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_338,1,name_);
    T2 = with_exit(T3);
    T0 = T2;
  } else {
    T4 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF9150);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_340) {
  P names_,r_,tailQ_;
  P moduleF9152;
  P envF9151;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF9151 = T7;
  T6 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF9152 = T6;
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF9152);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),envF9151,T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYnamespace_error),LITREF(lit_699));
  } else {
  }
  T4 = FUNFAB(fun_339,2,envF9151,moduleF9152);
  CALL2(1,VARREF(YgooSmacrosYdo),T4,names_);
  T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T5);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF9154;
  P existingF9153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
  T8 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T7 = CALL2(1,VARREF(YevalSastYfind_binding),T8,env_);
  existingF9153 = T7;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF9153,YPfalse);
  tmpF9154 = T3;
  if (tmpF9154 != YPfalse) {
    T1 = tmpF9154;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF9153,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T6 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_707),T5,T6);
  } else {
  }
  CALL2(1,VARREF(YevalSastYinsert_globalX),b_,env_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_342) {
  P b_;
  P T0,T1;
LINK_STACK();
  ARG(b_, 0);
  CALL2(1,VARREF(YevalSastYimport_globalX),b_,FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T0 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_useSexport_module_343) {
  P name_,r_,tailQ_;
  P used_moduleF9158;
  P loaderF9157;
  P moduleF9156;
  P envF9155;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF9155 = T7;
  T6 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF9156 = T6;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF9155);
  loaderF9157 = T5;
  T4 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF9157,name_);
  used_moduleF9158 = T4;
  T0 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF9155);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF9158);
  T1 = FUNFAB(fun_342,2,envF9155,moduleF9156);
  T2 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF9158);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(fun_344) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_include_345) {
  P name_,r_,tailQ_;
  P modF9160;
  P envF9159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF9159 = T8;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_module),envF9159);
  modF9160 = T7;
  T2 = FUNFAB(fun_344,1,name_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF9160);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF9160);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

FUNCODEDEF(fun_346) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_library_347) {
  P name_,r_,tailQ_;
  P modF9162;
  P envF9161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF9161 = T8;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_module),envF9161);
  modF9162 = T7;
  T2 = FUNFAB(fun_346,1,name_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF9162);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF9162);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

FUNCODEDEF(fun_348) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSastYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_use_mod_349) {
  P name_;
  P used_moduleF9164;
  P loaderF9163;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),FREEREF(0));
  loaderF9163 = T4;
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF9163,name_);
  used_moduleF9164 = T3;
  T0 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF9164);
  T1 = FUNFAB(fun_348,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF9164);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(used_moduleF9164);
}

FUNCODEDEF(fun_use_c_mod_350) {
  P mod_,name_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
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

FUNCODEDEF(fun_objectify_use_module_351) {
  P name_,r_,tailQ_;
  P swig_modF9173;
  P swig_mod_nameF9172;
  P tmpF9171;
  P x_2351F9170;
  P x_2350F9169;
  P use_c_modF9168;
  P use_modF9167;
  P modF9166;
  P envF9165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T21 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF9165 = T21;
  T20 = CALL1(1,VARREF(YevalSastYenvironment_module),envF9165);
  modF9166 = T20;
  T17 = FUNSHELL(1,fun_use_mod_349,1);
  use_modF9167 = T17;
  T18 = fun_use_c_mod_350;
  use_c_modF9168 = T18;
  FUNINIT(use_modF9167, 1,envF9165);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_2350F9169 = T16;
  x_2351F9170 = VARREF(YgooScolsSseqYsuffixQ);
  T3 = CALL2(1,x_2351F9170,x_2350F9169,LITREF(lit_724));
  tmpF9171 = T3;
  if (tmpF9171 != YPfalse) {
    T1 = tmpF9171;
  } else {
    T2 = CALL2(1,x_2351F9170,x_2350F9169,LITREF(lit_725));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T4 = CALL2(1,use_c_modF9168,modF9166,T5);
    T0 = T4;
  } else {
    T7 = CALL2(1,x_2351F9170,x_2350F9169,LITREF(lit_726));
    if (T7 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T13 = CALL2(1,VARREF(YgooScolsSseqYsplit),T14,YPchr((P)46));
      T12 = CALL1(1,VARREF(YgooSmacrosY1st),T13);
      T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T12);
      swig_mod_nameF9172 = T11;
      T10 = CALL1(1,use_modF9167,swig_mod_nameF9172);
      swig_modF9173 = T10;
      T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_727));
      T8 = CALL2(1,use_c_modF9168,swig_modF9173,T9);
      T6 = T8;
    } else {
      T15 = CALL1(1,use_modF9167,name_);
      T6 = T15;
    }
    T0 = T6;
  }
  T19 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T19);
}

FUNCODEDEF(fun_insert_and_mangle_globalX_352) {
  P binding_,mangle_prefix_,r_;
  P rF9174;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
  T4 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T4,VARREF(YevalSastYLstatic_global_environmentG));
  rF9174 = T4;
  T1 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF9174);
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T3);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF9176;
  P existingF9175;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  ARG(mangle_prefix_, 1);
  ARG(env_, 2);
  T10 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T10);
  T8 = CALL2(1,VARREF(YevalSastYfind_binding),T9,env_);
  existingF9175 = T8;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF9175,YPfalse);
  tmpF9176 = T3;
  if (tmpF9176 != YPfalse) {
    T1 = tmpF9176;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF9175,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T5 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T6);
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_732),T5,T7);
  } else {
  }
  CALL3(1,VARREF(YevalSastYinsert_and_mangle_globalX),b_,mangle_prefix_,env_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_354) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL3(1,VARREF(YevalSastYimport_and_mangle_globalX),b_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_mangle_module_355) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF9181;
  P used_moduleF9180;
  P loaderF9179;
  P moduleF9178;
  P envF9177;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF9177 = T8;
  T7 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF9178 = T7;
  T6 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF9177);
  loaderF9179 = T6;
  T5 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF9179,name_);
  used_moduleF9180 = T5;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF9181 = T4;
  T0 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF9177);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF9180);
  T1 = FUNFAB(fun_354,2,str_manglerF9181,envF9177);
  T2 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF9180);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(fun_expand_bind_list_356) {
  P pat_,var_,fail_;
  P T0;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_738),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_357) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_740));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_358) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_742),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_743),pat_);
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

FUNCODEDEF(fun_expand_bind_listT_359) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_740));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_360) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
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

FUNCODEDEF(fun_expand_bind_element_361) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_749));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_583));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_362) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
    T8 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_751));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_9));
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_752));
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
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_583));
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
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_753));
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
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_752));
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

FUNCODEDEF(fun_expand_pattern_363) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_756));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_757));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_587));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_9));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_758));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_364) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL1(1,VARREF(Ylst),YPfalse);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_syntax_if_365) {
  P x_;
  P epatF9189;
  P failF9188;
  P varF9187;
  P elseF9186;
  P thenF9185;
  P valueF9184;
  P varsF9183;
  P patF9182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(x_, 0);
  T49 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF9182 = T49;
  T48 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF9182);
  varsF9183 = T48;
  T47 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF9184 = T47;
  T46 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF9185 = T46;
  T45 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF9186 = T45;
  T44 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF9187 = T44;
  T43 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF9188 = T43;
  T42 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF9182,varF9187,failF9188);
  epatF9189 = T42;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_761));
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_762));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_763));
  T10 = CALL1(1,VARREF(Ylst),failF9188);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_764));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_765));
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_9));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_766));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_652));
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T17,LITREF(lit_9));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_762));
  T24 = CALL1(1,VARREF(Ylst),elseF9186);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_9));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T21,LITREF(lit_9));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T7 = CALL2(1,VARREF(YgooSmacrosYcat),T8,LITREF(lit_9));
  T6 = CALL1(1,VARREF(Ylst),T7);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),varF9187);
  T33 = CALL1(1,VARREF(Ylst),valueF9184);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_9));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T39 = fun_364;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),T39,varsF9183);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = CALL1(1,VARREF(Ylst),epatF9189);
  T41 = CALL1(1,VARREF(Ylst),thenF9185);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T40,T41,LITREF(lit_9));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T34,LITREF(lit_9));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T4 = CALL4(1,VARREF(YgooSmacrosYcat),T5,T6,T25,LITREF(lit_9));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_r_extendT_366) {
  P r_,bindings_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  ARG(bindings_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLstatic_local_environmentG),VARREF(YevalSastYenvironment_next),r_,VARREF(YevalSastYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_globalX_367) {
  P binding_,r_;
  P rF9190;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T3,VARREF(YevalSastYLstatic_global_environmentG));
  rF9190 = T3;
  T1 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF9190);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_globalsX_369) {
  P bindings_,r_;
  P T0,T1;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
  T1 = FUNFAB(fun_368,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_370) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
  T0 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_371) {
  P r_;
LINK_STACK();
  ARG(r_, 0);
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_372) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_environment_module_373) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T0 = CALL1(1,VARREF(YevalSastYenvironment_module),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_374) {
  P name_,r_;
  P bindingsF9191;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T11 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  bindingsF9191 = T11;
  LOOP_431: {
    P a431_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF9191);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
      T2 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(Yhead),bindingsF9191);
      T6 = CALL1(1,VARREF(YevalSastYbinding_name),T7);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(Yhead),bindingsF9191);
        T4 = T8;
      } else {
        T10 = CALL1(1,VARREF(Ytail),bindingsF9191);
        a431_0 = T10;
        bindingsF9191 = a431_0;
        goto LOOP_431;
        T4 = T9;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_375) {
  P name_,r_;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_376) {
  P name_,r_;
  P tmpF9192;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T4 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),T4,name_,YPfalse);
  tmpF9192 = T3;
  if (tmpF9192 != YPfalse) {
    T0 = tmpF9192;
  } else {
    T2 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
    T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T2);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_377) {
  P env_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  T0 = CALL1(1,VARREF(YevalSastYenvironment_bindings),env_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_register_magic_binding_378) {
  P name_,value_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYadd),VARREF(YevalSastYTmagic_bindingsT),value_);
  T0 = VARSET(YevalSastYTmagic_bindingsT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_magic_bindings_379) {
LINK_STACK();
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_2355_380) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_795),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_381) {
  P return_;
  P sexpr_nameF9209;
  P special_nameF9208;
  P x_2354F9207;
  P x_2354F9206;
  P x_2354F9205;
  P x_2354F9204;
  P x_2354F9203;
  P x_2354F9202;
  P x_2354F9201;
  P x_2354F9200;
  P x_2354F9199;
  P x_2354F9198;
  P bodyF9197;
  P paramsF9196;
  P nameF9195;
  P x_2354F9194;
  P x_2355F9193;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
LINK_STACK();
  ARG(return_, 0);
  T60 = FUNSHELL(0,fun_x_2355_380,2);
  x_2355F9193 = T60;
  FUNINIT(x_2355F9193, 2,FREEREF(0),return_);
  x_2354F9194 = FREEREF(0);
  nameF9195 = YPfalse;
  paramsF9196 = YPfalse;
  bodyF9197 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2354F9194,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2354F9194,LITREF(lit_795),x_2355F9193);
    x_2354F9198 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2354F9198,x_2355F9193);
    nameF9195 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2354F9198);
    x_2354F9199 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2354F9199,x_2355F9193);
    x_2354F9200 = T12;
    paramsF9196 = x_2354F9200;
    x_2354F9201 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2354F9201,x_2355F9193);
    x_2354F9202 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2354F9202,x_2355F9193);
    T11 = CALL1(1,VARREF(Ytail),x_2354F9201);
    x_2354F9203 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2354F9203,x_2355F9193);
    T13 = CALL1(1,VARREF(Ytail),x_2354F9199);
    x_2354F9204 = T13;
    bodyF9197 = x_2354F9204;
    x_2354F9205 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2354F9205,x_2355F9193);
    x_2354F9206 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2354F9206,x_2355F9193);
    T7 = CALL1(1,VARREF(Ytail),x_2354F9205);
    x_2354F9207 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2354F9207,x_2355F9193);
  } else {
    T17 = CALL2(1,x_2355F9193,LITREF(lit_6),x_2354F9194);
  }
  T59 = nameF9195;
  T58 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_796),T59);
  special_nameF9208 = T58;
  T57 = nameF9195;
  T56 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_797),T57,LITREF(lit_798));
  sexpr_nameF9209 = T56;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_799));
  T23 = CALL1(1,VARREF(Ylst),special_nameF9208);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_800));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_583));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_605));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T34 = CALL1(1,VARREF(Ylst),sexpr_nameF9209);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T36 = CALL1(1,VARREF(Ylst),YPfalse);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_801));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_802));
  T43 = paramsF9196;
  T42 = CALL2(1,VARREF(YgooSmacrosYcat),T43,LITREF(lit_9));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = bodyF9197;
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T44,LITREF(lit_9));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T46 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),13,T26,T27,T28,T29,T33,T34,T35,T36,T37,T38,T45,T46,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T24,LITREF(lit_9));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_788));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_583));
  T54 = nameF9195;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T55 = CALL1(1,VARREF(Ylst),special_nameF9208);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T55,LITREF(lit_9));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T47,LITREF(lit_9));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_382) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_381,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_383) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_test),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_then),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_else),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_alternative),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_384) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_sequential),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_385) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_raw),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_386) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_text_of_quotation),x_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_387) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_assignment_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_assignment_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_assignment),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_388) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_variable_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_389) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_variable_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_390) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_dynamic_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_391) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_392) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_393) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_method_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_394) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_generic_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_395) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_function_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_396) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_function),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_397) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_boundQ),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_398) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_Gcombination),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_399) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_400) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_names),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_signatures),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_bodies),x_);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_raw_body),x_);
  T0 = CALLN(1,VARREF(YevalSastYobjectify_locals),6,T1,T2,T3,T4,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_401) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_Gloc),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_402) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_name),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_body),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_bind_exit),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_403) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_protected_form),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_unwind_protect),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_404) {
  P x_,r_,tailQ_;
  P bodyF9215;
  P handlerF9214;
  P testF9213;
  P infoF9212;
  P typeF9211;
  P tup67F9210;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup67F9210 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup67F9210,YPint((P)0));
  typeF9211 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup67F9210,YPint((P)1));
  infoF9212 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup67F9210,YPint((P)2));
  testF9213 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup67F9210,YPint((P)3));
  handlerF9214 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup67F9210,YPint((P)4));
  bodyF9215 = T1;
  T0 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF9211,infoF9212,testF9213,handlerF9214,bodyF9215,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_405) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(args_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_583),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_584),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_406) {
  P x_,r_,tailQ_;
  P nameF9216;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF9216 = T10;
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_847));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_583));
  T6 = CALL1(1,VARREF(Ylst),nameF9216);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T8 = CALL1(1,VARREF(YevalSastYpairize),T9);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T7,LITREF(lit_9));
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_69),nameF9216,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_define_property_407) {
  P x_,setterQ_,r_,tailQ_;
  P setter_nameF9222;
  P lineF9221;
  P typeF9220;
  P ownerF9219;
  P varF9218;
  P nameF9217;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(x_, 0);
  ARG(setterQ_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T24 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF9217 = T24;
  T23 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF9218 = T23;
  T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF9219 = T22;
  T21 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF9220 = T21;
  T20 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  lineF9221 = T20;
  if (setterQ_ != YPfalse) {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF9217);
    T18 = T19;
  } else {
    T18 = YPfalse;
  }
  setter_nameF9222 = T18;
  T3 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF9217,ownerF9219,lineF9221);
  if (setterQ_ != YPfalse) {
    T5 = CALL4(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF9217,ownerF9219,typeF9220,lineF9221);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T9 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),varF9218);
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_668));
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_9));
    T12 = CALL1(1,VARREF(Ylst),T13);
    T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_9));
    T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T16 = CALL2(1,VARREF(YgooScolsSlstYline_list),lineF9221,T17);
    T10 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T11,T16);
    T8 = T10;
  } else {
    T8 = LITREF(lit_852);
  }
  T7 = CALL5(1,VARREF(Ylst),ownerF9219,nameF9217,setter_nameF9222,typeF9220,T8);
  T6 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_851),T7);
  T2 = CALL3(1,VARREF(Ylst),T3,T4,T6);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),T2);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_408) {
  P x_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_define_property),x_,YPtrue,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_409) {
  P x_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_define_property),x_,YPfalse,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_410) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_compile_time),T1,r_,tailQ_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_411) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_compile_time),T1,r_,tailQ_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_412) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_636));
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

FUNCODEDEF(fun_413) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_expand_backquote),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_macro_expand_414) {
  P x_,r_,tailQ_;
  P resF9225;
  P macF9224;
  P astF9223;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(Yhead),x_);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,r_,tailQ_);
  astF9223 = T5;
  T1 = CALL2(1,VARREF(YisaQ),astF9223,VARREF(YevalSastYLmacro_referenceG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),astF9223);
    macF9224 = T4;
    T3 = CALL1(1,VARREF(YevalSastYbinding_handler),macF9224);
    T2 = CALL3(1,T3,x_,r_,tailQ_);
    resF9225 = T2;
    T0 = resF9225;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_415) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T1 = CALL3(1,VARREF(YevalSastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_416) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSastYexpand_syntax_if),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_417) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_export),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_418) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_419) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_mangle_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_420) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_include),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_421) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_library),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_422) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_useSexport_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_423) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_setter_424) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_425) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_426) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_setter_427) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_428) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYtransaction_register_implemented_binding) {
  P b_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL1(1,VARREF(Ynot),VARREF(YevalSastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_904));
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
LINK_STACK();
  ARG(d_, 0);
  T0 = CALL1(1,VARREF(Ynot),VARREF(YevalSastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_907));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_emptyQ) {
  P t_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(t_, 0);
  T2 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
    T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_432) {
  P k_,v_;
  P T0;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_433) {
  P k_,v_;
  P T0;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYmerge_transactionsX) {
  P t1_,t2_;
  P t2_dependentsF9229;
  P t1_dependentsF9228;
  P t2_bindingsF9227;
  P t1_bindingsF9226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = CALL1(1,VARREF(YevalSastYtransaction_emptyQ),t2_);
  if (T1 != YPfalse) {
    T0 = t1_;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYtransaction_emptyQ),t1_);
    if (T3 != YPfalse) {
      T2 = t2_;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t1_);
        t1_bindingsF9226 = T10;
        T9 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF9227 = T9;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF9228 = T8;
        T7 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF9229 = T7;
        T5 = FUNFAB(fun_432,1,t1_bindingsF9226);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,t2_bindingsF9227);
        T6 = FUNFAB(fun_433,1,t1_dependentsF9228);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T6,t2_dependentsF9229);
        T4 = t1_;
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

FUNCODEDEF(fun_435) {
  P binding_,junk_;
  P T0;
LINK_STACK();
  ARG(binding_, 0);
  ARG(junk_, 1);
  T0 = CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPtrue,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_436) {
  P dependent_,junk_;
  P T0;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(junk_, 1);
  T0 = CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYroll_back_transaction) {
  P t_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(t_, 0);
  T0 = fun_435;
  T1 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_436;
  T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_438) {
  P valueF9230;
  P T0,T1;
LINK_STACK();
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T1 = CALL0(0,FREEREF(0));
  valueF9230 = T1;
  BOXPUT(YPtrue,FREEREF(1));
UNLINK_STACK();
  QRET(valueF9230);
}

FUNCODEDEF(fun_439) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T0 = BOXGET(FREEREF(0));
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
  P savedF9232;
  P successF9231;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
  successF9231 = YPfalse;
  successF9231 = BOXFAB(successF9231);
  savedF9232 = VARREF(YevalSastYTcurrent_subtransactionT);
  T2 = FUNFAB(fun_438,2,thunk_,successF9231);
  T3 = FUNFAB(fun_439,3,successF9231,module_,savedF9232);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_2359_441) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_924),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_442) {
  P return_;
  P x_2358F9245;
  P x_2358F9244;
  P x_2358F9243;
  P x_2358F9242;
  P x_2358F9241;
  P x_2358F9240;
  P x_2358F9239;
  P x_2358F9238;
  P x_2358F9237;
  P bodyF9236;
  P moduleF9235;
  P x_2358F9234;
  P x_2359F9233;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(return_, 0);
  T26 = FUNSHELL(0,fun_x_2359_441,2);
  x_2359F9233 = T26;
  FUNINIT(x_2359F9233, 2,FREEREF(0),return_);
  x_2358F9234 = FREEREF(0);
  moduleF9235 = YPfalse;
  bodyF9236 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2358F9234,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2358F9234,LITREF(lit_924),x_2359F9233);
    x_2358F9237 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2358F9237,x_2359F9233);
    x_2358F9238 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2358F9238,x_2359F9233);
    moduleF9235 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2358F9238);
    x_2358F9239 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2358F9239,x_2359F9233);
    x_2358F9240 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2358F9240,x_2359F9233);
    T10 = CALL1(1,VARREF(Ytail),x_2358F9239);
    x_2358F9241 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2358F9241,x_2359F9233);
    T14 = CALL1(1,VARREF(Ytail),x_2358F9237);
    x_2358F9242 = T14;
    bodyF9236 = x_2358F9242;
    x_2358F9243 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2358F9243,x_2359F9233);
    x_2358F9244 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2358F9244,x_2359F9233);
    T6 = CALL1(1,VARREF(Ytail),x_2358F9243);
    x_2358F9245 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2358F9245,x_2359F9233);
  } else {
    T16 = CALL2(1,x_2359F9233,LITREF(lit_6),x_2358F9234);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_918));
  T20 = moduleF9235;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_802));
  T24 = CALL1(1,VARREF(Ylst),Ynil);
  T25 = bodyF9236;
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_9));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T21,LITREF(lit_9));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_443) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_442,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_444) {
  P T0;
LINK_STACK();
  T0 = CALL3(1,VARREF(YevalSastYobjectify),FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYobjectify_with_subtransaction) {
  P e_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),r_);
  T2 = FUNFAB(fun_444,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_446) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_setter_447) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_448) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_449) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_setter_450) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_451) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_452) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_name_453) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_name_setter_454) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_455) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_mangled_string_name_456) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_string_name_setter_457) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_458) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_target_environment_459) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_target_environment_setter_460) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_461) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_setter_462) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pmodule_exports_463) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_464) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_465) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_setter_466) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_467) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_468) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_runtime_data_setter_469) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_470) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_471) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_transaction_setter_472) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_473) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_files_474) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_files));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_475) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_includes_476) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_includes));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_477) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_libraries_478) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_libraries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_479) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_exports_480) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  CALL1(1,VARREF(YevalSastYensure_module_data),x_);
  T0 = CALL1(1,VARREF(YevalSastYPmodule_exports),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYset_module_environments) {
  P mod_,syntax_env_,target_env_;
  P T0;
LINK_STACK();
  ARG(mod_, 0);
  ARG(syntax_env_, 1);
  ARG(target_env_, 2);
  CALL2(1,VARREF(YevalSastYmodule_syntax_environment_setter),syntax_env_,mod_);
  T0 = CALL2(1,VARREF(YevalSastYmodule_target_environment_setter),target_env_,mod_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_482) {
  P mod_;
  P T0;
LINK_STACK();
  ARG(mod_, 0);
  T0 = CALL1(0,FREEREF(0),mod_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYdo_module_loader_modules) {
  P f_,loader_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(loader_, 1);
  T1 = FUNFAB(fun_482,1,f_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_484) {
  P loader_;
LINK_STACK();
  ARG(loader_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYLmoduleG));
}

FUNCODEDEF(YevalSastYregister_moduleX) {
  P module_loader_,mod_;
  P T0,T1;
LINK_STACK();
  ARG(module_loader_, 0);
  ARG(mod_, 1);
  T0 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),module_loader_);
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),mod_,T0,T1);
UNLINK_STACK();
  RET(module_loader_);
}

FUNCODEDEF(YevalSastYprobe_module) {
  P loader_,name_;
  P tmpF9246;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),T3,name_,YPfalse);
  tmpF9246 = T2;
  if (tmpF9246 != YPfalse) {
    T0 = tmpF9246;
  } else {
    T1 = CALL2(1,VARREF(YevalSastYload_and_register_module),loader_,name_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_487) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_488) {
  P x_2363F9250;
  P x_2362F9249;
  P tup68F9248;
  P x_2361F9247;
  P T0,T1,T2,T3;
LINK_STACK();
  x_2361F9247 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_2361F9247);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup68F9248 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup68F9248,YPint((P)0));
  x_2362F9249 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup68F9248,YPint((P)1));
  x_2363F9250 = T0;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_2362F9249,x_2361F9247);
UNLINK_STACK();
  QRET(x_2363F9250);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF9255;
  P x_2360F9254;
  P indentF9253;
  P depthF9252;
  P stackF9251;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T11 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF9251 = T11;
  T10 = CALL1(1,VARREF(YgooStypesYlen),stackF9251);
  depthF9252 = T10;
  T9 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_1001),depthF9252);
  indentF9253 = T9;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF9251,name_);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),stackF9251);
    T1 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1002),T2,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_1003),indentF9253,name_);
  x_2360F9254 = loader_;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_2360F9254);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  T3 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T4,x_2360F9254);
  T7 = FUNFAB(fun_487,2,loader_,name_);
  T8 = FUNFAB(fun_488,1,loader_);
  T6 = with_cleanup(T7,T8);
  modF9255 = T6;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF9255);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_1004),indentF9253);
UNLINK_STACK();
  RET(modF9255);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF9258;
  P existingF9257;
  P exportsF9256;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF9256 = T6;
  T5 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF9256,name_,YPfalse);
  existingF9257 = T5;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF9257,YPfalse);
  tmpF9258 = T3;
  if (tmpF9258 != YPfalse) {
    T1 = tmpF9258;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF9257,binding_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T4 = CALL5(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1009),existingF9257,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF9256,name_);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(YevalSastYbinding_native_toQ) {
  P binding_,module_;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(module_, 1);
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),module_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_492) {
  P binding_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(binding_, 0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_freeQ),binding_);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_1015),T5,T6);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreport_undefined_global_bindings) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_492,1,mod_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_494) {
  P uses_mod_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(uses_mod_, 0);
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

FUNCODEDEF(fun_495) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_494,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_user_496) {
  P modname_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),modname_,FREEREF(0),modname_);
    T4 = FUNFAB(fun_495,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_497) {
  P v_;
  P UF9259;
  P T0,T1,T2;
LINK_STACK();
  ARG(v_, 0);
  T2 = BOXGET(FREEREF(0));
  UF9259 = T2;
  T1 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF9259,v_);
  T0 = BOXPUT(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F9262;
  P add_userF9261;
  P usersF9260;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T6 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF9260 = T6;
  T5 = FUNSHELL(0,fun_add_user_496,3);
  add_userF9261 = T5;
  FUNINIT(add_userF9261, 3,usersF9260,add_userF9261,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF9261,modnames_);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F9262 = T4;
  packer_F9262 = BOXFAB(packer_F9262);
  T1 = FUNFAB(fun_497,1,packer_F9262);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,usersF9260);
  T3 = BOXGET(packer_F9262);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_res),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YevalSastYremove_module_internalX) {
  P loader_,mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T0 = CALL1(1,VARREF(YevalSastYmodule_transaction),mod_);
  CALL1(1,VARREF(YevalSastYroll_back_transaction),T0);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYdelX),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_500) {
  P modname_;
  P modF9263;
  P T0,T1,T2;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF9263 = T1;
  T0 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF9263);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF9264;
  P T0,T1;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF9264 = T1;
  T0 = FUNFAB(fun_500,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,remove_namesF9264);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF9265;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = CALL1(1,VARREF(Ysym_name),name_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T3);
  namestrF9265 = T2;
  T1 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF9265,YPchr((P)47));
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),T1,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_503) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinstall_initial_bindings) {
  P env_,loader_;
  P bootenvF9267;
  P bootmodF9266;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF9266 = T3;
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF9266);
  bootenvF9267 = T2;
  T1 = FUNFAB(fun_503,2,bootenvF9267,env_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,LITREF(lit_1033));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF9268;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T1);
  new_envF9268 = T0;
UNLINK_STACK();
  RET(new_envF9268);
}

FUNCODEDEF(fun_506) {
  P name_,binding_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(binding_, 1);
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
  P new_envF9270;
  P loaderF9269;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T4);
  loaderF9269 = T3;
  T2 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF9269,YPfalse);
  new_envF9270 = T2;
  T0 = FUNFAB(fun_506,2,excluded_,new_envF9270);
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
UNLINK_STACK();
  RET(new_envF9270);
}

FUNCODEDEF(fun_508) {
  P T0;
LINK_STACK();
  DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_509) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_510) {
  P x_2364F9271;
  P T0,T1,T2;
LINK_STACK();
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_2364F9271 = DYNREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_508,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_509,1,x_2364F9271);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXPUT(YPtrue,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(4));
}

FUNCODEDEF(fun_511) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T2 = BOXGET(FREEREF(0));
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

FUNCODEDEF(fun_load_module_512) {
  P loader_,name_;
  P fileF9277;
  P modpathF9276;
  P keepmodQF9275;
  P envF9274;
  P moduleF9273;
  P typeF9272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T10 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF9272 = T10;
  T9 = CALL3(1,VARREF(Ynew),typeF9272,VARREF(YevalSastYmodule_name),name_);
  moduleF9273 = T9;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF9273,loader_,YPfalse);
  envF9274 = T8;
  keepmodQF9275 = YPfalse;
  keepmodQF9275 = BOXFAB(keepmodQF9275);
  T7 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF9276 = T7;
  T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF9276,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF9277 = T6;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF9273,envF9274,envF9274);
  T1 = CALL1(1,VARREF(Ynot),fileF9277);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1041),modpathF9276);
  } else {
  }
  T4 = FUNFAB(fun_510,5,envF9274,loader_,fileF9277,keepmodQF9275,moduleF9273);
  T5 = FUNFAB(fun_511,2,keepmodQF9275,moduleF9273);
  T3 = with_cleanup(T4,T5);
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(YevalSastYruntime_module_loader) {
LINK_STACK();
UNLINK_STACK();
  QRET(VARREF(YevalSastYTruntime_module_loaderT));
}

FUNCODEDEF(YevalSastYruntime_module) {
  P modname_;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T0 = CALL2(1,VARREF(YevalSastYprobe_module),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYruntime_environment) {
  P modname_;
  P moduleF9278;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF9278 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF9278);
  T0 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF9278);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYruntime_core_environment) {
  P modname_;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_target_environment),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYunchecked_runtime_environment) {
  P modname_;
  P loaderF9279;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(modname_, 0);
  T6 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF9279 = T6;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF9279);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),T3,YPint((P)0),YPfalse);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,modname_);
  if (T1 != YPfalse) {
    T0 = DYNREF(YevalSastYTnow_rt_envT);
  } else {
    T5 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
    T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),T5);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_create_module) {
  P modname_,data_;
  P envF9283;
  P modF9282;
  P typeF9281;
  P loaderF9280;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
  T4 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF9280 = T4;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF9280);
  typeF9281 = T3;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T1 = CALL3(1,VARREF(Ynew),typeF9281,VARREF(YevalSastYmodule_name),T2);
  modF9282 = T1;
  T0 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF9282,loaderF9280,YPtrue);
  envF9283 = T0;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF9282);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF9282,envF9283,envF9283);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF9282);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF9280,modF9282);
UNLINK_STACK();
  RET(modF9282);
}

FUNCODEDEF(YevalSastYreloader_do_use_module) {
  P mod_,uses_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(uses_, 1);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T2);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T1,uses_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_import) {
  P mod_,name_,from_mod_,original_name_;
  P bindingF9285;
  P home_envF9284;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
  T8 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF9284 = T8;
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T6 = CALL2(1,VARREF(YevalSastYfind_binding),T7,home_envF9284);
  bindingF9285 = T6;
  T0 = CALL1(1,VARREF(Ynot),bindingF9285);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = CALL4(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1057),original_name_,T2,T3);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF9285,T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YevalSastYprocess_module_data) {
  P module_;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  T1 = CALL1(1,VARREF(YevalSastYmodule_runtime_data),module_);
  T0 = (P)YPprocess_module(T1,VARREF(YevalSastYreloader_do_import),VARREF(YevalSastYreloader_do_export));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYensure_module_data) {
  P module_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(module_, 0);
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
  P bindingF9286;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T3,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF9286 = T2;
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF9286,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF9287;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_616),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T3,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF9287 = T2;
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF9287,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF9288;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_636),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T3,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF9288 = T2;
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF9288,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF9289;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(as_name_, 2);
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T5 = CALL2(1,VARREF(YevalSastYfind_binding),T6,T7);
  bindingF9289 = T5;
  if (bindingF9289 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T1 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T2,bindingF9289);
    T0 = T1;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T3 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1070),name_,T4);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreload_modules) {
  P T0;
LINK_STACK();
  T0 = (P)YPbuild_runtime_modules(VARREF(YevalSastYreloader_do_create_module),VARREF(YevalSastYreloader_do_use_module),VARREF(YevalSastYreloader_do_runtime_binding),VARREF(YevalSastYreloader_do_other_binding),VARREF(YevalSastYreloader_do_dynamic_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_528) {
  P binding_;
  P cloneF9290;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T3,YPfalse,LITREF(lit_605));
  cloneF9290 = T2;
  T1 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T0 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T1,cloneF9290);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinstall_magic_bindings) {
  P env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  T1 = FUNFAB(fun_528,1,env_);
  T2 = CALL0(1,VARREF(YevalSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreload_macros) {
  P T0,T1;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSfunctionalYrcurry),VARREF(YPPmacro),YPfalse);
  CALL4(1,VARREF(YgooScolsSseqYdo3),T0,VARREF(YTboot_macro_module_namesT),VARREF(YTboot_macro_namesT),VARREF(YTboot_macro_expandersT));
  T1 = VARSET(YTmacros_okQT,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YevalSastYinstall_interpreter_hacks) {
  P env_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  T0 = CALL1(1,VARREF(YevalSastYinit_environment_for_eval),env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_runtime) {
  P bootenvF9292;
  P bootmodF9291;
  P T0,T1,T2;
LINK_STACK();
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF9291 = T1;
  T0 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF9291);
  bootenvF9292 = T0;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF9292);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF9292);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYfab_syntax_environment) {
  P module_;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_1082));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF9296;
  P syntax_envF9295;
  P moduleF9294;
  P typeF9293;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T6 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF9293 = T6;
  T5 = CALL3(1,VARREF(Ynew),typeF9293,VARREF(YevalSastYmodule_name),name_);
  moduleF9294 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF9294);
  syntax_envF9295 = T4;
  T3 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF9294,loader_,YPfalse);
  target_envF9296 = T3;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF9294,syntax_envF9295,target_envF9296);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF9296);
  } else {
    T2 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF9296,loader_);
  }
UNLINK_STACK();
  RET(moduleF9294);
}

FUNCODEDEF(YevalSastYinit_g2c_boot_environment) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL0(1,VARREF(YevalSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalsX),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_g2c_regular_environment) {
  P env_,loader_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T0 = CALL2(1,VARREF(YevalSastYinstall_initial_bindings),env_,loader_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_ast) {
  P T0;
LINK_STACK();
  T0 = CALL0(1,VARREF(YevalSastYinit_runtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYdo_static_global_bindings) {
  P f_,env_;
  P envF9297;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF9297 = env_;
  LOOP_432: {
    P a432_0;
    T2 = CALL2(1,VARREF(YisaQ),envF9297,VARREF(YevalSastYLstatic_empty_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSastYframe_bindings),envF9297);
      CALL2(1,VARREF(YgooSmacrosYdo),f_,T3);
      T5 = CALL1(1,VARREF(YevalSastYenvironment_next),envF9297);
      a432_0 = T5;
      envF9297 = a432_0;
      goto LOOP_432;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYdo_named_static_global_bindings) {
  P f_,env_;
  P envF9298;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF9298 = env_;
  LOOP_433: {
    P a433_0;
    T2 = CALL2(1,VARREF(YisaQ),envF9298,VARREF(YevalSastYLstatic_empty_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSastYframe_bindings),envF9298);
      CALL2(1,VARREF(YgooScolsScolYdo_keyed),f_,T3);
      T5 = CALL1(1,VARREF(YevalSastYenvironment_next),envF9298);
      a433_0 = T5;
      envF9298 = a433_0;
      goto LOOP_433;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_contains_funQ_540) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_541) {
  P y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(y_, 0);
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(YevalSastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(0,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalSastYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_542) {
  P return_;
  P walkF9299;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_walk_541,2);
  walkF9299 = T1;
  FUNINIT(walkF9299, 2,return_,walkF9299);
  T0 = CALL2(1,VARREF(YevalSastYast_walk),walkF9299,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_543) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_542,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YevalSastY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(YevalSastYDgoo_boot_module_name,LITREF(lit_0));
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  lit_2 = YPPlist(1,YPPsym((P)"return"));
  lit_3 = YPPsym((P)"x-2328");
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
  fun_x_2328_0 = YPmet(FUNCODEREF(fun_x_2328_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-dependent"),T3);
  lit_13 = YPPsym((P)"<ast-error>");
  T5 = (P)YPpair(VARREF(YgooSconditionsYLcompiler_errorG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_13),T5);
  VARSET(YevalSastYLast_errorG,T4);
  lit_14 = YPPsym((P)"<simple-ast-error>");
  T8 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T7 = (P)YPpair(VARREF(YevalSastYLast_errorG),T8);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T7);
  VARSET(YevalSastYLsimple_ast_errorG,T6);
  lit_15 = YPPsym((P)"ast-error");
  lit_16 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T9 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_error_3 = YPmet(FUNCODEREF(fun_ast_error_3),LITREF(lit_15),T9,ENVNUL,PNUL,sloc(38));
  T11 = VARREF_OR(YevalSdependencyYast_error,YPfalse);
  T12 = fun_ast_error_3;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSdependencyYast_error,T10);
  lit_17 = YPPsym((P)"<namespace-error>");
  T14 = (P)YPpair(VARREF(YevalSastYLsimple_ast_errorG),Ynil);
  T13 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_17),T14);
  VARSET(YevalSastYLnamespace_errorG,T13);
  lit_18 = YPPsym((P)"namespace-error");
  lit_19 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T15 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_namespace_error_4 = YPmet(FUNCODEREF(fun_namespace_error_4),LITREF(lit_18),T15,ENVNUL,PNUL,sloc(44));
  T17 = VARREF_OR(YevalSastYnamespace_error,YPfalse);
  T18 = fun_namespace_error_4;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalSastYnamespace_error,T16);
  lit_20 = YPPsym((P)"bot");
  T19 = XCALL1(1,VARREF(Ylst),LITREF(lit_20));
  VARSET(YevalSastYast_LbotG,T19);
  lit_21 = YPPsym((P)"<program>");
  T21 = (P)YPpair(VARREF(YLanyG),Ynil);
  T20 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_21),T21);
  VARSET(YevalSastYLprogramG,T20);
  lit_22 = YPPsym((P)"program-type");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_5 = YPmet(FUNCODEREF(fun_program_type_5),LITREF(lit_22),T22,ENVNUL,PNUL,sloc(53));
  T24 = VARREF_OR(YevalSastYprogram_type,YPfalse);
  T25 = fun_program_type_5;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYprogram_type,T23);
  lit_24 = YPPsym((P)"program-type-setter");
  lit_25 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_6 = YPmet(FUNCODEREF(fun_program_type_setter_6),LITREF(lit_24),T26,ENVNUL,PNUL,sloc(53));
  T28 = VARREF_OR(YevalSastYprogram_type_setter,YPfalse);
  T29 = fun_program_type_setter_6;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYprogram_type_setter,T27);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_26 = YPPsym((P)"program-line");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_line_7 = YPmet(FUNCODEREF(fun_program_line_7),LITREF(lit_26),T30,ENVNUL,PNUL,sloc(54));
  T32 = VARREF_OR(YevalSastYprogram_line,YPfalse);
  T33 = fun_program_line_7;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYprogram_line,T31);
  lit_28 = YPPsym((P)"program-line-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T35 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T34 = YPsig(LITREF(lit_29),YPPlist(2,T35,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_line_setter_8 = YPmet(FUNCODEREF(fun_program_line_setter_8),LITREF(lit_28),T34,ENVNUL,PNUL,sloc(54));
  T37 = VARREF_OR(YevalSastYprogram_line_setter,YPfalse);
  T38 = fun_program_line_setter_8;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YevalSastYprogram_line_setter,T36);
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T39,ENVNUL,PNUL,sloc(54));
  T40 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T41 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_line),VARREF(YevalSastYprogram_line_setter),T40,T41);
  lit_31 = YPPsym((P)"program-register");
  lit_32 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_10 = YPmet(FUNCODEREF(fun_program_register_10),LITREF(lit_31),T42,ENVNUL,PNUL,sloc(55));
  T44 = VARREF_OR(YevalSastYprogram_register,YPfalse);
  T45 = fun_program_register_10;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSastYprogram_register,T43);
  lit_33 = YPPsym((P)"program-register-setter");
  lit_34 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_11 = YPmet(FUNCODEREF(fun_program_register_setter_11),LITREF(lit_33),T46,ENVNUL,PNUL,sloc(55));
  T48 = VARREF_OR(YevalSastYprogram_register_setter,YPfalse);
  T49 = fun_program_register_setter_11;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSastYprogram_register_setter,T47);
  lit_35 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T50,ENVNUL,PNUL,sloc(55));
  T51 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T51);
  lit_36 = YPPsym((P)"<computed-program>");
  T53 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T52 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_36),T53);
  VARSET(YevalSastYLcomputed_programG,T52);
  lit_37 = YPPsym((P)"<passive-program>");
  T55 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T54 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_37),T55);
  VARSET(YevalSastYLpassive_programG,T54);
  VARSET(YevalSastYLbinding_nameG,VARREF(YLanyG));
  lit_38 = YPPsym((P)"<binding>");
  T57 = (P)YPpair(VARREF(YLanyG),Ynil);
  T56 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_38),T57);
  VARSET(YevalSastYLbindingG,T56);
  lit_39 = YPPsym((P)"binding-name");
  lit_40 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_13 = YPmet(FUNCODEREF(fun_binding_name_13),LITREF(lit_39),T58,ENVNUL,PNUL,sloc(67));
  T60 = VARREF_OR(YevalSastYbinding_name,YPfalse);
  T61 = fun_binding_name_13;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSastYbinding_name,T59);
  lit_41 = YPPsym((P)"binding-name-setter");
  lit_42 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_42),YPPlist(2,VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_14 = YPmet(FUNCODEREF(fun_binding_name_setter_14),LITREF(lit_41),T62,ENVNUL,PNUL,sloc(67));
  T64 = VARREF_OR(YevalSastYbinding_name_setter,YPfalse);
  T65 = fun_binding_name_setter_14;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYbinding_name_setter,T63);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_name),VARREF(YevalSastYbinding_name_setter),VARREF(YevalSastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_43 = YPPsym((P)"binding-mangled-name");
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_15 = YPmet(FUNCODEREF(fun_binding_mangled_name_15),LITREF(lit_43),T66,ENVNUL,PNUL,sloc(68));
  T68 = VARREF_OR(YevalSastYbinding_mangled_name,YPfalse);
  T69 = fun_binding_mangled_name_15;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYbinding_mangled_name,T67);
  lit_45 = YPPsym((P)"binding-mangled-name-setter");
  lit_46 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T71 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T70 = YPsig(LITREF(lit_46),YPPlist(2,T71,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_16 = YPmet(FUNCODEREF(fun_binding_mangled_name_setter_16),LITREF(lit_45),T70,ENVNUL,PNUL,sloc(68));
  T73 = VARREF_OR(YevalSastYbinding_mangled_name_setter,YPfalse);
  T74 = fun_binding_mangled_name_setter_16;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSastYbinding_mangled_name_setter,T72);
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T75,ENVNUL,PNUL,sloc(68));
  T76 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T77 = fun_17;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_mangled_name),VARREF(YevalSastYbinding_mangled_name_setter),T76,T77);
  lit_48 = YPPsym((P)"binding-type");
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_18 = YPmet(FUNCODEREF(fun_binding_type_18),LITREF(lit_48),T78,ENVNUL,PNUL,sloc(69));
  T80 = VARREF_OR(YevalSastYbinding_type,YPfalse);
  T81 = fun_binding_type_18;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSastYbinding_type,T79);
  lit_50 = YPPsym((P)"binding-type-setter");
  lit_51 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_19 = YPmet(FUNCODEREF(fun_binding_type_setter_19),LITREF(lit_50),T82,ENVNUL,PNUL,sloc(69));
  T84 = VARREF_OR(YevalSastYbinding_type_setter,YPfalse);
  T85 = fun_binding_type_setter_19;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSastYbinding_type_setter,T83);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_type),VARREF(YevalSastYbinding_type_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_52 = YPPsym((P)"binding-inferred-type");
  lit_53 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_20 = YPmet(FUNCODEREF(fun_binding_inferred_type_20),LITREF(lit_52),T86,ENVNUL,PNUL,sloc(70));
  T88 = VARREF_OR(YevalSastYbinding_inferred_type,YPfalse);
  T89 = fun_binding_inferred_type_20;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSastYbinding_inferred_type,T87);
  lit_54 = YPPsym((P)"binding-inferred-type-setter");
  lit_55 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_21 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_21),LITREF(lit_54),T90,ENVNUL,PNUL,sloc(70));
  T92 = VARREF_OR(YevalSastYbinding_inferred_type_setter,YPfalse);
  T93 = fun_binding_inferred_type_setter_21;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYbinding_inferred_type_setter,T91);
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T94,ENVNUL,PNUL,sloc(70));
  T95 = fun_22;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_inferred_type),VARREF(YevalSastYbinding_inferred_type_setter),VARREF(YLanyG),T95);
  lit_57 = YPPsym((P)"<global-box>");
  T97 = (P)YPpair(VARREF(YLanyG),Ynil);
  T96 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_57),T97);
  VARSET(YevalSastYLglobal_boxG,T96);
  lit_58 = YPPsym((P)"global-box-value");
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_23 = YPmet(FUNCODEREF(fun_global_box_value_23),LITREF(lit_58),T98,ENVNUL,PNUL,sloc(75));
  T100 = VARREF_OR(YevalSastYglobal_box_value,YPfalse);
  T101 = fun_global_box_value_23;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSastYglobal_box_value,T99);
  lit_60 = YPPsym((P)"global-box-value-setter");
  lit_61 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_24 = YPmet(FUNCODEREF(fun_global_box_value_setter_24),LITREF(lit_60),T102,ENVNUL,PNUL,sloc(75));
  T104 = VARREF_OR(YevalSastYglobal_box_value_setter,YPfalse);
  T105 = fun_global_box_value_setter_24;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSastYglobal_box_value_setter,T103);
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T106,ENVNUL,PNUL,sloc(75));
  T107 = fun_25;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLglobal_boxG),VARREF(YevalSastYglobal_box_value),VARREF(YevalSastYglobal_box_value_setter),VARREF(YLanyG),T107);
  lit_63 = YPPsym((P)"<module-binding>");
  T112 = (P)YPpair(VARREF(YevalSdependencyYLdependableG),Ynil);
  T111 = (P)YPpair(VARREF(YevalSastYLbindingG),T112);
  T110 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_63),T111);
  T109 = VARSET(YevalSastYLmodule_bindingG,T110);
  T108 = T109;
  return T108;
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140;
DEFCREGS();
  lit_64 = YPPsym((P)"binding-kind");
  lit_65 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_26 = YPmet(FUNCODEREF(fun_binding_kind_26),LITREF(lit_64),T0,ENVNUL,PNUL,sloc(79));
  T2 = VARREF_OR(YevalSastYbinding_kind,YPfalse);
  T3 = fun_binding_kind_26;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYbinding_kind,T1);
  lit_66 = YPPsym((P)"binding-kind-setter");
  lit_67 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_67),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_27 = YPmet(FUNCODEREF(fun_binding_kind_setter_27),LITREF(lit_66),T4,ENVNUL,PNUL,sloc(79));
  T6 = VARREF_OR(YevalSastYbinding_kind_setter,YPfalse);
  T7 = fun_binding_kind_setter_27;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYbinding_kind_setter,T5);
  lit_68 = YPPlist(1,YPPsym((P)"_x"));
  lit_69 = YPPsym((P)"global");
  T8 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T8,ENVNUL,PNUL,sloc(79));
  T9 = fun_28;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),VARREF(YevalSastYbinding_kind_setter),VARREF(YLanyG),T9);
  lit_70 = YPPsym((P)"binding-module");
  lit_71 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_29 = YPmet(FUNCODEREF(fun_binding_module_29),LITREF(lit_70),T10,ENVNUL,PNUL,sloc(80));
  T12 = VARREF_OR(YevalSastYbinding_module,YPfalse);
  T13 = fun_binding_module_29;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYbinding_module,T11);
  lit_72 = YPPsym((P)"binding-module-setter");
  lit_73 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_30 = YPmet(FUNCODEREF(fun_binding_module_setter_30),LITREF(lit_72),T14,ENVNUL,PNUL,sloc(80));
  T16 = VARREF_OR(YevalSastYbinding_module_setter,YPfalse);
  T17 = fun_binding_module_setter_30;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYbinding_module_setter,T15);
  lit_74 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T18,ENVNUL,PNUL,sloc(80));
  T19 = fun_31;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_module),VARREF(YevalSastYbinding_module_setter),VARREF(YLanyG),T19);
  lit_75 = YPPsym((P)"binding-free?");
  lit_76 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_32 = YPmet(FUNCODEREF(fun_binding_freeQ_32),LITREF(lit_75),T20,ENVNUL,PNUL,sloc(81));
  T22 = VARREF_OR(YevalSastYbinding_freeQ,YPfalse);
  T23 = fun_binding_freeQ_32;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYbinding_freeQ,T21);
  lit_77 = YPPsym((P)"binding-free?-setter");
  lit_78 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_33 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_33),LITREF(lit_77),T24,ENVNUL,PNUL,sloc(81));
  T26 = VARREF_OR(YevalSastYbinding_freeQ_setter,YPfalse);
  T27 = fun_binding_freeQ_setter_33;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYbinding_freeQ_setter,T25);
  lit_79 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T28,ENVNUL,PNUL,sloc(81));
  T29 = fun_34;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),VARREF(YevalSastYbinding_freeQ_setter),VARREF(YLlogG),T29);
  lit_80 = YPPsym((P)"binding-info");
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_35 = YPmet(FUNCODEREF(fun_binding_info_35),LITREF(lit_80),T30,ENVNUL,PNUL,sloc(82));
  T32 = VARREF_OR(YevalSastYbinding_info,YPfalse);
  T33 = fun_binding_info_35;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYbinding_info,T31);
  lit_82 = YPPsym((P)"binding-info-setter");
  lit_83 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_36 = YPmet(FUNCODEREF(fun_binding_info_setter_36),LITREF(lit_82),T34,ENVNUL,PNUL,sloc(82));
  T36 = VARREF_OR(YevalSastYbinding_info_setter,YPfalse);
  T37 = fun_binding_info_setter_36;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYbinding_info_setter,T35);
  lit_84 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T38,ENVNUL,PNUL,sloc(82));
  T39 = fun_37;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_info),VARREF(YevalSastYbinding_info_setter),VARREF(YLanyG),T39);
  lit_85 = YPPsym((P)"binding-prop");
  lit_86 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_prop_38 = YPmet(FUNCODEREF(fun_binding_prop_38),LITREF(lit_85),T40,ENVNUL,PNUL,sloc(83));
  T42 = VARREF_OR(YevalSastYbinding_prop,YPfalse);
  T43 = fun_binding_prop_38;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYbinding_prop,T41);
  lit_87 = YPPsym((P)"binding-prop-setter");
  lit_88 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_prop_setter_39 = YPmet(FUNCODEREF(fun_binding_prop_setter_39),LITREF(lit_87),T44,ENVNUL,PNUL,sloc(83));
  T46 = VARREF_OR(YevalSastYbinding_prop_setter,YPfalse);
  T47 = fun_binding_prop_setter_39;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYbinding_prop_setter,T45);
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T48,ENVNUL,PNUL,sloc(83));
  T49 = fun_40;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_prop),VARREF(YevalSastYbinding_prop_setter),VARREF(YLanyG),T49);
  lit_90 = YPPsym((P)"binding-module-name");
  lit_91 = YPPlist(1,YPPsym((P)"b"));
  T50 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_41 = YPmet(FUNCODEREF(fun_binding_module_name_41),LITREF(lit_90),T50,ENVNUL,PNUL,sloc(85));
  T52 = VARREF_OR(YevalSastYbinding_module_name,YPfalse);
  T53 = fun_binding_module_name_41;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYbinding_module_name,T51);
  VARSET(YevalSastYbinding_global_box,VARREF(YevalSastYbinding_info));
  VARSET(YevalSastYbinding_global_box_setter,VARREF(YevalSastYbinding_info_setter));
  VARSET(YevalSastYbinding_locative,VARREF(YevalSastYbinding_info));
  VARSET(YevalSastYbinding_locative_setter,VARREF(YevalSastYbinding_info_setter));
  VARSET(YevalSastYbinding_handler,VARREF(YevalSastYbinding_info));
  VARSET(YevalSastYbinding_handler_setter,VARREF(YevalSastYbinding_info_setter));
  lit_92 = YPPsym((P)"maybe-log-dependency");
  lit_93 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T54 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPmet(FUNCODEREF(YevalSastYmaybe_log_dependency),LITREF(lit_92),T54,ENVNUL,PNUL,sloc(98));
  T55 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T55);
  lit_94 = YPPsym((P)"macro-expander");
  lit_95 = YPPlist(1,YPPsym((P)"macro-binding"));
  T56 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPmet(FUNCODEREF(YevalSastYmacro_expander),LITREF(lit_94),T56,ENVNUL,PNUL,sloc(103));
  T57 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T57);
  lit_96 = YPPsym((P)"<local-binding>");
  T59 = (P)YPpair(VARREF(YevalSastYLbindingG),Ynil);
  T58 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_96),T59);
  VARSET(YevalSastYLlocal_bindingG,T58);
  lit_97 = YPPsym((P)"binding-value");
  lit_98 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_44 = YPmet(FUNCODEREF(fun_binding_value_44),LITREF(lit_97),T60,ENVNUL,PNUL,sloc(108));
  T62 = VARREF_OR(YevalSastYbinding_value,YPfalse);
  T63 = fun_binding_value_44;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYbinding_value,T61);
  lit_99 = YPPsym((P)"binding-value-setter");
  lit_100 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_45 = YPmet(FUNCODEREF(fun_binding_value_setter_45),LITREF(lit_99),T64,ENVNUL,PNUL,sloc(108));
  T66 = VARREF_OR(YevalSastYbinding_value_setter,YPfalse);
  T67 = fun_binding_value_setter_45;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYbinding_value_setter,T65);
  lit_101 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T68,ENVNUL,PNUL,sloc(108));
  T69 = fun_46;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T69);
  lit_102 = YPPsym((P)"binding-mutable?");
  lit_103 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_47 = YPmet(FUNCODEREF(fun_binding_mutableQ_47),LITREF(lit_102),T70,ENVNUL,PNUL,sloc(109));
  T72 = VARREF_OR(YevalSastYbinding_mutableQ,YPfalse);
  T73 = fun_binding_mutableQ_47;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYbinding_mutableQ,T71);
  lit_104 = YPPsym((P)"binding-mutable?-setter");
  lit_105 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_48 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_48),LITREF(lit_104),T74,ENVNUL,PNUL,sloc(109));
  T76 = VARREF_OR(YevalSastYbinding_mutableQ_setter,YPfalse);
  T77 = fun_binding_mutableQ_setter_48;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSastYbinding_mutableQ_setter,T75);
  lit_106 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T78,ENVNUL,PNUL,sloc(109));
  T79 = fun_49;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T79);
  lit_107 = YPPsym((P)"binding-dynamic-extent?");
  lit_108 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_50 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_50),LITREF(lit_107),T80,ENVNUL,PNUL,sloc(110));
  T82 = VARREF_OR(YevalSastYbinding_dynamic_extentQ,YPfalse);
  T83 = fun_binding_dynamic_extentQ_50;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYbinding_dynamic_extentQ,T81);
  lit_109 = YPPsym((P)"binding-dynamic-extent?-setter");
  lit_110 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_51 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_51),LITREF(lit_109),T84,ENVNUL,PNUL,sloc(110));
  T86 = VARREF_OR(YevalSastYbinding_dynamic_extentQ_setter,YPfalse);
  T87 = fun_binding_dynamic_extentQ_setter_51;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T85);
  lit_111 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T88,ENVNUL,PNUL,sloc(110));
  T89 = fun_52;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T89);
  lit_112 = YPPsym((P)"binding-dotted?");
  lit_113 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_53 = YPmet(FUNCODEREF(fun_binding_dottedQ_53),LITREF(lit_112),T90,ENVNUL,PNUL,sloc(111));
  T92 = VARREF_OR(YevalSastYbinding_dottedQ,YPfalse);
  T93 = fun_binding_dottedQ_53;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYbinding_dottedQ,T91);
  lit_114 = YPPsym((P)"binding-dotted?-setter");
  lit_115 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_54 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_54),LITREF(lit_114),T94,ENVNUL,PNUL,sloc(111));
  T96 = VARREF_OR(YevalSastYbinding_dottedQ_setter,YPfalse);
  T97 = fun_binding_dottedQ_setter_54;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSastYbinding_dottedQ_setter,T95);
  lit_116 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T98,ENVNUL,PNUL,sloc(111));
  T99 = fun_55;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T99);
  lit_117 = YPPsym((P)"binding-closed-over?");
  lit_118 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_56 = YPmet(FUNCODEREF(fun_binding_closed_overQ_56),LITREF(lit_117),T100,ENVNUL,PNUL,sloc(112));
  T102 = VARREF_OR(YevalSastYbinding_closed_overQ,YPfalse);
  T103 = fun_binding_closed_overQ_56;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSastYbinding_closed_overQ,T101);
  lit_119 = YPPsym((P)"binding-closed-over?-setter");
  lit_120 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_setter_57 = YPmet(FUNCODEREF(fun_binding_closed_overQ_setter_57),LITREF(lit_119),T104,ENVNUL,PNUL,sloc(112));
  T106 = VARREF_OR(YevalSastYbinding_closed_overQ_setter,YPfalse);
  T107 = fun_binding_closed_overQ_setter_57;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSastYbinding_closed_overQ_setter,T105);
  lit_121 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T108,ENVNUL,PNUL,sloc(112));
  T109 = fun_58;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_closed_overQ),VARREF(YevalSastYbinding_closed_overQ_setter),VARREF(YLanyG),T109);
  lit_122 = YPPsym((P)"binding-index");
  lit_123 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_59 = YPmet(FUNCODEREF(fun_binding_index_59),LITREF(lit_122),T110,ENVNUL,PNUL,sloc(113));
  T112 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T113 = fun_binding_index_59;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSastYbinding_index,T111);
  lit_124 = YPPsym((P)"binding-index-setter");
  lit_125 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_60 = YPmet(FUNCODEREF(fun_binding_index_setter_60),LITREF(lit_124),T114,ENVNUL,PNUL,sloc(113));
  T116 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T117 = fun_binding_index_setter_60;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSastYbinding_index_setter,T115);
  lit_126 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T118,ENVNUL,PNUL,sloc(113));
  T119 = fun_61;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T119);
  lit_127 = YPPsym((P)"<compile-time>");
  T121 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T120 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_127),T121);
  VARSET(YevalSastYLcompile_timeG,T120);
  lit_128 = YPPsym((P)"compile-time-program");
  lit_129 = YPPlist(1,YPPsym((P)"_x"));
  T122 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_62 = YPmet(FUNCODEREF(fun_compile_time_program_62),LITREF(lit_128),T122,ENVNUL,PNUL,sloc(120));
  T124 = VARREF_OR(YevalSastYcompile_time_program,YPfalse);
  T125 = fun_compile_time_program_62;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSastYcompile_time_program,T123);
  lit_130 = YPPsym((P)"compile-time-program-setter");
  lit_131 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T126 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_63 = YPmet(FUNCODEREF(fun_compile_time_program_setter_63),LITREF(lit_130),T126,ENVNUL,PNUL,sloc(120));
  T128 = VARREF_OR(YevalSastYcompile_time_program_setter,YPfalse);
  T129 = fun_compile_time_program_setter_63;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSastYcompile_time_program_setter,T127);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_132 = YPPsym((P)"<reference>");
  T131 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T130 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_132),T131);
  VARSET(YevalSastYLreferenceG,T130);
  lit_133 = YPPsym((P)"<real-reference>");
  T133 = (P)YPpair(VARREF(YevalSastYLreferenceG),Ynil);
  T132 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_133),T133);
  VARSET(YevalSastYLreal_referenceG,T132);
  lit_134 = YPPsym((P)"reference-binding");
  lit_135 = YPPlist(1,YPPsym((P)"_x"));
  T136 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T135 = fun_reference_binding_64 = YPmet(FUNCODEREF(fun_reference_binding_64),LITREF(lit_134),T136,ENVNUL,PNUL,sloc(131));
  T139 = VARREF_OR(YevalSastYreference_binding,YPfalse);
  T140 = fun_reference_binding_64;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  T137 = VARSET(YevalSastYreference_binding,T138);
  T134 = T137;
  return T134;
}

P YevalSastY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119;
DEFCREGS();
  lit_136 = YPPsym((P)"reference-binding-setter");
  lit_137 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_65 = YPmet(FUNCODEREF(fun_reference_binding_setter_65),LITREF(lit_136),T0,ENVNUL,PNUL,sloc(131));
  T2 = VARREF_OR(YevalSastYreference_binding_setter,YPfalse);
  T3 = fun_reference_binding_setter_65;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYreference_binding_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_138 = YPPsym((P)"<local-reference>");
  T5 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_138),T5);
  VARSET(YevalSastYLlocal_referenceG,T4);
  lit_139 = YPPsym((P)"reference-called-function?");
  lit_140 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_66 = YPmet(FUNCODEREF(fun_reference_called_functionQ_66),LITREF(lit_139),T6,ENVNUL,PNUL,sloc(134));
  T8 = VARREF_OR(YevalSastYreference_called_functionQ,YPfalse);
  T9 = fun_reference_called_functionQ_66;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYreference_called_functionQ,T7);
  lit_141 = YPPsym((P)"reference-called-function?-setter");
  lit_142 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_67 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_67),LITREF(lit_141),T10,ENVNUL,PNUL,sloc(134));
  T12 = VARREF_OR(YevalSastYreference_called_functionQ_setter,YPfalse);
  T13 = fun_reference_called_functionQ_setter_67;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYreference_called_functionQ_setter,T11);
  lit_143 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T14,ENVNUL,PNUL,sloc(134));
  T15 = fun_68;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T15);
  lit_144 = YPPsym((P)"reference-frame-number");
  lit_145 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_69 = YPmet(FUNCODEREF(fun_reference_frame_number_69),LITREF(lit_144),T16,ENVNUL,PNUL,sloc(135));
  T18 = VARREF_OR(YevalSastYreference_frame_number,YPfalse);
  T19 = fun_reference_frame_number_69;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYreference_frame_number,T17);
  lit_146 = YPPsym((P)"reference-frame-number-setter");
  lit_147 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_147),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_70 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_70),LITREF(lit_146),T20,ENVNUL,PNUL,sloc(135));
  T22 = VARREF_OR(YevalSastYreference_frame_number_setter,YPfalse);
  T23 = fun_reference_frame_number_setter_70;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYreference_frame_number_setter,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_148 = YPPsym((P)"reference-frame-offset");
  lit_149 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_71 = YPmet(FUNCODEREF(fun_reference_frame_offset_71),LITREF(lit_148),T24,ENVNUL,PNUL,sloc(136));
  T26 = VARREF_OR(YevalSastYreference_frame_offset,YPfalse);
  T27 = fun_reference_frame_offset_71;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYreference_frame_offset,T25);
  lit_150 = YPPsym((P)"reference-frame-offset-setter");
  lit_151 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_151),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_72 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_72),LITREF(lit_150),T28,ENVNUL,PNUL,sloc(136));
  T30 = VARREF_OR(YevalSastYreference_frame_offset_setter,YPfalse);
  T31 = fun_reference_frame_offset_setter_72;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYreference_frame_offset_setter,T29);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_152 = YPPsym((P)"<module-binding-reference>");
  T33 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T32 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_152),T33);
  VARSET(YevalSastYLmodule_binding_referenceG,T32);
  lit_153 = YPPsym((P)"<global-reference>");
  T35 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_153),T35);
  VARSET(YevalSastYLglobal_referenceG,T34);
  lit_154 = YPPsym((P)"<runtime-reference>");
  T37 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T36 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_154),T37);
  VARSET(YevalSastYLruntime_referenceG,T36);
  lit_155 = YPPsym((P)"<dynamic-reference>");
  T39 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T38 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_155),T39);
  VARSET(YevalSastYLdynamic_referenceG,T38);
  lit_156 = YPPsym((P)"<predefined-reference>");
  T41 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T40 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_156),T41);
  VARSET(YevalSastYLpredefined_referenceG,T40);
  lit_157 = YPPsym((P)"<static-module-binding-reference>");
  T43 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T42 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_157),T43);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T42);
  lit_158 = YPPsym((P)"<macro-reference>");
  T45 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T44 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_158),T45);
  VARSET(YevalSastYLmacro_referenceG,T44);
  lit_159 = YPPsym((P)"<magic-reference>");
  T47 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T46 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_159),T47);
  VARSET(YevalSastYLmagic_referenceG,T46);
  lit_160 = YPPsym((P)"<bound?>");
  T49 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T48 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_160),T49);
  VARSET(YevalSastYLboundQG,T48);
  lit_161 = YPPsym((P)"bound?-reference");
  lit_162 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_73 = YPmet(FUNCODEREF(fun_boundQ_reference_73),LITREF(lit_161),T50,ENVNUL,PNUL,sloc(157));
  T52 = VARREF_OR(YevalSastYboundQ_reference,YPfalse);
  T53 = fun_boundQ_reference_73;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYboundQ_reference,T51);
  lit_163 = YPPsym((P)"bound?-reference-setter");
  lit_164 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_164),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_74 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_74),LITREF(lit_163),T54,ENVNUL,PNUL,sloc(157));
  T56 = VARREF_OR(YevalSastYboundQ_reference_setter,YPfalse);
  T57 = fun_boundQ_reference_setter_74;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYboundQ_reference_setter,T55);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_165 = YPPsym((P)"bound?-default");
  lit_166 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_default_75 = YPmet(FUNCODEREF(fun_boundQ_default_75),LITREF(lit_165),T58,ENVNUL,PNUL,sloc(158));
  T60 = VARREF_OR(YevalSastYboundQ_default,YPfalse);
  T61 = fun_boundQ_default_75;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSastYboundQ_default,T59);
  lit_167 = YPPsym((P)"bound?-default-setter");
  lit_168 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_168),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_default_setter_76 = YPmet(FUNCODEREF(fun_boundQ_default_setter_76),LITREF(lit_167),T62,ENVNUL,PNUL,sloc(158));
  T64 = VARREF_OR(YevalSastYboundQ_default_setter,YPfalse);
  T65 = fun_boundQ_default_setter_76;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYboundQ_default_setter,T63);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_default),VARREF(YevalSastYboundQ_default_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_169 = YPPsym((P)"<assignment>");
  T67 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T66 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_169),T67);
  VARSET(YevalSastYLassignmentG,T66);
  lit_170 = YPPsym((P)"assignment-form");
  lit_171 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_77 = YPmet(FUNCODEREF(fun_assignment_form_77),LITREF(lit_170),T68,ENVNUL,PNUL,sloc(161));
  T70 = VARREF_OR(YevalSastYassignment_form,YPfalse);
  T71 = fun_assignment_form_77;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYassignment_form,T69);
  lit_172 = YPPsym((P)"assignment-form-setter");
  lit_173 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_173),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_78 = YPmet(FUNCODEREF(fun_assignment_form_setter_78),LITREF(lit_172),T72,ENVNUL,PNUL,sloc(161));
  T74 = VARREF_OR(YevalSastYassignment_form_setter,YPfalse);
  T75 = fun_assignment_form_setter_78;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYassignment_form_setter,T73);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_174 = YPPsym((P)"<local-assignment>");
  T77 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T76 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_174),T77);
  VARSET(YevalSastYLlocal_assignmentG,T76);
  lit_175 = YPPsym((P)"assignment-reference");
  lit_176 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_79 = YPmet(FUNCODEREF(fun_assignment_reference_79),LITREF(lit_175),T78,ENVNUL,PNUL,sloc(164));
  T80 = VARREF_OR(YevalSastYassignment_reference,YPfalse);
  T81 = fun_assignment_reference_79;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSastYassignment_reference,T79);
  lit_177 = YPPsym((P)"assignment-reference-setter");
  lit_178 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_178),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_80 = YPmet(FUNCODEREF(fun_assignment_reference_setter_80),LITREF(lit_177),T82,ENVNUL,PNUL,sloc(164));
  T84 = VARREF_OR(YevalSastYassignment_reference_setter,YPfalse);
  T85 = fun_assignment_reference_setter_80;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSastYassignment_reference_setter,T83);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_179 = YPPsym((P)"<global-assignment>");
  T87 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T86 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_179),T87);
  VARSET(YevalSastYLglobal_assignmentG,T86);
  lit_180 = YPPsym((P)"assignment-binding");
  lit_181 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_181),YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_81 = YPmet(FUNCODEREF(fun_assignment_binding_81),LITREF(lit_180),T88,ENVNUL,PNUL,sloc(167));
  T90 = VARREF_OR(YevalSastYassignment_binding,YPfalse);
  T91 = fun_assignment_binding_81;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSastYassignment_binding,T89);
  lit_182 = YPPsym((P)"assignment-binding-setter");
  lit_183 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_183),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_82 = YPmet(FUNCODEREF(fun_assignment_binding_setter_82),LITREF(lit_182),T92,ENVNUL,PNUL,sloc(167));
  T94 = VARREF_OR(YevalSastYassignment_binding_setter,YPfalse);
  T95 = fun_assignment_binding_setter_82;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSastYassignment_binding_setter,T93);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_184 = YPPsym((P)"<runtime-assignment>");
  T97 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T96 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_184),T97);
  VARSET(YevalSastYLruntime_assignmentG,T96);
  lit_185 = YPPsym((P)"<dynamic-assignment>");
  T99 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T98 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_185),T99);
  VARSET(YevalSastYLdynamic_assignmentG,T98);
  lit_186 = YPPsym((P)"<definition>");
  T101 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T100 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_186),T101);
  VARSET(YevalSastYLdefinitionG,T100);
  lit_187 = YPPsym((P)"<variable-definition>");
  T103 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T102 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_187),T103);
  VARSET(YevalSastYLvariable_definitionG,T102);
  lit_188 = YPPsym((P)"<dynamic-definition>");
  T105 = (P)YPpair(VARREF(YevalSastYLvariable_definitionG),Ynil);
  T104 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_188),T105);
  VARSET(YevalSastYLdynamic_definitionG,T104);
  lit_189 = YPPsym((P)"<ast-generic-definition>");
  T107 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T106 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_189),T107);
  VARSET(YevalSastYLast_generic_definitionG,T106);
  lit_190 = YPPsym((P)"<ast-function-definition>");
  T109 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T108 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_190),T109);
  VARSET(YevalSastYLast_function_definitionG,T108);
  lit_191 = YPPsym((P)"<ast-method-definition>");
  T111 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T110 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_191),T111);
  VARSET(YevalSastYLast_method_definitionG,T110);
  lit_192 = YPPsym((P)"<ast-primitive-definition>");
  T113 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T112 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_192),T113);
  VARSET(YevalSastYLast_primitive_definitionG,T112);
  lit_193 = YPPsym((P)"<ast-macro-definition>");
  T115 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T114 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_193),T115);
  VARSET(YevalSastYLast_macro_definitionG,T114);
  lit_194 = YPPsym((P)"<ast-signature>");
  T119 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T118 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_194),T119);
  T117 = VARSET(YevalSastYLast_signatureG,T118);
  T116 = T117;
  return T116;
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
  P T160,T161;
DEFCREGS();
  lit_195 = YPPsym((P)"signature-bindings");
  lit_196 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_83 = YPmet(FUNCODEREF(fun_signature_bindings_83),LITREF(lit_195),T0,ENVNUL,PNUL,sloc(192));
  T2 = VARREF_OR(YevalSastYsignature_bindings,YPfalse);
  T3 = fun_signature_bindings_83;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYsignature_bindings,T1);
  lit_197 = YPPsym((P)"signature-bindings-setter");
  lit_198 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_198),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_84 = YPmet(FUNCODEREF(fun_signature_bindings_setter_84),LITREF(lit_197),T4,ENVNUL,PNUL,sloc(192));
  T6 = VARREF_OR(YevalSastYsignature_bindings_setter,YPfalse);
  T7 = fun_signature_bindings_setter_84;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYsignature_bindings_setter,T5);
  lit_199 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T8,ENVNUL,PNUL,sloc(192));
  T9 = fun_85;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T9);
  lit_200 = YPPsym((P)"signature-names");
  lit_201 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_86 = YPmet(FUNCODEREF(fun_signature_names_86),LITREF(lit_200),T10,ENVNUL,PNUL,sloc(193));
  T12 = VARREF_OR(YevalSastYsignature_names,YPfalse);
  T13 = fun_signature_names_86;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYsignature_names,T11);
  lit_202 = YPPsym((P)"signature-names-setter");
  lit_203 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_203),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_87 = YPmet(FUNCODEREF(fun_signature_names_setter_87),LITREF(lit_202),T14,ENVNUL,PNUL,sloc(193));
  T16 = VARREF_OR(YevalSastYsignature_names_setter,YPfalse);
  T17 = fun_signature_names_setter_87;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYsignature_names_setter,T15);
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T18,ENVNUL,PNUL,sloc(193));
  T19 = fun_88;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T19);
  lit_205 = YPPsym((P)"signature-specs");
  lit_206 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_89 = YPmet(FUNCODEREF(fun_signature_specs_89),LITREF(lit_205),T20,ENVNUL,PNUL,sloc(194));
  T22 = VARREF_OR(YevalSastYsignature_specs,YPfalse);
  T23 = fun_signature_specs_89;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYsignature_specs,T21);
  lit_207 = YPPsym((P)"signature-specs-setter");
  lit_208 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_208),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_90 = YPmet(FUNCODEREF(fun_signature_specs_setter_90),LITREF(lit_207),T24,ENVNUL,PNUL,sloc(194));
  T26 = VARREF_OR(YevalSastYsignature_specs_setter,YPfalse);
  T27 = fun_signature_specs_setter_90;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYsignature_specs_setter,T25);
  lit_209 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T28,ENVNUL,PNUL,sloc(194));
  T29 = fun_91;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T29);
  lit_210 = YPPsym((P)"signature-nary?");
  lit_211 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_92 = YPmet(FUNCODEREF(fun_signature_naryQ_92),LITREF(lit_210),T30,ENVNUL,PNUL,sloc(195));
  T32 = VARREF_OR(YevalSastYsignature_naryQ,YPfalse);
  T33 = fun_signature_naryQ_92;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYsignature_naryQ,T31);
  lit_212 = YPPsym((P)"signature-nary?-setter");
  lit_213 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_213),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_93 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_93),LITREF(lit_212),T34,ENVNUL,PNUL,sloc(195));
  T36 = VARREF_OR(YevalSastYsignature_naryQ_setter,YPfalse);
  T37 = fun_signature_naryQ_setter_93;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYsignature_naryQ_setter,T35);
  lit_214 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T38,ENVNUL,PNUL,sloc(195));
  T39 = fun_94;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T39);
  lit_215 = YPPsym((P)"signature-arity");
  lit_216 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_95 = YPmet(FUNCODEREF(fun_signature_arity_95),LITREF(lit_215),T40,ENVNUL,PNUL,sloc(196));
  T42 = VARREF_OR(YevalSastYsignature_arity,YPfalse);
  T43 = fun_signature_arity_95;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYsignature_arity,T41);
  lit_217 = YPPsym((P)"signature-arity-setter");
  lit_218 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_218),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_96 = YPmet(FUNCODEREF(fun_signature_arity_setter_96),LITREF(lit_217),T44,ENVNUL,PNUL,sloc(196));
  T46 = VARREF_OR(YevalSastYsignature_arity_setter,YPfalse);
  T47 = fun_signature_arity_setter_96;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYsignature_arity_setter,T45);
  lit_219 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T48,ENVNUL,PNUL,sloc(196));
  T49 = fun_97;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T49);
  lit_220 = YPPsym((P)"signature-value");
  lit_221 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_98 = YPmet(FUNCODEREF(fun_signature_value_98),LITREF(lit_220),T50,ENVNUL,PNUL,sloc(197));
  T52 = VARREF_OR(YevalSastYsignature_value,YPfalse);
  T53 = fun_signature_value_98;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYsignature_value,T51);
  lit_222 = YPPsym((P)"signature-value-setter");
  lit_223 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_223),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_99 = YPmet(FUNCODEREF(fun_signature_value_setter_99),LITREF(lit_222),T54,ENVNUL,PNUL,sloc(197));
  T56 = VARREF_OR(YevalSastYsignature_value_setter,YPfalse);
  T57 = fun_signature_value_setter_99;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYsignature_value_setter,T55);
  lit_224 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T58,ENVNUL,PNUL,sloc(197));
  T59 = fun_100;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T59);
  lit_225 = YPPsym((P)"req-sig-specs");
  lit_226 = YPPlist(1,YPPsym((P)"sig"));
  T60 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_req_sig_specs_101 = YPmet(FUNCODEREF(fun_req_sig_specs_101),LITREF(lit_225),T60,ENVNUL,PNUL,sloc(200));
  T62 = VARREF_OR(YevalSastYreq_sig_specs,YPfalse);
  T63 = fun_req_sig_specs_101;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYreq_sig_specs,T61);
  lit_227 = YPPsym((P)"<ast-function>");
  T66 = (P)YPpair(VARREF(YevalSdependencyYLdependentG),Ynil);
  T65 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),T66);
  T64 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_227),T65);
  VARSET(YevalSastYLast_functionG,T64);
  lit_228 = YPPsym((P)"function-binding");
  lit_229 = YPPlist(1,YPPsym((P)"_x"));
  T67 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_102 = YPmet(FUNCODEREF(fun_function_binding_102),LITREF(lit_228),T67,ENVNUL,PNUL,sloc(207));
  T69 = VARREF_OR(YevalSastYfunction_binding,YPfalse);
  T70 = fun_function_binding_102;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYfunction_binding,T68);
  lit_230 = YPPsym((P)"function-binding-setter");
  lit_231 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T71 = YPsig(LITREF(lit_231),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_103 = YPmet(FUNCODEREF(fun_function_binding_setter_103),LITREF(lit_230),T71,ENVNUL,PNUL,sloc(207));
  T73 = VARREF_OR(YevalSastYfunction_binding_setter,YPfalse);
  T74 = fun_function_binding_setter_103;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSastYfunction_binding_setter,T72);
  lit_232 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T75,ENVNUL,PNUL,sloc(207));
  T76 = fun_104;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T76);
  lit_233 = YPPsym((P)"function-debug-name");
  lit_234 = YPPlist(1,YPPsym((P)"_x"));
  T77 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_105 = YPmet(FUNCODEREF(fun_function_debug_name_105),LITREF(lit_233),T77,ENVNUL,PNUL,sloc(208));
  T79 = VARREF_OR(YevalSastYfunction_debug_name,YPfalse);
  T80 = fun_function_debug_name_105;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYfunction_debug_name,T78);
  lit_235 = YPPsym((P)"function-debug-name-setter");
  lit_236 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_236),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_106 = YPmet(FUNCODEREF(fun_function_debug_name_setter_106),LITREF(lit_235),T81,ENVNUL,PNUL,sloc(208));
  T83 = VARREF_OR(YevalSastYfunction_debug_name_setter,YPfalse);
  T84 = fun_function_debug_name_setter_106;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYfunction_debug_name_setter,T82);
  lit_237 = YPPlist(1,YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T85,ENVNUL,PNUL,sloc(208));
  T86 = fun_107;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T86);
  lit_238 = YPPsym((P)"function-signature");
  lit_239 = YPPlist(1,YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_108 = YPmet(FUNCODEREF(fun_function_signature_108),LITREF(lit_238),T87,ENVNUL,PNUL,sloc(210));
  T89 = VARREF_OR(YevalSastYfunction_signature,YPfalse);
  T90 = fun_function_signature_108;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_signature,T88);
  lit_240 = YPPsym((P)"function-signature-setter");
  lit_241 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T91 = YPsig(LITREF(lit_241),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_109 = YPmet(FUNCODEREF(fun_function_signature_setter_109),LITREF(lit_240),T91,ENVNUL,PNUL,sloc(210));
  T93 = VARREF_OR(YevalSastYfunction_signature_setter,YPfalse);
  T94 = fun_function_signature_setter_109;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSastYfunction_signature_setter,T92);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_242 = YPPsym((P)"function-bindings");
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T95 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPmet(FUNCODEREF(YevalSastYfunction_bindings),LITREF(lit_242),T95,ENVNUL,PNUL,sloc(212));
  T96 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T96);
  lit_244 = YPPsym((P)"function-specs");
  lit_245 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPmet(FUNCODEREF(YevalSastYfunction_specs),LITREF(lit_244),T97,ENVNUL,PNUL,sloc(214));
  T98 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T98);
  lit_246 = YPPsym((P)"function-nary?");
  lit_247 = YPPlist(1,YPPsym((P)"x"));
  T99 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPmet(FUNCODEREF(YevalSastYfunction_naryQ),LITREF(lit_246),T99,ENVNUL,PNUL,sloc(216));
  T100 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T100);
  lit_248 = YPPsym((P)"function-value");
  lit_249 = YPPlist(1,YPPsym((P)"x"));
  T101 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPmet(FUNCODEREF(YevalSastYfunction_value),LITREF(lit_248),T101,ENVNUL,PNUL,sloc(218));
  T102 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T102);
  lit_250 = YPPsym((P)"function-kind");
  lit_251 = YPPlist(1,YPPsym((P)"x"));
  lit_252 = YPsb((P)"FUN");
  T103 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_114 = YPmet(FUNCODEREF(fun_function_kind_114),LITREF(lit_250),T103,ENVNUL,PNUL,sloc(221));
  T105 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T106 = fun_function_kind_114;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYfunction_kind,T104);
  lit_253 = YPPsym((P)"function-display-name");
  lit_254 = YPPlist(1,YPPsym((P)"f"));
  lit_255 = YPsb((P)"%s:%s");
  lit_256 = YPsb((P)"anonymous function");
  T107 = YPsig(LITREF(lit_254),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPmet(FUNCODEREF(YevalSastYfunction_display_name),LITREF(lit_253),T107,ENVNUL,PNUL,sloc(223));
  T108 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T108);
  lit_257 = YPPsym((P)"invalidate-dependent");
  lit_258 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  lit_259 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_260 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_261 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T109 = YPsig(LITREF(lit_258),YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_116 = YPmet(FUNCODEREF(fun_invalidate_dependent_116),LITREF(lit_257),T109,ENVNUL,PNUL,sloc(233));
  T111 = VARREF_OR(YevalSdependencyYinvalidate_dependent,YPfalse);
  T112 = fun_invalidate_dependent_116;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSdependencyYinvalidate_dependent,T110);
  lit_262 = YPPsym((P)"<programs>");
  T114 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T113 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_262),T114);
  VARSET(YevalSastYLprogramsG,T113);
  lit_263 = YPPsym((P)"as-lst");
  lit_264 = YPPlist(1,YPPsym((P)"e"));
  T115 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_117 = YPmet(FUNCODEREF(fun_as_lst_117),LITREF(lit_263),T115,ENVNUL,PNUL,sloc(250));
  T117 = VARREF_OR(YevalSastYas_lst,YPfalse);
  T118 = fun_as_lst_117;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSastYas_lst,T116);
  lit_265 = YPPlist(1,YPPsym((P)"exp"));
  lit_266 = YPPlist(1,YPPsym((P)"return"));
  lit_267 = YPPsym((P)"x-2334");
  lit_268 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_269 = YPPsym((P)"def-programs");
  lit_270 = YPPsym((P)"def-list");
  T121 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2334_118 = YPmet(FUNCODEREF(fun_x_2334_118),LITREF(lit_267),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T122 = fun_120;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T122);
  lit_271 = YPPsym((P)"<ast-embodied-function>");
  T124 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T123 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_271),T124);
  VARSET(YevalSastYLast_embodied_functionG,T123);
  lit_272 = YPPsym((P)"function-body");
  lit_273 = YPPlist(1,YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_121 = YPmet(FUNCODEREF(fun_function_body_121),LITREF(lit_272),T125,ENVNUL,PNUL,sloc(257));
  T127 = VARREF_OR(YevalSastYfunction_body,YPfalse);
  T128 = fun_function_body_121;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSastYfunction_body,T126);
  lit_274 = YPPsym((P)"function-body-setter");
  lit_275 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T129 = YPsig(LITREF(lit_275),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_122 = YPmet(FUNCODEREF(fun_function_body_setter_122),LITREF(lit_274),T129,ENVNUL,PNUL,sloc(257));
  T131 = VARREF_OR(YevalSastYfunction_body_setter,YPfalse);
  T132 = fun_function_body_setter_122;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYfunction_body_setter,T130);
  lit_276 = YPPlist(1,YPPsym((P)"_x"));
  T133 = YPsig(LITREF(lit_276),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T133,ENVNUL,PNUL,sloc(257));
  T134 = fun_123;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T134);
  lit_277 = YPPsym((P)"function-index");
  lit_278 = YPPlist(1,YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_278),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_124 = YPmet(FUNCODEREF(fun_function_index_124),LITREF(lit_277),T135,ENVNUL,PNUL,sloc(258));
  T137 = VARREF_OR(YevalSastYfunction_index,YPfalse);
  T138 = fun_function_index_124;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YevalSastYfunction_index,T136);
  lit_279 = YPPsym((P)"function-index-setter");
  lit_280 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T139 = YPsig(LITREF(lit_280),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_125 = YPmet(FUNCODEREF(fun_function_index_setter_125),LITREF(lit_279),T139,ENVNUL,PNUL,sloc(258));
  T141 = VARREF_OR(YevalSastYfunction_index_setter,YPfalse);
  T142 = fun_function_index_setter_125;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSastYfunction_index_setter,T140);
  lit_281 = YPPlist(1,YPPsym((P)"_x"));
  T143 = YPsig(LITREF(lit_281),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T143,ENVNUL,PNUL,sloc(258));
  T144 = fun_126;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T144);
  lit_282 = YPPsym((P)"function-temporaries");
  lit_283 = YPPlist(1,YPPsym((P)"_x"));
  T145 = YPsig(LITREF(lit_283),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_127 = YPmet(FUNCODEREF(fun_function_temporaries_127),LITREF(lit_282),T145,ENVNUL,PNUL,sloc(259));
  T147 = VARREF_OR(YevalSastYfunction_temporaries,YPfalse);
  T148 = fun_function_temporaries_127;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSastYfunction_temporaries,T146);
  lit_284 = YPPsym((P)"function-temporaries-setter");
  lit_285 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_285),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_128 = YPmet(FUNCODEREF(fun_function_temporaries_setter_128),LITREF(lit_284),T149,ENVNUL,PNUL,sloc(259));
  T151 = VARREF_OR(YevalSastYfunction_temporaries_setter,YPfalse);
  T152 = fun_function_temporaries_setter_128;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSastYfunction_temporaries_setter,T150);
  lit_286 = YPPlist(1,YPPsym((P)"_x"));
  T153 = YPsig(LITREF(lit_286),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T153,ENVNUL,PNUL,sloc(259));
  T154 = fun_129;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T154);
  lit_287 = YPPsym((P)"function-registers");
  lit_288 = YPPlist(1,YPPsym((P)"_x"));
  T157 = YPsig(LITREF(lit_288),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T156 = fun_function_registers_130 = YPmet(FUNCODEREF(fun_function_registers_130),LITREF(lit_287),T157,ENVNUL,PNUL,sloc(260));
  T160 = VARREF_OR(YevalSastYfunction_registers,YPfalse);
  T161 = fun_function_registers_130;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  T158 = VARSET(YevalSastYfunction_registers,T159);
  T155 = T158;
  return T155;
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
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153;
DEFCREGS();
  lit_289 = YPPsym((P)"function-registers-setter");
  lit_290 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_290),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_131 = YPmet(FUNCODEREF(fun_function_registers_setter_131),LITREF(lit_289),T0,ENVNUL,PNUL,sloc(260));
  T2 = VARREF_OR(YevalSastYfunction_registers_setter,YPfalse);
  T3 = fun_function_registers_setter_131;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYfunction_registers_setter,T1);
  lit_291 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_291),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T4,ENVNUL,PNUL,sloc(260));
  T5 = fun_132;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T5);
  lit_292 = YPPsym((P)"function-loop");
  lit_293 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_loop_133 = YPmet(FUNCODEREF(fun_function_loop_133),LITREF(lit_292),T6,ENVNUL,PNUL,sloc(261));
  T8 = VARREF_OR(YevalSastYfunction_loop,YPfalse);
  T9 = fun_function_loop_133;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYfunction_loop,T7);
  lit_294 = YPPsym((P)"function-loop-setter");
  lit_295 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_295),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_loop_setter_134 = YPmet(FUNCODEREF(fun_function_loop_setter_134),LITREF(lit_294),T10,ENVNUL,PNUL,sloc(261));
  T12 = VARREF_OR(YevalSastYfunction_loop_setter,YPfalse);
  T13 = fun_function_loop_setter_134;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYfunction_loop_setter,T11);
  lit_296 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_296),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T14,ENVNUL,PNUL,sloc(261));
  T15 = fun_135;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_loop),VARREF(YevalSastYfunction_loop_setter),VARREF(YLanyG),T15);
  lit_297 = YPPsym((P)"function-source");
  lit_298 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_298),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_136 = YPmet(FUNCODEREF(fun_function_source_136),LITREF(lit_297),T16,ENVNUL,PNUL,sloc(263));
  T18 = VARREF_OR(YevalSastYfunction_source,YPfalse);
  T19 = fun_function_source_136;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYfunction_source,T17);
  lit_299 = YPPsym((P)"function-source-setter");
  lit_300 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_300),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_137 = YPmet(FUNCODEREF(fun_function_source_setter_137),LITREF(lit_299),T20,ENVNUL,PNUL,sloc(263));
  T22 = VARREF_OR(YevalSastYfunction_source_setter,YPfalse);
  T23 = fun_function_source_setter_137;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYfunction_source_setter,T21);
  lit_301 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_301),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T24,ENVNUL,PNUL,sloc(263));
  T25 = fun_138;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T25);
  lit_302 = YPPsym((P)"function-frame-len");
  lit_303 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_303),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_139 = YPmet(FUNCODEREF(fun_function_frame_len_139),LITREF(lit_302),T26,ENVNUL,PNUL,sloc(264));
  T28 = VARREF_OR(YevalSastYfunction_frame_len,YPfalse);
  T29 = fun_function_frame_len_139;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYfunction_frame_len,T27);
  lit_304 = YPPsym((P)"function-frame-len-setter");
  lit_305 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_305),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_140 = YPmet(FUNCODEREF(fun_function_frame_len_setter_140),LITREF(lit_304),T30,ENVNUL,PNUL,sloc(264));
  T32 = VARREF_OR(YevalSastYfunction_frame_len_setter,YPfalse);
  T33 = fun_function_frame_len_setter_140;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYfunction_frame_len_setter,T31);
  lit_306 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_306),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T34,ENVNUL,PNUL,sloc(264));
  T35 = fun_141;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T35);
  lit_307 = YPPsym((P)"<free-environment>");
  T38 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T37 = (P)YPpair(VARREF(YLlstG),T38);
  T36 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_307),T37);
  VARSET(YevalSastYLfree_environmentG,T36);
  T39 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T39);
  lit_308 = YPPsym((P)"free-environment");
  lit_309 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T40 = YPsig(LITREF(lit_309),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_308),T40,ENVNUL,PNUL,sloc(266));
  T41 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T41);
  lit_310 = YPPsym((P)"empty");
  lit_311 = YPPlist(1,YPPsym((P)"e"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T42 = YPsig(LITREF(lit_311),YPPlist(1,T43),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_143 = YPmet(FUNCODEREF(fun_empty_143),LITREF(lit_310),T42,ENVNUL,PNUL,sloc(266));
  T45 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T46 = fun_empty_143;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooScolsScolYempty,T44);
  lit_312 = YPPsym((P)"<ast-method>");
  T48 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T47 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_312),T48);
  VARSET(YevalSastYLast_methodG,T47);
  lit_313 = YPPsym((P)"function-ref-count");
  lit_314 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_314),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_ref_count_144 = YPmet(FUNCODEREF(fun_function_ref_count_144),LITREF(lit_313),T49,ENVNUL,PNUL,sloc(269));
  T51 = VARREF_OR(YevalSastYfunction_ref_count,YPfalse);
  T52 = fun_function_ref_count_144;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSastYfunction_ref_count,T50);
  lit_315 = YPPsym((P)"function-ref-count-setter");
  lit_316 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_316),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_ref_count_setter_145 = YPmet(FUNCODEREF(fun_function_ref_count_setter_145),LITREF(lit_315),T53,ENVNUL,PNUL,sloc(269));
  T55 = VARREF_OR(YevalSastYfunction_ref_count_setter,YPfalse);
  T56 = fun_function_ref_count_setter_145;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSastYfunction_ref_count_setter,T54);
  lit_317 = YPPlist(1,YPPsym((P)"_x"));
  T57 = YPsig(LITREF(lit_317),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T57,ENVNUL,PNUL,sloc(269));
  T58 = fun_146;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_ref_count),VARREF(YevalSastYfunction_ref_count_setter),VARREF(YLintG),T58);
  lit_318 = YPPsym((P)"function-free");
  lit_319 = YPPlist(1,YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_319),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_147 = YPmet(FUNCODEREF(fun_function_free_147),LITREF(lit_318),T59,ENVNUL,PNUL,sloc(270));
  T61 = VARREF_OR(YevalSastYfunction_free,YPfalse);
  T62 = fun_function_free_147;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSastYfunction_free,T60);
  lit_320 = YPPsym((P)"function-free-setter");
  lit_321 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_321),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_148 = YPmet(FUNCODEREF(fun_function_free_setter_148),LITREF(lit_320),T63,ENVNUL,PNUL,sloc(270));
  T65 = VARREF_OR(YevalSastYfunction_free_setter,YPfalse);
  T66 = fun_function_free_setter_148;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYfunction_free_setter,T64);
  lit_322 = YPPlist(1,YPPsym((P)"_x"));
  T67 = YPsig(LITREF(lit_322),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T67,ENVNUL,PNUL,sloc(270));
  T68 = fun_149;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T68);
  lit_323 = YPPsym((P)"incf-ref-count");
  lit_324 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_324),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_150 = YPmet(FUNCODEREF(fun_incf_ref_count_150),LITREF(lit_323),T69,ENVNUL,PNUL,sloc(273));
  T71 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T72 = fun_incf_ref_count_150;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSastYincf_ref_count,T70);
  lit_325 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPsig(LITREF(lit_325),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_151 = YPmet(FUNCODEREF(fun_incf_ref_count_151),LITREF(lit_323),T73,ENVNUL,PNUL,sloc(274));
  T75 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T76 = fun_incf_ref_count_151;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYincf_ref_count,T74);
  lit_326 = YPPlist(1,YPPsym((P)"x"));
  lit_327 = YPsb((P)"MET");
  T77 = YPsig(LITREF(lit_326),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_152 = YPmet(FUNCODEREF(fun_function_kind_152),LITREF(lit_250),T77,ENVNUL,PNUL,sloc(276));
  T79 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T80 = fun_function_kind_152;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYfunction_kind,T78);
  lit_328 = YPPsym((P)"<ast-primitive>");
  T82 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T81 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_328),T82);
  VARSET(YevalSastYLast_primitiveG,T81);
  lit_329 = YPPsym((P)"function-adjectives");
  lit_330 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_330),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_153 = YPmet(FUNCODEREF(fun_function_adjectives_153),LITREF(lit_329),T83,ENVNUL,PNUL,sloc(279));
  T85 = VARREF_OR(YevalSastYfunction_adjectives,YPfalse);
  T86 = fun_function_adjectives_153;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYfunction_adjectives,T84);
  lit_331 = YPPsym((P)"function-adjectives-setter");
  lit_332 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_332),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_154 = YPmet(FUNCODEREF(fun_function_adjectives_setter_154),LITREF(lit_331),T87,ENVNUL,PNUL,sloc(279));
  T89 = VARREF_OR(YevalSastYfunction_adjectives_setter,YPfalse);
  T90 = fun_function_adjectives_setter_154;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_adjectives_setter,T88);
  lit_333 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPsig(LITREF(lit_333),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_155 = YPmet(FUNCODEREF(fun_155),YPfalse,T91,ENVNUL,PNUL,sloc(279));
  T92 = fun_155;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T92);
  lit_334 = YPPlist(1,YPPsym((P)"x"));
  lit_335 = YPsb((P)"PRM");
  T93 = YPsig(LITREF(lit_334),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_156 = YPmet(FUNCODEREF(fun_function_kind_156),LITREF(lit_250),T93,ENVNUL,PNUL,sloc(281));
  T95 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T96 = fun_function_kind_156;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYfunction_kind,T94);
  lit_336 = YPPsym((P)"<ast-generic>");
  T98 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T97 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_336),T98);
  VARSET(YevalSastYLast_genericG,T97);
  lit_337 = YPPlist(1,YPPsym((P)"x"));
  lit_338 = YPsb((P)"GEN");
  T99 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_157 = YPmet(FUNCODEREF(fun_function_kind_157),LITREF(lit_250),T99,ENVNUL,PNUL,sloc(285));
  T101 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T102 = fun_function_kind_157;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSastYfunction_kind,T100);
  lit_339 = YPPsym((P)"<alternative>");
  T104 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T103 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_339),T104);
  VARSET(YevalSastYLalternativeG,T103);
  lit_340 = YPPsym((P)"alternative-condition");
  lit_341 = YPPlist(1,YPPsym((P)"_x"));
  T105 = YPsig(LITREF(lit_341),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_158 = YPmet(FUNCODEREF(fun_alternative_condition_158),LITREF(lit_340),T105,ENVNUL,PNUL,sloc(288));
  T107 = VARREF_OR(YevalSastYalternative_condition,YPfalse);
  T108 = fun_alternative_condition_158;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSastYalternative_condition,T106);
  lit_342 = YPPsym((P)"alternative-condition-setter");
  lit_343 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T109 = YPsig(LITREF(lit_343),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_159 = YPmet(FUNCODEREF(fun_alternative_condition_setter_159),LITREF(lit_342),T109,ENVNUL,PNUL,sloc(288));
  T111 = VARREF_OR(YevalSastYalternative_condition_setter,YPfalse);
  T112 = fun_alternative_condition_setter_159;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSastYalternative_condition_setter,T110);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_344 = YPPsym((P)"alternative-consequent");
  lit_345 = YPPlist(1,YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_345),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_160 = YPmet(FUNCODEREF(fun_alternative_consequent_160),LITREF(lit_344),T113,ENVNUL,PNUL,sloc(289));
  T115 = VARREF_OR(YevalSastYalternative_consequent,YPfalse);
  T116 = fun_alternative_consequent_160;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSastYalternative_consequent,T114);
  lit_346 = YPPsym((P)"alternative-consequent-setter");
  lit_347 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_347),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_161 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_161),LITREF(lit_346),T117,ENVNUL,PNUL,sloc(289));
  T119 = VARREF_OR(YevalSastYalternative_consequent_setter,YPfalse);
  T120 = fun_alternative_consequent_setter_161;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYalternative_consequent_setter,T118);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_348 = YPPsym((P)"alternative-alternant");
  lit_349 = YPPlist(1,YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_349),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_162 = YPmet(FUNCODEREF(fun_alternative_alternant_162),LITREF(lit_348),T121,ENVNUL,PNUL,sloc(290));
  T123 = VARREF_OR(YevalSastYalternative_alternant,YPfalse);
  T124 = fun_alternative_alternant_162;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSastYalternative_alternant,T122);
  lit_350 = YPPsym((P)"alternative-alternant-setter");
  lit_351 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_351),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_163 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_163),LITREF(lit_350),T125,ENVNUL,PNUL,sloc(290));
  T127 = VARREF_OR(YevalSastYalternative_alternant_setter,YPfalse);
  T128 = fun_alternative_alternant_setter_163;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSastYalternative_alternant_setter,T126);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_352 = YPPsym((P)"<loop>");
  T130 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T129 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_352),T130);
  VARSET(YevalSastYLloopG,T129);
  lit_353 = YPPsym((P)"loop-bindings");
  lit_354 = YPPlist(1,YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_354),YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_bindings_164 = YPmet(FUNCODEREF(fun_loop_bindings_164),LITREF(lit_353),T131,ENVNUL,PNUL,sloc(293));
  T133 = VARREF_OR(YevalSastYloop_bindings,YPfalse);
  T134 = fun_loop_bindings_164;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YevalSastYloop_bindings,T132);
  lit_355 = YPPsym((P)"loop-bindings-setter");
  lit_356 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_356),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_bindings_setter_165 = YPmet(FUNCODEREF(fun_loop_bindings_setter_165),LITREF(lit_355),T135,ENVNUL,PNUL,sloc(293));
  T137 = VARREF_OR(YevalSastYloop_bindings_setter,YPfalse);
  T138 = fun_loop_bindings_setter_165;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YevalSastYloop_bindings_setter,T136);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),VARREF(YevalSastYloop_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_357 = YPPsym((P)"loop-body");
  lit_358 = YPPlist(1,YPPsym((P)"_x"));
  T139 = YPsig(LITREF(lit_358),YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_body_166 = YPmet(FUNCODEREF(fun_loop_body_166),LITREF(lit_357),T139,ENVNUL,PNUL,sloc(294));
  T141 = VARREF_OR(YevalSastYloop_body,YPfalse);
  T142 = fun_loop_body_166;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSastYloop_body,T140);
  lit_359 = YPPsym((P)"loop-body-setter");
  lit_360 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T143 = YPsig(LITREF(lit_360),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_body_setter_167 = YPmet(FUNCODEREF(fun_loop_body_setter_167),LITREF(lit_359),T143,ENVNUL,PNUL,sloc(294));
  T145 = VARREF_OR(YevalSastYloop_body_setter,YPfalse);
  T146 = fun_loop_body_setter_167;
  T144 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T145,T146);
  VARSET(YevalSastYloop_body_setter,T144);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_body),VARREF(YevalSastYloop_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_361 = YPPsym((P)"loop-continue");
  lit_362 = YPPlist(1,YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_362),YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T148 = fun_loop_continue_168 = YPmet(FUNCODEREF(fun_loop_continue_168),LITREF(lit_361),T149,ENVNUL,PNUL,sloc(295));
  T152 = VARREF_OR(YevalSastYloop_continue,YPfalse);
  T153 = fun_loop_continue_168;
  T151 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T152,T153);
  T150 = VARSET(YevalSastYloop_continue,T151);
  T147 = T150;
  return T147;
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
  P T128,T129,T130,T131,T132,T133,T134,T135;
DEFCREGS();
  lit_363 = YPPsym((P)"loop-continue-setter");
  lit_364 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_364),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_continue_setter_169 = YPmet(FUNCODEREF(fun_loop_continue_setter_169),LITREF(lit_363),T0,ENVNUL,PNUL,sloc(295));
  T2 = VARREF_OR(YevalSastYloop_continue_setter,YPfalse);
  T3 = fun_loop_continue_setter_169;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYloop_continue_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_continue),VARREF(YevalSastYloop_continue_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_365 = YPPsym((P)"<sequential>");
  T6 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T5 = (P)YPpair(VARREF(YLlstG),T6);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_365),T5);
  VARSET(YevalSastYLsequentialG,T4);
  T7 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T7);
  lit_366 = YPPsym((P)"sequential");
  lit_367 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T8 = YPsig(LITREF(lit_367),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_366),T8,ENVNUL,PNUL,sloc(297));
  T9 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T9);
  lit_368 = YPPlist(1,YPPsym((P)"e"));
  T11 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T10 = YPsig(LITREF(lit_368),YPPlist(1,T11),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_171 = YPmet(FUNCODEREF(fun_empty_171),LITREF(lit_310),T10,ENVNUL,PNUL,sloc(297));
  T13 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T14 = fun_empty_171;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooScolsScolYempty,T12);
  lit_369 = YPPsym((P)"<constant>");
  T16 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T15 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_369),T16);
  VARSET(YevalSastYLconstantG,T15);
  lit_370 = YPPsym((P)"constant-value");
  lit_371 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_371),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_172 = YPmet(FUNCODEREF(fun_constant_value_172),LITREF(lit_370),T17,ENVNUL,PNUL,sloc(300));
  T19 = VARREF_OR(YevalSastYconstant_value,YPfalse);
  T20 = fun_constant_value_172;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalSastYconstant_value,T18);
  lit_372 = YPPsym((P)"constant-value-setter");
  lit_373 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_373),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_173 = YPmet(FUNCODEREF(fun_constant_value_setter_173),LITREF(lit_372),T21,ENVNUL,PNUL,sloc(300));
  T23 = VARREF_OR(YevalSastYconstant_value_setter,YPfalse);
  T24 = fun_constant_value_setter_173;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YevalSastYconstant_value_setter,T22);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_374 = YPPsym((P)"constant-index");
  lit_375 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_375),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_174 = YPmet(FUNCODEREF(fun_constant_index_174),LITREF(lit_374),T25,ENVNUL,PNUL,sloc(301));
  T27 = VARREF_OR(YevalSastYconstant_index,YPfalse);
  T28 = fun_constant_index_174;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSastYconstant_index,T26);
  lit_376 = YPPsym((P)"constant-index-setter");
  lit_377 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_377),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_175 = YPmet(FUNCODEREF(fun_constant_index_setter_175),LITREF(lit_376),T29,ENVNUL,PNUL,sloc(301));
  T31 = VARREF_OR(YevalSastYconstant_index_setter,YPfalse);
  T32 = fun_constant_index_setter_175;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSastYconstant_index_setter,T30);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_378 = YPPsym((P)"<raw-constant>");
  T34 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T33 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_378),T34);
  VARSET(YevalSastYLraw_constantG,T33);
  lit_379 = YPPsym((P)"<immediate-constant>");
  T36 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T35 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_379),T36);
  VARSET(YevalSastYLimmediate_constantG,T35);
  lit_380 = YPPsym((P)"<application>");
  T38 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T37 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_380),T38);
  VARSET(YevalSastYLapplicationG,T37);
  lit_381 = YPPsym((P)"application-arguments");
  lit_382 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_176 = YPmet(FUNCODEREF(fun_application_arguments_176),LITREF(lit_381),T39,ENVNUL,PNUL,sloc(308));
  T41 = VARREF_OR(YevalSastYapplication_arguments,YPfalse);
  T42 = fun_application_arguments_176;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSastYapplication_arguments,T40);
  lit_383 = YPPsym((P)"application-arguments-setter");
  lit_384 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_384),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_177 = YPmet(FUNCODEREF(fun_application_arguments_setter_177),LITREF(lit_383),T43,ENVNUL,PNUL,sloc(308));
  T45 = VARREF_OR(YevalSastYapplication_arguments_setter,YPfalse);
  T46 = fun_application_arguments_setter_177;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YevalSastYapplication_arguments_setter,T44);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_385 = YPPsym((P)"application-tail?");
  lit_386 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_386),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_178 = YPmet(FUNCODEREF(fun_application_tailQ_178),LITREF(lit_385),T47,ENVNUL,PNUL,sloc(309));
  T49 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T50 = fun_application_tailQ_178;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSastYapplication_tailQ,T48);
  lit_387 = YPPsym((P)"application-tail?-setter");
  lit_388 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPsig(LITREF(lit_388),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_179 = YPmet(FUNCODEREF(fun_application_tailQ_setter_179),LITREF(lit_387),T51,ENVNUL,PNUL,sloc(309));
  T53 = VARREF_OR(YevalSastYapplication_tailQ_setter,YPfalse);
  T54 = fun_application_tailQ_setter_179;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSastYapplication_tailQ_setter,T52);
  lit_389 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPsig(LITREF(lit_389),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T55,ENVNUL,PNUL,sloc(309));
  T56 = fun_180;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T56);
  lit_390 = YPPsym((P)"<loop-application>");
  T58 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_390),T58);
  VARSET(YevalSastYLloop_applicationG,T57);
  lit_391 = YPPsym((P)"application-loop");
  lit_392 = YPPlist(1,YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_392),YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_loop_181 = YPmet(FUNCODEREF(fun_application_loop_181),LITREF(lit_391),T59,ENVNUL,PNUL,sloc(312));
  T61 = VARREF_OR(YevalSastYapplication_loop,YPfalse);
  T62 = fun_application_loop_181;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSastYapplication_loop,T60);
  lit_393 = YPPsym((P)"application-loop-setter");
  lit_394 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_394),YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_loop_setter_182 = YPmet(FUNCODEREF(fun_application_loop_setter_182),LITREF(lit_393),T63,ENVNUL,PNUL,sloc(312));
  T65 = VARREF_OR(YevalSastYapplication_loop_setter,YPfalse);
  T66 = fun_application_loop_setter_182;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYapplication_loop_setter,T64);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),VARREF(YevalSastYapplication_loop_setter),VARREF(YevalSastYLloopG),VARREF(YPprop_unbound_error));
  lit_395 = YPPlist(1,YPPsym((P)"x"));
  T67 = YPsig(LITREF(lit_395),YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_tailQ_183 = YPmet(FUNCODEREF(fun_application_tailQ_183),LITREF(lit_385),T67,ENVNUL,PNUL,sloc(314));
  T69 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T70 = fun_application_tailQ_183;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYapplication_tailQ,T68);
  lit_396 = YPPsym((P)"<regular-application>");
  T72 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T71 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_396),T72);
  VARSET(YevalSastYLregular_applicationG,T71);
  lit_397 = YPPsym((P)"application-function");
  lit_398 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_398),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_184 = YPmet(FUNCODEREF(fun_application_function_184),LITREF(lit_397),T73,ENVNUL,PNUL,sloc(317));
  T75 = VARREF_OR(YevalSastYapplication_function,YPfalse);
  T76 = fun_application_function_184;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYapplication_function,T74);
  lit_399 = YPPsym((P)"application-function-setter");
  lit_400 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPsig(LITREF(lit_400),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_185 = YPmet(FUNCODEREF(fun_application_function_setter_185),LITREF(lit_399),T77,ENVNUL,PNUL,sloc(317));
  T79 = VARREF_OR(YevalSastYapplication_function_setter,YPfalse);
  T80 = fun_application_function_setter_185;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYapplication_function_setter,T78);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_401 = YPPsym((P)"application-known?");
  lit_402 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_402),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_186 = YPmet(FUNCODEREF(fun_application_knownQ_186),LITREF(lit_401),T81,ENVNUL,PNUL,sloc(318));
  T83 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T84 = fun_application_knownQ_186;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYapplication_knownQ,T82);
  lit_403 = YPPsym((P)"application-known?-setter");
  lit_404 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_404),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_187 = YPmet(FUNCODEREF(fun_application_knownQ_setter_187),LITREF(lit_403),T85,ENVNUL,PNUL,sloc(318));
  T87 = VARREF_OR(YevalSastYapplication_knownQ_setter,YPfalse);
  T88 = fun_application_knownQ_setter_187;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalSastYapplication_knownQ_setter,T86);
  lit_405 = YPPlist(1,YPPsym((P)"_x"));
  T89 = YPsig(LITREF(lit_405),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T89,ENVNUL,PNUL,sloc(318));
  T90 = fun_188;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T90);
  lit_406 = YPPsym((P)"<method-application>");
  T92 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T91 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_406),T92);
  VARSET(YevalSastYLmethod_applicationG,T91);
  lit_407 = YPPsym((P)"application-next-methods");
  lit_408 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPsig(LITREF(lit_408),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_189 = YPmet(FUNCODEREF(fun_application_next_methods_189),LITREF(lit_407),T93,ENVNUL,PNUL,sloc(321));
  T95 = VARREF_OR(YevalSastYapplication_next_methods,YPfalse);
  T96 = fun_application_next_methods_189;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYapplication_next_methods,T94);
  lit_409 = YPPsym((P)"application-next-methods-setter");
  lit_410 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T97 = YPsig(LITREF(lit_410),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_190 = YPmet(FUNCODEREF(fun_application_next_methods_setter_190),LITREF(lit_409),T97,ENVNUL,PNUL,sloc(321));
  T99 = VARREF_OR(YevalSastYapplication_next_methods_setter,YPfalse);
  T100 = fun_application_next_methods_setter_190;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYapplication_next_methods_setter,T98);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_411 = YPPsym((P)"<predefined-application>");
  T102 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T101 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_411),T102);
  VARSET(YevalSastYLpredefined_applicationG,T101);
  lit_412 = YPPsym((P)"application-binding");
  lit_413 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPsig(LITREF(lit_413),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_191 = YPmet(FUNCODEREF(fun_application_binding_191),LITREF(lit_412),T103,ENVNUL,PNUL,sloc(324));
  T105 = VARREF_OR(YevalSastYapplication_binding,YPfalse);
  T106 = fun_application_binding_191;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYapplication_binding,T104);
  lit_414 = YPPsym((P)"application-binding-setter");
  lit_415 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_415),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_192 = YPmet(FUNCODEREF(fun_application_binding_setter_192),LITREF(lit_414),T107,ENVNUL,PNUL,sloc(324));
  T109 = VARREF_OR(YevalSastYapplication_binding_setter,YPfalse);
  T110 = fun_application_binding_setter_192;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYapplication_binding_setter,T108);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_416 = YPPsym((P)"<fix-let>");
  T112 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T111 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_416),T112);
  VARSET(YevalSastYLfix_letG,T111);
  lit_417 = YPPsym((P)"fix-let-bindings");
  lit_418 = YPPlist(1,YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_418),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_193 = YPmet(FUNCODEREF(fun_fix_let_bindings_193),LITREF(lit_417),T113,ENVNUL,PNUL,sloc(327));
  T115 = VARREF_OR(YevalSastYfix_let_bindings,YPfalse);
  T116 = fun_fix_let_bindings_193;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSastYfix_let_bindings,T114);
  lit_419 = YPPsym((P)"fix-let-bindings-setter");
  lit_420 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_420),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_194 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_194),LITREF(lit_419),T117,ENVNUL,PNUL,sloc(327));
  T119 = VARREF_OR(YevalSastYfix_let_bindings_setter,YPfalse);
  T120 = fun_fix_let_bindings_setter_194;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYfix_let_bindings_setter,T118);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_421 = YPPsym((P)"fix-let-types");
  lit_422 = YPPlist(1,YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_422),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_195 = YPmet(FUNCODEREF(fun_fix_let_types_195),LITREF(lit_421),T121,ENVNUL,PNUL,sloc(328));
  T123 = VARREF_OR(YevalSastYfix_let_types,YPfalse);
  T124 = fun_fix_let_types_195;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSastYfix_let_types,T122);
  lit_423 = YPPsym((P)"fix-let-types-setter");
  lit_424 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_424),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_196 = YPmet(FUNCODEREF(fun_fix_let_types_setter_196),LITREF(lit_423),T125,ENVNUL,PNUL,sloc(328));
  T127 = VARREF_OR(YevalSastYfix_let_types_setter,YPfalse);
  T128 = fun_fix_let_types_setter_196;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSastYfix_let_types_setter,T126);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_425 = YPPsym((P)"fix-let-arguments");
  lit_426 = YPPlist(1,YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_426),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T130 = fun_fix_let_arguments_197 = YPmet(FUNCODEREF(fun_fix_let_arguments_197),LITREF(lit_425),T131,ENVNUL,PNUL,sloc(329));
  T134 = VARREF_OR(YevalSastYfix_let_arguments,YPfalse);
  T135 = fun_fix_let_arguments_197;
  T133 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T134,T135);
  T132 = VARSET(YevalSastYfix_let_arguments,T133);
  T129 = T132;
  return T129;
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136;
DEFCREGS();
  lit_427 = YPPsym((P)"fix-let-arguments-setter");
  lit_428 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_428),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_198 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_198),LITREF(lit_427),T0,ENVNUL,PNUL,sloc(329));
  T2 = VARREF_OR(YevalSastYfix_let_arguments_setter,YPfalse);
  T3 = fun_fix_let_arguments_setter_198;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYfix_let_arguments_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_429 = YPPsym((P)"fix-let-body");
  lit_430 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_430),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_199 = YPmet(FUNCODEREF(fun_fix_let_body_199),LITREF(lit_429),T4,ENVNUL,PNUL,sloc(330));
  T6 = VARREF_OR(YevalSastYfix_let_body,YPfalse);
  T7 = fun_fix_let_body_199;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYfix_let_body,T5);
  lit_431 = YPPsym((P)"fix-let-body-setter");
  lit_432 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_432),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_200 = YPmet(FUNCODEREF(fun_fix_let_body_setter_200),LITREF(lit_431),T8,ENVNUL,PNUL,sloc(330));
  T10 = VARREF_OR(YevalSastYfix_let_body_setter,YPfalse);
  T11 = fun_fix_let_body_setter_200;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYfix_let_body_setter,T9);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_433 = YPPsym((P)"<low-let>");
  T13 = (P)YPpair(VARREF(YevalSastYLfix_letG),Ynil);
  T12 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_433),T13);
  VARSET(YevalSastYLlow_letG,T12);
  lit_434 = YPPsym((P)"<fab-list>");
  T16 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T15 = (P)YPpair(VARREF(YLlstG),T16);
  T14 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_434),T15);
  VARSET(YevalSastYLfab_listG,T14);
  T17 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T17);
  lit_435 = YPPsym((P)"fab-list");
  lit_436 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T18 = YPsig(LITREF(lit_436),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_435),T18,ENVNUL,PNUL,sloc(333));
  T19 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T19);
  lit_437 = YPPlist(1,YPPsym((P)"e"));
  T21 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T20 = YPsig(LITREF(lit_437),YPPlist(1,T21),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_202 = YPmet(FUNCODEREF(fun_empty_202),LITREF(lit_310),T20,ENVNUL,PNUL,sloc(333));
  T23 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T24 = fun_empty_202;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooScolsScolYempty,T22);
  lit_438 = YPPsym((P)"<arguments>");
  T27 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T26 = (P)YPpair(VARREF(YLlstG),T27);
  T25 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_438),T26);
  VARSET(YevalSastYLargumentsG,T25);
  T28 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T28);
  lit_439 = YPPsym((P)"arguments");
  lit_440 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T29 = YPsig(LITREF(lit_440),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_439),T29,ENVNUL,PNUL,sloc(335));
  T30 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T30);
  lit_441 = YPPlist(1,YPPsym((P)"e"));
  T32 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T31 = YPsig(LITREF(lit_441),YPPlist(1,T32),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_204 = YPmet(FUNCODEREF(fun_empty_204),LITREF(lit_310),T31,ENVNUL,PNUL,sloc(335));
  T34 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T35 = fun_empty_204;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsScolYempty,T33);
  lit_442 = YPPsym((P)"<locals>");
  T37 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T36 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_442),T37);
  VARSET(YevalSastYLlocalsG,T36);
  lit_443 = YPPsym((P)"locals-bindings");
  lit_444 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_444),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_205 = YPmet(FUNCODEREF(fun_locals_bindings_205),LITREF(lit_443),T38,ENVNUL,PNUL,sloc(338));
  T40 = VARREF_OR(YevalSastYlocals_bindings,YPfalse);
  T41 = fun_locals_bindings_205;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSastYlocals_bindings,T39);
  lit_445 = YPPsym((P)"locals-bindings-setter");
  lit_446 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_446),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_206 = YPmet(FUNCODEREF(fun_locals_bindings_setter_206),LITREF(lit_445),T42,ENVNUL,PNUL,sloc(338));
  T44 = VARREF_OR(YevalSastYlocals_bindings_setter,YPfalse);
  T45 = fun_locals_bindings_setter_206;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSastYlocals_bindings_setter,T43);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_447 = YPPsym((P)"locals-functions");
  lit_448 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_448),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_207 = YPmet(FUNCODEREF(fun_locals_functions_207),LITREF(lit_447),T46,ENVNUL,PNUL,sloc(339));
  T48 = VARREF_OR(YevalSastYlocals_functions,YPfalse);
  T49 = fun_locals_functions_207;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSastYlocals_functions,T47);
  lit_449 = YPPsym((P)"locals-functions-setter");
  lit_450 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_450),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_208 = YPmet(FUNCODEREF(fun_locals_functions_setter_208),LITREF(lit_449),T50,ENVNUL,PNUL,sloc(339));
  T52 = VARREF_OR(YevalSastYlocals_functions_setter,YPfalse);
  T53 = fun_locals_functions_setter_208;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYlocals_functions_setter,T51);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_451 = YPPsym((P)"locals-body");
  lit_452 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_452),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_209 = YPmet(FUNCODEREF(fun_locals_body_209),LITREF(lit_451),T54,ENVNUL,PNUL,sloc(340));
  T56 = VARREF_OR(YevalSastYlocals_body,YPfalse);
  T57 = fun_locals_body_209;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYlocals_body,T55);
  lit_453 = YPPsym((P)"locals-body-setter");
  lit_454 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_454),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_210 = YPmet(FUNCODEREF(fun_locals_body_setter_210),LITREF(lit_453),T58,ENVNUL,PNUL,sloc(340));
  T60 = VARREF_OR(YevalSastYlocals_body_setter,YPfalse);
  T61 = fun_locals_body_setter_210;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSastYlocals_body_setter,T59);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_455 = YPPsym((P)"<bind-exit>");
  T63 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T62 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_455),T63);
  VARSET(YevalSastYLbind_exitG,T62);
  lit_456 = YPPsym((P)"bind-exit-main-fun");
  lit_457 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_457),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_211 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_211),LITREF(lit_456),T64,ENVNUL,PNUL,sloc(343));
  T66 = VARREF_OR(YevalSastYbind_exit_main_fun,YPfalse);
  T67 = fun_bind_exit_main_fun_211;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYbind_exit_main_fun,T65);
  lit_458 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_459 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_459),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_212 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_212),LITREF(lit_458),T68,ENVNUL,PNUL,sloc(343));
  T70 = VARREF_OR(YevalSastYbind_exit_main_fun_setter,YPfalse);
  T71 = fun_bind_exit_main_fun_setter_212;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYbind_exit_main_fun_setter,T69);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_460 = YPPsym((P)"bind-exit-light?");
  lit_461 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_461),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_213 = YPmet(FUNCODEREF(fun_bind_exit_lightQ_213),LITREF(lit_460),T72,ENVNUL,PNUL,sloc(344));
  T74 = VARREF_OR(YevalSastYbind_exit_lightQ,YPfalse);
  T75 = fun_bind_exit_lightQ_213;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYbind_exit_lightQ,T73);
  lit_462 = YPPsym((P)"bind-exit-light?-setter");
  lit_463 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_463),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_setter_214 = YPmet(FUNCODEREF(fun_bind_exit_lightQ_setter_214),LITREF(lit_462),T76,ENVNUL,PNUL,sloc(344));
  T78 = VARREF_OR(YevalSastYbind_exit_lightQ_setter,YPfalse);
  T79 = fun_bind_exit_lightQ_setter_214;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYbind_exit_lightQ_setter,T77);
  lit_464 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_464),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T80,ENVNUL,PNUL,sloc(344));
  T81 = fun_215;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_lightQ),VARREF(YevalSastYbind_exit_lightQ_setter),VARREF(YLlogG),T81);
  lit_465 = YPPsym((P)"<unwind-protect>");
  T83 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T82 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_465),T83);
  VARSET(YevalSastYLunwind_protectG,T82);
  lit_466 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_467 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_467),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_216 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_216),LITREF(lit_466),T84,ENVNUL,PNUL,sloc(347));
  T86 = VARREF_OR(YevalSastYunwind_protect_protected_thunk,YPfalse);
  T87 = fun_unwind_protect_protected_thunk_216;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSastYunwind_protect_protected_thunk,T85);
  lit_468 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_469 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_469),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_217 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_217),LITREF(lit_468),T88,ENVNUL,PNUL,sloc(347));
  T90 = VARREF_OR(YevalSastYunwind_protect_protected_thunk_setter,YPfalse);
  T91 = fun_unwind_protect_protected_thunk_setter_217;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T89);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_470 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_471 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_471),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_218 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_218),LITREF(lit_470),T92,ENVNUL,PNUL,sloc(348));
  T94 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk,YPfalse);
  T95 = fun_unwind_protect_cleanup_thunk_218;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T93);
  lit_472 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_473 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_473),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_219 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_219),LITREF(lit_472),T96,ENVNUL,PNUL,sloc(348));
  T98 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk_setter,YPfalse);
  T99 = fun_unwind_protect_cleanup_thunk_setter_219;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T97);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_474 = YPPsym((P)"<monitor>");
  T101 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T100 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_474),T101);
  VARSET(YevalSastYLmonitorG,T100);
  lit_475 = YPPsym((P)"monitor-type");
  lit_476 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_476),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_220 = YPmet(FUNCODEREF(fun_monitor_type_220),LITREF(lit_475),T102,ENVNUL,PNUL,sloc(351));
  T104 = VARREF_OR(YevalSastYmonitor_type,YPfalse);
  T105 = fun_monitor_type_220;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSastYmonitor_type,T103);
  lit_477 = YPPsym((P)"monitor-type-setter");
  lit_478 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_478),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_221 = YPmet(FUNCODEREF(fun_monitor_type_setter_221),LITREF(lit_477),T106,ENVNUL,PNUL,sloc(351));
  T108 = VARREF_OR(YevalSastYmonitor_type_setter,YPfalse);
  T109 = fun_monitor_type_setter_221;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSastYmonitor_type_setter,T107);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_479 = YPPsym((P)"monitor-info");
  lit_480 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_480),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_222 = YPmet(FUNCODEREF(fun_monitor_info_222),LITREF(lit_479),T110,ENVNUL,PNUL,sloc(352));
  T112 = VARREF_OR(YevalSastYmonitor_info,YPfalse);
  T113 = fun_monitor_info_222;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSastYmonitor_info,T111);
  lit_481 = YPPsym((P)"monitor-info-setter");
  lit_482 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_482),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_223 = YPmet(FUNCODEREF(fun_monitor_info_setter_223),LITREF(lit_481),T114,ENVNUL,PNUL,sloc(352));
  T116 = VARREF_OR(YevalSastYmonitor_info_setter,YPfalse);
  T117 = fun_monitor_info_setter_223;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSastYmonitor_info_setter,T115);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_483 = YPPsym((P)"monitor-test");
  lit_484 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_484),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_224 = YPmet(FUNCODEREF(fun_monitor_test_224),LITREF(lit_483),T118,ENVNUL,PNUL,sloc(353));
  T120 = VARREF_OR(YevalSastYmonitor_test,YPfalse);
  T121 = fun_monitor_test_224;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSastYmonitor_test,T119);
  lit_485 = YPPsym((P)"monitor-test-setter");
  lit_486 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T122 = YPsig(LITREF(lit_486),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_225 = YPmet(FUNCODEREF(fun_monitor_test_setter_225),LITREF(lit_485),T122,ENVNUL,PNUL,sloc(353));
  T124 = VARREF_OR(YevalSastYmonitor_test_setter,YPfalse);
  T125 = fun_monitor_test_setter_225;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSastYmonitor_test_setter,T123);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_487 = YPPsym((P)"monitor-handler");
  lit_488 = YPPlist(1,YPPsym((P)"_x"));
  T126 = YPsig(LITREF(lit_488),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_226 = YPmet(FUNCODEREF(fun_monitor_handler_226),LITREF(lit_487),T126,ENVNUL,PNUL,sloc(354));
  T128 = VARREF_OR(YevalSastYmonitor_handler,YPfalse);
  T129 = fun_monitor_handler_226;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSastYmonitor_handler,T127);
  lit_489 = YPPsym((P)"monitor-handler-setter");
  lit_490 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T132 = YPsig(LITREF(lit_490),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T131 = fun_monitor_handler_setter_227 = YPmet(FUNCODEREF(fun_monitor_handler_setter_227),LITREF(lit_489),T132,ENVNUL,PNUL,sloc(354));
  T135 = VARREF_OR(YevalSastYmonitor_handler_setter,YPfalse);
  T136 = fun_monitor_handler_setter_227;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  T133 = VARSET(YevalSastYmonitor_handler_setter,T134);
  T130 = T133;
  return T130;
}

P YevalSastY___main_7___() {
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
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_491 = YPPsym((P)"monitor-main-thunk");
  lit_492 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_492),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_228 = YPmet(FUNCODEREF(fun_monitor_main_thunk_228),LITREF(lit_491),T0,ENVNUL,PNUL,sloc(355));
  T2 = VARREF_OR(YevalSastYmonitor_main_thunk,YPfalse);
  T3 = fun_monitor_main_thunk_228;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYmonitor_main_thunk,T1);
  lit_493 = YPPsym((P)"monitor-main-thunk-setter");
  lit_494 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_494),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_229 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_229),LITREF(lit_493),T4,ENVNUL,PNUL,sloc(355));
  T6 = VARREF_OR(YevalSastYmonitor_main_thunk_setter,YPfalse);
  T7 = fun_monitor_main_thunk_setter_229;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYmonitor_main_thunk_setter,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_495 = YPPsym((P)"ast-walk!");
  lit_496 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T8 = YPsig(LITREF(lit_496),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_230 = YPmet(FUNCODEREF(fun_ast_walkX_230),LITREF(lit_495),T8,ENVNUL,PNUL,sloc(359));
  T10 = VARREF_OR(YevalSastYast_walkX,YPfalse);
  T11 = fun_ast_walkX_230;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYast_walkX,T9);
  lit_497 = YPPsym((P)"ast-walk");
  lit_498 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T12 = YPsig(LITREF(lit_498),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_231 = YPmet(FUNCODEREF(fun_ast_walk_231),LITREF(lit_497),T12,ENVNUL,PNUL,sloc(374));
  T14 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T15 = fun_ast_walk_231;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYast_walk,T13);
  lit_499 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T16 = YPsig(LITREF(lit_499),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramsG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_232 = YPmet(FUNCODEREF(fun_ast_walk_232),LITREF(lit_497),T16,ENVNUL,PNUL,sloc(385));
  T18 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T19 = fun_ast_walk_232;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYast_walk,T17);
  lit_500 = YPPsym((P)"ast-copy");
  lit_501 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_233 = YPmet(FUNCODEREF(fun_ast_copy_233),LITREF(lit_500),T20,ENVNUL,PNUL,sloc(404));
  T22 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T23 = fun_ast_copy_233;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYast_copy,T21);
  lit_502 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_502),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_234 = YPmet(FUNCODEREF(fun_ast_copy_234),LITREF(lit_500),T24,ENVNUL,PNUL,sloc(409));
  T26 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T27 = fun_ast_copy_234;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYast_copy,T25);
  lit_503 = YPPsym((P)"<static-environment>");
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_503),T29);
  VARSET(YevalSastYLstatic_environmentG,T28);
  lit_504 = YPPsym((P)"environment-next");
  lit_505 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_505),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_235 = YPmet(FUNCODEREF(fun_environment_next_235),LITREF(lit_504),T30,ENVNUL,PNUL,sloc(417));
  T32 = VARREF_OR(YevalSastYenvironment_next,YPfalse);
  T33 = fun_environment_next_235;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYenvironment_next,T31);
  lit_506 = YPPsym((P)"environment-next-setter");
  lit_507 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_507),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_236 = YPmet(FUNCODEREF(fun_environment_next_setter_236),LITREF(lit_506),T34,ENVNUL,PNUL,sloc(417));
  T36 = VARREF_OR(YevalSastYenvironment_next_setter,YPfalse);
  T37 = fun_environment_next_setter_236;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYenvironment_next_setter,T35);
  lit_508 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_508),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T38,ENVNUL,PNUL,sloc(417));
  T39 = fun_237;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T39);
  lit_509 = YPPsym((P)"environment-bindings");
  lit_510 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_510),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_238 = YPmet(FUNCODEREF(fun_environment_bindings_238),LITREF(lit_509),T40,ENVNUL,PNUL,sloc(418));
  T42 = VARREF_OR(YevalSastYenvironment_bindings,YPfalse);
  T43 = fun_environment_bindings_238;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYenvironment_bindings,T41);
  lit_511 = YPPsym((P)"environment-bindings-setter");
  lit_512 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_512),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_239 = YPmet(FUNCODEREF(fun_environment_bindings_setter_239),LITREF(lit_511),T44,ENVNUL,PNUL,sloc(418));
  T46 = VARREF_OR(YevalSastYenvironment_bindings_setter,YPfalse);
  T47 = fun_environment_bindings_setter_239;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYenvironment_bindings_setter,T45);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_513 = YPPsym((P)"<static-global-environment>");
  T49 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T48 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_513),T49);
  VARSET(YevalSastYLstatic_global_environmentG,T48);
  lit_514 = YPPsym((P)"environment-module");
  lit_515 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_515),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_240 = YPmet(FUNCODEREF(fun_environment_module_240),LITREF(lit_514),T50,ENVNUL,PNUL,sloc(422));
  T52 = VARREF_OR(YevalSastYenvironment_module,YPfalse);
  T53 = fun_environment_module_240;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYenvironment_module,T51);
  lit_516 = YPPsym((P)"environment-module-setter");
  lit_517 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_517),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_241 = YPmet(FUNCODEREF(fun_environment_module_setter_241),LITREF(lit_516),T54,ENVNUL,PNUL,sloc(422));
  T56 = VARREF_OR(YevalSastYenvironment_module_setter,YPfalse);
  T57 = fun_environment_module_setter_241;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYenvironment_module_setter,T55);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_518 = YPPsym((P)"environment-module-loader");
  lit_519 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_519),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_242 = YPmet(FUNCODEREF(fun_environment_module_loader_242),LITREF(lit_518),T58,ENVNUL,PNUL,sloc(425));
  T60 = VARREF_OR(YevalSastYenvironment_module_loader,YPfalse);
  T61 = fun_environment_module_loader_242;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSastYenvironment_module_loader,T59);
  lit_520 = YPPsym((P)"environment-module-loader-setter");
  lit_521 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_521),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_243 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_243),LITREF(lit_520),T62,ENVNUL,PNUL,sloc(425));
  T64 = VARREF_OR(YevalSastYenvironment_module_loader_setter,YPfalse);
  T65 = fun_environment_module_loader_setter_243;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYenvironment_module_loader_setter,T63);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_522 = YPPsym((P)"environment-uses-modules");
  lit_523 = YPPlist(1,YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_523),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_244 = YPmet(FUNCODEREF(fun_environment_uses_modules_244),LITREF(lit_522),T66,ENVNUL,PNUL,sloc(427));
  T68 = VARREF_OR(YevalSastYenvironment_uses_modules,YPfalse);
  T69 = fun_environment_uses_modules_244;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYenvironment_uses_modules,T67);
  lit_524 = YPPsym((P)"environment-uses-modules-setter");
  lit_525 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_525),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_245 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_245),LITREF(lit_524),T70,ENVNUL,PNUL,sloc(427));
  T72 = VARREF_OR(YevalSastYenvironment_uses_modules_setter,YPfalse);
  T73 = fun_environment_uses_modules_setter_245;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYenvironment_uses_modules_setter,T71);
  lit_526 = YPPlist(1,YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_526),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T74,ENVNUL,PNUL,sloc(427));
  T75 = fun_246;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T75);
  lit_527 = YPPsym((P)"environment-allows-foreign-names?");
  lit_528 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_528),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_247 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_247),LITREF(lit_527),T76,ENVNUL,PNUL,sloc(431));
  T78 = VARREF_OR(YevalSastYenvironment_allows_foreign_namesQ,YPfalse);
  T79 = fun_environment_allows_foreign_namesQ_247;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T77);
  lit_529 = YPPsym((P)"environment-allows-foreign-names?-setter");
  lit_530 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_530),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_248 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_248),LITREF(lit_529),T80,ENVNUL,PNUL,sloc(431));
  T82 = VARREF_OR(YevalSastYenvironment_allows_foreign_namesQ_setter,YPfalse);
  T83 = fun_environment_allows_foreign_namesQ_setter_248;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T81);
  lit_531 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_531),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T84,ENVNUL,PNUL,sloc(431));
  T85 = fun_249;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T85);
  lit_532 = YPPsym((P)"<static-empty-environment>");
  T87 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T86 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_532),T87);
  VARSET(YevalSastYLstatic_empty_environmentG,T86);
  T88 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T88);
  lit_533 = YPPsym((P)"<static-local-environment>");
  T90 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T89 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_533),T90);
  VARSET(YevalSastYLstatic_local_environmentG,T89);
  lit_534 = YPPsym((P)"env-object-name");
  lit_535 = YPPlist(1,YPPsym((P)"x"));
  lit_536 = YPPlist(1,YPPsym((P)"return"));
  lit_537 = YPPlist(1,YPPsym((P)"binding"));
  T93 = YPsig(LITREF(lit_537),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T93,ENVNUL,PNUL,sloc(448));
  T92 = YPsig(LITREF(lit_536),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T92,ENVNUL,PNUL,sloc(446));
  T91 = YPsig(LITREF(lit_535),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_252 = YPmet(FUNCODEREF(fun_env_object_name_252),LITREF(lit_534),T91,ENVNUL,PNUL,sloc(445));
  T95 = VARREF_OR(YevalSastYenv_object_name,YPfalse);
  T96 = fun_env_object_name_252;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYenv_object_name,T94);
  lit_538 = YPPsym((P)"objectify");
  lit_539 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T97 = YPsig(LITREF(lit_539),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_253 = YPmet(FUNCODEREF(fun_objectify_253),LITREF(lit_538),T97,ENVNUL,PNUL,sloc(458));
  T99 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T100 = fun_objectify_253;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYobjectify,T98);
  lit_540 = YPPsym((P)"objectify-list");
  lit_541 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T101 = YPsig(LITREF(lit_541),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_254 = YPmet(FUNCODEREF(fun_objectify_list_254),LITREF(lit_540),T101,ENVNUL,PNUL,sloc(463));
  T103 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T104 = fun_objectify_list_254;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYobjectify_list,T102);
  lit_542 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T105 = YPsig(LITREF(lit_542),YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_255 = YPmet(FUNCODEREF(fun_objectify_list_255),LITREF(lit_540),T105,ENVNUL,PNUL,sloc(467));
  T107 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T108 = fun_objectify_list_255;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSastYobjectify_list,T106);
  lit_543 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T109 = YPsig(LITREF(lit_543),YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_256 = YPmet(FUNCODEREF(fun_objectify_list_256),LITREF(lit_540),T109,ENVNUL,PNUL,sloc(471));
  T111 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T112 = fun_objectify_list_256;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSastYobjectify_list,T110);
  lit_544 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T113 = YPsig(LITREF(lit_544),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_257 = YPmet(FUNCODEREF(fun_objectify_257),LITREF(lit_538),T113,ENVNUL,PNUL,sloc(475));
  T115 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T116 = fun_objectify_257;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSastYobjectify,T114);
  lit_545 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T117 = YPsig(LITREF(lit_545),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_258 = YPmet(FUNCODEREF(fun_objectify_258),LITREF(lit_538),T117,ENVNUL,PNUL,sloc(478));
  T119 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T120 = fun_objectify_258;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYobjectify,T118);
  lit_546 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T121 = YPsig(LITREF(lit_546),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_259 = YPmet(FUNCODEREF(fun_objectify_259),LITREF(lit_538),T121,ENVNUL,PNUL,sloc(481));
  T123 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T124 = fun_objectify_259;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSastYobjectify,T122);
  lit_547 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T126 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T125 = YPsig(LITREF(lit_547),YPPlist(3,T126,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_260 = YPmet(FUNCODEREF(fun_objectify_260),LITREF(lit_538),T125,ENVNUL,PNUL,sloc(484));
  T128 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T129 = fun_objectify_260;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSastYobjectify,T127);
  lit_548 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T130 = YPsig(LITREF(lit_548),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_261 = YPmet(FUNCODEREF(fun_objectify_261),LITREF(lit_538),T130,ENVNUL,PNUL,sloc(487));
  T132 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T133 = fun_objectify_261;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSastYobjectify,T131);
  lit_549 = YPPsym((P)"objectify-quotation");
  lit_550 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T134 = YPsig(LITREF(lit_550),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_262 = YPmet(FUNCODEREF(fun_objectify_quotation_262),LITREF(lit_549),T134,ENVNUL,PNUL,sloc(490));
  T136 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T137 = fun_objectify_quotation_262;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSastYobjectify_quotation,T135);
  lit_551 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T138 = YPsig(LITREF(lit_551),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_263 = YPmet(FUNCODEREF(fun_objectify_quotation_263),LITREF(lit_549),T138,ENVNUL,PNUL,sloc(493));
  T140 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T141 = fun_objectify_quotation_263;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSastYobjectify_quotation,T139);
  lit_552 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T142 = YPsig(LITREF(lit_552),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_264 = YPmet(FUNCODEREF(fun_objectify_quotation_264),LITREF(lit_549),T142,ENVNUL,PNUL,sloc(496));
  T144 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T145 = fun_objectify_quotation_264;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(YevalSastYobjectify_quotation,T143);
  lit_553 = YPPsym((P)"objectify-raw");
  lit_554 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T146 = YPsig(LITREF(lit_554),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_265 = YPmet(FUNCODEREF(fun_objectify_raw_265),LITREF(lit_553),T146,ENVNUL,PNUL,sloc(499));
  T148 = VARREF_OR(YevalSastYobjectify_raw,YPfalse);
  T149 = fun_objectify_raw_265;
  T147 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T148,T149);
  VARSET(YevalSastYobjectify_raw,T147);
  lit_555 = YPPsym((P)"objectify-bound?");
  lit_556 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"default"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T150 = YPsig(LITREF(lit_556),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_266 = YPmet(FUNCODEREF(fun_objectify_boundQ_266),LITREF(lit_555),T150,ENVNUL,PNUL,sloc(502));
  T152 = VARREF_OR(YevalSastYobjectify_boundQ,YPfalse);
  T153 = fun_objectify_boundQ_266;
  T151 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T152,T153);
  VARSET(YevalSastYobjectify_boundQ,T151);
  lit_557 = YPPsym((P)"objectify-compile-time");
  lit_558 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T154 = YPsig(LITREF(lit_558),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_267 = YPmet(FUNCODEREF(fun_objectify_compile_time_267),LITREF(lit_557),T154,ENVNUL,PNUL,sloc(510));
  T156 = VARREF_OR(YevalSastYobjectify_compile_time,YPfalse);
  T157 = fun_objectify_compile_time_267;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSastYobjectify_compile_time,T155);
  lit_559 = YPPsym((P)"objectify-alternative");
  lit_560 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T158 = YPsig(LITREF(lit_560),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_268 = YPmet(FUNCODEREF(fun_objectify_alternative_268),LITREF(lit_559),T158,ENVNUL,PNUL,sloc(526));
  T160 = VARREF_OR(YevalSastYobjectify_alternative,YPfalse);
  T161 = fun_objectify_alternative_268;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSastYobjectify_alternative,T159);
  lit_561 = YPPsym((P)"sequentialize");
  lit_562 = YPPlist(1,YPPsym((P)"e*"));
  lit_563 = YPPsym((P)"loop");
  lit_564 = YPPlist(1,YPPsym((P)"e*"));
  T166 = YPsig(LITREF(lit_564),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T165 = fun_loop_269 = YPmet(FUNCODEREF(fun_loop_269),LITREF(lit_563),T166,ENVNUL,PNUL,sloc(537));
  T164 = YPsig(LITREF(lit_562),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  T163 = fun_sequentialize_270 = YPmet(FUNCODEREF(fun_sequentialize_270),LITREF(lit_561),T164,ENVNUL,PNUL,sloc(532));
  T169 = VARREF_OR(YevalSastYsequentialize,YPfalse);
  T170 = fun_sequentialize_270;
  T168 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T169,T170);
  T167 = VARSET(YevalSastYsequentialize,T168);
  T162 = T167;
  return T162;
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183;
DEFCREGS();
  lit_565 = YPPsym((P)"transform-defs");
  lit_566 = YPPlist(1,YPPsym((P)"e*"));
  T0 = YPsig(LITREF(lit_566),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_271 = YPmet(FUNCODEREF(fun_transform_defs_271),LITREF(lit_565),T0,ENVNUL,PNUL,sloc(542));
  T2 = VARREF_OR(YevalSastYtransform_defs,YPfalse);
  T3 = fun_transform_defs_271;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYtransform_defs,T1);
  lit_567 = YPPsym((P)"objectify-sequential");
  lit_568 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T4 = YPsig(LITREF(lit_568),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_272 = YPmet(FUNCODEREF(fun_objectify_sequential_272),LITREF(lit_567),T4,ENVNUL,PNUL,sloc(551));
  T6 = VARREF_OR(YevalSastYobjectify_sequential,YPfalse);
  T7 = fun_objectify_sequential_272;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYobjectify_sequential,T5);
  lit_569 = YPPsym((P)"objectify-application");
  lit_570 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_571 = YPPlist(1,YPPsym((P)"e"));
  T9 = YPsig(LITREF(lit_571),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T9,ENVNUL,PNUL,sloc(562));
  T8 = YPsig(LITREF(lit_570),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_274 = YPmet(FUNCODEREF(fun_objectify_application_274),LITREF(lit_569),T8,ENVNUL,PNUL,sloc(561));
  T11 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T12 = fun_objectify_application_274;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSastYobjectify_application,T10);
  lit_572 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_573 = YPPlist(1,YPPsym((P)"e"));
  T14 = YPsig(LITREF(lit_573),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T14,ENVNUL,PNUL,sloc(568));
  T13 = YPsig(LITREF(lit_572),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_276 = YPmet(FUNCODEREF(fun_objectify_application_276),LITREF(lit_569),T13,ENVNUL,PNUL,sloc(567));
  T16 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T17 = fun_objectify_application_276;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYobjectify_application,T15);
  lit_574 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_575 = YPPlist(1,YPPsym((P)"e"));
  T19 = YPsig(LITREF(lit_575),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T19,ENVNUL,PNUL,sloc(579));
  T18 = YPsig(LITREF(lit_574),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_278 = YPmet(FUNCODEREF(fun_objectify_application_278),LITREF(lit_569),T18,ENVNUL,PNUL,sloc(578));
  T21 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T22 = fun_objectify_application_278;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalSastYobjectify_application,T20);
  lit_576 = YPPsym((P)"process-closed-application");
  lit_577 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_578 = YPsb((P)"incorrect regular arity");
  T23 = YPsig(LITREF(lit_577),YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_279 = YPmet(FUNCODEREF(fun_process_closed_application_279),LITREF(lit_576),T23,ENVNUL,PNUL,sloc(588));
  T25 = VARREF_OR(YevalSastYprocess_closed_application,YPfalse);
  T26 = fun_process_closed_application_279;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YevalSastYprocess_closed_application,T24);
  lit_579 = YPPsym((P)"process-nary-closed-application");
  lit_580 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_581 = YPPsym((P)"pack-nary-args");
  lit_582 = YPPlist(1,YPPsym((P)"e*"));
  lit_583 = YPPsym((P)"quote");
  lit_584 = YPPsym((P)"%pair");
  lit_585 = YPPsym((P)"pack-args");
  lit_586 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_587 = YPPsym((P)"<lst>");
  lit_588 = YPsb((P)"incorrect dotted arity");
  T29 = YPsig(LITREF(lit_582),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_280 = YPmet(FUNCODEREF(fun_pack_nary_args_280),LITREF(lit_581),T29,ENVNUL,PNUL,sloc(603));
  T28 = YPsig(LITREF(lit_586),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_281 = YPmet(FUNCODEREF(fun_pack_args_281),LITREF(lit_585),T28,ENVNUL,PNUL,sloc(607));
  T27 = YPsig(LITREF(lit_580),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_282 = YPmet(FUNCODEREF(fun_process_nary_closed_application_282),LITREF(lit_579),T27,ENVNUL,PNUL,sloc(602));
  T31 = VARREF_OR(YevalSastYprocess_nary_closed_application,YPfalse);
  T32 = fun_process_nary_closed_application_282;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSastYprocess_nary_closed_application,T30);
  lit_589 = YPPsym((P)"convert2arguments");
  lit_590 = YPPlist(1,YPPsym((P)"e*"));
  T33 = YPsig(LITREF(lit_590),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_283 = YPmet(FUNCODEREF(fun_convert2arguments_283),LITREF(lit_589),T33,ENVNUL,PNUL,sloc(628));
  T35 = VARREF_OR(YevalSastYconvert2arguments,YPfalse);
  T36 = fun_convert2arguments_283;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSastYconvert2arguments,T34);
  lit_591 = YPPsym((P)"objectify-assignment");
  lit_592 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_593 = YPsb((P)"Unsupported Set!: %=");
  T37 = YPsig(LITREF(lit_592),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_284 = YPmet(FUNCODEREF(fun_objectify_assignment_284),LITREF(lit_591),T37,ENVNUL,PNUL,sloc(637));
  T39 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T40 = fun_objectify_assignment_284;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSastYobjectify_assignment,T38);
  lit_594 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T41 = YPsig(LITREF(lit_594),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_285 = YPmet(FUNCODEREF(fun_objectify_assignment_285),LITREF(lit_591),T41,ENVNUL,PNUL,sloc(647));
  T43 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T44 = fun_objectify_assignment_285;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSastYobjectify_assignment,T42);
  lit_595 = YPPsym((P)"objectify-assignment-using");
  lit_596 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T45 = YPsig(LITREF(lit_596),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_286 = YPmet(FUNCODEREF(fun_objectify_assignment_using_286),LITREF(lit_595),T45,ENVNUL,PNUL,sloc(652));
  T47 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T48 = fun_objectify_assignment_using_286;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalSastYobjectify_assignment_using,T46);
  lit_597 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T49 = YPsig(LITREF(lit_597),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_287 = YPmet(FUNCODEREF(fun_objectify_assignment_using_287),LITREF(lit_595),T49,ENVNUL,PNUL,sloc(659));
  T51 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T52 = fun_objectify_assignment_using_287;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSastYobjectify_assignment_using,T50);
  lit_598 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T53 = YPsig(LITREF(lit_598),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_288 = YPmet(FUNCODEREF(fun_objectify_assignment_using_288),LITREF(lit_595),T53,ENVNUL,PNUL,sloc(665));
  T55 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T56 = fun_objectify_assignment_using_288;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSastYobjectify_assignment_using,T54);
  lit_599 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T57 = YPsig(LITREF(lit_599),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_289 = YPmet(FUNCODEREF(fun_objectify_assignment_using_289),LITREF(lit_595),T57,ENVNUL,PNUL,sloc(671));
  T59 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T60 = fun_objectify_assignment_using_289;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYobjectify_assignment_using,T58);
  lit_600 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_601 = YPsb((P)"Unable to assign to static module binding %=");
  T61 = YPsig(LITREF(lit_600),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_290 = YPmet(FUNCODEREF(fun_objectify_assignment_using_290),LITREF(lit_595),T61,ENVNUL,PNUL,sloc(677));
  T63 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T64 = fun_objectify_assignment_using_290;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSastYobjectify_assignment_using,T62);
  lit_602 = YPPsym((P)"update-binding-kind");
  lit_603 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_604 = YPPsym((P)"runtime");
  lit_605 = YPPsym((P)"magic");
  lit_606 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T65 = YPsig(LITREF(lit_603),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_602),T65,ENVNUL,PNUL,sloc(690));
  T66 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T66);
  lit_607 = YPPsym((P)"ast-define-binding");
  lit_608 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_609 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T67 = YPsig(LITREF(lit_608),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_292 = YPmet(FUNCODEREF(fun_ast_define_binding_292),LITREF(lit_607),T67,ENVNUL,PNUL,sloc(699));
  T69 = VARREF_OR(YevalSastYast_define_binding,YPfalse);
  T70 = fun_ast_define_binding_292;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYast_define_binding,T68);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_610 = YPPsym((P)"objectify-definition");
  lit_611 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T71 = YPsig(LITREF(lit_611),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_293 = YPmet(FUNCODEREF(fun_objectify_definition_293),LITREF(lit_610),T71,ENVNUL,PNUL,sloc(741));
  T73 = VARREF_OR(YevalSastYobjectify_definition,YPfalse);
  T74 = fun_objectify_definition_293;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSastYobjectify_definition,T72);
  lit_612 = YPPsym((P)"objectify-variable-definition");
  lit_613 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T75 = YPsig(LITREF(lit_613),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_294 = YPmet(FUNCODEREF(fun_objectify_variable_definition_294),LITREF(lit_612),T75,ENVNUL,PNUL,sloc(752));
  T77 = VARREF_OR(YevalSastYobjectify_variable_definition,YPfalse);
  T78 = fun_objectify_variable_definition_294;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YevalSastYobjectify_variable_definition,T76);
  lit_614 = YPPsym((P)"objectify-dynamic-definition");
  lit_615 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_616 = YPPsym((P)"dynamic");
  T79 = YPsig(LITREF(lit_615),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_295 = YPmet(FUNCODEREF(fun_objectify_dynamic_definition_295),LITREF(lit_614),T79,ENVNUL,PNUL,sloc(755));
  T81 = VARREF_OR(YevalSastYobjectify_dynamic_definition,YPfalse);
  T82 = fun_objectify_dynamic_definition_295;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalSastYobjectify_dynamic_definition,T80);
  lit_617 = YPPsym((P)"%%%macro");
  lit_618 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"expander"));
  lit_619 = YPPsym((P)"expand");
  lit_620 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_621 = YPsb((P)"MACRO ");
  lit_622 = YPsb((P)"\n");
  lit_623 = YPsb((P)"  => ");
  lit_624 = YPsb((P)"\n");
  T84 = YPsig(LITREF(lit_620),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_296 = YPmet(FUNCODEREF(fun_expand_296),LITREF(lit_619),T84,ENVNUL,PNUL,sloc(760));
  T83 = YPsig(LITREF(lit_618),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYPPPmacro = YPmet(FUNCODEREF(YevalSastYPPPmacro),LITREF(lit_617),T83,ENVNUL,PNUL,sloc(758));
  T85 = YevalSastYPPPmacro;
  VARSET(YevalSastYPPPmacro,T85);
  lit_625 = YPPsym((P)"%%macro");
  lit_626 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_627 = YPPsym((P)"macro");
  T86 = YPsig(LITREF(lit_626),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_625),T86,ENVNUL,PNUL,sloc(771));
  T87 = YPPmacro;
  VARSET(YPPmacro,T87);
  lit_628 = YPPsym((P)"objectify-syntax-definition");
  lit_629 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T88 = YPsig(LITREF(lit_629),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_299 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_299),LITREF(lit_628),T88,ENVNUL,PNUL,sloc(785));
  T90 = VARREF_OR(YevalSastYobjectify_syntax_definition,YPfalse);
  T91 = fun_objectify_syntax_definition_299;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSastYobjectify_syntax_definition,T89);
  lit_630 = YPPsym((P)"objectify-function-definition");
  lit_631 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  T92 = YPsig(LITREF(lit_631),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_300 = YPmet(FUNCODEREF(fun_objectify_function_definition_300),LITREF(lit_630),T92,ENVNUL,PNUL,sloc(814));
  T94 = VARREF_OR(YevalSastYobjectify_function_definition,YPfalse);
  T95 = fun_objectify_function_definition_300;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSastYobjectify_function_definition,T93);
  lit_632 = YPPsym((P)"module-binding");
  lit_633 = YPPlist(1,YPPsym((P)"kind"));
  T96 = YPsig(LITREF(lit_633),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_632),T96,ENVNUL,PNUL,sloc(823));
  T97 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T97);
  lit_634 = YPPsym((P)"objectify-primitive-definition");
  lit_635 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_636 = YPPsym((P)"predefined");
  lit_637 = YPPsym((P)"inline");
  T98 = YPsig(LITREF(lit_635),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_302 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_302),LITREF(lit_634),T98,ENVNUL,PNUL,sloc(826));
  T100 = VARREF_OR(YevalSastYobjectify_primitive_definition,YPfalse);
  T101 = fun_objectify_primitive_definition_302;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSastYobjectify_primitive_definition,T99);
  lit_638 = YPPsym((P)"objectify-generic-definition");
  lit_639 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T102 = YPsig(LITREF(lit_639),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_303 = YPmet(FUNCODEREF(fun_objectify_generic_definition_303),LITREF(lit_638),T102,ENVNUL,PNUL,sloc(845));
  T104 = VARREF_OR(YevalSastYobjectify_generic_definition,YPfalse);
  T105 = fun_objectify_generic_definition_303;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSastYobjectify_generic_definition,T103);
  lit_640 = YPPsym((P)"objectify-method-definition");
  lit_641 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_642 = YPPsym((P)"bound?");
  lit_643 = YPPsym((P)"%define-method");
  T106 = YPsig(LITREF(lit_641),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_304 = YPmet(FUNCODEREF(fun_objectify_method_definition_304),LITREF(lit_640),T106,ENVNUL,PNUL,sloc(857));
  T108 = VARREF_OR(YevalSastYobjectify_method_definition,YPfalse);
  T109 = fun_objectify_method_definition_304;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSastYobjectify_method_definition,T107);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_644 = YPPsym((P)"objectify-function-source");
  lit_645 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_646 = Ynil;
  lit_647 = YPsb((P)"(fun %s %s)");
  T114 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T114,ENVNUL,PNUL,sloc(881));
  T113 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T113,ENVNUL,PNUL,sloc(881));
  T112 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T112,ENVNUL,PNUL,sloc(881));
  T111 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T111,ENVNUL,PNUL,sloc(881));
  T110 = YPsig(LITREF(lit_645),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_309 = YPmet(FUNCODEREF(fun_objectify_function_source_309),LITREF(lit_644),T110,ENVNUL,PNUL,sloc(880));
  T116 = VARREF_OR(YevalSastYobjectify_function_source,YPfalse);
  T117 = fun_objectify_function_source_309;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSastYobjectify_function_source,T115);
  lit_648 = YPPsym((P)"objectify-function-using");
  lit_649 = YPPlist(5,YPPsym((P)"met"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T120 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T120,ENVNUL,PNUL,sloc(891));
  T119 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T119,ENVNUL,PNUL,sloc(891));
  T118 = YPsig(LITREF(lit_649),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_using_312 = YPmet(FUNCODEREF(fun_objectify_function_using_312),LITREF(lit_648),T118,ENVNUL,PNUL,sloc(889));
  T122 = VARREF_OR(YevalSastYobjectify_function_using,YPfalse);
  T123 = fun_objectify_function_using_312;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YevalSastYobjectify_function_using,T121);
  lit_650 = YPPsym((P)"objectify-function");
  lit_651 = YPPlist(5,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T124 = YPsig(LITREF(lit_651),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_313 = YPmet(FUNCODEREF(fun_objectify_function_313),LITREF(lit_650),T124,ENVNUL,PNUL,sloc(901));
  T126 = VARREF_OR(YevalSastYobjectify_function,YPfalse);
  T127 = fun_objectify_function_313;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YevalSastYobjectify_function,T125);
  lit_652 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_652));
  lit_653 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_653));
  lit_654 = YPPsym((P)"objectify-signature");
  lit_655 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  T128 = YPsig(LITREF(lit_655),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_314 = YPmet(FUNCODEREF(fun_objectify_signature_314),LITREF(lit_654),T128,ENVNUL,PNUL,sloc(908));
  T130 = VARREF_OR(YevalSastYobjectify_signature,YPfalse);
  T131 = fun_objectify_signature_314;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSastYobjectify_signature,T129);
  lit_656 = YPPsym((P)"compute-local-reference-offsets");
  lit_657 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_658 = YPsb((P)"didn't find local binding %= in %=");
  T133 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T132 = YPsig(LITREF(lit_657),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),T133,Ynil);
  fun_compute_local_reference_offsets_315 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_315),LITREF(lit_656),T132,ENVNUL,PNUL,sloc(939));
  T135 = VARREF_OR(YevalSastYcompute_local_reference_offsets,YPfalse);
  T136 = fun_compute_local_reference_offsets_315;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSastYcompute_local_reference_offsets,T134);
  lit_659 = YPPsym((P)"objectify-binding");
  lit_660 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T137 = YPsig(LITREF(lit_660),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_316 = YPmet(FUNCODEREF(fun_objectify_binding_316),LITREF(lit_659),T137,ENVNUL,PNUL,sloc(953));
  T139 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T140 = fun_objectify_binding_316;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSastYobjectify_binding,T138);
  lit_661 = YPPsym((P)"binding-reference-class");
  lit_662 = YPPlist(1,YPPsym((P)"b"));
  lit_663 = YPsb((P)"Unknown binding-kind %=");
  T141 = YPsig(LITREF(lit_662),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_317 = YPmet(FUNCODEREF(fun_binding_reference_class_317),LITREF(lit_661),T141,ENVNUL,PNUL,sloc(965));
  T143 = VARREF_OR(YevalSastYbinding_reference_class,YPfalse);
  T144 = fun_binding_reference_class_317;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSastYbinding_reference_class,T142);
  lit_664 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T145 = YPsig(LITREF(lit_664),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_318 = YPmet(FUNCODEREF(fun_objectify_binding_318),LITREF(lit_659),T145,ENVNUL,PNUL,sloc(976));
  T147 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T148 = fun_objectify_binding_318;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSastYobjectify_binding,T146);
  lit_665 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T149 = YPsig(LITREF(lit_665),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_319 = YPmet(FUNCODEREF(fun_objectify_binding_319),LITREF(lit_659),T149,ENVNUL,PNUL,sloc(985));
  T151 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T152 = fun_objectify_binding_319;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSastYobjectify_binding,T150);
  lit_666 = YPPsym((P)"default-type");
  lit_667 = YPPlist(1,YPPsym((P)"r"));
  lit_668 = YPPsym((P)"<any>");
  T153 = YPsig(LITREF(lit_667),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_320 = YPmet(FUNCODEREF(fun_default_type_320),LITREF(lit_666),T153,ENVNUL,PNUL,sloc(990));
  T155 = VARREF_OR(YevalSastYdefault_type,YPfalse);
  T156 = fun_default_type_320;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YevalSastYdefault_type,T154);
  lit_669 = YPPsym((P)"objectify-free-global-reference");
  lit_670 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T157 = YPsig(LITREF(lit_670),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_321 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_321),LITREF(lit_669),T157,ENVNUL,PNUL,sloc(995));
  T159 = VARREF_OR(YevalSastYobjectify_free_global_reference,YPfalse);
  T160 = fun_objectify_free_global_reference_321;
  T158 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T159,T160);
  VARSET(YevalSastYobjectify_free_global_reference,T158);
  lit_671 = YPPsym((P)"foreign-name?");
  lit_672 = YPPlist(1,YPPsym((P)"name"));
  T161 = YPsig(LITREF(lit_672),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_671),T161,ENVNUL,PNUL,sloc(1009));
  T162 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T162);
  lit_673 = YPPsym((P)"objectify-foreign-reference");
  lit_674 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_675 = YPsb((P)"Malformed foreign name %s.\n");
  lit_676 = YPsb((P)"No binding %s in %s.\n");
  T163 = YPsig(LITREF(lit_674),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_323 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_323),LITREF(lit_673),T163,ENVNUL,PNUL,sloc(1013));
  T165 = VARREF_OR(YevalSastYobjectify_foreign_reference,YPfalse);
  T166 = fun_objectify_foreign_reference_323;
  T164 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T165,T166);
  VARSET(YevalSastYobjectify_foreign_reference,T164);
  lit_677 = YPPsym((P)"objectify-symbol");
  lit_678 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T167 = YPsig(LITREF(lit_678),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_324 = YPmet(FUNCODEREF(fun_objectify_symbol_324),LITREF(lit_677),T167,ENVNUL,PNUL,sloc(1031));
  T169 = VARREF_OR(YevalSastYobjectify_symbol,YPfalse);
  T170 = fun_objectify_symbol_324;
  T168 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T169,T170);
  VARSET(YevalSastYobjectify_symbol,T168);
  lit_679 = YPPsym((P)"ftype");
  lit_680 = YPPlist(1,YPPsym((P)"r"));
  lit_681 = YPPsym((P)"<fun>");
  T171 = YPsig(LITREF(lit_680),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_325 = YPmet(FUNCODEREF(fun_ftype_325),LITREF(lit_679),T171,ENVNUL,PNUL,sloc(1034));
  T173 = VARREF_OR(YevalSastYftype,YPfalse);
  T174 = fun_ftype_325;
  T172 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T173,T174);
  VARSET(YevalSastYftype,T172);
  lit_682 = YPPsym((P)"<functions>");
  T177 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T176 = (P)YPpair(VARREF(YLlstG),T177);
  T175 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_682),T176);
  VARSET(YevalSastYLfunctionsG,T175);
  T178 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T178);
  lit_683 = YPPsym((P)"functions");
  lit_684 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T181 = YPsig(LITREF(lit_684),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T180 = YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_683),T181,ENVNUL,PNUL,sloc(1037));
  T183 = YevalSastYfunctions;
  T182 = VARSET(YevalSastYfunctions,T183);
  T179 = T182;
  return T179;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184;
DEFCREGS();
  lit_685 = YPPlist(1,YPPsym((P)"e"));
  T1 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T0 = YPsig(LITREF(lit_685),YPPlist(1,T1),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_327 = YPmet(FUNCODEREF(fun_empty_327),LITREF(lit_310),T0,ENVNUL,PNUL,sloc(1037));
  T3 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T4 = fun_empty_327;
  T2 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T3,T4);
  VARSET(YgooScolsScolYempty,T2);
  lit_686 = YPPsym((P)"objectify-locals");
  lit_687 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_688 = YPPlist(1,YPPsym((P)"n"));
  lit_689 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"body"));
  lit_690 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T8 = YPsig(LITREF(lit_688),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T8,ENVNUL,PNUL,sloc(1040));
  T7 = YPsig(LITREF(lit_689),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_329 = YPmet(FUNCODEREF(fun_329),YPfalse,T7,ENVNUL,PNUL,sloc(1044));
  T6 = YPsig(LITREF(lit_690),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_330 = YPmet(FUNCODEREF(fun_330),YPfalse,T6,ENVNUL,PNUL,sloc(1052));
  T5 = YPsig(LITREF(lit_687),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_331 = YPmet(FUNCODEREF(fun_objectify_locals_331),LITREF(lit_686),T5,ENVNUL,PNUL,sloc(1039));
  T10 = VARREF_OR(YevalSastYobjectify_locals,YPfalse);
  T11 = fun_objectify_locals_331;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYobjectify_locals,T9);
  lit_691 = YPPsym((P)"objectify-bind-exit");
  lit_692 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T12 = YPsig(LITREF(lit_692),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_332 = YPmet(FUNCODEREF(fun_objectify_bind_exit_332),LITREF(lit_691),T12,ENVNUL,PNUL,sloc(1062));
  T14 = VARREF_OR(YevalSastYobjectify_bind_exit,YPfalse);
  T15 = fun_objectify_bind_exit_332;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYobjectify_bind_exit,T13);
  lit_693 = YPPsym((P)"objectify-unwind-protect");
  lit_694 = YPPlist(5,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T16 = YPsig(LITREF(lit_694),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_333 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_333),LITREF(lit_693),T16,ENVNUL,PNUL,sloc(1068));
  T18 = VARREF_OR(YevalSastYobjectify_unwind_protect,YPfalse);
  T19 = fun_objectify_unwind_protect_333;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYobjectify_unwind_protect,T17);
  lit_695 = YPPsym((P)"objectify-monitor");
  lit_696 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T20 = YPsig(LITREF(lit_696),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_334 = YPmet(FUNCODEREF(fun_objectify_monitor_334),LITREF(lit_695),T20,ENVNUL,PNUL,sloc(1080));
  T22 = VARREF_OR(YevalSastYobjectify_monitor,YPfalse);
  T23 = fun_objectify_monitor_334;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYobjectify_monitor,T21);
  lit_697 = YPPsym((P)"objectify-export");
  lit_698 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_699 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_700 = YPPlist(1,YPPsym((P)"name"));
  lit_701 = YPPlist(1,YPPsym((P)"exit"));
  lit_702 = YPsb((P)"Continue without exporting %s");
  lit_703 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_704 = YPsb((P)"Can't export undefined binding %s.\n");
  T29 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_335 = YPmet(FUNCODEREF(fun_335),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(LITREF(lit_703),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_336 = YPmet(FUNCODEREF(fun_336),YPfalse,T28,ENVNUL,PNUL,sloc(1101));
  T27 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T27,ENVNUL,PNUL,sloc(1102));
  T26 = YPsig(LITREF(lit_701),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_338 = YPmet(FUNCODEREF(fun_338),YPfalse,T26,ENVNUL,PNUL,sloc(1098));
  T25 = YPsig(LITREF(lit_700),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_339 = YPmet(FUNCODEREF(fun_339),YPfalse,T25,ENVNUL,PNUL,sloc(1095));
  T24 = YPsig(LITREF(lit_698),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_340 = YPmet(FUNCODEREF(fun_objectify_export_340),LITREF(lit_697),T24,ENVNUL,PNUL,sloc(1088));
  T31 = VARREF_OR(YevalSastYobjectify_export,YPfalse);
  T32 = fun_objectify_export_340;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSastYobjectify_export,T30);
  lit_705 = YPPsym((P)"import-global!");
  lit_706 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"env"));
  lit_707 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T33 = YPsig(LITREF(lit_706),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_705),T33,ENVNUL,PNUL,sloc(1108));
  T34 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T34);
  lit_708 = YPPsym((P)"objectify-use/export-module");
  lit_709 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_710 = YPPlist(1,YPPsym((P)"b"));
  T36 = YPsig(LITREF(lit_710),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_342 = YPmet(FUNCODEREF(fun_342),YPfalse,T36,ENVNUL,PNUL,sloc(1122));
  T35 = YPsig(LITREF(lit_709),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_343 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_343),LITREF(lit_708),T35,ENVNUL,PNUL,sloc(1116));
  T38 = VARREF_OR(YevalSastYobjectify_useSexport_module,YPfalse);
  T39 = fun_objectify_useSexport_module_343;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYobjectify_useSexport_module,T37);
  lit_711 = YPPsym((P)"objectify-use-include");
  lit_712 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_713 = YPPlist(1,YPPsym((P)"x"));
  T41 = YPsig(LITREF(lit_713),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_344 = YPmet(FUNCODEREF(fun_344),YPfalse,T41,ENVNUL,PNUL,sloc(1131));
  T40 = YPsig(LITREF(lit_712),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_345 = YPmet(FUNCODEREF(fun_objectify_use_include_345),LITREF(lit_711),T40,ENVNUL,PNUL,sloc(1128));
  T43 = VARREF_OR(YevalSastYobjectify_use_include,YPfalse);
  T44 = fun_objectify_use_include_345;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSastYobjectify_use_include,T42);
  lit_714 = YPPsym((P)"objectify-use-library");
  lit_715 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_716 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPsig(LITREF(lit_716),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T46,ENVNUL,PNUL,sloc(1138));
  T45 = YPsig(LITREF(lit_715),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_347 = YPmet(FUNCODEREF(fun_objectify_use_library_347),LITREF(lit_714),T45,ENVNUL,PNUL,sloc(1135));
  T48 = VARREF_OR(YevalSastYobjectify_use_library,YPfalse);
  T49 = fun_objectify_use_library_347;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSastYobjectify_use_library,T47);
  lit_717 = YPPsym((P)"objectify-use-module");
  lit_718 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_719 = YPPsym((P)"use-mod");
  lit_720 = YPPlist(1,YPPsym((P)"name"));
  lit_721 = YPPlist(1,YPPsym((P)"b"));
  lit_722 = YPPsym((P)"use-c-mod");
  lit_723 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_724 = YPsb((P)".c");
  lit_725 = YPsb((P)".h");
  lit_726 = YPsb((P)".swig");
  lit_727 = YPsb((P)".c");
  T53 = YPsig(LITREF(lit_721),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_348 = YPmet(FUNCODEREF(fun_348),YPfalse,T53,ENVNUL,PNUL,sloc(1149));
  T52 = YPsig(LITREF(lit_720),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_349 = YPmet(FUNCODEREF(fun_use_mod_349),LITREF(lit_719),T52,ENVNUL,PNUL,sloc(1145));
  T51 = YPsig(LITREF(lit_723),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_350 = YPmet(FUNCODEREF(fun_use_c_mod_350),LITREF(lit_722),T51,ENVNUL,PNUL,sloc(1152));
  T50 = YPsig(LITREF(lit_718),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_351 = YPmet(FUNCODEREF(fun_objectify_use_module_351),LITREF(lit_717),T50,ENVNUL,PNUL,sloc(1142));
  T55 = VARREF_OR(YevalSastYobjectify_use_module,YPfalse);
  T56 = fun_objectify_use_module_351;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSastYobjectify_use_module,T54);
  lit_728 = YPPsym((P)"insert-and-mangle-global!");
  lit_729 = YPPlist(3,YPPsym((P)"binding"),YPPsym((P)"mangle-prefix"),YPPsym((P)"r"));
  T57 = YPsig(LITREF(lit_729),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_352 = YPmet(FUNCODEREF(fun_insert_and_mangle_globalX_352),LITREF(lit_728),T57,ENVNUL,PNUL,sloc(1166));
  T59 = VARREF_OR(YevalSastYinsert_and_mangle_globalX,YPfalse);
  T60 = fun_insert_and_mangle_globalX_352;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYinsert_and_mangle_globalX,T58);
  lit_730 = YPPsym((P)"import-and-mangle-global!");
  lit_731 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"mangle-prefix"),YPPsym((P)"env"));
  lit_732 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T61 = YPsig(LITREF(lit_731),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYimport_and_mangle_globalX = YPmet(FUNCODEREF(YevalSastYimport_and_mangle_globalX),LITREF(lit_730),T61,ENVNUL,PNUL,sloc(1172));
  T62 = YevalSastYimport_and_mangle_globalX;
  VARSET(YevalSastYimport_and_mangle_globalX,T62);
  lit_733 = YPPsym((P)"objectify-use-mangle-module");
  lit_734 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_735 = YPPlist(1,YPPsym((P)"b"));
  T64 = YPsig(LITREF(lit_735),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T64,ENVNUL,PNUL,sloc(1189));
  T63 = YPsig(LITREF(lit_734),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_355 = YPmet(FUNCODEREF(fun_objectify_use_mangle_module_355),LITREF(lit_733),T63,ENVNUL,PNUL,sloc(1181));
  T66 = VARREF_OR(YevalSastYobjectify_use_mangle_module,YPfalse);
  T67 = fun_objectify_use_mangle_module_355;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYobjectify_use_mangle_module,T65);
  lit_736 = YPPsym((P)"expand-bind-list");
  lit_737 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_738 = YPsb((P)"Expected Pattern List %=\n");
  T68 = YPsig(LITREF(lit_737),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_356 = YPmet(FUNCODEREF(fun_expand_bind_list_356),LITREF(lit_736),T68,ENVNUL,PNUL,sloc(1195));
  T70 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T71 = fun_expand_bind_list_356;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYexpand_bind_list,T69);
  lit_739 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_740 = YPPsym((P)"match-empty-list");
  T73 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T72 = YPsig(LITREF(lit_739),YPPlist(3,T73,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_357 = YPmet(FUNCODEREF(fun_expand_bind_list_357),LITREF(lit_736),T72,ENVNUL,PNUL,sloc(1198));
  T75 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T76 = fun_expand_bind_list_357;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYexpand_bind_list,T74);
  lit_741 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_742 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_743 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T77 = YPsig(LITREF(lit_741),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_358 = YPmet(FUNCODEREF(fun_expand_bind_list_358),LITREF(lit_736),T77,ENVNUL,PNUL,sloc(1201));
  T79 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T80 = fun_expand_bind_list_358;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYexpand_bind_list,T78);
  lit_744 = YPPsym((P)"expand-bind-list*");
  lit_745 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T82 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T81 = YPsig(LITREF(lit_745),YPPlist(3,T82,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_359 = YPmet(FUNCODEREF(fun_expand_bind_listT_359),LITREF(lit_744),T81,ENVNUL,PNUL,sloc(1210));
  T84 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T85 = fun_expand_bind_listT_359;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSastYexpand_bind_listT,T83);
  lit_746 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T86 = YPsig(LITREF(lit_746),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_360 = YPmet(FUNCODEREF(fun_expand_bind_listT_360),LITREF(lit_744),T86,ENVNUL,PNUL,sloc(1213));
  T88 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T89 = fun_expand_bind_listT_360;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSastYexpand_bind_listT,T87);
  lit_747 = YPPsym((P)"expand-bind-element");
  lit_748 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_749 = YPPsym((P)"match-atom");
  T90 = YPsig(LITREF(lit_748),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_361 = YPmet(FUNCODEREF(fun_expand_bind_element_361),LITREF(lit_747),T90,ENVNUL,PNUL,sloc(1217));
  T92 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T93 = fun_expand_bind_element_361;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYexpand_bind_element,T91);
  lit_750 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_751 = YPPsym((P)"match-unquote");
  lit_752 = YPPsym((P)"tail");
  lit_753 = YPPsym((P)"match-sublist");
  T94 = YPsig(LITREF(lit_750),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_362 = YPmet(FUNCODEREF(fun_expand_bind_element_362),LITREF(lit_747),T94,ENVNUL,PNUL,sloc(1220));
  T96 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T97 = fun_expand_bind_element_362;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSastYexpand_bind_element,T95);
  lit_754 = YPPsym((P)"expand-pattern");
  lit_755 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_756 = YPPsym((P)"if");
  lit_757 = YPPsym((P)"isa?");
  lit_758 = YPsb((P)"Match Pattern Failure");
  T98 = YPsig(LITREF(lit_755),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_363 = YPmet(FUNCODEREF(fun_expand_pattern_363),LITREF(lit_754),T98,ENVNUL,PNUL,sloc(1231));
  T100 = VARREF_OR(YevalSastYexpand_pattern,YPfalse);
  T101 = fun_expand_pattern_363;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSastYexpand_pattern,T99);
  lit_759 = YPPsym((P)"expand-syntax-if");
  lit_760 = YPPlist(1,YPPsym((P)"x"));
  lit_761 = YPPsym((P)"esc");
  lit_762 = YPPsym((P)"return");
  lit_763 = YPPsym((P)"loc");
  lit_764 = YPPsym((P)"msg");
  lit_765 = YPPsym((P)"<str>");
  lit_766 = YPPsym((P)"args");
  lit_767 = YPPlist(1,YPPsym((P)"x"));
  T103 = YPsig(LITREF(lit_767),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_364 = YPmet(FUNCODEREF(fun_364),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(LITREF(lit_760),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_365 = YPmet(FUNCODEREF(fun_expand_syntax_if_365),LITREF(lit_759),T102,ENVNUL,PNUL,sloc(1236));
  T105 = VARREF_OR(YevalSastYexpand_syntax_if,YPfalse);
  T106 = fun_expand_syntax_if_365;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYexpand_syntax_if,T104);
  lit_768 = YPPsym((P)"r-extend*");
  lit_769 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T107 = YPsig(LITREF(lit_769),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_366 = YPmet(FUNCODEREF(fun_r_extendT_366),LITREF(lit_768),T107,ENVNUL,PNUL,sloc(1260));
  T109 = VARREF_OR(YevalSastYr_extendT,YPfalse);
  T110 = fun_r_extendT_366;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYr_extendT,T108);
  lit_770 = YPPsym((P)"insert-global!");
  lit_771 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  T111 = YPsig(LITREF(lit_771),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_367 = YPmet(FUNCODEREF(fun_insert_globalX_367),LITREF(lit_770),T111,ENVNUL,PNUL,sloc(1264));
  T113 = VARREF_OR(YevalSastYinsert_globalX,YPfalse);
  T114 = fun_insert_globalX_367;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSastYinsert_globalX,T112);
  lit_772 = YPPsym((P)"insert-globals!");
  lit_773 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"r"));
  lit_774 = YPPlist(1,YPPsym((P)"b"));
  T116 = YPsig(LITREF(lit_774),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T116,ENVNUL,PNUL,sloc(1269));
  T115 = YPsig(LITREF(lit_773),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_369 = YPmet(FUNCODEREF(fun_insert_globalsX_369),LITREF(lit_772),T115,ENVNUL,PNUL,sloc(1268));
  T118 = VARREF_OR(YevalSastYinsert_globalsX,YPfalse);
  T119 = fun_insert_globalsX_369;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalSastYinsert_globalsX,T117);
  lit_775 = YPPsym((P)"find-static-global-environment");
  lit_776 = YPPlist(1,YPPsym((P)"r"));
  T120 = YPsig(LITREF(lit_776),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_370 = YPmet(FUNCODEREF(fun_find_static_global_environment_370),LITREF(lit_775),T120,ENVNUL,PNUL,sloc(1271));
  T122 = VARREF_OR(YevalSastYfind_static_global_environment,YPfalse);
  T123 = fun_find_static_global_environment_370;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YevalSastYfind_static_global_environment,T121);
  lit_777 = YPPlist(1,YPPsym((P)"r"));
  T124 = YPsig(LITREF(lit_777),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_371 = YPmet(FUNCODEREF(fun_find_static_global_environment_371),LITREF(lit_775),T124,ENVNUL,PNUL,sloc(1275));
  T126 = VARREF_OR(YevalSastYfind_static_global_environment,YPfalse);
  T127 = fun_find_static_global_environment_371;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YevalSastYfind_static_global_environment,T125);
  lit_778 = YPPsym((P)"find-syntax-environment");
  lit_779 = YPPlist(1,YPPsym((P)"r"));
  T128 = YPsig(LITREF(lit_779),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_372 = YPmet(FUNCODEREF(fun_find_syntax_environment_372),LITREF(lit_778),T128,ENVNUL,PNUL,sloc(1279));
  T130 = VARREF_OR(YevalSastYfind_syntax_environment,YPfalse);
  T131 = fun_find_syntax_environment_372;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSastYfind_syntax_environment,T129);
  lit_780 = YPPsym((P)"find-environment-module");
  lit_781 = YPPlist(1,YPPsym((P)"r"));
  T132 = YPsig(LITREF(lit_781),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_373 = YPmet(FUNCODEREF(fun_find_environment_module_373),LITREF(lit_780),T132,ENVNUL,PNUL,sloc(1283));
  T134 = VARREF_OR(YevalSastYfind_environment_module,YPfalse);
  T135 = fun_find_environment_module_373;
  T133 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T134,T135);
  VARSET(YevalSastYfind_environment_module,T133);
  lit_782 = YPPsym((P)"find-binding");
  lit_783 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T136 = YPsig(LITREF(lit_783),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_374 = YPmet(FUNCODEREF(fun_find_binding_374),LITREF(lit_782),T136,ENVNUL,PNUL,sloc(1286));
  T138 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T139 = fun_find_binding_374;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YevalSastYfind_binding,T137);
  lit_784 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T140 = YPsig(LITREF(lit_784),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_375 = YPmet(FUNCODEREF(fun_find_binding_375),LITREF(lit_782),T140,ENVNUL,PNUL,sloc(1296));
  T142 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T143 = fun_find_binding_375;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSastYfind_binding,T141);
  lit_785 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T144 = YPsig(LITREF(lit_785),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_376 = YPmet(FUNCODEREF(fun_find_binding_376),LITREF(lit_782),T144,ENVNUL,PNUL,sloc(1299));
  T146 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T147 = fun_find_binding_376;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSastYfind_binding,T145);
  lit_786 = YPPsym((P)"frame-bindings");
  lit_787 = YPPlist(1,YPPsym((P)"env"));
  T148 = YPsig(LITREF(lit_787),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_377 = YPmet(FUNCODEREF(fun_frame_bindings_377),LITREF(lit_786),T148,ENVNUL,PNUL,sloc(1305));
  T150 = VARREF_OR(YevalSastYframe_bindings,YPfalse);
  T151 = fun_frame_bindings_377;
  T149 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T150,T151);
  VARSET(YevalSastYframe_bindings,T149);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_788 = YPPsym((P)"register-magic-binding");
  lit_789 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T152 = YPsig(LITREF(lit_789),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_378 = YPmet(FUNCODEREF(fun_register_magic_binding_378),LITREF(lit_788),T152,ENVNUL,PNUL,sloc(1313));
  T154 = VARREF_OR(YevalSastYregister_magic_binding,YPfalse);
  T155 = fun_register_magic_binding_378;
  T153 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T154,T155);
  VARSET(YevalSastYregister_magic_binding,T153);
  lit_790 = YPPsym((P)"magic-bindings");
  T156 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_379 = YPmet(FUNCODEREF(fun_magic_bindings_379),LITREF(lit_790),T156,ENVNUL,PNUL,sloc(1316));
  T158 = VARREF_OR(YevalSastYmagic_bindings,YPfalse);
  T159 = fun_magic_bindings_379;
  T157 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T158,T159);
  VARSET(YevalSastYmagic_bindings,T157);
  lit_791 = YPPlist(1,YPPsym((P)"exp"));
  lit_792 = YPPlist(1,YPPsym((P)"return"));
  lit_793 = YPPsym((P)"x-2355");
  lit_794 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_795 = YPPsym((P)"define-magic-binding");
  lit_796 = YPsb((P)"special-");
  lit_797 = YPsb((P)"$sexpr-");
  lit_798 = YPsb((P)"-tag");
  lit_799 = YPPsym((P)"dv");
  lit_800 = YPPsym((P)"new");
  lit_801 = YPPsym((P)"binding-handler");
  lit_802 = YPPsym((P)"fun");
  T162 = YPsig(LITREF(lit_794),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2355_380 = YPmet(FUNCODEREF(fun_x_2355_380),LITREF(lit_793),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_792),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_791),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_382;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T163);
  lit_803 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T164 = YPsig(LITREF(lit_803),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T164,ENVNUL,PNUL,sloc(1331));
  T166 = fun_383;
  T165 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T166,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T165);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_756),VARREF(YevalSastYspecial_if));
  lit_804 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T167 = YPsig(LITREF(lit_804),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T167,ENVNUL,PNUL,sloc(1335));
  T169 = fun_384;
  T168 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T169,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T168);
  lit_805 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_805),VARREF(YevalSastYspecial_begin));
  lit_806 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_806));
  lit_807 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T170 = YPsig(LITREF(lit_807),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T170,ENVNUL,PNUL,sloc(1340));
  T172 = fun_385;
  T171 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T172,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T171);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_806),VARREF(YevalSastYspecial_Praw));
  lit_808 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T173 = YPsig(LITREF(lit_808),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T173,ENVNUL,PNUL,sloc(1343));
  T175 = fun_386;
  T174 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T175,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T174);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_583),VARREF(YevalSastYspecial_quote));
  lit_809 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T176 = YPsig(LITREF(lit_809),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T176,ENVNUL,PNUL,sloc(1346));
  T178 = fun_387;
  T177 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T178,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T177);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_10),VARREF(YevalSastYspecial_set));
  lit_810 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T181 = YPsig(LITREF(lit_810),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T180 = fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T181,ENVNUL,PNUL,sloc(1350));
  T184 = fun_388;
  T183 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T184,VARREF(YevalSastYbinding_freeQ),YPfalse);
  T182 = VARSET(YevalSastYspecial_define,T183);
  T179 = T182;
  return T179;
}

P YevalSastY___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
DEFCREGS();
  lit_811 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_811),VARREF(YevalSastYspecial_define));
  lit_812 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_812),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T0,ENVNUL,PNUL,sloc(1354));
  T2 = fun_389;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_constant_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_constant,T1);
  lit_813 = YPPsym((P)"define-constant");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_813),VARREF(YevalSastYspecial_define_constant));
  lit_814 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_814));
  lit_815 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPsig(LITREF(lit_815),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T3,ENVNUL,PNUL,sloc(1360));
  T5 = fun_390;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T4);
  lit_816 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_816),VARREF(YevalSastYspecial_define_dynamic));
  lit_817 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPsig(LITREF(lit_817),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T6,ENVNUL,PNUL,sloc(1364));
  T8 = fun_391;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T8,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T7);
  lit_818 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_818),VARREF(YevalSastYspecial_define_syntax));
  lit_819 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_819));
  lit_820 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = YPsig(LITREF(lit_820),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T9,ENVNUL,PNUL,sloc(1370));
  T11 = fun_392;
  T10 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T11,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T10);
  lit_821 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_821),VARREF(YevalSastYspecial_define_static_syntax));
  lit_822 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T12 = YPsig(LITREF(lit_822),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T12,ENVNUL,PNUL,sloc(1374));
  T14 = fun_393;
  T13 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T14,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T13);
  lit_823 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_823),VARREF(YevalSastYspecial_define_method));
  lit_824 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T15 = YPsig(LITREF(lit_824),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_394 = YPmet(FUNCODEREF(fun_394),YPfalse,T15,ENVNUL,PNUL,sloc(1379));
  T17 = fun_394;
  T16 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T17,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T16);
  lit_825 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_825),VARREF(YevalSastYspecial_define_generic));
  lit_826 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T18 = YPsig(LITREF(lit_826),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_395 = YPmet(FUNCODEREF(fun_395),YPfalse,T18,ENVNUL,PNUL,sloc(1383));
  T20 = fun_395;
  T19 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T20,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T19);
  lit_827 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_827),VARREF(YevalSastYspecial_define_function));
  lit_828 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T21 = YPsig(LITREF(lit_828),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T21,ENVNUL,PNUL,sloc(1388));
  T23 = fun_396;
  T22 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T23,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T22);
  lit_829 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_829),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_642));
  lit_830 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T24 = YPsig(LITREF(lit_830),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T24,ENVNUL,PNUL,sloc(1394));
  T26 = fun_397;
  T25 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T26,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T25);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_642),VARREF(YevalSastYspecial_boundQ));
  lit_831 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T27 = YPsig(LITREF(lit_831),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T27,ENVNUL,PNUL,sloc(1397));
  T29 = fun_398;
  T28 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T29,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T28);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_7),VARREF(YevalSastYspecial_let));
  lit_832 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T30 = YPsig(LITREF(lit_832),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T30,ENVNUL,PNUL,sloc(1403));
  T32 = fun_399;
  T31 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T32,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T31);
  lit_833 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_833),VARREF(YevalSastYspecial_def));
  lit_834 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T33 = YPsig(LITREF(lit_834),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T33,ENVNUL,PNUL,sloc(1406));
  T35 = fun_400;
  T34 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T35,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T34);
  lit_835 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_835),VARREF(YevalSastYspecial_locals));
  lit_836 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T36 = YPsig(LITREF(lit_836),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_401 = YPmet(FUNCODEREF(fun_401),YPfalse,T36,ENVNUL,PNUL,sloc(1411));
  T38 = fun_401;
  T37 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T38,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T37);
  lit_837 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_837),VARREF(YevalSastYspecial_iterate));
  lit_838 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T39 = YPsig(LITREF(lit_838),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T39,ENVNUL,PNUL,sloc(1414));
  T41 = fun_402;
  T40 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T41,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T40);
  lit_839 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_839),VARREF(YevalSastYspecial_bind_exit));
  lit_840 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T42 = YPsig(LITREF(lit_840),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T42,ENVNUL,PNUL,sloc(1418));
  T44 = fun_403;
  T43 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T44,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T43);
  lit_841 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_841),VARREF(YevalSastYspecial_unwind_protect));
  lit_842 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T45 = YPsig(LITREF(lit_842),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_404 = YPmet(FUNCODEREF(fun_404),YPfalse,T45,ENVNUL,PNUL,sloc(1424));
  T47 = fun_404;
  T46 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T47,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T46);
  lit_843 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_843),VARREF(YevalSastYspecial_monitor));
  lit_844 = YPPsym((P)"pairize");
  lit_845 = YPPlist(1,YPPsym((P)"args"));
  T48 = YPsig(LITREF(lit_845),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_405 = YPmet(FUNCODEREF(fun_pairize_405),LITREF(lit_844),T48,ENVNUL,PNUL,sloc(1428));
  T50 = VARREF_OR(YevalSastYpairize,YPfalse);
  T51 = fun_pairize_405;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSastYpairize,T49);
  lit_846 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_847 = YPPsym((P)"fab-class");
  T52 = YPsig(LITREF(lit_846),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_406 = YPmet(FUNCODEREF(fun_406),YPfalse,T52,ENVNUL,PNUL,sloc(1433));
  T54 = fun_406;
  T53 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T54,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T53);
  lit_848 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_848),VARREF(YevalSastYspecial_define_class));
  lit_849 = YPPsym((P)"objectify-define-property");
  lit_850 = YPPlist(4,YPPsym((P)"x"),YPPsym((P)"setter?"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_851 = YPPsym((P)"%prop");
  lit_852 = YPPsym((P)"%prop-unbound-error");
  T55 = YPsig(LITREF(lit_850),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_define_property_407 = YPmet(FUNCODEREF(fun_objectify_define_property_407),LITREF(lit_849),T55,ENVNUL,PNUL,sloc(1438));
  T57 = VARREF_OR(YevalSastYobjectify_define_property,YPfalse);
  T58 = fun_objectify_define_property_407;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSastYobjectify_define_property,T56);
  lit_853 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPsig(LITREF(lit_853),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T59,ENVNUL,PNUL,sloc(1459));
  T61 = fun_408;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_propX_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T61,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_propX,T60);
  lit_854 = YPPsym((P)"prop!");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_854),VARREF(YevalSastYspecial_propX));
  lit_855 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T62 = YPsig(LITREF(lit_855),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_409 = YPmet(FUNCODEREF(fun_409),YPfalse,T62,ENVNUL,PNUL,sloc(1462));
  T64 = fun_409;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T64,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T63);
  lit_856 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_856),VARREF(YevalSastYspecial_prop));
  lit_857 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_857));
  lit_858 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T65 = YPsig(LITREF(lit_858),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_410 = YPmet(FUNCODEREF(fun_410),YPfalse,T65,ENVNUL,PNUL,sloc(1467));
  T67 = fun_410;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T67,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T66);
  lit_859 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_859),VARREF(YevalSastYspecial_compile_time));
  lit_860 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_860));
  lit_861 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPsig(LITREF(lit_861),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_411 = YPmet(FUNCODEREF(fun_411),YPfalse,T68,ENVNUL,PNUL,sloc(1472));
  T70 = fun_411;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T70,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T69);
  lit_862 = YPPsym((P)"compile-time-also");
  T72 = XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_862),VARREF(YevalSastYspecial_compile_time_also));
  T71 = T72;
  return T71;
}

P YevalSastY___main_11___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
DEFCREGS();
  lit_863 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_863));
  lit_864 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_864),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_412 = YPmet(FUNCODEREF(fun_412),YPfalse,T0,ENVNUL,PNUL,sloc(1477));
  T2 = fun_412;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T1);
  lit_865 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_865),VARREF(YevalSastYspecial_define_primitive));
  lit_866 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPsig(LITREF(lit_866),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T3,ENVNUL,PNUL,sloc(1487));
  T5 = fun_413;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T4);
  lit_867 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_867),VARREF(YevalSastYspecial_quasiquote));
  lit_868 = YPPsym((P)"ast-macro-expand");
  lit_869 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPsig(LITREF(lit_869),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_414 = YPmet(FUNCODEREF(fun_ast_macro_expand_414),LITREF(lit_868),T6,ENVNUL,PNUL,sloc(1490));
  T8 = VARREF_OR(YevalSastYast_macro_expand,YPfalse);
  T9 = fun_ast_macro_expand_414;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYast_macro_expand,T7);
  lit_870 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T10 = YPsig(LITREF(lit_870),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_415 = YPmet(FUNCODEREF(fun_415),YPfalse,T10,ENVNUL,PNUL,sloc(1499));
  T12 = fun_415;
  T11 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T12,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T11);
  lit_871 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_871),VARREF(YevalSastYspecial_macro_expand));
  lit_872 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T13 = YPsig(LITREF(lit_872),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T13,ENVNUL,PNUL,sloc(1503));
  T15 = fun_416;
  T14 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T15,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T14);
  lit_873 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_873),VARREF(YevalSastYspecial_syntax_if));
  lit_874 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_874));
  lit_875 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T16 = YPsig(LITREF(lit_875),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_417 = YPmet(FUNCODEREF(fun_417),YPfalse,T16,ENVNUL,PNUL,sloc(1513));
  T18 = fun_417;
  T17 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T18,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T17);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_874),VARREF(YevalSastYspecial_export));
  lit_876 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_876));
  lit_877 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T19 = YPsig(LITREF(lit_877),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_418 = YPmet(FUNCODEREF(fun_418),YPfalse,T19,ENVNUL,PNUL,sloc(1518));
  T21 = fun_418;
  T20 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T21,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T20);
  lit_878 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_878),VARREF(YevalSastYspecial_use_module));
  lit_879 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_879));
  lit_880 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T22 = YPsig(LITREF(lit_880),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_419 = YPmet(FUNCODEREF(fun_419),YPfalse,T22,ENVNUL,PNUL,sloc(1523));
  T24 = fun_419;
  T23 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T24,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T23);
  lit_881 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_881),VARREF(YevalSastYspecial_use_mangle_module));
  lit_882 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_882));
  lit_883 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T25 = YPsig(LITREF(lit_883),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T25,ENVNUL,PNUL,sloc(1528));
  T27 = fun_420;
  T26 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T27,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T26);
  lit_884 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_884),VARREF(YevalSastYspecial_use_include));
  lit_885 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_885));
  lit_886 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T28 = YPsig(LITREF(lit_886),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_421 = YPmet(FUNCODEREF(fun_421),YPfalse,T28,ENVNUL,PNUL,sloc(1533));
  T30 = fun_421;
  T29 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T30,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T29);
  lit_887 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_887),VARREF(YevalSastYspecial_use_library));
  lit_888 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_888));
  lit_889 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T31 = YPsig(LITREF(lit_889),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_422 = YPmet(FUNCODEREF(fun_422),YPfalse,T31,ENVNUL,PNUL,sloc(1538));
  T33 = fun_422;
  T32 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_605),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T33,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T32);
  lit_890 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_890),VARREF(YevalSastYspecial_useSexport_module));
  lit_891 = YPPsym((P)"<transaction>");
  T35 = (P)YPpair(VARREF(YLanyG),Ynil);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_891),T35);
  VARSET(YevalSastYLtransactionG,T34);
  lit_892 = YPPsym((P)"transaction-implemented-bindings");
  lit_893 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_893),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_423 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_423),LITREF(lit_892),T36,ENVNUL,PNUL,sloc(1568));
  T38 = VARREF_OR(YevalSastYtransaction_implemented_bindings,YPfalse);
  T39 = fun_transaction_implemented_bindings_423;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYtransaction_implemented_bindings,T37);
  lit_894 = YPPsym((P)"transaction-implemented-bindings-setter");
  lit_895 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_895),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_424 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_424),LITREF(lit_894),T40,ENVNUL,PNUL,sloc(1568));
  T42 = VARREF_OR(YevalSastYtransaction_implemented_bindings_setter,YPfalse);
  T43 = fun_transaction_implemented_bindings_setter_424;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T41);
  lit_896 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_896),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_425 = YPmet(FUNCODEREF(fun_425),YPfalse,T44,ENVNUL,PNUL,sloc(1568));
  T45 = fun_425;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T45);
  lit_897 = YPPsym((P)"transaction-dependents");
  lit_898 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_898),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_426 = YPmet(FUNCODEREF(fun_transaction_dependents_426),LITREF(lit_897),T46,ENVNUL,PNUL,sloc(1569));
  T48 = VARREF_OR(YevalSastYtransaction_dependents,YPfalse);
  T49 = fun_transaction_dependents_426;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSastYtransaction_dependents,T47);
  lit_899 = YPPsym((P)"transaction-dependents-setter");
  lit_900 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_900),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_427 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_427),LITREF(lit_899),T50,ENVNUL,PNUL,sloc(1569));
  T52 = VARREF_OR(YevalSastYtransaction_dependents_setter,YPfalse);
  T53 = fun_transaction_dependents_setter_427;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYtransaction_dependents_setter,T51);
  lit_901 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_901),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_428 = YPmet(FUNCODEREF(fun_428),YPfalse,T54,ENVNUL,PNUL,sloc(1569));
  T55 = fun_428;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T55);
  VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  lit_902 = YPPsym((P)"transaction-register-implemented-binding");
  lit_903 = YPPlist(1,YPPsym((P)"b"));
  lit_904 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T56 = YPsig(LITREF(lit_903),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_902),T56,ENVNUL,PNUL,sloc(1573));
  T57 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T57);
  lit_905 = YPPsym((P)"transaction-register-dependent");
  lit_906 = YPPlist(1,YPPsym((P)"d"));
  lit_907 = YPsb((P)"Can't register dependent (no subtransaction)");
  T58 = YPsig(LITREF(lit_906),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_905),T58,ENVNUL,PNUL,sloc(1579));
  T59 = YevalSastYtransaction_register_dependent;
  VARSET(YevalSastYtransaction_register_dependent,T59);
  lit_908 = YPPsym((P)"transaction-empty?");
  lit_909 = YPPlist(1,YPPsym((P)"t"));
  T60 = YPsig(LITREF(lit_909),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_908),T60,ENVNUL,PNUL,sloc(1584));
  T61 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T61);
  lit_910 = YPPsym((P)"merge-transactions!");
  lit_911 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_912 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_913 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T64 = YPsig(LITREF(lit_912),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T64,ENVNUL,PNUL,sloc(1599));
  T63 = YPsig(LITREF(lit_913),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_433 = YPmet(FUNCODEREF(fun_433),YPfalse,T63,ENVNUL,PNUL,sloc(1600));
  T62 = YPsig(LITREF(lit_911),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_910),T62,ENVNUL,PNUL,sloc(1588));
  T65 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T65);
  lit_914 = YPPsym((P)"roll-back-transaction");
  lit_915 = YPPlist(1,YPPsym((P)"t"));
  lit_916 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"junk"));
  lit_917 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"junk"));
  T68 = YPsig(LITREF(lit_916),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_435 = YPmet(FUNCODEREF(fun_435),YPfalse,T68,ENVNUL,PNUL,sloc(1605));
  T67 = YPsig(LITREF(lit_917),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_436 = YPmet(FUNCODEREF(fun_436),YPfalse,T67,ENVNUL,PNUL,sloc(1608));
  T66 = YPsig(LITREF(lit_915),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_914),T66,ENVNUL,PNUL,sloc(1603));
  T69 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T69);
  lit_918 = YPPsym((P)"call-with-subtransaction");
  lit_919 = YPPlist(2,YPPsym((P)"module"),YPPsym((P)"thunk"));
  T72 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_438 = YPmet(FUNCODEREF(fun_438),YPfalse,T72,ENVNUL,PNUL,sloc(1614));
  T71 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_439 = YPmet(FUNCODEREF(fun_439),YPfalse,T71,ENVNUL,PNUL,sloc(1626));
  T70 = YPsig(LITREF(lit_919),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_918),T70,ENVNUL,PNUL,sloc(1611));
  T73 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T73);
  lit_920 = YPPlist(1,YPPsym((P)"exp"));
  lit_921 = YPPlist(1,YPPsym((P)"return"));
  lit_922 = YPPsym((P)"x-2359");
  lit_923 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_924 = YPPsym((P)"with-subtransaction");
  T76 = YPsig(LITREF(lit_923),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2359_441 = YPmet(FUNCODEREF(fun_x_2359_441),LITREF(lit_922),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_921),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_442 = YPmet(FUNCODEREF(fun_442),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_920),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_443 = YPmet(FUNCODEREF(fun_443),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T77 = fun_443;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T77);
  lit_925 = YPPsym((P)"objectify-with-subtransaction");
  lit_926 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T79 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_444 = YPmet(FUNCODEREF(fun_444),YPfalse,T79,ENVNUL,PNUL,sloc(1641));
  T78 = YPsig(LITREF(lit_926),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_925),T78,ENVNUL,PNUL,sloc(1640));
  T80 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T80);
  lit_927 = YPPsym((P)"<module-loader>");
  T82 = (P)YPpair(VARREF(YLanyG),Ynil);
  T81 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_927),T82);
  VARSET(YevalSastYLmodule_loaderG,T81);
  lit_928 = YPPsym((P)"module-loader-modules");
  lit_929 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_929),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_446 = YPmet(FUNCODEREF(fun_module_loader_modules_446),LITREF(lit_928),T83,ENVNUL,PNUL,sloc(1665));
  T85 = VARREF_OR(YevalSastYmodule_loader_modules,YPfalse);
  T86 = fun_module_loader_modules_446;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYmodule_loader_modules,T84);
  lit_930 = YPPsym((P)"module-loader-modules-setter");
  lit_931 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_931),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_447 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_447),LITREF(lit_930),T87,ENVNUL,PNUL,sloc(1665));
  T89 = VARREF_OR(YevalSastYmodule_loader_modules_setter,YPfalse);
  T90 = fun_module_loader_modules_setter_447;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYmodule_loader_modules_setter,T88);
  lit_932 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPsig(LITREF(lit_932),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_448 = YPmet(FUNCODEREF(fun_448),YPfalse,T91,ENVNUL,PNUL,sloc(1665));
  T92 = fun_448;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T92);
  lit_933 = YPPsym((P)"module-loader-stack");
  lit_934 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPsig(LITREF(lit_934),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_449 = YPmet(FUNCODEREF(fun_module_loader_stack_449),LITREF(lit_933),T93,ENVNUL,PNUL,sloc(1668));
  T95 = VARREF_OR(YevalSastYmodule_loader_stack,YPfalse);
  T96 = fun_module_loader_stack_449;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYmodule_loader_stack,T94);
  lit_935 = YPPsym((P)"module-loader-stack-setter");
  lit_936 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T99 = YPsig(LITREF(lit_936),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T98 = fun_module_loader_stack_setter_450 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_450),LITREF(lit_935),T99,ENVNUL,PNUL,sloc(1668));
  T102 = VARREF_OR(YevalSastYmodule_loader_stack_setter,YPfalse);
  T103 = fun_module_loader_stack_setter_450;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  T100 = VARSET(YevalSastYmodule_loader_stack_setter,T101);
  T97 = T100;
  return T97;
}

P YevalSastY___main_12___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132;
DEFCREGS();
  lit_937 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_937),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_451 = YPmet(FUNCODEREF(fun_451),YPfalse,T0,ENVNUL,PNUL,sloc(1668));
  T1 = fun_451;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T1);
  lit_938 = YPPsym((P)"<module>");
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  T2 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_938),T3);
  VARSET(YevalSastYLmoduleG,T2);
  lit_939 = YPPsym((P)"module-name");
  lit_940 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_940),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_452 = YPmet(FUNCODEREF(fun_module_name_452),LITREF(lit_939),T4,ENVNUL,PNUL,sloc(1673));
  T6 = VARREF_OR(YevalSastYmodule_name,YPfalse);
  T7 = fun_module_name_452;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYmodule_name,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_941 = YPPsym((P)"module-mangled-name");
  lit_942 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_942),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_453 = YPmet(FUNCODEREF(fun_module_mangled_name_453),LITREF(lit_941),T8,ENVNUL,PNUL,sloc(1674));
  T10 = VARREF_OR(YevalSastYmodule_mangled_name,YPfalse);
  T11 = fun_module_mangled_name_453;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYmodule_mangled_name,T9);
  lit_943 = YPPsym((P)"module-mangled-name-setter");
  lit_944 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T12 = YPsig(LITREF(lit_944),YPPlist(2,T13,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_454 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_454),LITREF(lit_943),T12,ENVNUL,PNUL,sloc(1674));
  T15 = VARREF_OR(YevalSastYmodule_mangled_name_setter,YPfalse);
  T16 = fun_module_mangled_name_setter_454;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSastYmodule_mangled_name_setter,T14);
  lit_945 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_945),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_455 = YPmet(FUNCODEREF(fun_455),YPfalse,T17,ENVNUL,PNUL,sloc(1674));
  T18 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T19 = fun_455;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T18,T19);
  lit_946 = YPPsym((P)"module-mangled-string-name");
  lit_947 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_947),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_456 = YPmet(FUNCODEREF(fun_module_mangled_string_name_456),LITREF(lit_946),T20,ENVNUL,PNUL,sloc(1675));
  T22 = VARREF_OR(YevalSastYmodule_mangled_string_name,YPfalse);
  T23 = fun_module_mangled_string_name_456;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYmodule_mangled_string_name,T21);
  lit_948 = YPPsym((P)"module-mangled-string-name-setter");
  lit_949 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T25 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T24 = YPsig(LITREF(lit_949),YPPlist(2,T25,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_457 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_457),LITREF(lit_948),T24,ENVNUL,PNUL,sloc(1675));
  T27 = VARREF_OR(YevalSastYmodule_mangled_string_name_setter,YPfalse);
  T28 = fun_module_mangled_string_name_setter_457;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T26);
  lit_950 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_950),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_458 = YPmet(FUNCODEREF(fun_458),YPfalse,T29,ENVNUL,PNUL,sloc(1675));
  T30 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T31 = fun_458;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T30,T31);
  lit_951 = YPPsym((P)"module-target-environment");
  lit_952 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_952),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_459 = YPmet(FUNCODEREF(fun_module_target_environment_459),LITREF(lit_951),T32,ENVNUL,PNUL,sloc(1677));
  T34 = VARREF_OR(YevalSastYmodule_target_environment,YPfalse);
  T35 = fun_module_target_environment_459;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSastYmodule_target_environment,T33);
  lit_953 = YPPsym((P)"module-target-environment-setter");
  lit_954 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_954),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_460 = YPmet(FUNCODEREF(fun_module_target_environment_setter_460),LITREF(lit_953),T36,ENVNUL,PNUL,sloc(1677));
  T38 = VARREF_OR(YevalSastYmodule_target_environment_setter,YPfalse);
  T39 = fun_module_target_environment_setter_460;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYmodule_target_environment_setter,T37);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_955 = YPPsym((P)"module-syntax-environment");
  lit_956 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_956),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_461 = YPmet(FUNCODEREF(fun_module_syntax_environment_461),LITREF(lit_955),T40,ENVNUL,PNUL,sloc(1678));
  T42 = VARREF_OR(YevalSastYmodule_syntax_environment,YPfalse);
  T43 = fun_module_syntax_environment_461;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYmodule_syntax_environment,T41);
  lit_957 = YPPsym((P)"module-syntax-environment-setter");
  lit_958 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_958),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_462 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_462),LITREF(lit_957),T44,ENVNUL,PNUL,sloc(1678));
  T46 = VARREF_OR(YevalSastYmodule_syntax_environment_setter,YPfalse);
  T47 = fun_module_syntax_environment_setter_462;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYmodule_syntax_environment_setter,T45);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_959 = YPPsym((P)"%module-exports");
  lit_960 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_960),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_463 = YPmet(FUNCODEREF(fun_Pmodule_exports_463),LITREF(lit_959),T48,ENVNUL,PNUL,sloc(1680));
  T50 = VARREF_OR(YevalSastYPmodule_exports,YPfalse);
  T51 = fun_Pmodule_exports_463;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSastYPmodule_exports,T49);
  lit_961 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_961),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_464 = YPmet(FUNCODEREF(fun_464),YPfalse,T52,ENVNUL,PNUL,sloc(1680));
  T53 = fun_464;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),YPfalse,VARREF(YgooScolsScolYLtabG),T53);
  lit_962 = YPPsym((P)"module-data-processed?");
  lit_963 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_963),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_465 = YPmet(FUNCODEREF(fun_module_data_processedQ_465),LITREF(lit_962),T54,ENVNUL,PNUL,sloc(1681));
  T56 = VARREF_OR(YevalSastYmodule_data_processedQ,YPfalse);
  T57 = fun_module_data_processedQ_465;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYmodule_data_processedQ,T55);
  lit_964 = YPPsym((P)"module-data-processed?-setter");
  lit_965 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_965),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_466 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_466),LITREF(lit_964),T58,ENVNUL,PNUL,sloc(1681));
  T60 = VARREF_OR(YevalSastYmodule_data_processedQ_setter,YPfalse);
  T61 = fun_module_data_processedQ_setter_466;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSastYmodule_data_processedQ_setter,T59);
  lit_966 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_966),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_467 = YPmet(FUNCODEREF(fun_467),YPfalse,T62,ENVNUL,PNUL,sloc(1681));
  T63 = fun_467;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T63);
  lit_967 = YPPsym((P)"module-runtime-data");
  lit_968 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_968),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_468 = YPmet(FUNCODEREF(fun_module_runtime_data_468),LITREF(lit_967),T64,ENVNUL,PNUL,sloc(1682));
  T66 = VARREF_OR(YevalSastYmodule_runtime_data,YPfalse);
  T67 = fun_module_runtime_data_468;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYmodule_runtime_data,T65);
  lit_969 = YPPsym((P)"module-runtime-data-setter");
  lit_970 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_970),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_469 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_469),LITREF(lit_969),T68,ENVNUL,PNUL,sloc(1682));
  T70 = VARREF_OR(YevalSastYmodule_runtime_data_setter,YPfalse);
  T71 = fun_module_runtime_data_setter_469;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYmodule_runtime_data_setter,T69);
  lit_971 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_971),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_470 = YPmet(FUNCODEREF(fun_470),YPfalse,T72,ENVNUL,PNUL,sloc(1682));
  T73 = fun_470;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T73);
  lit_972 = YPPsym((P)"module-transaction");
  lit_973 = YPPlist(1,YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_973),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_471 = YPmet(FUNCODEREF(fun_module_transaction_471),LITREF(lit_972),T74,ENVNUL,PNUL,sloc(1683));
  T76 = VARREF_OR(YevalSastYmodule_transaction,YPfalse);
  T77 = fun_module_transaction_471;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSastYmodule_transaction,T75);
  lit_974 = YPPsym((P)"module-transaction-setter");
  lit_975 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_975),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_472 = YPmet(FUNCODEREF(fun_module_transaction_setter_472),LITREF(lit_974),T78,ENVNUL,PNUL,sloc(1683));
  T80 = VARREF_OR(YevalSastYmodule_transaction_setter,YPfalse);
  T81 = fun_module_transaction_setter_472;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSastYmodule_transaction_setter,T79);
  lit_976 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_976),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_473 = YPmet(FUNCODEREF(fun_473),YPfalse,T82,ENVNUL,PNUL,sloc(1683));
  T83 = fun_473;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T83);
  lit_977 = YPPsym((P)"module-uses-c-files");
  lit_978 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_978),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_474 = YPmet(FUNCODEREF(fun_module_uses_c_files_474),LITREF(lit_977),T84,ENVNUL,PNUL,sloc(1684));
  T86 = VARREF_OR(YevalSastYmodule_uses_c_files,YPfalse);
  T87 = fun_module_uses_c_files_474;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSastYmodule_uses_c_files,T85);
  lit_979 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_979),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_475 = YPmet(FUNCODEREF(fun_475),YPfalse,T88,ENVNUL,PNUL,sloc(1684));
  T89 = fun_475;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_files),YPfalse,VARREF(YgooScolsSvecYLvecG),T89);
  lit_980 = YPPsym((P)"module-uses-c-includes");
  lit_981 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_981),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_476 = YPmet(FUNCODEREF(fun_module_uses_c_includes_476),LITREF(lit_980),T90,ENVNUL,PNUL,sloc(1685));
  T92 = VARREF_OR(YevalSastYmodule_uses_c_includes,YPfalse);
  T93 = fun_module_uses_c_includes_476;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYmodule_uses_c_includes,T91);
  lit_982 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_982),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_477 = YPmet(FUNCODEREF(fun_477),YPfalse,T94,ENVNUL,PNUL,sloc(1685));
  T95 = fun_477;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_includes),YPfalse,VARREF(YgooScolsSvecYLvecG),T95);
  lit_983 = YPPsym((P)"module-uses-c-libraries");
  lit_984 = YPPlist(1,YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_984),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_478 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_478),LITREF(lit_983),T96,ENVNUL,PNUL,sloc(1686));
  T98 = VARREF_OR(YevalSastYmodule_uses_c_libraries,YPfalse);
  T99 = fun_module_uses_c_libraries_478;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSastYmodule_uses_c_libraries,T97);
  lit_985 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_985),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_479 = YPmet(FUNCODEREF(fun_479),YPfalse,T100,ENVNUL,PNUL,sloc(1686));
  T101 = fun_479;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_libraries),YPfalse,VARREF(YgooScolsSvecYLvecG),T101);
  lit_986 = YPPsym((P)"module-exports");
  lit_987 = YPPlist(1,YPPsym((P)"x"));
  T102 = YPsig(LITREF(lit_987),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_480 = YPmet(FUNCODEREF(fun_module_exports_480),LITREF(lit_986),T102,ENVNUL,PNUL,sloc(1688));
  T104 = VARREF_OR(YevalSastYmodule_exports,YPfalse);
  T105 = fun_module_exports_480;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSastYmodule_exports,T103);
  lit_988 = YPPsym((P)"set-module-environments");
  lit_989 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"syntax-env"),YPPsym((P)"target-env"));
  T106 = YPsig(LITREF(lit_989),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_988),T106,ENVNUL,PNUL,sloc(1698));
  T107 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T107);
  lit_990 = YPPsym((P)"do-module-loader-modules");
  lit_991 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"loader"));
  lit_992 = YPPlist(1,YPPsym((P)"mod"));
  T109 = YPsig(LITREF(lit_992),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_482 = YPmet(FUNCODEREF(fun_482),YPfalse,T109,ENVNUL,PNUL,sloc(1706));
  T108 = YPsig(LITREF(lit_991),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_990),T108,ENVNUL,PNUL,sloc(1705));
  T110 = YevalSastYdo_module_loader_modules;
  VARSET(YevalSastYdo_module_loader_modules,T110);
  lit_993 = YPPsym((P)"module-loader-module-type");
  lit_994 = YPPlist(1,YPPsym((P)"loader"));
  T111 = YPsig(LITREF(lit_994),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_484 = YPmet(FUNCODEREF(fun_module_loader_module_type_484),LITREF(lit_993),T111,ENVNUL,PNUL,sloc(1711));
  T113 = VARREF_OR(YevalSastYmodule_loader_module_type,YPfalse);
  T114 = fun_module_loader_module_type_484;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSastYmodule_loader_module_type,T112);
  lit_995 = YPPsym((P)"register-module!");
  lit_996 = YPPlist(2,YPPsym((P)"module-loader"),YPPsym((P)"mod"));
  T115 = YPsig(LITREF(lit_996),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_995),T115,ENVNUL,PNUL,sloc(1715));
  T116 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T116);
  lit_997 = YPPsym((P)"probe-module");
  lit_998 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T117 = YPsig(LITREF(lit_998),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_997),T117,ENVNUL,PNUL,sloc(1721));
  T118 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T118);
  lit_999 = YPPsym((P)"load-and-register-module");
  lit_1000 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_1001 = YPsb((P)"  ");
  lit_1002 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_1003 = YPsb((P)"%s[Loading module %s...\n");
  lit_1004 = YPsb((P)"%s]\n");
  T121 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_487 = YPmet(FUNCODEREF(fun_487),YPfalse,T121,ENVNUL,PNUL,sloc(1742));
  T120 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_488 = YPmet(FUNCODEREF(fun_488),YPfalse,T120,ENVNUL,PNUL,sloc(1743));
  T119 = YPsig(LITREF(lit_1000),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_999),T119,ENVNUL,PNUL,sloc(1726));
  T122 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T122);
  lit_1005 = YPPsym((P)"load-module");
  lit_1006 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T124 = YPsig(LITREF(lit_1006),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T123 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1005),T124,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T123);
  lit_1007 = YPPsym((P)"export-binding!");
  lit_1008 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"name"),YPPsym((P)"binding"));
  lit_1009 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T126 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T125 = YPsig(LITREF(lit_1008),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T126,Ynil);
  YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_1007),T125,ENVNUL,PNUL,sloc(1759));
  T127 = YevalSastYexport_bindingX;
  VARSET(YevalSastYexport_bindingX,T127);
  lit_1010 = YPPsym((P)"binding-native-to?");
  lit_1011 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"module"));
  T130 = YPsig(LITREF(lit_1011),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T129 = YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_1010),T130,ENVNUL,PNUL,sloc(1772));
  T132 = YevalSastYbinding_native_toQ;
  T131 = VARSET(YevalSastYbinding_native_toQ,T132);
  T128 = T131;
  return T128;
}

P YevalSastY___main_13___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99;
DEFCREGS();
  lit_1012 = YPPsym((P)"report-undefined-global-bindings");
  lit_1013 = YPPlist(1,YPPsym((P)"mod"));
  lit_1014 = YPPlist(1,YPPsym((P)"binding"));
  lit_1015 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T1 = YPsig(LITREF(lit_1014),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_492 = YPmet(FUNCODEREF(fun_492),YPfalse,T1,ENVNUL,PNUL,sloc(1778));
  T0 = YPsig(LITREF(lit_1013),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_1012),T0,ENVNUL,PNUL,sloc(1776));
  T2 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T2);
  lit_1016 = YPPsym((P)"compute-transitive-users");
  lit_1017 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_1018 = YPPsym((P)"add-user");
  lit_1019 = YPPlist(1,YPPsym((P)"modname"));
  lit_1020 = YPPlist(1,YPPsym((P)"mod"));
  lit_1021 = YPPlist(1,YPPsym((P)"uses-mod"));
  lit_1022 = YPPlist(1,YPPsym((P)"v"));
  T7 = YPsig(LITREF(lit_1021),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T7,ENVNUL,PNUL,sloc(1797));
  T6 = YPsig(LITREF(lit_1020),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T6,ENVNUL,PNUL,sloc(1795));
  T5 = YPsig(LITREF(lit_1019),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_496 = YPmet(FUNCODEREF(fun_add_user_496),LITREF(lit_1018),T5,ENVNUL,PNUL,sloc(1791));
  T4 = YPsig(LITREF(lit_1022),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_497 = YPmet(FUNCODEREF(fun_497),YPfalse,T4,ENVNUL,PNUL,sloc(1803));
  T3 = YPsig(LITREF(lit_1017),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_1016),T3,ENVNUL,PNUL,sloc(1788));
  T8 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T8);
  lit_1023 = YPPsym((P)"remove-module-internal!");
  lit_1024 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  T9 = YPsig(LITREF(lit_1024),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_1023),T9,ENVNUL,PNUL,sloc(1808));
  T10 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T10);
  lit_1025 = YPPsym((P)"remove-modules-by-name!");
  lit_1026 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_1027 = YPPlist(1,YPPsym((P)"modname"));
  T13 = YPsig(LITREF(lit_1027),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_500 = YPmet(FUNCODEREF(fun_500),YPfalse,T13,ENVNUL,PNUL,sloc(1815));
  T12 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T11 = YPsig(LITREF(lit_1026),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T12,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_1025),T11,ENVNUL,PNUL,sloc(1813));
  T14 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T14);
  lit_1028 = YPPsym((P)"module-name-to-relpath");
  lit_1029 = YPPlist(1,YPPsym((P)"name"));
  T15 = YPsig(LITREF(lit_1029),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_1028),T15,ENVNUL,PNUL,sloc(1823));
  T16 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T16);
  lit_1030 = YPPsym((P)"install-initial-bindings");
  lit_1031 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_1032 = YPPlist(1,YPPsym((P)"name"));
  lit_1033 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T18 = YPsig(LITREF(lit_1032),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_503 = YPmet(FUNCODEREF(fun_503),YPfalse,T18,ENVNUL,PNUL,sloc(1834));
  T17 = YPsig(LITREF(lit_1031),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_1030),T17,ENVNUL,PNUL,sloc(1830));
  T19 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T19);
  lit_1034 = YPPsym((P)"fab-static-global-environment");
  lit_1035 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"module-loader"),YPPsym((P)"allow-foreign-names?"));
  T20 = YPsig(LITREF(lit_1035),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_1034),T20,ENVNUL,PNUL,sloc(1878));
  T21 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T21);
  lit_1036 = YPPsym((P)"fab-subset-environment");
  lit_1037 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"src-module"),YPPsym((P)"excluded"));
  lit_1038 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"binding"));
  T23 = YPsig(LITREF(lit_1038),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_506 = YPmet(FUNCODEREF(fun_506),YPfalse,T23,ENVNUL,PNUL,sloc(1899));
  T22 = YPsig(LITREF(lit_1037),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_1036),T22,ENVNUL,PNUL,sloc(1892));
  T24 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T24);
  lit_1039 = YPPsym((P)"<runtime-module-loader>");
  T26 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T25 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_1039),T26);
  VARSET(YevalSastYLruntime_module_loaderG,T25);
  DYNDEFSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_1040 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_1041 = YPsb((P)"Unable to find module %s");
  T31 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_508 = YPmet(FUNCODEREF(fun_508),YPfalse,T31,ENVNUL,PNUL,sloc(1935));
  T30 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_509 = YPmet(FUNCODEREF(fun_509),YPfalse,T30,ENVNUL,PNUL,sloc(1935));
  T29 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_510 = YPmet(FUNCODEREF(fun_510),YPfalse,T29,ENVNUL,PNUL,sloc(1932));
  T28 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_511 = YPmet(FUNCODEREF(fun_511),YPfalse,T28,ENVNUL,PNUL,sloc(1951));
  T27 = YPsig(LITREF(lit_1040),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_512 = YPmet(FUNCODEREF(fun_load_module_512),LITREF(lit_1005),T27,ENVNUL,PNUL,sloc(1922));
  T33 = VARREF_OR(YevalSastYload_module,YPfalse);
  T34 = fun_load_module_512;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSastYload_module,T32);
  T35 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T35);
  lit_1042 = YPPsym((P)"runtime-module-loader");
  T36 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_1042),T36,ENVNUL,PNUL,sloc(1954));
  T37 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T37);
  lit_1043 = YPPsym((P)"runtime-module");
  lit_1044 = YPPlist(1,YPPsym((P)"modname"));
  T38 = YPsig(LITREF(lit_1044),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_1043),T38,ENVNUL,PNUL,sloc(1955));
  T39 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T39);
  lit_1045 = YPPsym((P)"runtime-environment");
  lit_1046 = YPPlist(1,YPPsym((P)"modname"));
  T40 = YPsig(LITREF(lit_1046),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_1045),T40,ENVNUL,PNUL,sloc(1957));
  T41 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T41);
  lit_1047 = YPPsym((P)"runtime-core-environment");
  lit_1048 = YPPlist(1,YPPsym((P)"modname"));
  T42 = YPsig(LITREF(lit_1048),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_1047),T42,ENVNUL,PNUL,sloc(1961));
  T43 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T43);
  lit_1049 = YPPsym((P)"unchecked-runtime-environment");
  lit_1050 = YPPlist(1,YPPsym((P)"modname"));
  T44 = YPsig(LITREF(lit_1050),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_1049),T44,ENVNUL,PNUL,sloc(1963));
  T45 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T45);
  lit_1051 = YPPsym((P)"reloader-do-create-module");
  lit_1052 = YPPlist(2,YPPsym((P)"modname"),YPPsym((P)"data"));
  T46 = YPsig(LITREF(lit_1052),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_1051),T46,ENVNUL,PNUL,sloc(1972));
  T47 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T47);
  lit_1053 = YPPsym((P)"reloader-do-use-module");
  lit_1054 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"uses"));
  T48 = YPsig(LITREF(lit_1054),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_1053),T48,ENVNUL,PNUL,sloc(1983));
  T49 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T49);
  lit_1055 = YPPsym((P)"reloader-do-import");
  lit_1056 = YPPlist(4,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"from-mod"),YPPsym((P)"original-name"));
  lit_1057 = YPsb((P)"Can't find %s from %s for %s\n");
  T50 = YPsig(LITREF(lit_1056),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_1055),T50,ENVNUL,PNUL,sloc(1986));
  T51 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T51);
  lit_1058 = YPPsym((P)"process-module-data");
  lit_1059 = YPPlist(1,YPPsym((P)"module"));
  T52 = YPsig(LITREF(lit_1059),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_1058),T52,ENVNUL,PNUL,sloc(1996));
  T53 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T53);
  lit_1060 = YPPsym((P)"ensure-module-data");
  lit_1061 = YPPlist(1,YPPsym((P)"module"));
  T54 = YPsig(LITREF(lit_1061),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_1060),T54,ENVNUL,PNUL,sloc(2001));
  T55 = YevalSastYensure_module_data;
  VARSET(YevalSastYensure_module_data,T55);
  lit_1062 = YPPsym((P)"reloader-do-runtime-binding");
  lit_1063 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T56 = YPsig(LITREF(lit_1063),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_1062),T56,ENVNUL,PNUL,sloc(2007));
  T57 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T57);
  lit_1064 = YPPsym((P)"reloader-do-dynamic-binding");
  lit_1065 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T58 = YPsig(LITREF(lit_1065),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_dynamic_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_dynamic_binding),LITREF(lit_1064),T58,ENVNUL,PNUL,sloc(2016));
  T59 = YevalSastYreloader_do_dynamic_binding;
  VARSET(YevalSastYreloader_do_dynamic_binding,T59);
  lit_1066 = YPPsym((P)"reloader-do-other-binding");
  lit_1067 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T60 = YPsig(LITREF(lit_1067),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_1066),T60,ENVNUL,PNUL,sloc(2029));
  T61 = YevalSastYreloader_do_other_binding;
  VARSET(YevalSastYreloader_do_other_binding,T61);
  lit_1068 = YPPsym((P)"reloader-do-export");
  lit_1069 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"as-name"));
  lit_1070 = YPsb((P)"Can't find %s in %s\n");
  T62 = YPsig(LITREF(lit_1069),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_1068),T62,ENVNUL,PNUL,sloc(2037));
  T63 = YevalSastYreloader_do_export;
  VARSET(YevalSastYreloader_do_export,T63);
  lit_1071 = YPPsym((P)"reload-modules");
  T64 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_1071),T64,ENVNUL,PNUL,sloc(2044));
  T65 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T65);
  lit_1072 = YPPsym((P)"install-magic-bindings");
  lit_1073 = YPPlist(1,YPPsym((P)"env"));
  lit_1074 = YPPlist(1,YPPsym((P)"binding"));
  T67 = YPsig(LITREF(lit_1074),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_528 = YPmet(FUNCODEREF(fun_528),YPfalse,T67,ENVNUL,PNUL,sloc(2056));
  T66 = YPsig(LITREF(lit_1073),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_1072),T66,ENVNUL,PNUL,sloc(2054));
  T68 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T68);
  lit_1075 = YPPsym((P)"reload-macros");
  T69 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_1075),T69,ENVNUL,PNUL,sloc(2062));
  T70 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T70);
  lit_1076 = YPPsym((P)"install-interpreter-hacks");
  lit_1077 = YPPlist(1,YPPsym((P)"env"));
  T71 = YPsig(LITREF(lit_1077),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_1076),T71,ENVNUL,PNUL,sloc(2069));
  T72 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T72);
  lit_1078 = YPPsym((P)"init-runtime");
  T73 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_1078),T73,ENVNUL,PNUL,sloc(2072));
  T74 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T74);
  lit_1079 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_1079));
  lit_1080 = YPPsym((P)"fab-syntax-environment");
  lit_1081 = YPPlist(1,YPPsym((P)"module"));
  lit_1082 = YPPsym((P)"goo");
  T75 = YPsig(LITREF(lit_1081),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_1080),T75,ENVNUL,PNUL,sloc(2096));
  T76 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T76);
  lit_1083 = YPPsym((P)"fab-g2c-module");
  lit_1084 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T77 = YPsig(LITREF(lit_1084),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_1083),T77,ENVNUL,PNUL,sloc(2101));
  T78 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T78);
  lit_1085 = YPPsym((P)"init-g2c-boot-environment");
  lit_1086 = YPPlist(1,YPPsym((P)"env"));
  T79 = YPsig(LITREF(lit_1086),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_1085),T79,ENVNUL,PNUL,sloc(2114));
  T80 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T80);
  lit_1087 = YPPsym((P)"init-g2c-regular-environment");
  lit_1088 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T81 = YPsig(LITREF(lit_1088),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_1087),T81,ENVNUL,PNUL,sloc(2120));
  T82 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T82);
  lit_1089 = YPPsym((P)"init-ast");
  T83 = YPsig(LITREF(lit_646),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_1089),T83,ENVNUL,PNUL,sloc(2129));
  T84 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T84);
  lit_1090 = YPPsym((P)"do-static-global-bindings");
  lit_1091 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T85 = YPsig(LITREF(lit_1091),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_1090),T85,ENVNUL,PNUL,sloc(2133));
  T86 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T86);
  lit_1092 = YPPsym((P)"do-named-static-global-bindings");
  lit_1093 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T87 = YPsig(LITREF(lit_1093),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_1092),T87,ENVNUL,PNUL,sloc(2140));
  T88 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T88);
  lit_1094 = YPPsym((P)"ast-contains-fun?");
  lit_1095 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPsig(LITREF(lit_1095),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_540 = YPmet(FUNCODEREF(fun_ast_contains_funQ_540),LITREF(lit_1094),T89,ENVNUL,PNUL,sloc(2149));
  T91 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T92 = fun_ast_contains_funQ_540;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YevalSastYast_contains_funQ,T90);
  lit_1096 = YPPlist(1,YPPsym((P)"x"));
  lit_1097 = YPPlist(1,YPPsym((P)"return"));
  lit_1098 = YPPsym((P)"walk");
  lit_1099 = YPPlist(1,YPPsym((P)"y"));
  T95 = YPsig(LITREF(lit_1099),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_541 = YPmet(FUNCODEREF(fun_walk_541),LITREF(lit_1098),T95,ENVNUL,PNUL,sloc(2154));
  T94 = YPsig(LITREF(lit_1097),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_542 = YPmet(FUNCODEREF(fun_542),YPfalse,T94,ENVNUL,PNUL,sloc(2153));
  T93 = YPsig(LITREF(lit_1096),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_543 = YPmet(FUNCODEREF(fun_ast_contains_funQ_543),LITREF(lit_1094),T93,ENVNUL,PNUL,sloc(2152));
  T97 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T98 = fun_ast_contains_funQ_543;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSastYast_contains_funQ,T96);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T99 = YPfalse;
  return T99;
}

P YevalSastY___main_14___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSsystem},
  {&module_info_gooScolsSlst},
  {&module_info_gooSioSread},
  {&module_info_evalSsyntax},
  {&module_info_evalSdependency},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"dependency-empty?", &module_info_evalSdependency, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"object-parents", &module_info_gooSclass, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"$empty-dependency", &module_info_evalSdependency, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"binding-type-setter", CVAR, &YevalSastYbinding_type_setter},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"binding-name-setter", CVAR, &YevalSastYbinding_name_setter},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"module-syntax-environment-setter", CVAR, &YevalSastYmodule_syntax_environment_setter},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"global-box-value", CVAR, &YevalSastYglobal_box_value},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"*runtime-module-loader*", CVAR, &YevalSastYTruntime_module_loaderT},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"module-runtime-data-setter", CVAR, &YevalSastYmodule_runtime_data_setter},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"<module>", CVAR, &YevalSastYLmoduleG},
  {"binding-locative", CVAR, &YevalSastYbinding_locative},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"<static-environment>", CVAR, &YevalSastYLstatic_environmentG},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"module-mangled-string-name", CVAR, &YevalSastYmodule_mangled_string_name},
  {"environment-module-loader-setter", CVAR, &YevalSastYenvironment_module_loader_setter},
  {"fab-subset-environment", CVAR, &YevalSastYfab_subset_environment},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"fab-static-global-environment", CVAR, &YevalSastYfab_static_global_environment},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"insert-and-mangle-global!", CVAR, &YevalSastYinsert_and_mangle_globalX},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"<binding-name>", CVAR, &YevalSastYLbinding_nameG},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"frame-bindings", CVAR, &YevalSastYframe_bindings},
  {"program-line-setter", CVAR, &YevalSastYprogram_line_setter},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"module-runtime-data", CVAR, &YevalSastYmodule_runtime_data},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"module-syntax-environment", CVAR, &YevalSastYmodule_syntax_environment},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"*now-rt-env*", DVAR, &YevalSastYTnow_rt_envT},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"binding-inferred-type-setter", CVAR, &YevalSastYbinding_inferred_type_setter},
  {"environment-next-setter", CVAR, &YevalSastYenvironment_next_setter},
  {"binding-prop", CVAR, &YevalSastYbinding_prop},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"binding-kind", CVAR, &YevalSastYbinding_kind},
  {"$sequential-empty", CVAR, &YevalSastYDsequential_empty},
  {"unchecked-runtime-environment", CVAR, &YevalSastYunchecked_runtime_environment},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"---main-13---", PVAR, NULL},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"environment-module", CVAR, &YevalSastYenvironment_module},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"---main-7---", PVAR, NULL},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"with-subtransaction", PVAR, NULL},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"transaction-dependents-setter", CVAR, &YevalSastYtransaction_dependents_setter},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"module-mangled-name-setter", CVAR, &YevalSastYmodule_mangled_name_setter},
  {"binding-native-to?", CVAR, &YevalSastYbinding_native_toQ},
  {"binding-info-setter", CVAR, &YevalSastYbinding_info_setter},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"environment-uses-modules-setter", CVAR, &YevalSastYenvironment_uses_modules_setter},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"transaction-implemented-bindings", CVAR, &YevalSastYtransaction_implemented_bindings},
  {"objectify-define-property", CVAR, &YevalSastYobjectify_define_property},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"---main-4---", PVAR, NULL},
  {"binding-info", CVAR, &YevalSastYbinding_info},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"module-name-to-relpath", CVAR, &YevalSastYmodule_name_to_relpath},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"<static-empty-environment>", CVAR, &YevalSastYLstatic_empty_environmentG},
  {"$functions-empty", CVAR, &YevalSastYDfunctions_empty},
  {"module-transaction-setter", CVAR, &YevalSastYmodule_transaction_setter},
  {"module-data-processed?-setter", CVAR, &YevalSastYmodule_data_processedQ_setter},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"merge-transactions!", CVAR, &YevalSastYmerge_transactionsX},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"%module-exports", CVAR, &YevalSastYPmodule_exports},
  {"---main-10---", PVAR, NULL},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"module-target-environment", CVAR, &YevalSastYmodule_target_environment},
  {"module-loader-stack", CVAR, &YevalSastYmodule_loader_stack},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"module-loader-stack-setter", CVAR, &YevalSastYmodule_loader_stack_setter},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"---main-6---", PVAR, NULL},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"binding-type", CVAR, &YevalSastYbinding_type},
  {"---main-8---", PVAR, NULL},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"binding-handler-setter", CVAR, &YevalSastYbinding_handler_setter},
  {"$fab-list-empty", CVAR, &YevalSastYDfab_list_empty},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"do-static-global-bindings", CVAR, &YevalSastYdo_static_global_bindings},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"bind-exit-light?-setter", CVAR, &YevalSastYbind_exit_lightQ_setter},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"ast-<bot>", CVAR, &YevalSastYast_LbotG},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"find-syntax-environment", CVAR, &YevalSastYfind_syntax_environment},
  {"find-environment-module", CVAR, &YevalSastYfind_environment_module},
  {"binding-name", CVAR, &YevalSastYbinding_name},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"---main-14---", PVAR, NULL},
  {"bind-exit-light?", CVAR, &YevalSastYbind_exit_lightQ},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"---main-11---", PVAR, NULL},
  {"<module-binding>", CVAR, &YevalSastYLmodule_bindingG},
  {"environment-module-loader", CVAR, &YevalSastYenvironment_module_loader},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"ftype", CVAR, &YevalSastYftype},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"program-line", CVAR, &YevalSastYprogram_line},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"binding-prop-setter", CVAR, &YevalSastYbinding_prop_setter},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"insert-global!", CVAR, &YevalSastYinsert_globalX},
  {"binding-free?-setter", CVAR, &YevalSastYbinding_freeQ_setter},
  {"transaction-empty?", CVAR, &YevalSastYtransaction_emptyQ},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"binding-inferred-type", CVAR, &YevalSastYbinding_inferred_type},
  {"environment-next", CVAR, &YevalSastYenvironment_next},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"function-loop-setter", CVAR, &YevalSastYfunction_loop_setter},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"install-initial-bindings", CVAR, &YevalSastYinstall_initial_bindings},
  {"environment-bindings-setter", CVAR, &YevalSastYenvironment_bindings_setter},
  {"environment-allows-foreign-names?", CVAR, &YevalSastYenvironment_allows_foreign_namesQ},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"compute-transitive-users", CVAR, &YevalSastYcompute_transitive_users},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"module-mangled-string-name-setter", CVAR, &YevalSastYmodule_mangled_string_name_setter},
  {"$arguments-empty", CVAR, &YevalSastYDarguments_empty},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"environment-uses-modules", CVAR, &YevalSastYenvironment_uses_modules},
  {"objectify-function-using", CVAR, &YevalSastYobjectify_function_using},
  {"functions", CVAR, &YevalSastYfunctions},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"---main-9---", PVAR, NULL},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"loop-body", CVAR, &YevalSastYloop_body},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"module-data-processed?", CVAR, &YevalSastYmodule_data_processedQ},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"<global-box>", CVAR, &YevalSastYLglobal_boxG},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"<static-local-environment>", CVAR, &YevalSastYLstatic_local_environmentG},
  {"module-loader-module-type", CVAR, &YevalSastYmodule_loader_module_type},
  {"<module-loader>", CVAR, &YevalSastYLmodule_loaderG},
  {"application-loop-setter", CVAR, &YevalSastYapplication_loop_setter},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"loop-continue", CVAR, &YevalSastYloop_continue},
  {"*current-subtransaction*", CVAR, &YevalSastYTcurrent_subtransactionT},
  {"remove-module-internal!", CVAR, &YevalSastYremove_module_internalX},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"runtime-module-loader", CVAR, &YevalSastYruntime_module_loader},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"loop-continue-setter", CVAR, &YevalSastYloop_continue_setter},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"<runtime-module-loader>", CVAR, &YevalSastYLruntime_module_loaderG},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"transaction-register-dependent", CVAR, &YevalSastYtransaction_register_dependent},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"with-dependent", PVAR, NULL},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"loop-body-setter", CVAR, &YevalSastYloop_body_setter},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"binding-handler", CVAR, &YevalSastYbinding_handler},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"module-exports", CVAR, &YevalSastYmodule_exports},
  {"binding-mangled-name", CVAR, &YevalSastYbinding_mangled_name},
  {"<loop-application>", CVAR, &YevalSastYLloop_applicationG},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"module-loader-modules", CVAR, &YevalSastYmodule_loader_modules},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"---main-2---", PVAR, NULL},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"reloader-do-other-binding", CVAR, &YevalSastYreloader_do_other_binding},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"special-define-constant", CVAR, &YevalSastYspecial_define_constant},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"binding-global-box", CVAR, &YevalSastYbinding_global_box},
  {"transaction-implemented-bindings-setter", CVAR, &YevalSastYtransaction_implemented_bindings_setter},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"runtime-core-environment", CVAR, &YevalSastYruntime_core_environment},
  {"reloader-do-export", CVAR, &YevalSastYreloader_do_export},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"incf-ref-count", CVAR, &YevalSastYincf_ref_count},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"loop-bindings-setter", CVAR, &YevalSastYloop_bindings_setter},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"binding-closed-over?-setter", CVAR, &YevalSastYbinding_closed_overQ_setter},
  {"function-loop", CVAR, &YevalSastYfunction_loop},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"insert-globals!", CVAR, &YevalSastYinsert_globalsX},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"environment-bindings", CVAR, &YevalSastYenvironment_bindings},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"import-and-mangle-global!", CVAR, &YevalSastYimport_and_mangle_globalX},
  {"binding-module-setter", CVAR, &YevalSastYbinding_module_setter},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"define-magic-binding", PVAR, NULL},
  {"load-and-register-module", CVAR, &YevalSastYload_and_register_module},
  {"pairize", CVAR, &YevalSastYpairize},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"function-ref-count-setter", CVAR, &YevalSastYfunction_ref_count_setter},
  {"remove-modules-by-name!", CVAR, &YevalSastYremove_modules_by_nameX},
  {"transaction-register-implemented-binding", CVAR, &YevalSastYtransaction_register_implemented_binding},
  {"module-uses-c-libraries", CVAR, &YevalSastYmodule_uses_c_libraries},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"report-undefined-global-bindings", CVAR, &YevalSastYreport_undefined_global_bindings},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"export-binding!", CVAR, &YevalSastYexport_bindingX},
  {"binding-locative-setter", CVAR, &YevalSastYbinding_locative_setter},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"$empty-static-environment", CVAR, &YevalSastYDempty_static_environment},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"%%%macro", CVAR, &YevalSastYPPPmacro},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"req-sig-specs", CVAR, &YevalSastYreq_sig_specs},
  {"<binding>", CVAR, &YevalSastYLbindingG},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"application-loop", CVAR, &YevalSastYapplication_loop},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"namespace-error", CVAR, &YevalSastYnamespace_error},
  {"binding-free?", CVAR, &YevalSastYbinding_freeQ},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"runtime-module", CVAR, &YevalSastYruntime_module},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"probe-module", CVAR, &YevalSastYprobe_module},
  {"<loop>", CVAR, &YevalSastYLloopG},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"special-prop!", CVAR, &YevalSastYspecial_propX},
  {"do-named-static-global-bindings", CVAR, &YevalSastYdo_named_static_global_bindings},
  {"<transaction>", CVAR, &YevalSastYLtransactionG},
  {"module-transaction", CVAR, &YevalSastYmodule_transaction},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"def-programs", PVAR, NULL},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"binding-module-name", CVAR, &YevalSastYbinding_module_name},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"env-object-name", CVAR, &YevalSastYenv_object_name},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"loop-bindings", CVAR, &YevalSastYloop_bindings},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"module-uses-c-includes", CVAR, &YevalSastYmodule_uses_c_includes},
  {"find-static-global-environment", CVAR, &YevalSastYfind_static_global_environment},
  {"import-global!", CVAR, &YevalSastYimport_globalX},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"binding-global-box-setter", CVAR, &YevalSastYbinding_global_box_setter},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"---main-0---", PVAR, NULL},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"<namespace-error>", CVAR, &YevalSastYLnamespace_errorG},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"$goo-boot-module-name", CVAR, &YevalSastYDgoo_boot_module_name},
  {"runtime-environment", CVAR, &YevalSastYruntime_environment},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"do-module-loader-modules", CVAR, &YevalSastYdo_module_loader_modules},
  {"reloader-do-import", CVAR, &YevalSastYreloader_do_import},
  {"module-uses-c-files", CVAR, &YevalSastYmodule_uses_c_files},
  {"---main-3---", PVAR, NULL},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"module-loader-modules-setter", CVAR, &YevalSastYmodule_loader_modules_setter},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"load-in", CVAR, &YevalSastYload_in},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"---main-1---", PVAR, NULL},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"ast-contains-fun?", CVAR, &YevalSastYast_contains_funQ},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"reloader-do-runtime-binding", CVAR, &YevalSastYreloader_do_runtime_binding},
  {"reloader-do-dynamic-binding", CVAR, &YevalSastYreloader_do_dynamic_binding},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"reload-modules", CVAR, &YevalSastYreload_modules},
  {"<static-global-environment>", CVAR, &YevalSastYLstatic_global_environmentG},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"---main-5---", PVAR, NULL},
  {"---main-12---", PVAR, NULL},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"reloader-do-use-module", CVAR, &YevalSastYreloader_do_use_module},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"process-module-data", CVAR, &YevalSastYprocess_module_data},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"ensure-module-data", CVAR, &YevalSastYensure_module_data},
  {"binding-kind-setter", CVAR, &YevalSastYbinding_kind_setter},
  {"bound?-default", CVAR, &YevalSastYboundQ_default},
  {"bound?-default-setter", CVAR, &YevalSastYboundQ_default_setter},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"binding-closed-over?", CVAR, &YevalSastYbinding_closed_overQ},
  {"arguments", CVAR, &YevalSastYarguments},
  {"find-binding", CVAR, &YevalSastYfind_binding},
  {"environment-module-setter", CVAR, &YevalSastYenvironment_module_setter},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"load-module", CVAR, &YevalSastYload_module},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"$free-environment-empty", CVAR, &YevalSastYDfree_environment_empty},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"binding-module", CVAR, &YevalSastYbinding_module},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"sequential", CVAR, &YevalSastYsequential},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"transaction-dependents", CVAR, &YevalSastYtransaction_dependents},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"module-mangled-name", CVAR, &YevalSastYmodule_mangled_name},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"function-ref-count", CVAR, &YevalSastYfunction_ref_count},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"call-with-subtransaction", CVAR, &YevalSastYcall_with_subtransaction},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"set-module-environments", CVAR, &YevalSastYset_module_environments},
  {"binding-mangled-name-setter", CVAR, &YevalSastYbinding_mangled_name_setter},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"register-module!", CVAR, &YevalSastYregister_moduleX},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"reloader-do-create-module", CVAR, &YevalSastYreloader_do_create_module},
  {"global-box-value-setter", CVAR, &YevalSastYglobal_box_value_setter},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"module-target-environment-setter", CVAR, &YevalSastYmodule_target_environment_setter},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"module-name", CVAR, &YevalSastYmodule_name},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"roll-back-transaction", CVAR, &YevalSastYroll_back_transaction},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"binding-type-setter", NULL},
  {"<application>", NULL},
  {"monitor-main-thunk", NULL},
  {"<functions>", NULL},
  {"<loop-application>", NULL},
  {"signature-arity-setter", NULL},
  {"global-box-value", NULL},
  {"remove-modules-by-name!", NULL},
  {"application-arguments", NULL},
  {"binding-dotted?", NULL},
  {"binding-locative", NULL},
  {"<local-binding>", NULL},
  {"<magic-reference>", NULL},
  {"assignment-reference", NULL},
  {"application-function", NULL},
  {"locals-bindings-setter", NULL},
  {"application-tail?", NULL},
  {"fix-let-body", NULL},
  {"function-nary?", NULL},
  {"program-type-setter", NULL},
  {"locals-functions-setter", NULL},
  {"locals-body-setter", NULL},
  {"reference-called-function?-setter", NULL},
  {"<fix-let>", NULL},
  {"binding-inferred-type-setter", NULL},
  {"binding-kind", NULL},
  {"unchecked-runtime-environment", NULL},
  {"function-registers-setter", NULL},
  {"fix-let-types-setter", NULL},
  {"fix-let-arguments", NULL},
  {"fix-let-bindings", NULL},
  {"<ast-primitive-definition>", NULL},
  {"environment-module", NULL},
  {"def-list", NULL},
  {"monitor-handler", NULL},
  {"<unwind-protect>", NULL},
  {"as-lst", NULL},
  {"<ast-primitive>", NULL},
  {"binding-native-to?", NULL},
  {"binding-info-setter", NULL},
  {"<bound?>", NULL},
  {"binding-dynamic-extent?", NULL},
  {"<monitor>", NULL},
  {"unwind-protect-protected-thunk", NULL},
  {"<dynamic-reference>", NULL},
  {"function-index-setter", NULL},
  {"<program>", NULL},
  {"function-frame-len", NULL},
  {"unwind-protect-cleanup-thunk", NULL},
  {"<assignment>", NULL},
  {"module-target-environment", NULL},
  {"bound?-reference", NULL},
  {"module-mangled-string-name", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"signature-nary?-setter", NULL},
  {"binding-mutable?", NULL},
  {"binding-value", NULL},
  {"assignment-form", NULL},
  {"monitor-test", NULL},
  {"<ast-method>", NULL},
  {"<bind-exit>", NULL},
  {"set-module-environments", NULL},
  {"monitor-type", NULL},
  {"reference-binding", NULL},
  {"binding-type", NULL},
  {"application-binding", NULL},
  {"module-syntax-environment", NULL},
  {"<immediate-constant>", NULL},
  {"bind-exit-main-fun", NULL},
  {"signature-arity", NULL},
  {"monitor-info", NULL},
  {"module-mangled-name-setter", NULL},
  {"<locals>", NULL},
  {"find-environment-module", NULL},
  {"binding-name", NULL},
  {"module-binding", NULL},
  {"<runtime-reference>", NULL},
  {"binding-mangled-name-setter", NULL},
  {"bind-exit-light?", NULL},
  {"locals-body", NULL},
  {"<module-binding>", NULL},
  {"locals-bindings", NULL},
  {"<compile-time>", NULL},
  {"<regular-application>", NULL},
  {"program-line", NULL},
  {"<arguments>", NULL},
  {"<dynamic-definition>", NULL},
  {"locals-functions", NULL},
  {"reference-called-function?", NULL},
  {"process-closed-application", NULL},
  {"binding-inferred-type", NULL},
  {"<global-box>", NULL},
  {"compile-time-program", NULL},
  {"<free-environment>", NULL},
  {"<module-binding-reference>", NULL},
  {"function-registers", NULL},
  {"signature-specs-setter", NULL},
  {"binding-index-setter", NULL},
  {"function-loop-setter", NULL},
  {"function-bindings", NULL},
  {"install-initial-bindings", NULL},
  {"function-signature-setter", NULL},
  {"<module>", NULL},
  {"<reference>", NULL},
  {"binding-info", NULL},
  {"environment-uses-modules", NULL},
  {"ast-walk!", NULL},
  {"<real-reference>", NULL},
  {"<ast-macro-definition>", NULL},
  {"ast-evaluate", NULL},
  {"signature-bindings-setter", NULL},
  {"signature-names-setter", NULL},
  {"<ast-function>", NULL},
  {"module-loader-module-type", NULL},
  {"<fab-list>", NULL},
  {"%%macro", NULL},
  {"<module-loader>", NULL},
  {"$goo-boot-module-name", NULL},
  {"fab-g2c-module", NULL},
  {"module-exports", NULL},
  {"loop-continue-setter", NULL},
  {"loop-bindings-setter", NULL},
  {"<passive-program>", NULL},
  {"fix-let-types", NULL},
  {"init-ast", NULL},
  {"<ast-embodied-function>", NULL},
  {"<constant>", NULL},
  {"function-free-setter", NULL},
  {"module-mangled-name", NULL},
  {"ast-walk", NULL},
  {"loop-body-setter", NULL},
  {"binding-mangled-name", NULL},
  {"<static-module-binding-reference>", NULL},
  {"<predefined-application>", NULL},
  {"<ast-generic>", NULL},
  {"<raw-constant>", NULL},
  {"constant-value", NULL},
  {"binding-global-box", NULL},
  {"free-environment", NULL},
  {"constant-index", NULL},
  {"<computed-program>", NULL},
  {"<definition>", NULL},
  {"<runtime-assignment>", NULL},
  {"signature-specs", NULL},
  {"objectify-signature", NULL},
  {"application-known?-setter", NULL},
  {"binding-index", NULL},
  {"binding-closed-over?-setter", NULL},
  {"module-name-to-relpath", NULL},
  {"function-signature", NULL},
  {"environment-bindings", NULL},
  {"function-body-setter", NULL},
  {"function-ref-count-setter", NULL},
  {"function-temporaries-setter", NULL},
  {"module-uses-c-libraries", NULL},
  {"<ast-signature>", NULL},
  {"ast-define-binding", NULL},
  {"report-undefined-global-bindings", NULL},
  {"<sequential>", NULL},
  {"binding-locative-setter", NULL},
  {"signature-bindings", NULL},
  {"program-register-setter", NULL},
  {"signature-names", NULL},
  {"req-sig-specs", NULL},
  {"<binding>", NULL},
  {"application-loop", NULL},
  {"function-loop", NULL},
  {"objectify-with-subtransaction", NULL},
  {"function-source-setter", NULL},
  {"assignment-binding", NULL},
  {"def-programs", NULL},
  {"<loop>", NULL},
  {"function-index", NULL},
  {"<programs>", NULL},
  {"binding-module-name", NULL},
  {"loop-continue", NULL},
  {"function-debug-name-setter", NULL},
  {"env-object-name", NULL},
  {"sequentialize", NULL},
  {"loop-bindings", NULL},
  {"module-uses-c-includes", NULL},
  {"signature-value", NULL},
  {"<alternative>", NULL},
  {"function-binding", NULL},
  {"global-box-value-setter", NULL},
  {"function-free", NULL},
  {"reference-frame-offset", NULL},
  {"<local-reference>", NULL},
  {"loop-body", NULL},
  {"signature-nary?", NULL},
  {"signature-value-setter", NULL},
  {"alternative-alternant", NULL},
  {"runtime-environment", NULL},
  {"alternative-condition", NULL},
  {"do-module-loader-modules", NULL},
  {"module-uses-c-files", NULL},
  {"fix-let-body-setter", NULL},
  {"do-static-global-bindings", NULL},
  {"ast-contains-fun?", NULL},
  {"binding-dotted?-setter", NULL},
  {"alternative-consequent", NULL},
  {"function-adjectives", NULL},
  {"<static-global-environment>", NULL},
  {"load-in", NULL},
  {"program-type", NULL},
  {"<dynamic-assignment>", NULL},
  {"<local-assignment>", NULL},
  {"bound?-default", NULL},
  {"function-debug-name", NULL},
  {"fix-let-arguments-setter", NULL},
  {"application-known?", NULL},
  {"fix-let-bindings-setter", NULL},
  {"binding-closed-over?", NULL},
  {"find-binding", NULL},
  {"objectify-quotation", NULL},
  {"<macro-reference>", NULL},
  {"do-named-static-global-bindings", NULL},
  {"binding-module", NULL},
  {"function-body", NULL},
  {"<low-let>", NULL},
  {"function-ref-count", NULL},
  {"load-module", NULL},
  {"probe-module", NULL},
  {"function-value", NULL},
  {"ast-error", NULL},
  {"binding-dynamic-extent?-setter", NULL},
  {"function-temporaries", NULL},
  {"reference-frame-number", NULL},
  {"binding-global-box-setter", NULL},
  {"init-environment-for-eval", NULL},
  {"<global-reference>", NULL},
  {"<global-assignment>", NULL},
  {"function-frame-len-setter", NULL},
  {"module-name", NULL},
  {"function-source", NULL},
  {"%%%macro", NULL},
  {"binding-value-setter", NULL},
  {"assignment-form-setter", NULL},
  {"program-register", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
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
  (P)YevalSastY___main_11___();
  (P)YevalSastY___main_12___();
  (P)YevalSastY___main_13___();
  (P)YevalSastY___main_14___();

}

/* END OF GENERATED CODE. */
