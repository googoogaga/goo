/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast */

EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
DEF(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
DEF(YevalSastYapplication_loop_setter,"eval/ast","application-loop-setter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSastYboundQ_default,"eval/ast","bound?-default");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSastYarguments,"eval/ast","arguments");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSastYinsert_and_mangle_globalX,"eval/ast","insert-and-mangle-global!");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
DEF(YevalSastYobjectify_function_using,"eval/ast","objectify-function-using");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
DEF(YevalSastYmodule_name_setter,"eval/ast","module-name-setter");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSastYprogram_line_setter,"eval/ast","program-line-setter");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSastYloop_body,"eval/ast","loop-body");
DEF(YevalSastYloop_continue,"eval/ast","loop-continue");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YLproductG,"goo/boot","<product>");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
DEF(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSastYmodule_uses_c_includes_setter,"eval/ast","module-uses-c-includes-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DEF(YevalSastYftype,"eval/ast","ftype");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
DEF(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
DEF(YevalSastYmodule_exports_setter,"eval/ast","module-exports-setter");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YtT,"goo/boot","t*");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
DEF(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
EXT(Yerror,"goo/boot","error");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSastYnamespace_error,"eval/ast","namespace-error");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSastYobjectify,"eval/ast","objectify");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
EXT(Yfun_refs,"goo/boot","fun-refs");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSastYmodule_uses_c_files_setter,"eval/ast","module-uses-c-files-setter");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
DEF(YevalSastYprogram_line,"eval/ast","program-line");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSastYincf_ref_count,"eval/ast","incf-ref-count");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YevalSastYreloader_do_dynamic_binding,"eval/ast","reloader-do-dynamic-binding");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YisaQ,"goo/boot","isa?");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
DEF(YevalSastYPmodule_exports_setter,"eval/ast","%module-exports-setter");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
DEF(YevalSastYbind_exit_lightQ_setter,"eval/ast","bind-exit-light?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalSastYbinding_prop_setter,"eval/ast","binding-prop-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
DEF(YevalSastYmodule_uses_c_libraries_setter,"eval/ast","module-uses-c-libraries-setter");
DEF(YevalSastYloop_bindings,"eval/ast","loop-bindings");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalSastYimport_and_mangle_globalX,"eval/ast","import-and-mangle-global!");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
DEF(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
DEF(YevalSastYboundQ_default_setter,"eval/ast","bound?-default-setter");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DEF(YevalSastYfunctions,"eval/ast","functions");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
DEF(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Ynew,"goo/boot","new");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSastYLnamespace_errorG,"eval/ast","<namespace-error>");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
DYNDEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
DEF(YevalSastYbinding_prop,"eval/ast","binding-prop");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSastYsequential,"eval/ast","sequential");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_816);
DEFLIT(lit_417);
DEFLIT(lit_761);
DEFLIT(lit_1055);
DEFLIT(lit_1042);
DEFLIT(lit_694);
DEFLIT(lit_776);
DEFLIT(lit_474);
DEFLIT(lit_866);
DEFLIT(lit_517);
DEFLIT(lit_1021);
DEFLIT(lit_405);
DEFLIT(lit_827);
DEFLIT(lit_273);
DEFLIT(lit_939);
DEFLIT(lit_138);
DEFLIT(lit_254);
DEFLIT(lit_364);
DEFLIT(lit_882);
DEFLIT(lit_896);
DEFLIT(lit_693);
DEFLIT(lit_775);
DEFLIT(lit_144);
DEFLIT(lit_102);
DEFLIT(lit_830);
DEFLIT(lit_334);
DEFLIT(lit_84);
DEFLIT(lit_200);
DEFLIT(lit_919);
DEFLIT(lit_317);
DEFLIT(lit_426);
DEFLIT(lit_71);
DEFLIT(lit_249);
DEFLIT(lit_274);
DEFLIT(lit_585);
DEFLIT(lit_74);
DEFLIT(lit_560);
DEFLIT(lit_674);
DEFLIT(lit_512);
DEFLIT(lit_1025);
DEFLIT(lit_703);
DEFLIT(lit_808);
DEFLIT(lit_177);
DEFLIT(lit_723);
DEFLIT(lit_792);
DEFLIT(lit_487);
DEFLIT(lit_545);
DEFLIT(lit_246);
DEFLIT(lit_136);
DEFLIT(lit_897);
DEFLIT(lit_173);
DEFLIT(lit_1008);
DEFLIT(lit_93);
DEFLIT(lit_94);
DEFLIT(lit_276);
DEFLIT(lit_115);
DEFLIT(lit_1085);
DEFLIT(lit_420);
DEFLIT(lit_526);
DEFLIT(lit_3);
DEFLIT(lit_401);
DEFLIT(lit_953);
DEFLIT(lit_236);
DEFLIT(lit_507);
DEFLIT(lit_603);
DEFLIT(lit_195);
DEFLIT(lit_122);
DEFLIT(lit_803);
DEFLIT(lit_473);
DEFLIT(lit_153);
DEFLIT(lit_475);
DEFLIT(lit_280);
DEFLIT(lit_1002);
DEFLIT(lit_220);
DEFLIT(lit_936);
DEFLIT(lit_786);
DEFLIT(lit_956);
DEFLIT(lit_657);
DEFLIT(lit_551);
DEFLIT(lit_1028);
DEFLIT(lit_412);
DEFLIT(lit_383);
DEFLIT(lit_737);
DEFLIT(lit_219);
DEFLIT(lit_887);
DEFLIT(lit_303);
DEFLIT(lit_1050);
DEFLIT(lit_729);
DEFLIT(lit_800);
DEFLIT(lit_282);
DEFLIT(lit_651);
DEFLIT(lit_607);
DEFLIT(lit_66);
DEFLIT(lit_227);
DEFLIT(lit_973);
DEFLIT(lit_610);
DEFLIT(lit_819);
DEFLIT(lit_30);
DEFLIT(lit_727);
DEFLIT(lit_633);
DEFLIT(lit_241);
DEFLIT(lit_389);
DEFLIT(lit_10);
DEFLIT(lit_391);
DEFLIT(lit_271);
DEFLIT(lit_188);
DEFLIT(lit_339);
DEFLIT(lit_751);
DEFLIT(lit_708);
DEFLIT(lit_378);
DEFLIT(lit_903);
DEFLIT(lit_1038);
DEFLIT(lit_1073);
DEFLIT(lit_584);
DEFLIT(lit_523);
DEFLIT(lit_155);
DEFLIT(lit_736);
DEFLIT(lit_217);
DEFLIT(lit_1036);
DEFLIT(lit_187);
DEFLIT(lit_945);
DEFLIT(lit_338);
DEFLIT(lit_755);
DEFLIT(lit_722);
DEFLIT(lit_637);
DEFLIT(lit_910);
DEFLIT(lit_223);
DEFLIT(lit_440);
DEFLIT(lit_123);
DEFLIT(lit_294);
DEFLIT(lit_1040);
DEFLIT(lit_513);
DEFLIT(lit_275);
DEFLIT(lit_483);
DEFLIT(lit_29);
DEFLIT(lit_478);
DEFLIT(lit_1035);
DEFLIT(lit_595);
DEFLIT(lit_829);
DEFLIT(lit_731);
DEFLIT(lit_721);
DEFLIT(lit_41);
DEFLIT(lit_263);
DEFLIT(lit_313);
DEFLIT(lit_810);
DEFLIT(lit_704);
DEFLIT(lit_822);
DEFLIT(lit_575);
DEFLIT(lit_244);
DEFLIT(lit_247);
DEFLIT(lit_975);
DEFLIT(lit_137);
DEFLIT(lit_613);
DEFLIT(lit_1060);
DEFLIT(lit_888);
DEFLIT(lit_1032);
DEFLIT(lit_257);
DEFLIT(lit_106);
DEFLIT(lit_387);
DEFLIT(lit_931);
DEFLIT(lit_566);
DEFLIT(lit_531);
DEFLIT(lit_49);
DEFLIT(lit_850);
DEFLIT(lit_590);
DEFLIT(lit_351);
DEFLIT(lit_156);
DEFLIT(lit_1029);
DEFLIT(lit_262);
DEFLIT(lit_289);
DEFLIT(lit_859);
DEFLIT(lit_290);
DEFLIT(lit_738);
DEFLIT(lit_636);
DEFLIT(lit_594);
DEFLIT(lit_821);
DEFLIT(lit_462);
DEFLIT(lit_893);
DEFLIT(lit_335);
DEFLIT(lit_706);
DEFLIT(lit_516);
DEFLIT(lit_726);
DEFLIT(lit_781);
DEFLIT(lit_563);
DEFLIT(lit_1077);
DEFLIT(lit_940);
DEFLIT(lit_573);
DEFLIT(lit_331);
DEFLIT(lit_901);
DEFLIT(lit_397);
DEFLIT(lit_894);
DEFLIT(lit_895);
DEFLIT(lit_844);
DEFLIT(lit_372);
DEFLIT(lit_716);
DEFLIT(lit_608);
DEFLIT(lit_127);
DEFLIT(lit_997);
DEFLIT(lit_684);
DEFLIT(lit_665);
DEFLIT(lit_913);
DEFLIT(lit_494);
DEFLIT(lit_20);
DEFLIT(lit_666);
DEFLIT(lit_261);
DEFLIT(lit_804);
DEFLIT(lit_377);
DEFLIT(lit_980);
DEFLIT(lit_58);
DEFLIT(lit_192);
DEFLIT(lit_35);
DEFLIT(lit_258);
DEFLIT(lit_857);
DEFLIT(lit_347);
DEFLIT(lit_458);
DEFLIT(lit_322);
DEFLIT(lit_503);
DEFLIT(lit_791);
DEFLIT(lit_8);
DEFLIT(lit_591);
DEFLIT(lit_720);
DEFLIT(lit_1006);
DEFLIT(lit_815);
DEFLIT(lit_638);
DEFLIT(lit_179);
DEFLIT(lit_832);
DEFLIT(lit_441);
DEFLIT(lit_937);
DEFLIT(lit_1018);
DEFLIT(lit_484);
DEFLIT(lit_448);
DEFLIT(lit_624);
DEFLIT(lit_837);
DEFLIT(lit_877);
DEFLIT(lit_430);
DEFLIT(lit_499);
DEFLIT(lit_119);
DEFLIT(lit_958);
DEFLIT(lit_593);
DEFLIT(lit_885);
DEFLIT(lit_168);
DEFLIT(lit_92);
DEFLIT(lit_923);
DEFLIT(lit_160);
DEFLIT(lit_495);
DEFLIT(lit_990);
DEFLIT(lit_1023);
DEFLIT(lit_715);
DEFLIT(lit_962);
DEFLIT(lit_749);
DEFLIT(lit_80);
DEFLIT(lit_310);
DEFLIT(lit_873);
DEFLIT(lit_154);
DEFLIT(lit_465);
DEFLIT(lit_164);
DEFLIT(lit_311);
DEFLIT(lit_966);
DEFLIT(lit_814);
DEFLIT(lit_1068);
DEFLIT(lit_147);
DEFLIT(lit_128);
DEFLIT(lit_957);
DEFLIT(lit_1048);
DEFLIT(lit_209);
DEFLIT(lit_25);
DEFLIT(lit_501);
DEFLIT(lit_33);
DEFLIT(lit_612);
DEFLIT(lit_892);
DEFLIT(lit_583);
DEFLIT(lit_955);
DEFLIT(lit_108);
DEFLIT(lit_833);
DEFLIT(lit_110);
DEFLIT(lit_306);
DEFLIT(lit_428);
DEFLIT(lit_825);
DEFLIT(lit_625);
DEFLIT(lit_858);
DEFLIT(lit_398);
DEFLIT(lit_51);
DEFLIT(lit_754);
DEFLIT(lit_485);
DEFLIT(lit_272);
DEFLIT(lit_22);
DEFLIT(lit_698);
DEFLIT(lit_1089);
DEFLIT(lit_555);
DEFLIT(lit_1087);
DEFLIT(lit_643);
DEFLIT(lit_1001);
DEFLIT(lit_948);
DEFLIT(lit_175);
DEFLIT(lit_522);
DEFLIT(lit_1061);
DEFLIT(lit_1015);
DEFLIT(lit_932);
DEFLIT(lit_134);
DEFLIT(lit_864);
DEFLIT(lit_544);
DEFLIT(lit_1014);
DEFLIT(lit_140);
DEFLIT(lit_327);
DEFLIT(lit_490);
DEFLIT(lit_855);
DEFLIT(lit_211);
DEFLIT(lit_1027);
DEFLIT(lit_165);
DEFLIT(lit_983);
DEFLIT(lit_741);
DEFLIT(lit_418);
DEFLIT(lit_534);
DEFLIT(lit_388);
DEFLIT(lit_32);
DEFLIT(lit_743);
DEFLIT(lit_491);
DEFLIT(lit_949);
DEFLIT(lit_525);
DEFLIT(lit_469);
DEFLIT(lit_961);
DEFLIT(lit_977);
DEFLIT(lit_368);
DEFLIT(lit_358);
DEFLIT(lit_150);
DEFLIT(lit_652);
DEFLIT(lit_89);
DEFLIT(lit_1076);
DEFLIT(lit_1044);
DEFLIT(lit_1046);
DEFLIT(lit_382);
DEFLIT(lit_386);
DEFLIT(lit_834);
DEFLIT(lit_1052);
DEFLIT(lit_435);
DEFLIT(lit_831);
DEFLIT(lit_1056);
DEFLIT(lit_1059);
DEFLIT(lit_5);
DEFLIT(lit_900);
DEFLIT(lit_1063);
DEFLIT(lit_381);
DEFLIT(lit_212);
DEFLIT(lit_796);
DEFLIT(lit_539);
DEFLIT(lit_941);
DEFLIT(lit_259);
DEFLIT(lit_733);
DEFLIT(lit_64);
DEFLIT(lit_296);
DEFLIT(lit_934);
DEFLIT(lit_449);
DEFLIT(lit_690);
DEFLIT(lit_601);
DEFLIT(lit_863);
DEFLIT(lit_1026);
DEFLIT(lit_714);
DEFLIT(lit_656);
DEFLIT(lit_124);
DEFLIT(lit_718);
DEFLIT(lit_524);
DEFLIT(lit_480);
DEFLIT(lit_1037);
DEFLIT(lit_486);
DEFLIT(lit_542);
DEFLIT(lit_19);
DEFLIT(lit_1013);
DEFLIT(lit_605);
DEFLIT(lit_231);
DEFLIT(lit_215);
DEFLIT(lit_434);
DEFLIT(lit_337);
DEFLIT(lit_650);
DEFLIT(lit_984);
DEFLIT(lit_671);
DEFLIT(lit_463);
DEFLIT(lit_996);
DEFLIT(lit_390);
DEFLIT(lit_17);
DEFLIT(lit_145);
DEFLIT(lit_946);
DEFLIT(lit_292);
DEFLIT(lit_994);
DEFLIT(lit_659);
DEFLIT(lit_988);
DEFLIT(lit_506);
DEFLIT(lit_232);
DEFLIT(lit_114);
DEFLIT(lit_369);
DEFLIT(lit_972);
DEFLIT(lit_742);
DEFLIT(lit_268);
DEFLIT(lit_182);
DEFLIT(lit_39);
DEFLIT(lit_740);
DEFLIT(lit_204);
DEFLIT(lit_766);
DEFLIT(lit_891);
DEFLIT(lit_770);
DEFLIT(lit_848);
DEFLIT(lit_464);
DEFLIT(lit_411);
DEFLIT(lit_508);
DEFLIT(lit_826);
DEFLIT(lit_971);
DEFLIT(lit_362);
DEFLIT(lit_1088);
DEFLIT(lit_805);
DEFLIT(lit_151);
DEFLIT(lit_189);
DEFLIT(lit_385);
DEFLIT(lit_929);
DEFLIT(lit_623);
DEFLIT(lit_847);
DEFLIT(lit_663);
DEFLIT(lit_56);
DEFLIT(lit_410);
DEFLIT(lit_384);
DEFLIT(lit_399);
DEFLIT(lit_50);
DEFLIT(lit_72);
DEFLIT(lit_451);
DEFLIT(lit_1086);
DEFLIT(lit_695);
DEFLIT(lit_408);
DEFLIT(lit_600);
DEFLIT(lit_1075);
DEFLIT(lit_270);
DEFLIT(lit_371);
DEFLIT(lit_580);
DEFLIT(lit_142);
DEFLIT(lit_287);
DEFLIT(lit_88);
DEFLIT(lit_641);
DEFLIT(lit_680);
DEFLIT(lit_813);
DEFLIT(lit_404);
DEFLIT(lit_299);
DEFLIT(lit_1069);
DEFLIT(lit_839);
DEFLIT(lit_191);
DEFLIT(lit_91);
DEFLIT(lit_909);
DEFLIT(lit_807);
DEFLIT(lit_944);
DEFLIT(lit_329);
DEFLIT(lit_457);
DEFLIT(lit_672);
DEFLIT(lit_208);
DEFLIT(lit_321);
DEFLIT(lit_564);
DEFLIT(lit_547);
DEFLIT(lit_868);
DEFLIT(lit_765);
DEFLIT(lit_184);
DEFLIT(lit_370);
DEFLIT(lit_849);
DEFLIT(lit_916);
DEFLIT(lit_1074);
DEFLIT(lit_552);
DEFLIT(lit_111);
DEFLIT(lit_53);
DEFLIT(lit_635);
DEFLIT(lit_454);
DEFLIT(lit_912);
DEFLIT(lit_121);
DEFLIT(lit_918);
DEFLIT(lit_779);
DEFLIT(lit_460);
DEFLIT(lit_304);
DEFLIT(lit_396);
DEFLIT(lit_452);
DEFLIT(lit_190);
DEFLIT(lit_366);
DEFLIT(lit_611);
DEFLIT(lit_795);
DEFLIT(lit_239);
DEFLIT(lit_481);
DEFLIT(lit_359);
DEFLIT(lit_691);
DEFLIT(lit_34);
DEFLIT(lit_1034);
DEFLIT(lit_18);
DEFLIT(lit_631);
DEFLIT(lit_157);
DEFLIT(lit_908);
DEFLIT(lit_159);
DEFLIT(lit_734);
DEFLIT(lit_905);
DEFLIT(lit_319);
DEFLIT(lit_265);
DEFLIT(lit_363);
DEFLIT(lit_332);
DEFLIT(lit_78);
DEFLIT(lit_320);
DEFLIT(lit_963);
DEFLIT(lit_692);
DEFLIT(lit_954);
DEFLIT(lit_229);
DEFLIT(lit_967);
DEFLIT(lit_646);
DEFLIT(lit_293);
DEFLIT(lit_348);
DEFLIT(lit_867);
DEFLIT(lit_117);
DEFLIT(lit_872);
DEFLIT(lit_883);
DEFLIT(lit_90);
DEFLIT(lit_701);
DEFLIT(lit_343);
DEFLIT(lit_710);
DEFLIT(lit_354);
DEFLIT(lit_878);
DEFLIT(lit_456);
DEFLIT(lit_27);
DEFLIT(lit_669);
DEFLIT(lit_851);
DEFLIT(lit_47);
DEFLIT(lit_360);
DEFLIT(lit_856);
DEFLIT(lit_968);
DEFLIT(lit_1033);
DEFLIT(lit_431);
DEFLIT(lit_820);
DEFLIT(lit_342);
DEFLIT(lit_340);
DEFLIT(lit_933);
DEFLIT(lit_991);
DEFLIT(lit_278);
DEFLIT(lit_55);
DEFLIT(lit_16);
DEFLIT(lit_105);
DEFLIT(lit_571);
DEFLIT(lit_312);
DEFLIT(lit_163);
DEFLIT(lit_687);
DEFLIT(lit_592);
DEFLIT(lit_746);
DEFLIT(lit_330);
DEFLIT(lit_787);
DEFLIT(lit_161);
DEFLIT(lit_533);
DEFLIT(lit_686);
DEFLIT(lit_374);
DEFLIT(lit_530);
DEFLIT(lit_935);
DEFLIT(lit_316);
DEFLIT(lit_492);
DEFLIT(lit_130);
DEFLIT(lit_498);
DEFLIT(lit_341);
DEFLIT(lit_647);
DEFLIT(lit_732);
DEFLIT(lit_556);
DEFLIT(lit_769);
DEFLIT(lit_172);
DEFLIT(lit_406);
DEFLIT(lit_178);
DEFLIT(lit_622);
DEFLIT(lit_911);
DEFLIT(lit_790);
DEFLIT(lit_75);
DEFLIT(lit_620);
DEFLIT(lit_251);
DEFLIT(lit_965);
DEFLIT(lit_762);
DEFLIT(lit_907);
DEFLIT(lit_538);
DEFLIT(lit_423);
DEFLIT(lit_565);
DEFLIT(lit_221);
DEFLIT(lit_305);
DEFLIT(lit_567);
DEFLIT(lit_725);
DEFLIT(lit_323);
DEFLIT(lit_1093);
DEFLIT(lit_697);
DEFLIT(lit_942);
DEFLIT(lit_356);
DEFLIT(lit_427);
DEFLIT(lit_193);
DEFLIT(lit_1022);
DEFLIT(lit_148);
DEFLIT(lit_588);
DEFLIT(lit_87);
DEFLIT(lit_550);
DEFLIT(lit_1004);
DEFLIT(lit_248);
DEFLIT(lit_54);
DEFLIT(lit_455);
DEFLIT(lit_281);
DEFLIT(lit_543);
DEFLIT(lit_930);
DEFLIT(lit_1082);
DEFLIT(lit_898);
DEFLIT(lit_920);
DEFLIT(lit_981);
DEFLIT(lit_681);
DEFLIT(lit_309);
DEFLIT(lit_823);
DEFLIT(lit_925);
DEFLIT(lit_838);
DEFLIT(lit_574);
DEFLIT(lit_424);
DEFLIT(lit_445);
DEFLIT(lit_120);
DEFLIT(lit_218);
DEFLIT(lit_235);
DEFLIT(lit_256);
DEFLIT(lit_194);
DEFLIT(lit_806);
DEFLIT(lit_238);
DEFLIT(lit_242);
DEFLIT(lit_679);
DEFLIT(lit_871);
DEFLIT(lit_1005);
DEFLIT(lit_660);
DEFLIT(lit_865);
DEFLIT(lit_279);
DEFLIT(lit_649);
DEFLIT(lit_1012);
DEFLIT(lit_520);
DEFLIT(lit_987);
DEFLIT(lit_269);
DEFLIT(lit_1064);
DEFLIT(lit_380);
DEFLIT(lit_314);
DEFLIT(lit_2);
DEFLIT(lit_648);
DEFLIT(lit_682);
DEFLIT(lit_59);
DEFLIT(lit_176);
DEFLIT(lit_226);
DEFLIT(lit_301);
DEFLIT(lit_619);
DEFLIT(lit_325);
DEFLIT(lit_922);
DEFLIT(lit_1019);
DEFLIT(lit_752);
DEFLIT(lit_224);
DEFLIT(lit_599);
DEFLIT(lit_214);
DEFLIT(lit_860);
DEFLIT(lit_617);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_266);
DEFLIT(lit_569);
DEFLIT(lit_554);
DEFLIT(lit_1084);
DEFLIT(lit_373);
DEFLIT(lit_747);
DEFLIT(lit_921);
DEFLIT(lit_1016);
DEFLIT(lit_237);
DEFLIT(lit_1090);
DEFLIT(lit_748);
DEFLIT(lit_143);
DEFLIT(lit_784);
DEFLIT(lit_283);
DEFLIT(lit_870);
DEFLIT(lit_23);
DEFLIT(lit_540);
DEFLIT(lit_621);
DEFLIT(lit_976);
DEFLIT(lit_629);
DEFLIT(lit_581);
DEFLIT(lit_1054);
DEFLIT(lit_57);
DEFLIT(lit_528);
DEFLIT(lit_535);
DEFLIT(lit_112);
DEFLIT(lit_801);
DEFLIT(lit_433);
DEFLIT(lit_1070);
DEFLIT(lit_442);
DEFLIT(lit_4);
DEFLIT(lit_375);
DEFLIT(lit_802);
DEFLIT(lit_926);
DEFLIT(lit_835);
DEFLIT(lit_394);
DEFLIT(lit_438);
DEFLIT(lit_817);
DEFLIT(lit_11);
DEFLIT(lit_260);
DEFLIT(lit_1047);
DEFLIT(lit_978);
DEFLIT(lit_705);
DEFLIT(lit_700);
DEFLIT(lit_670);
DEFLIT(lit_785);
DEFLIT(lit_135);
DEFLIT(lit_854);
DEFLIT(lit_879);
DEFLIT(lit_46);
DEFLIT(lit_9);
DEFLIT(lit_48);
DEFLIT(lit_667);
DEFLIT(lit_999);
DEFLIT(lit_70);
DEFLIT(lit_772);
DEFLIT(lit_683);
DEFLIT(lit_44);
DEFLIT(lit_782);
DEFLIT(lit_201);
DEFLIT(lit_874);
DEFLIT(lit_661);
DEFLIT(lit_773);
DEFLIT(lit_985);
DEFLIT(lit_395);
DEFLIT(lit_1072);
DEFLIT(lit_76);
DEFLIT(lit_349);
DEFLIT(lit_696);
DEFLIT(lit_763);
DEFLIT(lit_141);
DEFLIT(lit_365);
DEFLIT(lit_532);
DEFLIT(lit_1066);
DEFLIT(lit_409);
DEFLIT(lit_982);
DEFLIT(lit_811);
DEFLIT(lit_216);
DEFLIT(lit_745);
DEFLIT(lit_297);
DEFLIT(lit_62);
DEFLIT(lit_213);
DEFLIT(lit_797);
DEFLIT(lit_974);
DEFLIT(lit_548);
DEFLIT(lit_1039);
DEFLIT(lit_529);
DEFLIT(lit_240);
DEFLIT(lit_602);
DEFLIT(lit_927);
DEFLIT(lit_346);
DEFLIT(lit_183);
DEFLIT(lit_450);
DEFLIT(lit_267);
DEFLIT(lit_1053);
DEFLIT(lit_1067);
DEFLIT(lit_841);
DEFLIT(lit_536);
DEFLIT(lit_40);
DEFLIT(lit_557);
DEFLIT(lit_1057);
DEFLIT(lit_350);
DEFLIT(lit_1011);
DEFLIT(lit_468);
DEFLIT(lit_678);
DEFLIT(lit_207);
DEFLIT(lit_355);
DEFLIT(lit_862);
DEFLIT(lit_915);
DEFLIT(lit_133);
DEFLIT(lit_36);
DEFLIT(lit_174);
DEFLIT(lit_928);
DEFLIT(lit_357);
DEFLIT(lit_107);
DEFLIT(lit_453);
DEFLIT(lit_61);
DEFLIT(lit_1010);
DEFLIT(lit_789);
DEFLIT(lit_644);
DEFLIT(lit_688);
DEFLIT(lit_904);
DEFLIT(lit_677);
DEFLIT(lit_774);
DEFLIT(lit_711);
DEFLIT(lit_42);
DEFLIT(lit_361);
DEFLIT(lit_579);
DEFLIT(lit_167);
DEFLIT(lit_986);
DEFLIT(lit_318);
DEFLIT(lit_917);
DEFLIT(lit_685);
DEFLIT(lit_1041);
DEFLIT(lit_938);
DEFLIT(lit_756);
DEFLIT(lit_1049);
DEFLIT(lit_558);
DEFLIT(lit_642);
DEFLIT(lit_1043);
DEFLIT(lit_479);
DEFLIT(lit_185);
DEFLIT(lit_461);
DEFLIT(lit_333);
DEFLIT(lit_632);
DEFLIT(lit_597);
DEFLIT(lit_429);
DEFLIT(lit_162);
DEFLIT(lit_1000);
DEFLIT(lit_521);
DEFLIT(lit_73);
DEFLIT(lit_432);
DEFLIT(lit_43);
DEFLIT(lit_876);
DEFLIT(lit_489);
DEFLIT(lit_758);
DEFLIT(lit_99);
DEFLIT(lit_180);
DEFLIT(lit_471);
DEFLIT(lit_86);
DEFLIT(lit_869);
DEFLIT(lit_578);
DEFLIT(lit_818);
DEFLIT(lit_777);
DEFLIT(lit_15);
DEFLIT(lit_570);
DEFLIT(lit_616);
DEFLIT(lit_230);
DEFLIT(lit_843);
DEFLIT(lit_252);
DEFLIT(lit_1003);
DEFLIT(lit_126);
DEFLIT(lit_572);
DEFLIT(lit_519);
DEFLIT(lit_113);
DEFLIT(lit_760);
DEFLIT(lit_502);
DEFLIT(lit_413);
DEFLIT(lit_472);
DEFLIT(lit_170);
DEFLIT(lit_559);
DEFLIT(lit_6);
DEFLIT(lit_497);
DEFLIT(lit_198);
DEFLIT(lit_1045);
DEFLIT(lit_630);
DEFLIT(lit_419);
DEFLIT(lit_582);
DEFLIT(lit_964);
DEFLIT(lit_95);
DEFLIT(lit_500);
DEFLIT(lit_618);
DEFLIT(lit_664);
DEFLIT(lit_300);
DEFLIT(lit_421);
DEFLIT(lit_116);
DEFLIT(lit_824);
DEFLIT(lit_799);
DEFLIT(lit_952);
DEFLIT(lit_210);
DEFLIT(lit_853);
DEFLIT(lit_676);
DEFLIT(lit_861);
DEFLIT(lit_496);
DEFLIT(lit_425);
DEFLIT(lit_104);
DEFLIT(lit_328);
DEFLIT(lit_202);
DEFLIT(lit_166);
DEFLIT(lit_744);
DEFLIT(lit_392);
DEFLIT(lit_728);
DEFLIT(lit_842);
DEFLIT(lit_568);
DEFLIT(lit_634);
DEFLIT(lit_38);
DEFLIT(lit_245);
DEFLIT(lit_614);
DEFLIT(lit_52);
DEFLIT(lit_96);
DEFLIT(lit_845);
DEFLIT(lit_562);
DEFLIT(lit_264);
DEFLIT(lit_1051);
DEFLIT(lit_131);
DEFLIT(lit_628);
DEFLIT(lit_906);
DEFLIT(lit_1080);
DEFLIT(lit_587);
DEFLIT(lit_553);
DEFLIT(lit_668);
DEFLIT(lit_103);
DEFLIT(lit_606);
DEFLIT(lit_1078);
DEFLIT(lit_510);
DEFLIT(lit_233);
DEFLIT(lit_767);
DEFLIT(lit_541);
DEFLIT(lit_943);
DEFLIT(lit_561);
DEFLIT(lit_277);
DEFLIT(lit_415);
DEFLIT(lit_403);
DEFLIT(lit_186);
DEFLIT(lit_203);
DEFLIT(lit_993);
DEFLIT(lit_673);
DEFLIT(lit_197);
DEFLIT(lit_828);
DEFLIT(lit_1092);
DEFLIT(lit_899);
DEFLIT(lit_788);
DEFLIT(lit_712);
DEFLIT(lit_477);
DEFLIT(lit_101);
DEFLIT(lit_65);
DEFLIT(lit_109);
DEFLIT(lit_222);
DEFLIT(lit_995);
DEFLIT(lit_234);
DEFLIT(lit_1083);
DEFLIT(lit_146);
DEFLIT(lit_414);
DEFLIT(lit_466);
DEFLIT(lit_326);
DEFLIT(lit_298);
DEFLIT(lit_12);
DEFLIT(lit_379);
DEFLIT(lit_764);
DEFLIT(lit_132);
DEFLIT(lit_1009);
DEFLIT(lit_284);
DEFLIT(lit_626);
DEFLIT(lit_586);
DEFLIT(lit_69);
DEFLIT(lit_1071);
DEFLIT(lit_880);
DEFLIT(lit_308);
DEFLIT(lit_288);
DEFLIT(lit_537);
DEFLIT(lit_886);
DEFLIT(lit_376);
DEFLIT(lit_730);
DEFLIT(lit_992);
DEFLIT(lit_443);
DEFLIT(lit_77);
DEFLIT(lit_515);
DEFLIT(lit_393);
DEFLIT(lit_884);
DEFLIT(lit_85);
DEFLIT(lit_1081);
DEFLIT(lit_181);
DEFLIT(lit_518);
DEFLIT(lit_951);
DEFLIT(lit_196);
DEFLIT(lit_653);
DEFLIT(lit_750);
DEFLIT(lit_546);
DEFLIT(lit_875);
DEFLIT(lit_947);
DEFLIT(lit_336);
DEFLIT(lit_307);
DEFLIT(lit_739);
DEFLIT(lit_437);
DEFLIT(lit_504);
DEFLIT(lit_753);
DEFLIT(lit_707);
DEFLIT(lit_1058);
DEFLIT(lit_890);
DEFLIT(lit_724);
DEFLIT(lit_447);
DEFLIT(lit_511);
DEFLIT(lit_596);
DEFLIT(lit_352);
DEFLIT(lit_225);
DEFLIT(lit_514);
DEFLIT(lit_125);
DEFLIT(lit_780);
DEFLIT(lit_63);
DEFLIT(lit_881);
DEFLIT(lit_206);
DEFLIT(lit_291);
DEFLIT(lit_768);
DEFLIT(lit_14);
DEFLIT(lit_794);
DEFLIT(lit_315);
DEFLIT(lit_699);
DEFLIT(lit_476);
DEFLIT(lit_960);
DEFLIT(lit_302);
DEFLIT(lit_45);
DEFLIT(lit_129);
DEFLIT(lit_840);
DEFLIT(lit_1062);
DEFLIT(lit_139);
DEFLIT(lit_1091);
DEFLIT(lit_407);
DEFLIT(lit_735);
DEFLIT(lit_809);
DEFLIT(lit_446);
DEFLIT(lit_846);
DEFLIT(lit_1065);
DEFLIT(lit_253);
DEFLIT(lit_367);
DEFLIT(lit_640);
DEFLIT(lit_13);
DEFLIT(lit_970);
DEFLIT(lit_444);
DEFLIT(lit_1020);
DEFLIT(lit_627);
DEFLIT(lit_21);
DEFLIT(lit_527);
DEFLIT(lit_344);
DEFLIT(lit_28);
DEFLIT(lit_7);
DEFLIT(lit_31);
DEFLIT(lit_158);
DEFLIT(lit_798);
DEFLIT(lit_37);
DEFLIT(lit_675);
DEFLIT(lit_1017);
DEFLIT(lit_324);
DEFLIT(lit_702);
DEFLIT(lit_1024);
DEFLIT(lit_98);
DEFLIT(lit_400);
DEFLIT(lit_662);
DEFLIT(lit_149);
DEFLIT(lit_771);
DEFLIT(lit_717);
DEFLIT(lit_598);
DEFLIT(lit_422);
DEFLIT(lit_959);
DEFLIT(lit_979);
DEFLIT(lit_205);
DEFLIT(lit_171);
DEFLIT(lit_353);
DEFLIT(lit_505);
DEFLIT(lit_757);
DEFLIT(lit_812);
DEFLIT(lit_689);
DEFLIT(lit_969);
DEFLIT(lit_509);
DEFLIT(lit_783);
DEFLIT(lit_243);
DEFLIT(lit_402);
DEFLIT(lit_67);
DEFLIT(lit_576);
DEFLIT(lit_778);
DEFLIT(lit_998);
DEFLIT(lit_709);
DEFLIT(lit_79);
DEFLIT(lit_639);
DEFLIT(lit_655);
DEFLIT(lit_100);
DEFLIT(lit_416);
DEFLIT(lit_836);
DEFLIT(lit_604);
DEFLIT(lit_577);
DEFLIT(lit_436);
DEFLIT(lit_793);
DEFLIT(lit_60);
DEFLIT(lit_719);
DEFLIT(lit_439);
DEFLIT(lit_250);
DEFLIT(lit_169);
DEFLIT(lit_713);
DEFLIT(lit_549);
DEFLIT(lit_950);
DEFLIT(lit_989);
DEFLIT(lit_488);
DEFLIT(lit_889);
DEFLIT(lit_68);
DEFLIT(lit_1);
DEFLIT(lit_1094);
DEFLIT(lit_255);
DEFLIT(lit_493);
DEFLIT(lit_467);
DEFLIT(lit_759);
DEFLIT(lit_902);
DEFLIT(lit_615);
DEFLIT(lit_1079);
DEFLIT(lit_482);
DEFLIT(lit_645);
DEFLIT(lit_97);
DEFLIT(lit_589);
DEFLIT(lit_459);
DEFLIT(lit_1007);
DEFLIT(lit_118);
DEFLIT(lit_295);
DEFLIT(lit_654);
DEFLIT(lit_345);
DEFLIT(lit_286);
DEFLIT(lit_658);
DEFLIT(lit_24);
DEFLIT(lit_152);
DEFLIT(lit_914);
DEFLIT(lit_924);
DEFLIT(lit_228);
DEFLIT(lit_81);
DEFLIT(lit_82);
DEFLIT(lit_1031);
DEFLIT(lit_609);
DEFLIT(lit_199);
DEFLIT(lit_1030);
DEFLIT(lit_83);
DEFLIT(lit_852);
DEFLIT(lit_285);
DEFLIT(lit_470);

/* FUNCTIONS: */

LOCFOR(fun_x_1435_0);
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
LOCFOR(fun_as_lst_114);
LOCFOR(fun_x_1441_115);
LOCFOR(fun_116);
LOCFOR(fun_117);
LOCFOR(fun_function_body_118);
LOCFOR(fun_function_body_setter_119);
LOCFOR(fun_120);
LOCFOR(fun_function_index_121);
LOCFOR(fun_function_index_setter_122);
LOCFOR(fun_123);
LOCFOR(fun_function_temporaries_124);
LOCFOR(fun_function_temporaries_setter_125);
LOCFOR(fun_126);
LOCFOR(fun_function_registers_127);
LOCFOR(fun_function_registers_setter_128);
LOCFOR(fun_129);
LOCFOR(fun_function_data_refs_130);
LOCFOR(fun_function_data_refs_setter_131);
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
LOCFOR(fun_ast_copy_232);
LOCFOR(fun_ast_copy_233);
LOCFOR(fun_environment_next_234);
LOCFOR(fun_environment_next_setter_235);
LOCFOR(fun_236);
LOCFOR(fun_environment_bindings_237);
LOCFOR(fun_environment_bindings_setter_238);
LOCFOR(fun_environment_module_239);
LOCFOR(fun_environment_module_setter_240);
LOCFOR(fun_environment_module_loader_241);
LOCFOR(fun_environment_module_loader_setter_242);
LOCFOR(fun_environment_uses_modules_243);
LOCFOR(fun_environment_uses_modules_setter_244);
LOCFOR(fun_245);
LOCFOR(fun_environment_allows_foreign_namesQ_246);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_247);
LOCFOR(fun_248);
LOCFOR(fun_249);
LOCFOR(fun_250);
LOCFOR(fun_env_object_name_251);
LOCFOR(fun_objectify_252);
LOCFOR(fun_objectify_list_253);
LOCFOR(fun_objectify_list_254);
LOCFOR(fun_objectify_list_255);
LOCFOR(fun_objectify_256);
LOCFOR(fun_objectify_257);
LOCFOR(fun_objectify_258);
LOCFOR(fun_objectify_259);
LOCFOR(fun_objectify_260);
LOCFOR(fun_objectify_quotation_261);
LOCFOR(fun_objectify_quotation_262);
LOCFOR(fun_objectify_quotation_263);
LOCFOR(fun_objectify_raw_264);
LOCFOR(fun_objectify_boundQ_265);
LOCFOR(fun_objectify_compile_time_266);
LOCFOR(fun_objectify_alternative_267);
LOCFOR(fun_loop_268);
LOCFOR(fun_sequentialize_269);
LOCFOR(fun_transform_defs_270);
LOCFOR(fun_objectify_sequential_271);
LOCFOR(fun_272);
LOCFOR(fun_objectify_application_273);
LOCFOR(fun_274);
LOCFOR(fun_objectify_application_275);
LOCFOR(fun_276);
LOCFOR(fun_objectify_application_277);
LOCFOR(fun_process_closed_application_278);
LOCFOR(fun_pack_nary_args_279);
LOCFOR(fun_pack_args_280);
LOCFOR(fun_process_nary_closed_application_281);
LOCFOR(fun_convert2arguments_282);
LOCFOR(fun_objectify_assignment_283);
LOCFOR(fun_objectify_assignment_284);
LOCFOR(fun_objectify_assignment_using_285);
LOCFOR(fun_objectify_assignment_using_286);
LOCFOR(fun_objectify_assignment_using_287);
LOCFOR(fun_objectify_assignment_using_288);
LOCFOR(fun_objectify_assignment_using_289);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_291);
LOCFOR(fun_objectify_definition_292);
LOCFOR(fun_objectify_variable_definition_293);
LOCFOR(fun_objectify_dynamic_definition_294);
LOCFOR(fun_expand_295);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_297);
LOCFOR(fun_objectify_function_definition_298);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_300);
LOCFOR(fun_objectify_generic_definition_301);
LOCFOR(fun_objectify_method_definition_302);
LOCFOR(fun_303);
LOCFOR(fun_304);
LOCFOR(fun_305);
LOCFOR(fun_306);
LOCFOR(fun_objectify_function_source_307);
LOCFOR(fun_308);
LOCFOR(fun_309);
LOCFOR(fun_objectify_function_using_310);
LOCFOR(fun_objectify_function_311);
LOCFOR(fun_objectify_signature_312);
LOCFOR(fun_compute_local_reference_offsets_313);
LOCFOR(fun_objectify_binding_314);
LOCFOR(fun_binding_reference_class_315);
LOCFOR(fun_objectify_binding_316);
LOCFOR(fun_objectify_binding_317);
LOCFOR(fun_default_type_318);
LOCFOR(fun_objectify_free_global_reference_319);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_321);
LOCFOR(fun_objectify_symbol_322);
LOCFOR(fun_ftype_323);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_empty_325);
LOCFOR(fun_326);
LOCFOR(fun_327);
LOCFOR(fun_328);
LOCFOR(fun_objectify_locals_329);
LOCFOR(fun_objectify_bind_exit_330);
LOCFOR(fun_objectify_unwind_protect_331);
LOCFOR(fun_objectify_monitor_332);
LOCFOR(fun_333);
LOCFOR(fun_334);
LOCFOR(fun_335);
LOCFOR(fun_336);
LOCFOR(fun_337);
LOCFOR(fun_objectify_export_338);
FUNFOR(YevalSastYimport_globalX);
LOCFOR(fun_340);
LOCFOR(fun_objectify_useSexport_module_341);
LOCFOR(fun_342);
LOCFOR(fun_objectify_use_include_343);
LOCFOR(fun_344);
LOCFOR(fun_objectify_use_library_345);
LOCFOR(fun_346);
LOCFOR(fun_use_mod_347);
LOCFOR(fun_use_c_mod_348);
LOCFOR(fun_objectify_use_module_349);
LOCFOR(fun_insert_and_mangle_globalX_350);
FUNFOR(YevalSastYimport_and_mangle_globalX);
LOCFOR(fun_352);
LOCFOR(fun_objectify_use_mangle_module_353);
LOCFOR(fun_expand_bind_list_354);
LOCFOR(fun_expand_bind_list_355);
LOCFOR(fun_expand_bind_list_356);
LOCFOR(fun_expand_bind_listT_357);
LOCFOR(fun_expand_bind_listT_358);
LOCFOR(fun_expand_bind_element_359);
LOCFOR(fun_expand_bind_element_360);
LOCFOR(fun_expand_pattern_361);
LOCFOR(fun_362);
LOCFOR(fun_expand_syntax_if_363);
LOCFOR(fun_r_extendT_364);
LOCFOR(fun_insert_globalX_365);
LOCFOR(fun_366);
LOCFOR(fun_insert_globalsX_367);
LOCFOR(fun_find_static_global_environment_368);
LOCFOR(fun_find_static_global_environment_369);
LOCFOR(fun_find_syntax_environment_370);
LOCFOR(fun_find_environment_module_371);
LOCFOR(fun_find_binding_372);
LOCFOR(fun_find_binding_373);
LOCFOR(fun_find_binding_374);
LOCFOR(fun_frame_bindings_375);
LOCFOR(fun_register_magic_binding_376);
LOCFOR(fun_magic_bindings_377);
LOCFOR(fun_x_1462_378);
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
LOCFOR(fun_pairize_402);
LOCFOR(fun_403);
LOCFOR(fun_404);
LOCFOR(fun_405);
LOCFOR(fun_406);
LOCFOR(fun_407);
LOCFOR(fun_408);
LOCFOR(fun_ast_macro_expand_409);
LOCFOR(fun_410);
LOCFOR(fun_411);
LOCFOR(fun_412);
LOCFOR(fun_413);
LOCFOR(fun_414);
LOCFOR(fun_415);
LOCFOR(fun_416);
LOCFOR(fun_417);
LOCFOR(fun_transaction_implemented_bindings_418);
LOCFOR(fun_transaction_implemented_bindings_setter_419);
LOCFOR(fun_420);
LOCFOR(fun_transaction_dependents_421);
LOCFOR(fun_transaction_dependents_setter_422);
LOCFOR(fun_423);
FUNFOR(YevalSastYtransaction_register_implemented_binding);
FUNFOR(YevalSastYtransaction_register_dependent);
FUNFOR(YevalSastYtransaction_emptyQ);
LOCFOR(fun_427);
LOCFOR(fun_428);
FUNFOR(YevalSastYmerge_transactionsX);
LOCFOR(fun_430);
LOCFOR(fun_431);
FUNFOR(YevalSastYroll_back_transaction);
LOCFOR(fun_433);
LOCFOR(fun_434);
FUNFOR(YevalSastYcall_with_subtransaction);
LOCFOR(fun_x_1466_436);
LOCFOR(fun_437);
LOCFOR(fun_438);
LOCFOR(fun_439);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_441);
LOCFOR(fun_module_loader_modules_setter_442);
LOCFOR(fun_443);
LOCFOR(fun_module_loader_stack_444);
LOCFOR(fun_module_loader_stack_setter_445);
LOCFOR(fun_446);
LOCFOR(fun_module_name_447);
LOCFOR(fun_module_name_setter_448);
LOCFOR(fun_module_mangled_name_449);
LOCFOR(fun_module_mangled_name_setter_450);
LOCFOR(fun_451);
LOCFOR(fun_module_mangled_string_name_452);
LOCFOR(fun_module_mangled_string_name_setter_453);
LOCFOR(fun_454);
LOCFOR(fun_module_target_environment_455);
LOCFOR(fun_module_target_environment_setter_456);
LOCFOR(fun_module_syntax_environment_457);
LOCFOR(fun_module_syntax_environment_setter_458);
LOCFOR(fun_Pmodule_exports_459);
LOCFOR(fun_Pmodule_exports_setter_460);
LOCFOR(fun_461);
LOCFOR(fun_module_data_processedQ_462);
LOCFOR(fun_module_data_processedQ_setter_463);
LOCFOR(fun_464);
LOCFOR(fun_module_runtime_data_465);
LOCFOR(fun_module_runtime_data_setter_466);
LOCFOR(fun_467);
LOCFOR(fun_module_transaction_468);
LOCFOR(fun_module_transaction_setter_469);
LOCFOR(fun_470);
LOCFOR(fun_module_uses_c_files_471);
LOCFOR(fun_module_uses_c_files_setter_472);
LOCFOR(fun_473);
LOCFOR(fun_module_uses_c_includes_474);
LOCFOR(fun_module_uses_c_includes_setter_475);
LOCFOR(fun_476);
LOCFOR(fun_module_uses_c_libraries_477);
LOCFOR(fun_module_uses_c_libraries_setter_478);
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

FUNCODEDEF(fun_x_1435_0) {
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
  P saved_dependentF2691;
  P x_1434F2690;
  P x_1434F2689;
  P x_1434F2688;
  P x_1434F2687;
  P x_1434F2686;
  P bodyF2685;
  P dependentF2684;
  P x_1434F2683;
  P x_1435F2682;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_1435_0,2);
  x_1435F2682 = T38;
  FUNINIT(x_1435F2682, 2,FREEREF(0),return_);
  x_1434F2683 = FREEREF(0);
  dependentF2684 = YPfalse;
  dependentF2684 = BOXFAB(dependentF2684);
  bodyF2685 = YPfalse;
  bodyF2685 = BOXFAB(bodyF2685);
  T2 = CALL2(1,VARREF(YisaQ),x_1434F2683,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1434F2683,LITREF(lit_5),x_1435F2682);
    x_1434F2686 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1434F2686,x_1435F2682);
    BOXVAL(dependentF2684) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1434F2686);
    x_1434F2687 = T8;
    BOXVAL(bodyF2685) = x_1434F2687;
    x_1434F2688 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1434F2688,x_1435F2682);
    x_1434F2689 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1434F2689,x_1435F2682);
    T6 = CALL1(1,VARREF(Ytail),x_1434F2688);
    x_1434F2690 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1434F2690,x_1435F2682);
  } else {
    T10 = CALL2(1,x_1435F2682,LITREF(lit_6),x_1434F2683);
  }
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF2691 = T37;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T17 = CALL1(1,VARREF(Ylst),saved_dependentF2691);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_9));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_9));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T24 = BOXVAL(dependentF2684);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T31 = BOXVAL(bodyF2685);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T36 = CALL1(1,VARREF(Ylst),saved_dependentF2691);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_type_setter_6) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_line_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_line_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_line));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_register_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_register));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_name_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mangled_name_15) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mangled_name_setter_16) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mangled_name));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_type_setter_19) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_20) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_setter_21) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_inferred_type));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_global_box_value_setter_24) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYglobal_box_value));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_kind_setter_27) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_kind));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_module_setter_30) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_module));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_freeQ_setter_33) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_freeQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_info_setter_36) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_info));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_prop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_prop_setter_39) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_prop));
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
  P modF2692;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF2692 = T2;
  if (modF2692 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYmodule_name),modF2692);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_value_setter_45) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_value));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mutableQ_setter_48) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mutableQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_setter_51) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dottedQ_setter_54) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dottedQ));
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

FUNCODEDEF(fun_binding_index_56) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_57) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
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

FUNCODEDEF(fun_compile_time_program_59) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_time_program_setter_60) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_61) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_setter_62) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_63) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_setter_64) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reference_frame_number_66) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_number_setter_67) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_68) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_setter_69) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_70) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_setter_71) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_default_72) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_default_setter_73) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_74) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_setter_75) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_76) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_setter_77) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_78) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_setter_79) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_80) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_setter_81) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_names_83) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_names_setter_84) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_names));
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

FUNCODEDEF(fun_signature_specs_86) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_specs_setter_87) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_specs));
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

FUNCODEDEF(fun_signature_naryQ_89) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_naryQ_setter_90) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_arity_92) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_arity_setter_93) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_arity));
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

FUNCODEDEF(fun_signature_value_95) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_value_setter_96) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_value));
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

FUNCODEDEF(fun_req_sig_specs_98) {
  P sig_;
  P typesF2693;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(sig_, 0);
  T6 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF2693 = T6;
  T2 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),typesF2693);
    T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF2693,YPint((P)0),T4);
    T0 = T3;
  } else {
    T0 = typesF2693;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_binding_99) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_binding_setter_100) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_101) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_debug_name_102) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_debug_name_setter_103) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_debug_name));
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

FUNCODEDEF(fun_function_signature_105) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_signature_setter_106) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_signature));
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

FUNCODEDEF(fun_function_kind_111) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_247));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1437F2696;
  P x_1436F2695;
  P bF2694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  T8 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF2694 = T8;
  x_1436F2695 = bF2694;
  x_1437F2696 = VARREF(YisaQ);
  T1 = CALL2(1,x_1437F2696,x_1436F2695,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF2694);
    T0 = T2;
  } else {
    T4 = CALL2(1,x_1437F2696,x_1436F2695,VARREF(YevalSastYLmodule_bindingG));
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF2694);
      T7 = CALL1(1,VARREF(YevalSastYbinding_name),bF2694);
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_250),T6,T7);
      T3 = T5;
    } else {
      T3 = LITREF(lit_251);
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_113) {
  P dependent_,dependable_,dtype_;
  P nameF2697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF2697 = T8;
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_254),nameF2697);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T4 != YPfalse) {
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_255),nameF2697);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_256),nameF2697);
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

FUNCODEDEF(fun_as_lst_114) {
  P e_;
  P eF2699;
  P resF2698;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  resF2698 = Ynil;
  eF2699 = e_;
  for (;;) {
    P a167_0,a167_1;
  loop167:
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eF2699);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF2698);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(Yhead),eF2699);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF2698);
      T6 = CALL1(1,VARREF(Ytail),eF2699);
      a167_0 = T4;
      a167_1 = T6;
      resF2698 = a167_0;
      eF2699 = a167_1;
      goto loop167;
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1441_115) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_264),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_116) {
  P return_;
  P x_1440F2706;
  P x_1440F2705;
  P x_1440F2704;
  P x_1440F2703;
  P nameF2702;
  P x_1440F2701;
  P x_1441F2700;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1441_115,2);
  x_1441F2700 = T17;
  FUNINIT(x_1441F2700, 2,FREEREF(0),return_);
  x_1440F2701 = FREEREF(0);
  nameF2702 = YPfalse;
  nameF2702 = BOXFAB(nameF2702);
  T1 = CALL2(1,VARREF(YisaQ),x_1440F2701,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1440F2701,LITREF(lit_264),x_1441F2700);
    x_1440F2703 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1440F2703,x_1441F2700);
    BOXVAL(nameF2702) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1440F2703);
    x_1440F2704 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1440F2704,x_1441F2700);
    x_1440F2705 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1440F2705,x_1441F2700);
    T5 = CALL1(1,VARREF(Ytail),x_1440F2704);
    x_1440F2706 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1440F2706,x_1441F2700);
  } else {
    T9 = CALL2(1,x_1441F2700,LITREF(lit_6),x_1440F2701);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
  T13 = BOXVAL(nameF2702);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_257));
  T15 = CALL2(1,VARREF(YgooSmacrosYcat),T16,LITREF(lit_9));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T14,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_117) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_116,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_118) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_setter_119) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_120) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_index_121) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_index_setter_122) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_123) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_function_temporaries_124) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_125) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_126) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_127) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_128) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_data_refs_130) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_data_refs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_data_refs_setter_131) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_data_refs));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_loop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_loop_setter_134) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_loop));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_source_setter_137) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_source));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_frame_len_setter_140) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_frame_len));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_ref_count_setter_145) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_ref_count));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_free_setter_148) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_free));
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
  P x_1442F2707;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  x_1442F2707 = x_;
  T2 = CALL1(1,VARREF(YevalSastYfunction_ref_count),x_1442F2707);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T1,x_1442F2707);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_adjectives_setter_154) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_adjectives));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_condition_setter_159) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_160) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_setter_161) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_162) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_setter_163) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_bindings_164) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_bindings_setter_165) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_body_166) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_body_setter_167) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_continue_168) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYloop_continue));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_continue_setter_169) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_continue));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_value_setter_173) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_174) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_setter_175) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_176) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_setter_177) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_178) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_setter_179) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_tailQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_loop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_loop_setter_182) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_loop));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_function_setter_185) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_186) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_setter_187) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_knownQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_next_methods_setter_190) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_191) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_setter_192) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_193) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_setter_194) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_195) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_setter_196) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_197) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_setter_198) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_199) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_setter_200) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_body));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_bindings_setter_206) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_functions_207) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_functions_setter_208) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_body_209) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_body_setter_210) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_main_fun_211) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_main_fun_setter_212) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_lightQ_213) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_lightQ_setter_214) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_lightQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_217) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_218) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_219) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_type_220) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_type_setter_221) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_info_222) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_info_setter_223) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_test_224) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_test_setter_225) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_handler_226) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_handler_setter_227) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_main_thunk_228) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_main_thunk_setter_229) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walkX_230) {
  P g_,o_,args_;
  P xF2713;
  P tmpF2712;
  P setterF2711;
  P getterF2710;
  P propF2709;
  P x_1443F2708;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T20 = CALL1(1,VARREF(Yobject_props),o_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1443F2708 = T19;
  for (;;) {
    P a168_0;
  loop168:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1443F2708);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1443F2708);
      propF2709 = T18;
      T17 = CALL1(1,VARREF(Yprop_getter),propF2709);
      getterF2710 = T17;
      T16 = CALL1(1,VARREF(Yprop_setter),propF2709);
      setterF2711 = T16;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2710,VARREF(YevalSastYbinding_value));
      tmpF2712 = T6;
      if (tmpF2712 != YPfalse) {
        T4 = tmpF2712;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2710,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(Yprop_boundQ),o_,getterF2710);
        if (T8 != YPfalse) {
          T13 = CALL1(0,getterF2710,o_);
          xF2713 = T13;
          T10 = CALL2(1,VARREF(YisaQ),xF2713,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T12 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF2713,args_);
            T11 = CALL2(1,setterF2711,T12,o_);
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
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1443F2708);
      a168_0 = T15;
      x_1443F2708 = a168_0;
      goto loop168;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_walk_231) {
  P g_,o_,args_;
  P xF2718;
  P tmpF2717;
  P getterF2716;
  P propF2715;
  P x_1445F2714;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T18 = CALL1(1,VARREF(Yobject_props),o_);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1445F2714 = T17;
  for (;;) {
    P a169_0;
  loop169:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1445F2714);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1445F2714);
      propF2715 = T16;
      T15 = CALL1(1,VARREF(Yprop_getter),propF2715);
      getterF2716 = T15;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2716,VARREF(YevalSastYbinding_value));
      tmpF2717 = T6;
      if (tmpF2717 != YPfalse) {
        T4 = tmpF2717;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2716,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(Yprop_boundQ),o_,getterF2716);
        if (T8 != YPfalse) {
          T12 = CALL1(0,getterF2716,o_);
          xF2718 = T12;
          T10 = CALL2(1,VARREF(YisaQ),xF2718,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T11 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF2718,args_);
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
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1445F2714);
      a169_0 = T14;
      x_1445F2714 = a169_0;
      goto loop169;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_copy_232) {
  P x_;
  P copyF2719;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yclone),x_);
  copyF2719 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF2719);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF2719);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_copy_233) {
  P x_;
  P next_metsF2720;
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
    next_metsF2720 = T5;
    T3 = CALL1(1,VARREF(Yhead),next_metsF2720);
    T4 = CALL1(1,VARREF(Ytail),next_metsF2720);
    T2 = CALL4(1,VARREF(YgooSmacrosYnapp),T3,T4,x_,Ynil);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_234) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_setter_235) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_236) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_237) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_bindings_setter_238) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_239) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_setter_240) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_241) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_setter_242) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_243) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_setter_244) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_245) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_246) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_setter_247) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_248) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_249) {
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

FUNCODEDEF(fun_250) {
  P return_;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T0 = FUNFAB(fun_249,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_251) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_250,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_252) {
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

FUNCODEDEF(fun_objectify_list_253) {
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

FUNCODEDEF(fun_objectify_list_254) {
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

FUNCODEDEF(fun_objectify_list_255) {
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

FUNCODEDEF(fun_objectify_256) {
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

FUNCODEDEF(fun_objectify_257) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
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
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
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

FUNCODEDEF(fun_objectify_quotation_261) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_quotation_262) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
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

FUNCODEDEF(fun_objectify_raw_264) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLraw_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_boundQ_265) {
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

FUNCODEDEF(fun_objectify_compile_time_266) {
  P program_,r_,tailQ_,rtQ_;
  P astF2724;
  P target_envF2723;
  P syntax_envF2722;
  P modF2721;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
  T8 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF2721 = T8;
  T7 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF2721);
  syntax_envF2722 = T7;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2721);
  target_envF2723 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF2722,tailQ_);
  astF2724 = T5;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF2724);
  if (rtQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2722,target_envF2723);
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

FUNCODEDEF(fun_objectify_alternative_267) {
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

FUNCODEDEF(fun_loop_268) {
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

FUNCODEDEF(fun_sequentialize_269) {
  P eT_;
  P loopF2725;
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
      T8 = FUNSHELL(1,fun_loop_268,1);
      loopF2725 = T8;
      FUNINIT(loopF2725, 1,loopF2725);
      T7 = CALL1(1,loopF2725,eT_);
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_270) {
  P eT_;
  P eF2726;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T22 = CALL1(1,VARREF(Yhead),eT_);
    eF2726 = T22;
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF2726);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
      T13 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF2726);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF2726);
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
      T19 = CALL1(1,VARREF(Ylst),eF2726);
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

FUNCODEDEF(fun_objectify_sequential_271) {
  P eT_,r_,tailQ_;
  P astsF2731;
  P headF2730;
  P tailQF2729;
  P eTF2728;
  P resF2727;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  resF2727 = Ynil;
  T12 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  eTF2728 = T12;
  for (;;) {
    P a170_0,a170_1;
  loop170:
    T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eTF2728);
    if (T2 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF2727);
      T1 = T3;
    } else {
      T11 = CALL1(1,VARREF(Ytail),eTF2728);
      T10 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T11);
      if (T10 != YPfalse) {
        T9 = tailQ_;
      } else {
        T9 = YPfalse;
      }
      tailQF2729 = T9;
      T8 = CALL1(1,VARREF(Yhead),eTF2728);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,r_,tailQF2729);
      headF2730 = T7;
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),headF2730,resF2727);
      T6 = CALL1(1,VARREF(Ytail),eTF2728);
      a170_0 = T5;
      a170_1 = T6;
      resF2727 = a170_0;
      eTF2728 = a170_1;
      goto loop170;
      T1 = T4;
    }
    break;
  }
  astsF2731 = T1;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),astsF2731);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_272) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_273) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2732;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T3 = FUNFAB(fun_272,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2732 = T1;
  T0 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF2732,r_,tailQ_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_274) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_275) {
  P ff_,eT_,r_,tailQ_;
  P primF2735;
  P fvfF2734;
  P eeTF2733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = FUNFAB(fun_274,1,r_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,eT_);
  T6 = CALL1(1,VARREF(YevalSastYconvert2arguments),T7);
  eeTF2733 = T6;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF2734 = T5;
  T4 = CALL1(1,VARREF(YevalSastYbinding_prop),fvfF2734);
  primF2735 = T4;
  if (primF2735 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYast_copy),primF2735);
    T1 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T2,eeTF2733,r_,tailQ_);
    T0 = T1;
  } else {
    T3 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF2734,VARREF(YevalSastYapplication_arguments),eeTF2733,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_276) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_277) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2736;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T5 = FUNFAB(fun_276,1,r_);
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),T5,eT_);
  T3 = CALL1(1,VARREF(YevalSastYconvert2arguments),T4);
  eeTF2736 = T3;
  T0 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T2 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF2736,VARREF(YevalSastYapplication_tailQ),tailQ_);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_process_closed_application_278) {
  P f_,eT_,r_,tailQ_;
  P bF2738;
  P vTF2737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T16 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2737 = T16;
  T15 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF2738 = T15;
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
      T14 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_577),f_,eT_);
      T3 = T14;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_279) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_582),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_583),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pack_args_280) {
  P eT_,vT_,tT_;
  P lst_typeF2740;
  P varF2739;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
  T16 = CALL1(1,VARREF(Yhead),vT_);
  varF2739 = T16;
  T1 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF2739);
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_586),FREEREF(0),YPfalse);
    lst_typeF2740 = T6;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF2739);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF2740,varF2739);
    CALL2(1,VARREF(Yhead_setter),lst_typeF2740,tT_);
    T4 = CALL1(1,FREEREF(1),eT_);
    T3 = CALL3(1,VARREF(YevalSastYobjectify),T4,FREEREF(0),YPfalse);
    T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T2 = CALL2(1,VARREF(YevalSastYarguments),T3,T5);
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T8 != YPfalse) {
      T9 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_587),FREEREF(2),eT_);
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

FUNCODEDEF(fun_process_nary_closed_application_281) {
  P f_,eT_,r_,tailQ_;
  P oF2744;
  P vTF2743;
  P pack_argsF2742;
  P pack_nary_argsF2741;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T6 = FUNSHELL(1,fun_pack_nary_args_279,1);
  pack_nary_argsF2741 = T6;
  T7 = FUNSHELL(1,fun_pack_args_280,4);
  pack_argsF2742 = T7;
  FUNINIT(pack_nary_argsF2741, 1,pack_nary_argsF2741);
  FUNINIT(pack_argsF2742, 4,r_,pack_nary_argsF2741,f_,pack_argsF2742);
  T5 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2743 = T5;
  T1 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T2 = CALL3(1,pack_argsF2742,eT_,vTF2743,T3);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF2743,VARREF(YevalSastYfix_let_types),T1,VARREF(YevalSastYfix_let_arguments),T2,VARREF(YevalSastYfix_let_body),T4);
  oF2744 = T0;
UNLINK_STACK();
  RET(oF2744);
}

FUNCODEDEF(fun_convert2arguments_282) {
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

FUNCODEDEF(fun_objectify_assignment_283) {
  P binding_,e_,r_,tailQ_;
  P opF2745;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF2745 = T9;
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF2745);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF2745);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T7);
    T3 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T4,T6);
    T2 = CALL3(1,VARREF(YevalSastYobjectify),T3,r_,tailQ_);
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_592),e_);
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_284) {
  P binding_,e_,r_,tailQ_;
  P valF2747;
  P refF2746;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF2746 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF2747 = T1;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF2746,valF2747);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_285) {
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

FUNCODEDEF(fun_objectify_assignment_using_286) {
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

FUNCODEDEF(fun_objectify_assignment_using_287) {
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

FUNCODEDEF(fun_objectify_assignment_using_288) {
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

FUNCODEDEF(fun_objectify_assignment_using_289) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_600),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF2748;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
  T4 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T3 = CALL2(1,VARREF(YgooSmathYNEE),T4,LITREF(lit_603));
  tmpF2748 = T3;
  if (tmpF2748 != YPfalse) {
    T1 = tmpF2748;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_604));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_603));
    if (T7 != YPfalse) {
      T6 = YPtrue;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_69));
      if (T9 != YPfalse) {
        T8 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T12 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T11 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_605),T12,new_kind_);
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

FUNCODEDEF(fun_ast_define_binding_291) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF2756;
  P bindingF2755;
  P modF2754;
  P foreignQF2753;
  P tmpF2752;
  P modF2751;
  P grF2750;
  P existing_bindingF2749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
  T15 = CALL2(1,VARREF(YevalSastYfind_binding),name_,r_);
  existing_bindingF2749 = T15;
  T14 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2750 = T14;
  T13 = CALL1(1,VARREF(YevalSastYenvironment_module),grF2750);
  modF2751 = T13;
  if (existing_bindingF2749 != YPfalse) {
    T10 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF2749,modF2751);
    tmpF2752 = T10;
    if (tmpF2752 != YPfalse) {
      T9 = tmpF2752;
    } else {
      T9 = defining_methodQ_;
    }
    T8 = CALL1(1,VARREF(Ynot),T9);
    foreignQF2753 = T8;
    T1 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF2749);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF2749);
      if (foreignQF2753 != YPfalse) {
        T3 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF2749);
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
    } else {
      if (foreignQF2753 != YPfalse) {
        T6 = CALL1(1,VARREF(YevalSastYmodule_name),modF2751);
        T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF2749);
        T5 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_608),T6,name_,T7);
        T4 = T5;
      } else {
        T4 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF2749,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF2749,kind_);
    T0 = existing_bindingF2749;
  } else {
    T12 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF2754 = T12;
    T11 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF2754);
    bindingF2755 = T11;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2755,grF2750);
    T0 = bindingF2755;
  }
  bindingF2756 = T0;
UNLINK_STACK();
  QRET(bindingF2756);
}

FUNCODEDEF(fun_objectify_definition_292) {
  P type_,kind_,var_,e_,r_;
  P defnF2759;
  P bindingF2758;
  P nameF2757;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(type_, 0);
  ARG(kind_, 1);
  ARG(var_, 2);
  ARG(e_, 3);
  ARG(r_, 4);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),var_);
  nameF2757 = T3;
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF2757,YPfalse,kind_);
  bindingF2758 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF2758,VARREF(YevalSastYassignment_form),T1);
  defnF2759 = T0;
UNLINK_STACK();
  QRET(defnF2759);
}

FUNCODEDEF(fun_objectify_variable_definition_293) {
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

FUNCODEDEF(fun_objectify_dynamic_definition_294) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_615),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_295) {
  P x_,r_,tailQ_;
  P expF2760;
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
  expF2760 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_623));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF2760);
    T1 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_624));
  } else {
  }
UNLINK_STACK();
  QRET(expF2760);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF2763;
  P envF2762;
  P tmpF2761;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
  tmpF2761 = env_or_false_;
  if (tmpF2761 != YPfalse) {
    T2 = tmpF2761;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T2 = T3;
  }
  envF2762 = T2;
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),envF2762,name_,YPfalse,LITREF(lit_618));
  bindingF2763 = T1;
  T0 = FUNFAB(fun_expand_295,1,expander_);
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),T0,bindingF2763);
UNLINK_STACK();
  RET(bindingF2763);
}

FUNCODEDEF(fun_objectify_syntax_definition_297) {
  P name_,e_,r_,rtQ_;
  P bindingF2769;
  P modnameF2768;
  P expanderF2767;
  P ast_expanderF2766;
  P syntax_envF2765;
  P sep_expanderF2764;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
  T14 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_macro_function),name_,e_);
  sep_expanderF2764 = T14;
  T13 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF2765 = T13;
  T12 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2764,syntax_envF2765,YPfalse);
  ast_expanderF2766 = T12;
  T11 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF2766);
  expanderF2767 = T11;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF2768 = T9;
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T7 = CALL4(1,VARREF(YPPmacro),modnameF2768,name_,expanderF2767,T8);
  bindingF2769 = T7;
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T0 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2765,T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2769,syntax_envF2765);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2764,r_,YPfalse);
    T4 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF2769,VARREF(YevalSastYassignment_form),T5);
    T3 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,r_);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_objectify_function_definition_298) {
  P name_,e_,r_;
  P defnF2772;
  P fF2771;
  P bindingF2770;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF2770 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF2771 = T2;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF2770,fF2771);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,fF2771);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF2770,VARREF(YevalSastYassignment_form),fF2771);
  defnF2772 = T1;
UNLINK_STACK();
  RET(defnF2772);
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

FUNCODEDEF(fun_objectify_primitive_definition_300) {
  P name_,mods_,sig_,body_,r_;
  P defnF2778;
  P formF2777;
  P bodyF2776;
  P new_rF2775;
  P signatureF2774;
  P bindingF2773;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_633));
  bindingF2773 = T9;
  T8 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2774 = T8;
  T7 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2774);
  T6 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T7);
  new_rF2775 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2775,YPtrue);
  bodyF2776 = T5;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T3 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2773,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T4,VARREF(YevalSastYfunction_signature),signatureF2774,VARREF(YevalSastYfunction_body),bodyF2776);
  formF2777 = T3;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_634));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSastYbinding_prop_setter),formF2777,bindingF2773);
  } else {
  }
  T2 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF2773,VARREF(YevalSastYassignment_form),formF2777);
  defnF2778 = T2;
UNLINK_STACK();
  RET(defnF2778);
}

FUNCODEDEF(fun_objectify_generic_definition_301) {
  P name_,sig_,r_;
  P defnF2782;
  P formF2781;
  P signatureF2780;
  P bindingF2779;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
  T4 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF2779 = T4;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2780 = T3;
  T2 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF2779,VARREF(YevalSastYfunction_debug_name),T2,VARREF(YevalSastYfunction_signature),signatureF2780);
  formF2781 = T1;
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF2779,VARREF(YevalSastYassignment_form),formF2781);
  defnF2782 = T0;
UNLINK_STACK();
  RET(defnF2782);
}

FUNCODEDEF(fun_objectify_method_definition_302) {
  P name_,e_,r_;
  P defnF2788;
  P formF2787;
  P callF2786;
  P metF2785;
  P genF2784;
  P bindingF2783;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_69));
  bindingF2783 = T9;
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_639));
  T7 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL1(1,VARREF(Ylst),YPfalse);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_9));
  genF2784 = T5;
  T4 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF2785 = T4;
  T3 = CALL3(1,VARREF(Ylst),LITREF(lit_640),genF2784,metF2785);
  callF2786 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),callF2786,r_,YPfalse);
  formF2787 = T2;
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF2783,VARREF(YevalSastYassignment_form),formF2787);
  defnF2788 = T1;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF2785);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,metF2785);
UNLINK_STACK();
  RET(defnF2788);
}

FUNCODEDEF(fun_303) {
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
    T2 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_644),FREEREF(0),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_304) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_305) {
  P x_1448F2789;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1448F2789 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T1 = FUNFAB(fun_303,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T2 = FUNFAB(fun_304,1,x_1448F2789);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_306) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_307) {
  P sig_,body_,r_;
  P x_1447F2790;
  P T0,T1,T2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  x_1447F2790 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T1 = FUNFAB(fun_305,3,sig_,body_,r_);
  T2 = FUNFAB(fun_306,1,x_1447F2790);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_308) {
  P bodyF2793;
  P new_rF2792;
  P signatureF2791;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T5 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF2791 = T5;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2791);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF2792 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF2792,YPtrue);
  bodyF2793 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF2791,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bodyF2793,FREEREF(3));
  T1 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),bodyF2793,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T1,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(3));
}

FUNCODEDEF(fun_309) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_using_310) {
  P met_,sig_,body_,r_,tailQ_;
  P x_1449F2794;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  x_1449F2794 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,met_);
  T1 = FUNFAB(fun_308,4,sig_,r_,body_,met_);
  T2 = FUNFAB(fun_309,1,x_1449F2794);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_function_311) {
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

FUNCODEDEF(fun_objectify_signature_312) {
  P sig_,r_;
  P bindingF2811;
  P typeF2810;
  P stypeF2809;
  P dottedQF2808;
  P stypeF2807;
  P snameF2806;
  P paramF2805;
  P arityF2804;
  P valueF2803;
  P tmpF2802;
  P sexpr_valueF2801;
  P typesF2800;
  P namesF2799;
  P bindingsF2798;
  P naryQF2797;
  P paramsF2796;
  P sexpr_paramsF2795;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
  T30 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF2795 = T30;
  paramsF2796 = sexpr_paramsF2795;
  naryQF2797 = YPfalse;
  bindingsF2798 = Ynil;
  T28 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  namesF2799 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  typesF2800 = T29;
  for (;;) {
    P a171_0,a171_1,a171_2,a171_3,a171_4;
  loop171:
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),paramsF2796);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sig_);
      sexpr_valueF2801 = T15;
      tmpF2802 = sexpr_valueF2801;
      if (tmpF2802 != YPfalse) {
        T13 = tmpF2802;
      } else {
        T14 = CALL1(1,VARREF(YevalSastYdefault_type),r_);
        T13 = T14;
      }
      T12 = CALL3(1,VARREF(YevalSastYobjectify),T13,r_,YPfalse);
      valueF2803 = T12;
      T10 = CALL1(1,VARREF(YgooStypesYlen),namesF2799);
      if (naryQF2797 != YPfalse) {
        T11 = YPint((P)1);
      } else {
        T11 = YPint((P)0);
      }
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
      arityF2804 = T9;
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),bindingsF2798);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),namesF2799);
      T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T5,r_);
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),typesF2800);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),naryQF2797,r_,YPfalse);
      T8 = CALL3(1,VARREF(YevalSastYobjectify),arityF2804,r_,YPfalse);
      T2 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T3,VARREF(YevalSastYsignature_names),T4,VARREF(YevalSastYsignature_specs),T6,VARREF(YevalSastYsignature_naryQ),T7,VARREF(YevalSastYsignature_arity),T8,VARREF(YevalSastYsignature_value),valueF2803);
      T0 = T2;
    } else {
      T27 = CALL1(1,VARREF(Yhead),paramsF2796);
      paramF2805 = T27;
      T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF2805);
      snameF2806 = T26;
      T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF2805);
      stypeF2807 = T25;
      T24 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF2807,VARREF(YevalSastYDsexpr_optionals_tag));
      dottedQF2808 = T24;
      if (dottedQF2808 != YPfalse) {
        T23 = VARREF(YevalSastYDsexpr_optionals_type_name);
      } else {
        T23 = stypeF2807;
      }
      stypeF2809 = T23;
      T22 = CALL3(1,VARREF(YevalSastYobjectify),stypeF2809,r_,YPfalse);
      typeF2810 = T22;
      T21 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF2806,VARREF(YevalSastYbinding_type),typeF2810,VARREF(YevalSastYbinding_dottedQ),dottedQF2808);
      bindingF2811 = T21;
      T17 = CALL1(1,VARREF(Ytail),paramsF2796);
      T18 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF2811,bindingsF2798);
      T19 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF2806,VARREF(Ytail),namesF2799);
      T20 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF2810,VARREF(Ytail),typesF2800);
      a171_0 = T17;
      a171_1 = dottedQF2808;
      a171_2 = T18;
      a171_3 = T19;
      a171_4 = T20;
      paramsF2796 = a171_0;
      naryQF2797 = a171_1;
      bindingsF2798 = a171_2;
      namesF2799 = a171_3;
      typesF2800 = a171_4;
      goto loop171;
      T0 = T16;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_313) {
  P binding_,r_;
  P bindingsF2815;
  P jF2814;
  P rF2813;
  P iF2812;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  iF2812 = YPint((P)0);
  rF2813 = r_;
  for (;;) {
    P a172_0,a172_1;
  loop172:
    T1 = CALL2(1,VARREF(YisaQ),rF2813,VARREF(YevalSastYLstatic_local_environmentG));
    if (T1 != YPfalse) {
      jF2814 = YPint((P)0);
      T14 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2813);
      bindingsF2815 = T14;
      for (;;) {
        P a173_0,a173_1;
      loop173:
        T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF2815);
        if (T3 != YPfalse) {
          T5 = CALL2(1,VARREF(YgooSmathYA),iF2812,YPint((P)1));
          T6 = CALL1(1,VARREF(YevalSastYenvironment_next),rF2813);
          a172_0 = T5;
          a172_1 = T6;
          iF2812 = a172_0;
          rF2813 = a172_1;
          goto loop172;
          T2 = T4;
        } else {
          T9 = CALL1(1,VARREF(Yhead),bindingsF2815);
          T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,binding_);
          if (T8 != YPfalse) {
            T10 = CALL2(1,VARREF(Ytup),iF2812,jF2814);
            T7 = T10;
          } else {
            T12 = CALL2(1,VARREF(YgooSmathYA),jF2814,YPint((P)1));
            T13 = CALL1(1,VARREF(Ytail),bindingsF2815);
            a173_0 = T12;
            a173_1 = T13;
            jF2814 = a173_0;
            bindingsF2815 = a173_1;
            goto loop173;
            T7 = T11;
          }
          T2 = T7;
        }
        break;
      }
      T0 = T2;
    } else {
      T16 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T15 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_655),T16,rF2813);
      T0 = T15;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_314) {
  P n_,b_,r_;
  P jF2818;
  P iF2817;
  P tup31F2816;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T4 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup31F2816 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2816,YPint((P)0));
  iF2817 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2816,YPint((P)1));
  jF2818 = T2;
  T0 = CALL1(1,VARREF(YevalSastYbinding_value),b_);
  CALL1(1,VARREF(YevalSastYincf_ref_count),T0);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF2817,VARREF(YevalSastYreference_frame_offset),jF2818);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_binding_reference_class_315) {
  P b_;
  P x_1451F2820;
  P x_1450F2819;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(b_, 0);
  T14 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1450F2819 = T14;
  x_1451F2820 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1451F2820,x_1450F2819,LITREF(lit_69));
  if (T1 != YPfalse) {
    T0 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T3 = CALL2(1,x_1451F2820,x_1450F2819,LITREF(lit_633));
    if (T3 != YPfalse) {
      T2 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T5 = CALL2(1,x_1451F2820,x_1450F2819,LITREF(lit_603));
      if (T5 != YPfalse) {
        T4 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T7 = CALL2(1,x_1451F2820,x_1450F2819,LITREF(lit_615));
        if (T7 != YPfalse) {
          T6 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T9 = CALL2(1,x_1451F2820,x_1450F2819,LITREF(lit_618));
          if (T9 != YPfalse) {
            T8 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T11 = CALL2(1,x_1451F2820,x_1450F2819,LITREF(lit_604));
            if (T11 != YPfalse) {
              T10 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T13 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
              T12 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_660),T13);
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

FUNCODEDEF(fun_objectify_binding_316) {
  P n_,b_,r_;
  P LrefGF2821;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF2821 = T1;
  T0 = CALL3(1,VARREF(Ynew),LrefGF2821,VARREF(YevalSastYreference_binding),b_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_317) {
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

FUNCODEDEF(fun_default_type_318) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_665),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_319) {
  P name_,r_;
  P bF2823;
  P grF2822;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2822 = T8;
  T2 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF2822);
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
    bF2823 = T6;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF2823,grF2822);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF2823);
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

FUNCODEDEF(fun_objectify_foreign_reference_321) {
  P name_,r_;
  P bindingF2831;
  P modF2830;
  P loaderF2829;
  P grF2828;
  P varnameF2827;
  P modnameF2826;
  P breakF2825;
  P namestrF2824;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF2824 = T22;
  T21 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF2824,YPchr((P)58));
  breakF2825 = T21;
  T20 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2824,YPint((P)0),breakF2825);
  modnameF2826 = T20;
  T18 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF2825);
  T19 = CALL1(1,VARREF(YgooStypesYlen),namestrF2824);
  T17 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2824,T18,T19);
  varnameF2827 = T17;
  T3 = CALL1(1,VARREF(YgooStypesYlen),modnameF2826);
  T2 = CALL2(1,VARREF(YgooSmagYG),T3,YPint((P)0));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),varnameF2827);
    T4 = CALL2(1,VARREF(YgooSmagYG),T5,YPint((P)0));
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_672),name_);
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2828 = T16;
  T15 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF2828);
  loaderF2829 = T15;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF2826);
  T13 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2829,T14);
  modF2830 = T13;
  T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF2827);
  T12 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2830);
  T10 = CALL2(1,VARREF(YevalSastYfind_binding),T11,T12);
  bindingF2831 = T10;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2831,grF2828);
  T7 = CALL1(1,VARREF(Ynot),bindingF2831);
  if (T7 != YPfalse) {
    T8 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_673),varnameF2827,modnameF2826);
  } else {
  }
  T9 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF2831,r_);
UNLINK_STACK();
  RET(T9);
}

FUNCODEDEF(fun_objectify_symbol_322) {
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

FUNCODEDEF(fun_ftype_323) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_678),r_,YPfalse);
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

FUNCODEDEF(fun_empty_325) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_empty));
}

FUNCODEDEF(fun_326) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = CALL1(1,VARREF(YevalSastYftype),FREEREF(0));
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),n_,VARREF(YevalSastYbinding_type),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_327) {
  P sig_,body_;
  P lineF2833;
  P tmpF2832;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),sig_);
  tmpF2832 = T3;
  if (tmpF2832 != YPfalse) {
    T1 = tmpF2832;
  } else {
    T2 = CALL1(1,VARREF(YgooScolsSlstYline_of),body_);
    T1 = T2;
  }
  lineF2833 = T1;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),lineF2833);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_328) {
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

FUNCODEDEF(fun_objectify_locals_329) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P sigF2847;
  P bodyF2846;
  P metF2845;
  P varF2844;
  P tmpF2843;
  P tmpF2842;
  P tmpF2841;
  P x_1452F2840;
  P x_1453F2839;
  P x_1454F2838;
  P x_1455F2837;
  P metsF2836;
  P new_rF2835;
  P varsF2834;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(names_, 0);
  ARG(sigs_, 1);
  ARG(bodies_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  ARG(tailQ_, 5);
  T30 = FUNFAB(fun_326,1,r_);
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),T30,names_);
  varsF2834 = T29;
  T28 = CALL2(1,VARREF(YevalSastYr_extendT),r_,varsF2834);
  new_rF2835 = T28;
  T27 = fun_327;
  T26 = CALL3(1,VARREF(YgooSmacrosYmap2),T27,sigs_,bodies_);
  metsF2836 = T26;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),varsF2834);
  x_1455F2837 = T18;
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),metsF2836);
  x_1454F2838 = T19;
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),bodies_);
  x_1453F2839 = T20;
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),sigs_);
  x_1452F2840 = T21;
  for (;;) {
    P a174_0,a174_1,a174_2,a174_3;
  loop174:
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1455F2837);
    tmpF2841 = T8;
    if (tmpF2841 != YPfalse) {
      T2 = tmpF2841;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1454F2838);
      tmpF2842 = T7;
      if (tmpF2842 != YPfalse) {
        T3 = tmpF2842;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1453F2839);
        tmpF2843 = T6;
        if (tmpF2843 != YPfalse) {
          T4 = tmpF2843;
        } else {
          T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1452F2840);
          T4 = T5;
        }
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1455F2837);
      varF2844 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1454F2838);
      metF2845 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1453F2839);
      bodyF2846 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1452F2840);
      sigF2847 = T14;
      CALL2(1,VARREF(YevalSastYbinding_value_setter),metF2845,varF2844);
      CALL5(1,VARREF(YevalSastYobjectify_function_using),metF2845,sigF2847,bodyF2846,new_rF2835,YPfalse);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1455F2837);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1454F2838);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1453F2839);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1452F2840);
      a174_0 = T10;
      a174_1 = T11;
      a174_2 = T12;
      a174_3 = T13;
      x_1455F2837 = a174_0;
      x_1454F2838 = a174_1;
      x_1453F2839 = a174_2;
      x_1452F2840 = a174_3;
      goto loop174;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  T22 = FUNFAB(fun_328,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T22,metsF2836,varsF2834);
  T24 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),metsF2836);
  T25 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2835,YPtrue);
  T23 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),varsF2834,VARREF(YevalSastYlocals_functions),T24,VARREF(YevalSastYlocals_body),T25);
UNLINK_STACK();
  RET(T23);
}

FUNCODEDEF(fun_objectify_bind_exit_330) {
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

FUNCODEDEF(fun_objectify_unwind_protect_331) {
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

FUNCODEDEF(fun_objectify_monitor_332) {
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

FUNCODEDEF(fun_333) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_334) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_335) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_701),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_336) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(exit_, 0);
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_699),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_333;
  T4 = FUNFAB(fun_334,1,exit_);
  T5 = FUNFAB(fun_335,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_337) {
  P name_;
  P bindingF2848;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(name_, 0);
  T5 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF2848 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2848,YPfalse);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_336,1,name_);
    T2 = with_exit(T3);
    T0 = T2;
  } else {
    T4 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF2848);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_338) {
  P names_,r_,tailQ_;
  P moduleF2850;
  P envF2849;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2849 = T7;
  T6 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2850 = T6;
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2850);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),envF2849,T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYnamespace_error),LITREF(lit_696));
  } else {
  }
  T4 = FUNFAB(fun_337,2,envF2849,moduleF2850);
  CALL2(1,VARREF(YgooSmacrosYdo),T4,names_);
  T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T5);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF2852;
  P existingF2851;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
  T8 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T7 = CALL2(1,VARREF(YevalSastYfind_binding),T8,env_);
  existingF2851 = T7;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2851,YPfalse);
  tmpF2852 = T3;
  if (tmpF2852 != YPfalse) {
    T1 = tmpF2852;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2851,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T6 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_704),T5,T6);
  } else {
  }
  CALL2(1,VARREF(YevalSastYinsert_globalX),b_,env_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_340) {
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

FUNCODEDEF(fun_objectify_useSexport_module_341) {
  P name_,r_,tailQ_;
  P used_moduleF2856;
  P loaderF2855;
  P moduleF2854;
  P envF2853;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2853 = T7;
  T6 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2854 = T6;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2853);
  loaderF2855 = T5;
  T4 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2855,name_);
  used_moduleF2856 = T4;
  T0 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2853);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF2856);
  T1 = FUNFAB(fun_340,2,envF2853,moduleF2854);
  T2 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2856);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(fun_342) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_include_343) {
  P name_,r_,tailQ_;
  P modF2858;
  P envF2857;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2857 = T8;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2857);
  modF2858 = T7;
  T2 = FUNFAB(fun_342,1,name_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2858);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2858);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
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

FUNCODEDEF(fun_objectify_use_library_345) {
  P name_,r_,tailQ_;
  P modF2860;
  P envF2859;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2859 = T8;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2859);
  modF2860 = T7;
  T2 = FUNFAB(fun_344,1,name_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2860);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2860);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

FUNCODEDEF(fun_346) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSastYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_use_mod_347) {
  P name_;
  P used_moduleF2862;
  P loaderF2861;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),FREEREF(0));
  loaderF2861 = T4;
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2861,name_);
  used_moduleF2862 = T3;
  T0 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF2862);
  T1 = FUNFAB(fun_346,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2862);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(used_moduleF2862);
}

FUNCODEDEF(fun_use_c_mod_348) {
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

FUNCODEDEF(fun_objectify_use_module_349) {
  P name_,r_,tailQ_;
  P swig_modF2871;
  P swig_mod_nameF2870;
  P tmpF2869;
  P x_1458F2868;
  P x_1457F2867;
  P use_c_modF2866;
  P use_modF2865;
  P modF2864;
  P envF2863;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T21 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2863 = T21;
  T20 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2863);
  modF2864 = T20;
  T17 = FUNSHELL(1,fun_use_mod_347,1);
  use_modF2865 = T17;
  T18 = fun_use_c_mod_348;
  use_c_modF2866 = T18;
  FUNINIT(use_modF2865, 1,envF2863);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1457F2867 = T16;
  x_1458F2868 = VARREF(YgooScolsSseqYsuffixQ);
  T3 = CALL2(1,x_1458F2868,x_1457F2867,LITREF(lit_721));
  tmpF2869 = T3;
  if (tmpF2869 != YPfalse) {
    T1 = tmpF2869;
  } else {
    T2 = CALL2(1,x_1458F2868,x_1457F2867,LITREF(lit_722));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T4 = CALL2(1,use_c_modF2866,modF2864,T5);
    T0 = T4;
  } else {
    T7 = CALL2(1,x_1458F2868,x_1457F2867,LITREF(lit_723));
    if (T7 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T13 = CALL2(1,VARREF(YgooScolsSseqYsplit),T14,YPchr((P)46));
      T12 = CALL1(1,VARREF(YgooSmacrosY1st),T13);
      T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T12);
      swig_mod_nameF2870 = T11;
      T10 = CALL1(1,use_modF2865,swig_mod_nameF2870);
      swig_modF2871 = T10;
      T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_724));
      T8 = CALL2(1,use_c_modF2866,swig_modF2871,T9);
      T6 = T8;
    } else {
      T15 = CALL1(1,use_modF2865,name_);
      T6 = T15;
    }
    T0 = T6;
  }
  T19 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T19);
}

FUNCODEDEF(fun_insert_and_mangle_globalX_350) {
  P binding_,mangle_prefix_,r_;
  P rF2872;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
  T4 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T4,VARREF(YevalSastYLstatic_global_environmentG));
  rF2872 = T4;
  T1 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2872);
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T3);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF2874;
  P existingF2873;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  ARG(mangle_prefix_, 1);
  ARG(env_, 2);
  T10 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T10);
  T8 = CALL2(1,VARREF(YevalSastYfind_binding),T9,env_);
  existingF2873 = T8;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2873,YPfalse);
  tmpF2874 = T3;
  if (tmpF2874 != YPfalse) {
    T1 = tmpF2874;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2873,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T5 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T6);
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_729),T5,T7);
  } else {
  }
  CALL3(1,VARREF(YevalSastYinsert_and_mangle_globalX),b_,mangle_prefix_,env_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_352) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL3(1,VARREF(YevalSastYimport_and_mangle_globalX),b_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_mangle_module_353) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF2879;
  P used_moduleF2878;
  P loaderF2877;
  P moduleF2876;
  P envF2875;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2875 = T8;
  T7 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2876 = T7;
  T6 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2875);
  loaderF2877 = T6;
  T5 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2877,name_);
  used_moduleF2878 = T5;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF2879 = T4;
  T0 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2875);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF2878);
  T1 = FUNFAB(fun_352,2,str_manglerF2879,envF2875);
  T2 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2878);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(fun_expand_bind_list_354) {
  P pat_,var_,fail_;
  P T0;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_735),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_355) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_737));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_356) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_739),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_740),pat_);
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

FUNCODEDEF(fun_expand_bind_listT_357) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_737));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_358) {
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

FUNCODEDEF(fun_expand_bind_element_359) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_746));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_582));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_360) {
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
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_748));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_9));
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_749));
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
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_582));
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
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_750));
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
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_749));
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

FUNCODEDEF(fun_expand_pattern_361) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_753));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_754));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_586));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_9));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_755));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_362) {
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

FUNCODEDEF(fun_expand_syntax_if_363) {
  P x_;
  P epatF2887;
  P failF2886;
  P varF2885;
  P elseF2884;
  P thenF2883;
  P valueF2882;
  P varsF2881;
  P patF2880;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(x_, 0);
  T49 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF2880 = T49;
  T48 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF2880);
  varsF2881 = T48;
  T47 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF2882 = T47;
  T46 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF2883 = T46;
  T45 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF2884 = T45;
  T44 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2885 = T44;
  T43 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF2886 = T43;
  T42 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF2880,varF2885,failF2886);
  epatF2887 = T42;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_758));
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_759));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_760));
  T10 = CALL1(1,VARREF(Ylst),failF2886);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_761));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_762));
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_9));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_763));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_649));
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T17,LITREF(lit_9));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_759));
  T24 = CALL1(1,VARREF(Ylst),elseF2884);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_9));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T21,LITREF(lit_9));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T7 = CALL2(1,VARREF(YgooSmacrosYcat),T8,LITREF(lit_9));
  T6 = CALL1(1,VARREF(Ylst),T7);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T32 = CALL1(1,VARREF(Ylst),varF2885);
  T33 = CALL1(1,VARREF(Ylst),valueF2882);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_9));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_9));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T39 = fun_362;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),T39,varsF2881);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = CALL1(1,VARREF(Ylst),epatF2887);
  T41 = CALL1(1,VARREF(Ylst),thenF2883);
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

FUNCODEDEF(fun_r_extendT_364) {
  P r_,bindings_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  ARG(bindings_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLstatic_local_environmentG),VARREF(YevalSastYenvironment_next),r_,VARREF(YevalSastYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_globalX_365) {
  P binding_,r_;
  P rF2888;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T3,VARREF(YevalSastYLstatic_global_environmentG));
  rF2888 = T3;
  T1 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2888);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_366) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_globalsX_367) {
  P bindings_,r_;
  P T0,T1;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
  T1 = FUNFAB(fun_366,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_368) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
  T0 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_369) {
  P r_;
LINK_STACK();
  ARG(r_, 0);
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_370) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_environment_module_371) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T0 = CALL1(1,VARREF(YevalSastYenvironment_module),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_372) {
  P name_,r_;
  P bindingsF2889;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T11 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  bindingsF2889 = T11;
  for (;;) {
    P a175_0;
  loop175:
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF2889);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
      T2 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(Yhead),bindingsF2889);
      T6 = CALL1(1,VARREF(YevalSastYbinding_name),T7);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(Yhead),bindingsF2889);
        T4 = T8;
      } else {
        T10 = CALL1(1,VARREF(Ytail),bindingsF2889);
        a175_0 = T10;
        bindingsF2889 = a175_0;
        goto loop175;
        T4 = T9;
      }
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_373) {
  P name_,r_;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_374) {
  P name_,r_;
  P tmpF2890;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T4 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),T4,name_,YPfalse);
  tmpF2890 = T3;
  if (tmpF2890 != YPfalse) {
    T0 = tmpF2890;
  } else {
    T2 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
    T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T2);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_375) {
  P env_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  T0 = CALL1(1,VARREF(YevalSastYenvironment_bindings),env_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_register_magic_binding_376) {
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

FUNCODEDEF(fun_magic_bindings_377) {
LINK_STACK();
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1462_378) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_792),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_379) {
  P return_;
  P sexpr_nameF2907;
  P special_nameF2906;
  P x_1461F2905;
  P x_1461F2904;
  P x_1461F2903;
  P x_1461F2902;
  P x_1461F2901;
  P x_1461F2900;
  P x_1461F2899;
  P x_1461F2898;
  P x_1461F2897;
  P x_1461F2896;
  P bodyF2895;
  P paramsF2894;
  P nameF2893;
  P x_1461F2892;
  P x_1462F2891;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
LINK_STACK();
  ARG(return_, 0);
  T60 = FUNSHELL(0,fun_x_1462_378,2);
  x_1462F2891 = T60;
  FUNINIT(x_1462F2891, 2,FREEREF(0),return_);
  x_1461F2892 = FREEREF(0);
  nameF2893 = YPfalse;
  nameF2893 = BOXFAB(nameF2893);
  paramsF2894 = YPfalse;
  paramsF2894 = BOXFAB(paramsF2894);
  bodyF2895 = YPfalse;
  bodyF2895 = BOXFAB(bodyF2895);
  T3 = CALL2(1,VARREF(YisaQ),x_1461F2892,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1461F2892,LITREF(lit_792),x_1462F2891);
    x_1461F2896 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1461F2896,x_1462F2891);
    BOXVAL(nameF2893) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1461F2896);
    x_1461F2897 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1461F2897,x_1462F2891);
    x_1461F2898 = T12;
    BOXVAL(paramsF2894) = x_1461F2898;
    x_1461F2899 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1461F2899,x_1462F2891);
    x_1461F2900 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1461F2900,x_1462F2891);
    T11 = CALL1(1,VARREF(Ytail),x_1461F2899);
    x_1461F2901 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1461F2901,x_1462F2891);
    T13 = CALL1(1,VARREF(Ytail),x_1461F2897);
    x_1461F2902 = T13;
    BOXVAL(bodyF2895) = x_1461F2902;
    x_1461F2903 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1461F2903,x_1462F2891);
    x_1461F2904 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1461F2904,x_1462F2891);
    T7 = CALL1(1,VARREF(Ytail),x_1461F2903);
    x_1461F2905 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1461F2905,x_1462F2891);
  } else {
    T17 = CALL2(1,x_1462F2891,LITREF(lit_6),x_1461F2892);
  }
  T59 = BOXVAL(nameF2893);
  T58 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_793),T59);
  special_nameF2906 = T58;
  T57 = BOXVAL(nameF2893);
  T56 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_794),T57,LITREF(lit_795));
  sexpr_nameF2907 = T56;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_796));
  T23 = CALL1(1,VARREF(Ylst),special_nameF2906);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_797));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_582));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_604));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T34 = CALL1(1,VARREF(Ylst),sexpr_nameF2907);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T36 = CALL1(1,VARREF(Ylst),YPfalse);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_798));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_799));
  T43 = BOXVAL(paramsF2894);
  T42 = CALL2(1,VARREF(YgooSmacrosYcat),T43,LITREF(lit_9));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(bodyF2895);
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T44,LITREF(lit_9));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T46 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),13,T26,T27,T28,T29,T33,T34,T35,T36,T37,T38,T45,T46,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T24,LITREF(lit_9));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_785));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_582));
  T54 = BOXVAL(nameF2893);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T55 = CALL1(1,VARREF(Ylst),special_nameF2906);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T55,LITREF(lit_9));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T47,LITREF(lit_9));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_380) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_379,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_381) {
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

FUNCODEDEF(fun_382) {
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

FUNCODEDEF(fun_383) {
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

FUNCODEDEF(fun_384) {
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

FUNCODEDEF(fun_385) {
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

FUNCODEDEF(fun_386) {
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

FUNCODEDEF(fun_387) {
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

FUNCODEDEF(fun_388) {
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

FUNCODEDEF(fun_389) {
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

FUNCODEDEF(fun_390) {
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

FUNCODEDEF(fun_391) {
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

FUNCODEDEF(fun_392) {
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

FUNCODEDEF(fun_393) {
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

FUNCODEDEF(fun_394) {
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

FUNCODEDEF(fun_395) {
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

FUNCODEDEF(fun_396) {
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

FUNCODEDEF(fun_397) {
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

FUNCODEDEF(fun_398) {
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

FUNCODEDEF(fun_399) {
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

FUNCODEDEF(fun_400) {
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

FUNCODEDEF(fun_401) {
  P x_,r_,tailQ_;
  P bodyF2913;
  P handlerF2912;
  P testF2911;
  P infoF2910;
  P typeF2909;
  P tup32F2908;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup32F2908 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2908,YPint((P)0));
  typeF2909 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2908,YPint((P)1));
  infoF2910 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2908,YPint((P)2));
  testF2911 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2908,YPint((P)3));
  handlerF2912 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2908,YPint((P)4));
  bodyF2913 = T1;
  T0 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF2909,infoF2910,testF2911,handlerF2912,bodyF2913,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_402) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(args_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_582),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_583),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_403) {
  P x_,r_,tailQ_;
  P nameF2914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF2914 = T10;
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_842));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_582));
  T6 = CALL1(1,VARREF(Ylst),nameF2914);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T8 = CALL1(1,VARREF(YevalSastYpairize),T9);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T7,LITREF(lit_9));
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_69),nameF2914,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_404) {
  P x_,r_,tailQ_;
  P lineF2920;
  P typeF2919;
  P setter_nameF2918;
  P ownerF2917;
  P varF2916;
  P nameF2915;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF2915 = T22;
  T21 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF2916 = T21;
  T20 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF2917 = T20;
  T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF2915);
  setter_nameF2918 = T19;
  T18 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF2919 = T18;
  T17 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  lineF2920 = T17;
  T3 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF2915,ownerF2917,lineF2920);
  T4 = CALL4(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF2915,ownerF2917,typeF2919,lineF2920);
  T8 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T8 != YPfalse) {
    T13 = CALL1(1,VARREF(Ylst),varF2916);
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_665));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T14,LITREF(lit_9));
    T11 = CALL1(1,VARREF(Ylst),T12);
    T10 = CALL2(1,VARREF(YgooSmacrosYcat),T11,LITREF(lit_9));
    T16 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T15 = CALL2(1,VARREF(YgooScolsSlstYline_list),lineF2920,T16);
    T9 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T10,T15);
    T7 = T9;
  } else {
    T7 = LITREF(lit_846);
  }
  T6 = CALL5(1,VARREF(Ylst),ownerF2917,nameF2915,setter_nameF2918,typeF2919,T7);
  T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_845),T6);
  T2 = CALL3(1,VARREF(Ylst),T3,T4,T5);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),T2);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_405) {
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

FUNCODEDEF(fun_406) {
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

FUNCODEDEF(fun_407) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_633));
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

FUNCODEDEF(fun_408) {
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

FUNCODEDEF(fun_ast_macro_expand_409) {
  P x_,r_,tailQ_;
  P resF2923;
  P macF2922;
  P astF2921;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(Yhead),x_);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,r_,tailQ_);
  astF2921 = T5;
  T1 = CALL2(1,VARREF(YisaQ),astF2921,VARREF(YevalSastYLmacro_referenceG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),astF2921);
    macF2922 = T4;
    T3 = CALL1(1,VARREF(YevalSastYbinding_handler),macF2922);
    T2 = CALL3(1,T3,x_,r_,tailQ_);
    resF2923 = T2;
    T0 = resF2923;
  } else {
    T0 = YPfalse;
  }
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
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T1 = CALL3(1,VARREF(YevalSastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_411) {
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

FUNCODEDEF(fun_412) {
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

FUNCODEDEF(fun_413) {
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

FUNCODEDEF(fun_414) {
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

FUNCODEDEF(fun_415) {
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

FUNCODEDEF(fun_416) {
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

FUNCODEDEF(fun_417) {
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

FUNCODEDEF(fun_transaction_implemented_bindings_418) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_setter_419) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_420) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_421) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_setter_422) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_423) {
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
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_895));
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
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_898));
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

FUNCODEDEF(fun_427) {
  P k_,v_;
  P T0;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_428) {
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
  P t2_dependentsF2927;
  P t1_dependentsF2926;
  P t2_bindingsF2925;
  P t1_bindingsF2924;
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
        t1_bindingsF2924 = T10;
        T9 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF2925 = T9;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF2926 = T8;
        T7 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF2927 = T7;
        T5 = FUNFAB(fun_427,1,t1_bindingsF2924);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,t2_bindingsF2925);
        T6 = FUNFAB(fun_428,1,t1_dependentsF2926);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T6,t2_dependentsF2927);
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

FUNCODEDEF(fun_430) {
  P binding_,junk_;
  P T0;
LINK_STACK();
  ARG(binding_, 0);
  ARG(junk_, 1);
  T0 = CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPtrue,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_431) {
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
  T0 = fun_430;
  T1 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_431;
  T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_433) {
  P valueF2928;
  P T0,T1;
LINK_STACK();
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T1 = CALL0(0,FREEREF(0));
  valueF2928 = T1;
  BOXVAL(FREEREF(1)) = YPtrue;
UNLINK_STACK();
  QRET(valueF2928);
}

FUNCODEDEF(fun_434) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
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
  P savedF2930;
  P successF2929;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
  successF2929 = YPfalse;
  successF2929 = BOXFAB(successF2929);
  savedF2930 = VARREF(YevalSastYTcurrent_subtransactionT);
  T2 = FUNFAB(fun_433,2,thunk_,successF2929);
  T3 = FUNFAB(fun_434,3,successF2929,module_,savedF2930);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1466_436) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_915),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_437) {
  P return_;
  P x_1465F2943;
  P x_1465F2942;
  P x_1465F2941;
  P x_1465F2940;
  P x_1465F2939;
  P x_1465F2938;
  P x_1465F2937;
  P x_1465F2936;
  P x_1465F2935;
  P bodyF2934;
  P moduleF2933;
  P x_1465F2932;
  P x_1466F2931;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(return_, 0);
  T26 = FUNSHELL(0,fun_x_1466_436,2);
  x_1466F2931 = T26;
  FUNINIT(x_1466F2931, 2,FREEREF(0),return_);
  x_1465F2932 = FREEREF(0);
  moduleF2933 = YPfalse;
  moduleF2933 = BOXFAB(moduleF2933);
  bodyF2934 = YPfalse;
  bodyF2934 = BOXFAB(bodyF2934);
  T2 = CALL2(1,VARREF(YisaQ),x_1465F2932,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1465F2932,LITREF(lit_915),x_1466F2931);
    x_1465F2935 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1465F2935,x_1466F2931);
    x_1465F2936 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1465F2936,x_1466F2931);
    BOXVAL(moduleF2933) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1465F2936);
    x_1465F2937 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1465F2937,x_1466F2931);
    x_1465F2938 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1465F2938,x_1466F2931);
    T10 = CALL1(1,VARREF(Ytail),x_1465F2937);
    x_1465F2939 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1465F2939,x_1466F2931);
    T14 = CALL1(1,VARREF(Ytail),x_1465F2935);
    x_1465F2940 = T14;
    BOXVAL(bodyF2934) = x_1465F2940;
    x_1465F2941 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1465F2941,x_1466F2931);
    x_1465F2942 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1465F2942,x_1466F2931);
    T6 = CALL1(1,VARREF(Ytail),x_1465F2941);
    x_1465F2943 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1465F2943,x_1466F2931);
  } else {
    T16 = CALL2(1,x_1466F2931,LITREF(lit_6),x_1465F2932);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_909));
  T20 = BOXVAL(moduleF2933);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_799));
  T24 = CALL1(1,VARREF(Ylst),Ynil);
  T25 = BOXVAL(bodyF2934);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_9));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T21,LITREF(lit_9));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_438) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_437,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_439) {
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
  T2 = FUNFAB(fun_439,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_441) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_setter_442) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_443) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_444) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_setter_445) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_446) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_447) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_name_setter_448) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_name_449) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_name_setter_450) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_451) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_mangled_string_name_452) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_string_name_setter_453) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_454) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_target_environment_455) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_target_environment_setter_456) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_457) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_setter_458) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pmodule_exports_459) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pmodule_exports_setter_460) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_461) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_462) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_setter_463) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_464) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_465) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_runtime_data_setter_466) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_467) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_468) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_transaction_setter_469) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_470) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_files_471) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_files));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_files_setter_472) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_uses_c_files));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_473) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_includes_474) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_includes));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_includes_setter_475) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_uses_c_includes));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_476) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_libraries_477) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_libraries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_libraries_setter_478) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_uses_c_libraries));
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
  P tmpF2944;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),T3,name_,YPfalse);
  tmpF2944 = T2;
  if (tmpF2944 != YPfalse) {
    T0 = tmpF2944;
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
  P x_1470F2948;
  P x_1469F2947;
  P tup33F2946;
  P x_1468F2945;
  P T0,T1,T2,T3;
LINK_STACK();
  x_1468F2945 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1468F2945);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup33F2946 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F2946,YPint((P)0));
  x_1469F2947 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F2946,YPint((P)1));
  x_1470F2948 = T0;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_1469F2947,x_1468F2945);
UNLINK_STACK();
  QRET(x_1470F2948);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF2953;
  P x_1467F2952;
  P indentF2951;
  P depthF2950;
  P stackF2949;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T11 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF2949 = T11;
  T10 = CALL1(1,VARREF(YgooStypesYlen),stackF2949);
  depthF2950 = T10;
  T9 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_1002),depthF2950);
  indentF2951 = T9;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF2949,name_);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),stackF2949);
    T1 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1003),T2,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_1004),indentF2951,name_);
  x_1467F2952 = loader_;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1467F2952);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  T3 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T4,x_1467F2952);
  T7 = FUNFAB(fun_487,2,loader_,name_);
  T8 = FUNFAB(fun_488,1,loader_);
  T6 = with_cleanup(T7,T8);
  modF2953 = T6;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF2953);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_1005),indentF2951);
UNLINK_STACK();
  RET(modF2953);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF2956;
  P existingF2955;
  P exportsF2954;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF2954 = T6;
  T5 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF2954,name_,YPfalse);
  existingF2955 = T5;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2955,YPfalse);
  tmpF2956 = T3;
  if (tmpF2956 != YPfalse) {
    T1 = tmpF2956;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2955,binding_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T4 = CALL5(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1010),existingF2955,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF2954,name_);
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
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_1016),T5,T6);
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
  P UF2957;
  P T0,T1,T2;
LINK_STACK();
  ARG(v_, 0);
  T2 = BOXVAL(FREEREF(0));
  UF2957 = T2;
  T1 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2957,v_);
  T0 = BOXVAL(FREEREF(0)) = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F2960;
  P add_userF2959;
  P usersF2958;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T6 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF2958 = T6;
  T5 = FUNSHELL(0,fun_add_user_496,3);
  add_userF2959 = T5;
  FUNINIT(add_userF2959, 3,usersF2958,add_userF2959,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF2959,modnames_);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2960 = T4;
  packer_F2960 = BOXFAB(packer_F2960);
  T1 = FUNFAB(fun_497,1,packer_F2960);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,usersF2958);
  T3 = BOXVAL(packer_F2960);
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
  P modF2961;
  P T0,T1,T2;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF2961 = T1;
  T0 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF2961);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF2962;
  P T0,T1;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF2962 = T1;
  T0 = FUNFAB(fun_500,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,remove_namesF2962);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF2963;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = CALL1(1,VARREF(Ysym_name),name_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T3);
  namestrF2963 = T2;
  T1 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF2963,YPchr((P)47));
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
  P bootenvF2965;
  P bootmodF2964;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2964 = T3;
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2964);
  bootenvF2965 = T2;
  T1 = FUNFAB(fun_503,2,bootenvF2965,env_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,LITREF(lit_1034));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF2966;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T1);
  new_envF2966 = T0;
UNLINK_STACK();
  RET(new_envF2966);
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
  P new_envF2968;
  P loaderF2967;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T4);
  loaderF2967 = T3;
  T2 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF2967,YPfalse);
  new_envF2968 = T2;
  T0 = FUNFAB(fun_506,2,excluded_,new_envF2968);
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
UNLINK_STACK();
  RET(new_envF2968);
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
  P x_1471F2969;
  P T0,T1,T2;
LINK_STACK();
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1471F2969 = DYNREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_508,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_509,1,x_1471F2969);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXVAL(FREEREF(3)) = YPtrue;
UNLINK_STACK();
  QRET(FREEREF(4));
}

FUNCODEDEF(fun_511) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
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

FUNCODEDEF(fun_load_module_512) {
  P loader_,name_;
  P fileF2975;
  P modpathF2974;
  P keepmodQF2973;
  P envF2972;
  P moduleF2971;
  P typeF2970;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T10 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2970 = T10;
  T9 = CALL3(1,VARREF(Ynew),typeF2970,VARREF(YevalSastYmodule_name),name_);
  moduleF2971 = T9;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2971,loader_,YPfalse);
  envF2972 = T8;
  keepmodQF2973 = YPfalse;
  keepmodQF2973 = BOXFAB(keepmodQF2973);
  T7 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF2974 = T7;
  T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF2974,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF2975 = T6;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2971,envF2972,envF2972);
  T1 = CALL1(1,VARREF(Ynot),fileF2975);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1042),modpathF2974);
  } else {
  }
  T4 = FUNFAB(fun_510,5,envF2972,loader_,fileF2975,keepmodQF2973,moduleF2971);
  T5 = FUNFAB(fun_511,2,keepmodQF2973,moduleF2971);
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
  P moduleF2976;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF2976 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF2976);
  T0 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2976);
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
  P loaderF2977;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(modname_, 0);
  T6 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2977 = T6;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF2977);
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
  P envF2981;
  P modF2980;
  P typeF2979;
  P loaderF2978;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
  T4 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2978 = T4;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF2978);
  typeF2979 = T3;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T1 = CALL3(1,VARREF(Ynew),typeF2979,VARREF(YevalSastYmodule_name),T2);
  modF2980 = T1;
  T0 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF2980,loaderF2978,YPtrue);
  envF2981 = T0;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF2980);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF2980,envF2981,envF2981);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF2980);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF2978,modF2980);
UNLINK_STACK();
  RET(modF2980);
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
  P bindingF2983;
  P home_envF2982;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
  T8 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF2982 = T8;
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T6 = CALL2(1,VARREF(YevalSastYfind_binding),T7,home_envF2982);
  bindingF2983 = T6;
  T0 = CALL1(1,VARREF(Ynot),bindingF2983);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = CALL4(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1058),original_name_,T2,T3);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2983,T5);
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
  P bindingF2984;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_603),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T3,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2984 = T2;
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2984,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF2985;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_615),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T3,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2985 = T2;
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2985,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF2986;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_633),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T3,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF2986 = T2;
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2986,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF2987;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(as_name_, 2);
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T5 = CALL2(1,VARREF(YevalSastYfind_binding),T6,T7);
  bindingF2987 = T5;
  if (bindingF2987 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T1 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T2,bindingF2987);
    T0 = T1;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T3 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1071),name_,T4);
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
  P cloneF2988;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T3,YPfalse,LITREF(lit_604));
  cloneF2988 = T2;
  T1 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T0 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T1,cloneF2988);
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
  T0 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YPPmacro),YPfalse);
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
  P bootenvF2990;
  P bootmodF2989;
  P T0,T1,T2;
LINK_STACK();
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2989 = T1;
  T0 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2989);
  bootenvF2990 = T0;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF2990);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF2990);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYfab_syntax_environment) {
  P module_;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_1083));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF2994;
  P syntax_envF2993;
  P moduleF2992;
  P typeF2991;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T6 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2991 = T6;
  T5 = CALL3(1,VARREF(Ynew),typeF2991,VARREF(YevalSastYmodule_name),name_);
  moduleF2992 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF2992);
  syntax_envF2993 = T4;
  T3 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2992,loader_,YPfalse);
  target_envF2994 = T3;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2992,syntax_envF2993,target_envF2994);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF2994);
  } else {
    T2 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF2994,loader_);
  }
UNLINK_STACK();
  RET(moduleF2992);
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
  P envF2995;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF2995 = env_;
  for (;;) {
    P a176_0;
  loop176:
    T2 = CALL2(1,VARREF(YisaQ),envF2995,VARREF(YevalSastYLstatic_empty_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSastYframe_bindings),envF2995);
      CALL2(1,VARREF(YgooSmacrosYdo),f_,T3);
      T5 = CALL1(1,VARREF(YevalSastYenvironment_next),envF2995);
      a176_0 = T5;
      envF2995 = a176_0;
      goto loop176;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYdo_named_static_global_bindings) {
  P f_,env_;
  P envF2996;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF2996 = env_;
  for (;;) {
    P a177_0;
  loop177:
    T2 = CALL2(1,VARREF(YisaQ),envF2996,VARREF(YevalSastYLstatic_empty_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSastYframe_bindings),envF2996);
      CALL2(1,VARREF(YgooScolsScolYdo_keyed),f_,T3);
      T5 = CALL1(1,VARREF(YevalSastYenvironment_next),envF2996);
      a177_0 = T5;
      envF2996 = a177_0;
      goto loop177;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
    break;
  }
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
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(YevalSastYDgoo_boot_module_name,LITREF(lit_0));
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  lit_2 = YPPlist(1,YPPsym((P)"return"));
  lit_3 = YPPsym((P)"x-1435");
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
  fun_x_1435_0 = YPmet(FUNCODEREF(fun_x_1435_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187;
DEFCREGS();
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
  T147 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_114 = YPmet(FUNCODEREF(fun_as_lst_114),LITREF(lit_258),T147,ENVNUL,PNUL,sloc(246));
  T149 = VARREF_OR(YevalSastYas_lst,YPfalse);
  T150 = fun_as_lst_114;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSastYas_lst,T148);
  lit_260 = YPPlist(1,YPPsym((P)"exp"));
  lit_261 = YPPlist(1,YPPsym((P)"return"));
  lit_262 = YPPsym((P)"x-1441");
  lit_263 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_264 = YPPsym((P)"def-programs");
  lit_265 = YPPsym((P)"def-list");
  T153 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1441_115 = YPmet(FUNCODEREF(fun_x_1441_115),LITREF(lit_262),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T154 = fun_117;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T154);
  lit_266 = YPPsym((P)"<ast-embodied-function>");
  T156 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T155 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_266),T156);
  VARSET(YevalSastYLast_embodied_functionG,T155);
  lit_267 = YPPsym((P)"function-body");
  lit_268 = YPPlist(1,YPPsym((P)"_x"));
  T157 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_118 = YPmet(FUNCODEREF(fun_function_body_118),LITREF(lit_267),T157,ENVNUL,PNUL,sloc(253));
  T159 = VARREF_OR(YevalSastYfunction_body,YPfalse);
  T160 = fun_function_body_118;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(YevalSastYfunction_body,T158);
  lit_269 = YPPsym((P)"function-body-setter");
  lit_270 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_270),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_119 = YPmet(FUNCODEREF(fun_function_body_setter_119),LITREF(lit_269),T161,ENVNUL,PNUL,sloc(253));
  T163 = VARREF_OR(YevalSastYfunction_body_setter,YPfalse);
  T164 = fun_function_body_setter_119;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YevalSastYfunction_body_setter,T162);
  lit_271 = YPPlist(1,YPPsym((P)"_x"));
  T165 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T165,ENVNUL,PNUL,sloc(253));
  T166 = fun_120;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T166);
  lit_272 = YPPsym((P)"function-index");
  lit_273 = YPPlist(1,YPPsym((P)"_x"));
  T167 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_121 = YPmet(FUNCODEREF(fun_function_index_121),LITREF(lit_272),T167,ENVNUL,PNUL,sloc(254));
  T169 = VARREF_OR(YevalSastYfunction_index,YPfalse);
  T170 = fun_function_index_121;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSastYfunction_index,T168);
  lit_274 = YPPsym((P)"function-index-setter");
  lit_275 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T171 = YPsig(LITREF(lit_275),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_122 = YPmet(FUNCODEREF(fun_function_index_setter_122),LITREF(lit_274),T171,ENVNUL,PNUL,sloc(254));
  T173 = VARREF_OR(YevalSastYfunction_index_setter,YPfalse);
  T174 = fun_function_index_setter_122;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T174);
  VARSET(YevalSastYfunction_index_setter,T172);
  lit_276 = YPPlist(1,YPPsym((P)"_x"));
  T175 = YPsig(LITREF(lit_276),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T175,ENVNUL,PNUL,sloc(254));
  T176 = fun_123;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T176);
  lit_277 = YPPsym((P)"function-temporaries");
  lit_278 = YPPlist(1,YPPsym((P)"_x"));
  T177 = YPsig(LITREF(lit_278),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_124 = YPmet(FUNCODEREF(fun_function_temporaries_124),LITREF(lit_277),T177,ENVNUL,PNUL,sloc(255));
  T179 = VARREF_OR(YevalSastYfunction_temporaries,YPfalse);
  T180 = fun_function_temporaries_124;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YevalSastYfunction_temporaries,T178);
  lit_279 = YPPsym((P)"function-temporaries-setter");
  lit_280 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T183 = YPsig(LITREF(lit_280),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T182 = fun_function_temporaries_setter_125 = YPmet(FUNCODEREF(fun_function_temporaries_setter_125),LITREF(lit_279),T183,ENVNUL,PNUL,sloc(255));
  T186 = VARREF_OR(YevalSastYfunction_temporaries_setter,YPfalse);
  T187 = fun_function_temporaries_setter_125;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  T184 = VARSET(YevalSastYfunction_temporaries_setter,T185);
  T181 = T184;
  return T181;
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
  P T192,T193,T194;
DEFCREGS();
  lit_281 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_281),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T0,ENVNUL,PNUL,sloc(255));
  T1 = fun_126;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T1);
  lit_282 = YPPsym((P)"function-registers");
  lit_283 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_283),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_127 = YPmet(FUNCODEREF(fun_function_registers_127),LITREF(lit_282),T2,ENVNUL,PNUL,sloc(256));
  T4 = VARREF_OR(YevalSastYfunction_registers,YPfalse);
  T5 = fun_function_registers_127;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSastYfunction_registers,T3);
  lit_284 = YPPsym((P)"function-registers-setter");
  lit_285 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_285),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_128 = YPmet(FUNCODEREF(fun_function_registers_setter_128),LITREF(lit_284),T6,ENVNUL,PNUL,sloc(256));
  T8 = VARREF_OR(YevalSastYfunction_registers_setter,YPfalse);
  T9 = fun_function_registers_setter_128;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSastYfunction_registers_setter,T7);
  lit_286 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_286),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T10,ENVNUL,PNUL,sloc(256));
  T11 = fun_129;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T11);
  lit_287 = YPPsym((P)"function-data-refs");
  lit_288 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_288),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_130 = YPmet(FUNCODEREF(fun_function_data_refs_130),LITREF(lit_287),T12,ENVNUL,PNUL,sloc(257));
  T14 = VARREF_OR(YevalSastYfunction_data_refs,YPfalse);
  T15 = fun_function_data_refs_130;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSastYfunction_data_refs,T13);
  lit_289 = YPPsym((P)"function-data-refs-setter");
  lit_290 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_290),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_131 = YPmet(FUNCODEREF(fun_function_data_refs_setter_131),LITREF(lit_289),T16,ENVNUL,PNUL,sloc(257));
  T18 = VARREF_OR(YevalSastYfunction_data_refs_setter,YPfalse);
  T19 = fun_function_data_refs_setter_131;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSastYfunction_data_refs_setter,T17);
  lit_291 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_291),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T20,ENVNUL,PNUL,sloc(257));
  T21 = fun_132;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_data_refs),VARREF(YevalSastYfunction_data_refs_setter),VARREF(YgooScolsSvecYLvecG),T21);
  lit_292 = YPPsym((P)"function-loop");
  lit_293 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_loop_133 = YPmet(FUNCODEREF(fun_function_loop_133),LITREF(lit_292),T22,ENVNUL,PNUL,sloc(258));
  T24 = VARREF_OR(YevalSastYfunction_loop,YPfalse);
  T25 = fun_function_loop_133;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSastYfunction_loop,T23);
  lit_294 = YPPsym((P)"function-loop-setter");
  lit_295 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_295),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_loop_setter_134 = YPmet(FUNCODEREF(fun_function_loop_setter_134),LITREF(lit_294),T26,ENVNUL,PNUL,sloc(258));
  T28 = VARREF_OR(YevalSastYfunction_loop_setter,YPfalse);
  T29 = fun_function_loop_setter_134;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYfunction_loop_setter,T27);
  lit_296 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_296),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T30,ENVNUL,PNUL,sloc(258));
  T31 = fun_135;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_loop),VARREF(YevalSastYfunction_loop_setter),VARREF(YLanyG),T31);
  lit_297 = YPPsym((P)"function-source");
  lit_298 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_298),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_136 = YPmet(FUNCODEREF(fun_function_source_136),LITREF(lit_297),T32,ENVNUL,PNUL,sloc(260));
  T34 = VARREF_OR(YevalSastYfunction_source,YPfalse);
  T35 = fun_function_source_136;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSastYfunction_source,T33);
  lit_299 = YPPsym((P)"function-source-setter");
  lit_300 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_300),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_137 = YPmet(FUNCODEREF(fun_function_source_setter_137),LITREF(lit_299),T36,ENVNUL,PNUL,sloc(260));
  T38 = VARREF_OR(YevalSastYfunction_source_setter,YPfalse);
  T39 = fun_function_source_setter_137;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSastYfunction_source_setter,T37);
  lit_301 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_301),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T40,ENVNUL,PNUL,sloc(260));
  T41 = fun_138;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T41);
  lit_302 = YPPsym((P)"function-frame-len");
  lit_303 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_303),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_139 = YPmet(FUNCODEREF(fun_function_frame_len_139),LITREF(lit_302),T42,ENVNUL,PNUL,sloc(261));
  T44 = VARREF_OR(YevalSastYfunction_frame_len,YPfalse);
  T45 = fun_function_frame_len_139;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSastYfunction_frame_len,T43);
  lit_304 = YPPsym((P)"function-frame-len-setter");
  lit_305 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_305),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_140 = YPmet(FUNCODEREF(fun_function_frame_len_setter_140),LITREF(lit_304),T46,ENVNUL,PNUL,sloc(261));
  T48 = VARREF_OR(YevalSastYfunction_frame_len_setter,YPfalse);
  T49 = fun_function_frame_len_setter_140;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSastYfunction_frame_len_setter,T47);
  lit_306 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_306),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T50,ENVNUL,PNUL,sloc(261));
  T51 = fun_141;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T51);
  lit_307 = YPPsym((P)"<free-environment>");
  T54 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T53 = (P)YPpair(VARREF(YLlstG),T54);
  T52 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_307),T53);
  VARSET(YevalSastYLfree_environmentG,T52);
  T55 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T55);
  lit_308 = YPPsym((P)"free-environment");
  lit_309 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T56 = YPsig(LITREF(lit_309),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_308),T56,ENVNUL,PNUL,sloc(263));
  T57 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T57);
  lit_310 = YPPsym((P)"empty");
  lit_311 = YPPlist(1,YPPsym((P)"e"));
  T59 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T58 = YPsig(LITREF(lit_311),YPPlist(1,T59),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_143 = YPmet(FUNCODEREF(fun_empty_143),LITREF(lit_310),T58,ENVNUL,PNUL,sloc(263));
  T61 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T62 = fun_empty_143;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YgooScolsScolYempty,T60);
  lit_312 = YPPsym((P)"<ast-method>");
  T64 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T63 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_312),T64);
  VARSET(YevalSastYLast_methodG,T63);
  lit_313 = YPPsym((P)"function-ref-count");
  lit_314 = YPPlist(1,YPPsym((P)"_x"));
  T65 = YPsig(LITREF(lit_314),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_ref_count_144 = YPmet(FUNCODEREF(fun_function_ref_count_144),LITREF(lit_313),T65,ENVNUL,PNUL,sloc(266));
  T67 = VARREF_OR(YevalSastYfunction_ref_count,YPfalse);
  T68 = fun_function_ref_count_144;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T68);
  VARSET(YevalSastYfunction_ref_count,T66);
  lit_315 = YPPsym((P)"function-ref-count-setter");
  lit_316 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T69 = YPsig(LITREF(lit_316),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_ref_count_setter_145 = YPmet(FUNCODEREF(fun_function_ref_count_setter_145),LITREF(lit_315),T69,ENVNUL,PNUL,sloc(266));
  T71 = VARREF_OR(YevalSastYfunction_ref_count_setter,YPfalse);
  T72 = fun_function_ref_count_setter_145;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSastYfunction_ref_count_setter,T70);
  lit_317 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_317),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T73,ENVNUL,PNUL,sloc(266));
  T74 = fun_146;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_ref_count),VARREF(YevalSastYfunction_ref_count_setter),VARREF(YLintG),T74);
  lit_318 = YPPsym((P)"function-free");
  lit_319 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_319),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_147 = YPmet(FUNCODEREF(fun_function_free_147),LITREF(lit_318),T75,ENVNUL,PNUL,sloc(267));
  T77 = VARREF_OR(YevalSastYfunction_free,YPfalse);
  T78 = fun_function_free_147;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T78);
  VARSET(YevalSastYfunction_free,T76);
  lit_320 = YPPsym((P)"function-free-setter");
  lit_321 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T79 = YPsig(LITREF(lit_321),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_148 = YPmet(FUNCODEREF(fun_function_free_setter_148),LITREF(lit_320),T79,ENVNUL,PNUL,sloc(267));
  T81 = VARREF_OR(YevalSastYfunction_free_setter,YPfalse);
  T82 = fun_function_free_setter_148;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YevalSastYfunction_free_setter,T80);
  lit_322 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_322),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T83,ENVNUL,PNUL,sloc(267));
  T84 = fun_149;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T84);
  lit_323 = YPPsym((P)"incf-ref-count");
  lit_324 = YPPlist(1,YPPsym((P)"x"));
  T85 = YPsig(LITREF(lit_324),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_150 = YPmet(FUNCODEREF(fun_incf_ref_count_150),LITREF(lit_323),T85,ENVNUL,PNUL,sloc(270));
  T87 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T88 = fun_incf_ref_count_150;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YevalSastYincf_ref_count,T86);
  lit_325 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPsig(LITREF(lit_325),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_151 = YPmet(FUNCODEREF(fun_incf_ref_count_151),LITREF(lit_323),T89,ENVNUL,PNUL,sloc(271));
  T91 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T92 = fun_incf_ref_count_151;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YevalSastYincf_ref_count,T90);
  lit_326 = YPPlist(1,YPPsym((P)"x"));
  lit_327 = YPsb((P)"MET");
  T93 = YPsig(LITREF(lit_326),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_152 = YPmet(FUNCODEREF(fun_function_kind_152),LITREF(lit_245),T93,ENVNUL,PNUL,sloc(273));
  T95 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T96 = fun_function_kind_152;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YevalSastYfunction_kind,T94);
  lit_328 = YPPsym((P)"<ast-primitive>");
  T98 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T97 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_328),T98);
  VARSET(YevalSastYLast_primitiveG,T97);
  lit_329 = YPPsym((P)"function-adjectives");
  lit_330 = YPPlist(1,YPPsym((P)"_x"));
  T99 = YPsig(LITREF(lit_330),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_153 = YPmet(FUNCODEREF(fun_function_adjectives_153),LITREF(lit_329),T99,ENVNUL,PNUL,sloc(276));
  T101 = VARREF_OR(YevalSastYfunction_adjectives,YPfalse);
  T102 = fun_function_adjectives_153;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YevalSastYfunction_adjectives,T100);
  lit_331 = YPPsym((P)"function-adjectives-setter");
  lit_332 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T103 = YPsig(LITREF(lit_332),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_154 = YPmet(FUNCODEREF(fun_function_adjectives_setter_154),LITREF(lit_331),T103,ENVNUL,PNUL,sloc(276));
  T105 = VARREF_OR(YevalSastYfunction_adjectives_setter,YPfalse);
  T106 = fun_function_adjectives_setter_154;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSastYfunction_adjectives_setter,T104);
  lit_333 = YPPlist(1,YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_333),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_155 = YPmet(FUNCODEREF(fun_155),YPfalse,T107,ENVNUL,PNUL,sloc(276));
  T108 = fun_155;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T108);
  lit_334 = YPPlist(1,YPPsym((P)"x"));
  lit_335 = YPsb((P)"PRM");
  T109 = YPsig(LITREF(lit_334),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_156 = YPmet(FUNCODEREF(fun_function_kind_156),LITREF(lit_245),T109,ENVNUL,PNUL,sloc(278));
  T111 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T112 = fun_function_kind_156;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YevalSastYfunction_kind,T110);
  lit_336 = YPPsym((P)"<ast-generic>");
  T114 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T113 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_336),T114);
  VARSET(YevalSastYLast_genericG,T113);
  lit_337 = YPPlist(1,YPPsym((P)"x"));
  lit_338 = YPsb((P)"GEN");
  T115 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_157 = YPmet(FUNCODEREF(fun_function_kind_157),LITREF(lit_245),T115,ENVNUL,PNUL,sloc(282));
  T117 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T118 = fun_function_kind_157;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YevalSastYfunction_kind,T116);
  lit_339 = YPPsym((P)"<alternative>");
  T120 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T119 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_339),T120);
  VARSET(YevalSastYLalternativeG,T119);
  lit_340 = YPPsym((P)"alternative-condition");
  lit_341 = YPPlist(1,YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_341),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_158 = YPmet(FUNCODEREF(fun_alternative_condition_158),LITREF(lit_340),T121,ENVNUL,PNUL,sloc(285));
  T123 = VARREF_OR(YevalSastYalternative_condition,YPfalse);
  T124 = fun_alternative_condition_158;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSastYalternative_condition,T122);
  lit_342 = YPPsym((P)"alternative-condition-setter");
  lit_343 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_343),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_159 = YPmet(FUNCODEREF(fun_alternative_condition_setter_159),LITREF(lit_342),T125,ENVNUL,PNUL,sloc(285));
  T127 = VARREF_OR(YevalSastYalternative_condition_setter,YPfalse);
  T128 = fun_alternative_condition_setter_159;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YevalSastYalternative_condition_setter,T126);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_344 = YPPsym((P)"alternative-consequent");
  lit_345 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPsig(LITREF(lit_345),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_160 = YPmet(FUNCODEREF(fun_alternative_consequent_160),LITREF(lit_344),T129,ENVNUL,PNUL,sloc(286));
  T131 = VARREF_OR(YevalSastYalternative_consequent,YPfalse);
  T132 = fun_alternative_consequent_160;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YevalSastYalternative_consequent,T130);
  lit_346 = YPPsym((P)"alternative-consequent-setter");
  lit_347 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPsig(LITREF(lit_347),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_161 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_161),LITREF(lit_346),T133,ENVNUL,PNUL,sloc(286));
  T135 = VARREF_OR(YevalSastYalternative_consequent_setter,YPfalse);
  T136 = fun_alternative_consequent_setter_161;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T136);
  VARSET(YevalSastYalternative_consequent_setter,T134);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_348 = YPPsym((P)"alternative-alternant");
  lit_349 = YPPlist(1,YPPsym((P)"_x"));
  T137 = YPsig(LITREF(lit_349),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_162 = YPmet(FUNCODEREF(fun_alternative_alternant_162),LITREF(lit_348),T137,ENVNUL,PNUL,sloc(287));
  T139 = VARREF_OR(YevalSastYalternative_alternant,YPfalse);
  T140 = fun_alternative_alternant_162;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T140);
  VARSET(YevalSastYalternative_alternant,T138);
  lit_350 = YPPsym((P)"alternative-alternant-setter");
  lit_351 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_351),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_163 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_163),LITREF(lit_350),T141,ENVNUL,PNUL,sloc(287));
  T143 = VARREF_OR(YevalSastYalternative_alternant_setter,YPfalse);
  T144 = fun_alternative_alternant_setter_163;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YevalSastYalternative_alternant_setter,T142);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_352 = YPPsym((P)"<loop>");
  T146 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T145 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_352),T146);
  VARSET(YevalSastYLloopG,T145);
  lit_353 = YPPsym((P)"loop-bindings");
  lit_354 = YPPlist(1,YPPsym((P)"_x"));
  T147 = YPsig(LITREF(lit_354),YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_bindings_164 = YPmet(FUNCODEREF(fun_loop_bindings_164),LITREF(lit_353),T147,ENVNUL,PNUL,sloc(290));
  T149 = VARREF_OR(YevalSastYloop_bindings,YPfalse);
  T150 = fun_loop_bindings_164;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSastYloop_bindings,T148);
  lit_355 = YPPsym((P)"loop-bindings-setter");
  lit_356 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_356),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_bindings_setter_165 = YPmet(FUNCODEREF(fun_loop_bindings_setter_165),LITREF(lit_355),T151,ENVNUL,PNUL,sloc(290));
  T153 = VARREF_OR(YevalSastYloop_bindings_setter,YPfalse);
  T154 = fun_loop_bindings_setter_165;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YevalSastYloop_bindings_setter,T152);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),VARREF(YevalSastYloop_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_357 = YPPsym((P)"loop-body");
  lit_358 = YPPlist(1,YPPsym((P)"_x"));
  T155 = YPsig(LITREF(lit_358),YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_body_166 = YPmet(FUNCODEREF(fun_loop_body_166),LITREF(lit_357),T155,ENVNUL,PNUL,sloc(291));
  T157 = VARREF_OR(YevalSastYloop_body,YPfalse);
  T158 = fun_loop_body_166;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YevalSastYloop_body,T156);
  lit_359 = YPPsym((P)"loop-body-setter");
  lit_360 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T159 = YPsig(LITREF(lit_360),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_body_setter_167 = YPmet(FUNCODEREF(fun_loop_body_setter_167),LITREF(lit_359),T159,ENVNUL,PNUL,sloc(291));
  T161 = VARREF_OR(YevalSastYloop_body_setter,YPfalse);
  T162 = fun_loop_body_setter_167;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  VARSET(YevalSastYloop_body_setter,T160);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_body),VARREF(YevalSastYloop_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_361 = YPPsym((P)"loop-continue");
  lit_362 = YPPlist(1,YPPsym((P)"_x"));
  T163 = YPsig(LITREF(lit_362),YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_continue_168 = YPmet(FUNCODEREF(fun_loop_continue_168),LITREF(lit_361),T163,ENVNUL,PNUL,sloc(292));
  T165 = VARREF_OR(YevalSastYloop_continue,YPfalse);
  T166 = fun_loop_continue_168;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T166);
  VARSET(YevalSastYloop_continue,T164);
  lit_363 = YPPsym((P)"loop-continue-setter");
  lit_364 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T167 = YPsig(LITREF(lit_364),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_continue_setter_169 = YPmet(FUNCODEREF(fun_loop_continue_setter_169),LITREF(lit_363),T167,ENVNUL,PNUL,sloc(292));
  T169 = VARREF_OR(YevalSastYloop_continue_setter,YPfalse);
  T170 = fun_loop_continue_setter_169;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSastYloop_continue_setter,T168);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_continue),VARREF(YevalSastYloop_continue_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_365 = YPPsym((P)"<sequential>");
  T173 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T172 = (P)YPpair(VARREF(YLlstG),T173);
  T171 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_365),T172);
  VARSET(YevalSastYLsequentialG,T171);
  T174 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T174);
  lit_366 = YPPsym((P)"sequential");
  lit_367 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T175 = YPsig(LITREF(lit_367),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_366),T175,ENVNUL,PNUL,sloc(294));
  T176 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T176);
  lit_368 = YPPlist(1,YPPsym((P)"e"));
  T178 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T177 = YPsig(LITREF(lit_368),YPPlist(1,T178),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_171 = YPmet(FUNCODEREF(fun_empty_171),LITREF(lit_310),T177,ENVNUL,PNUL,sloc(294));
  T180 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T181 = fun_empty_171;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T181);
  VARSET(YgooScolsScolYempty,T179);
  lit_369 = YPPsym((P)"<constant>");
  T183 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T182 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_369),T183);
  VARSET(YevalSastYLconstantG,T182);
  lit_370 = YPPsym((P)"constant-value");
  lit_371 = YPPlist(1,YPPsym((P)"_x"));
  T184 = YPsig(LITREF(lit_371),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_172 = YPmet(FUNCODEREF(fun_constant_value_172),LITREF(lit_370),T184,ENVNUL,PNUL,sloc(297));
  T186 = VARREF_OR(YevalSastYconstant_value,YPfalse);
  T187 = fun_constant_value_172;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  VARSET(YevalSastYconstant_value,T185);
  lit_372 = YPPsym((P)"constant-value-setter");
  lit_373 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T190 = YPsig(LITREF(lit_373),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T189 = fun_constant_value_setter_173 = YPmet(FUNCODEREF(fun_constant_value_setter_173),LITREF(lit_372),T190,ENVNUL,PNUL,sloc(297));
  T193 = VARREF_OR(YevalSastYconstant_value_setter,YPfalse);
  T194 = fun_constant_value_setter_173;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T194);
  T191 = VARSET(YevalSastYconstant_value_setter,T192);
  T188 = T191;
  return T188;
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172;
DEFCREGS();
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_374 = YPPsym((P)"constant-index");
  lit_375 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_375),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_174 = YPmet(FUNCODEREF(fun_constant_index_174),LITREF(lit_374),T0,ENVNUL,PNUL,sloc(298));
  T2 = VARREF_OR(YevalSastYconstant_index,YPfalse);
  T3 = fun_constant_index_174;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSastYconstant_index,T1);
  lit_376 = YPPsym((P)"constant-index-setter");
  lit_377 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_377),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_175 = YPmet(FUNCODEREF(fun_constant_index_setter_175),LITREF(lit_376),T4,ENVNUL,PNUL,sloc(298));
  T6 = VARREF_OR(YevalSastYconstant_index_setter,YPfalse);
  T7 = fun_constant_index_setter_175;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSastYconstant_index_setter,T5);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_378 = YPPsym((P)"<raw-constant>");
  T9 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T8 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_378),T9);
  VARSET(YevalSastYLraw_constantG,T8);
  lit_379 = YPPsym((P)"<immediate-constant>");
  T11 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_379),T11);
  VARSET(YevalSastYLimmediate_constantG,T10);
  lit_380 = YPPsym((P)"<application>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_380),T13);
  VARSET(YevalSastYLapplicationG,T12);
  lit_381 = YPPsym((P)"application-arguments");
  lit_382 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_176 = YPmet(FUNCODEREF(fun_application_arguments_176),LITREF(lit_381),T14,ENVNUL,PNUL,sloc(305));
  T16 = VARREF_OR(YevalSastYapplication_arguments,YPfalse);
  T17 = fun_application_arguments_176;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YevalSastYapplication_arguments,T15);
  lit_383 = YPPsym((P)"application-arguments-setter");
  lit_384 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_384),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_177 = YPmet(FUNCODEREF(fun_application_arguments_setter_177),LITREF(lit_383),T18,ENVNUL,PNUL,sloc(305));
  T20 = VARREF_OR(YevalSastYapplication_arguments_setter,YPfalse);
  T21 = fun_application_arguments_setter_177;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YevalSastYapplication_arguments_setter,T19);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_385 = YPPsym((P)"application-tail?");
  lit_386 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_386),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_178 = YPmet(FUNCODEREF(fun_application_tailQ_178),LITREF(lit_385),T22,ENVNUL,PNUL,sloc(306));
  T24 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T25 = fun_application_tailQ_178;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSastYapplication_tailQ,T23);
  lit_387 = YPPsym((P)"application-tail?-setter");
  lit_388 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_388),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_179 = YPmet(FUNCODEREF(fun_application_tailQ_setter_179),LITREF(lit_387),T26,ENVNUL,PNUL,sloc(306));
  T28 = VARREF_OR(YevalSastYapplication_tailQ_setter,YPfalse);
  T29 = fun_application_tailQ_setter_179;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYapplication_tailQ_setter,T27);
  lit_389 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_389),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T30,ENVNUL,PNUL,sloc(306));
  T31 = fun_180;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T31);
  lit_390 = YPPsym((P)"<loop-application>");
  T33 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T32 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_390),T33);
  VARSET(YevalSastYLloop_applicationG,T32);
  lit_391 = YPPsym((P)"application-loop");
  lit_392 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_392),YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_loop_181 = YPmet(FUNCODEREF(fun_application_loop_181),LITREF(lit_391),T34,ENVNUL,PNUL,sloc(309));
  T36 = VARREF_OR(YevalSastYapplication_loop,YPfalse);
  T37 = fun_application_loop_181;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSastYapplication_loop,T35);
  lit_393 = YPPsym((P)"application-loop-setter");
  lit_394 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_394),YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_loop_setter_182 = YPmet(FUNCODEREF(fun_application_loop_setter_182),LITREF(lit_393),T38,ENVNUL,PNUL,sloc(309));
  T40 = VARREF_OR(YevalSastYapplication_loop_setter,YPfalse);
  T41 = fun_application_loop_setter_182;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSastYapplication_loop_setter,T39);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),VARREF(YevalSastYapplication_loop_setter),VARREF(YevalSastYLloopG),VARREF(YPprop_unbound_error));
  lit_395 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_395),YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_tailQ_183 = YPmet(FUNCODEREF(fun_application_tailQ_183),LITREF(lit_385),T42,ENVNUL,PNUL,sloc(311));
  T44 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T45 = fun_application_tailQ_183;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSastYapplication_tailQ,T43);
  lit_396 = YPPsym((P)"<regular-application>");
  T47 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T46 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_396),T47);
  VARSET(YevalSastYLregular_applicationG,T46);
  lit_397 = YPPsym((P)"application-function");
  lit_398 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_398),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_184 = YPmet(FUNCODEREF(fun_application_function_184),LITREF(lit_397),T48,ENVNUL,PNUL,sloc(314));
  T50 = VARREF_OR(YevalSastYapplication_function,YPfalse);
  T51 = fun_application_function_184;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSastYapplication_function,T49);
  lit_399 = YPPsym((P)"application-function-setter");
  lit_400 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_400),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_185 = YPmet(FUNCODEREF(fun_application_function_setter_185),LITREF(lit_399),T52,ENVNUL,PNUL,sloc(314));
  T54 = VARREF_OR(YevalSastYapplication_function_setter,YPfalse);
  T55 = fun_application_function_setter_185;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSastYapplication_function_setter,T53);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_401 = YPPsym((P)"application-known?");
  lit_402 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_402),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_186 = YPmet(FUNCODEREF(fun_application_knownQ_186),LITREF(lit_401),T56,ENVNUL,PNUL,sloc(315));
  T58 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T59 = fun_application_knownQ_186;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSastYapplication_knownQ,T57);
  lit_403 = YPPsym((P)"application-known?-setter");
  lit_404 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_404),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_187 = YPmet(FUNCODEREF(fun_application_knownQ_setter_187),LITREF(lit_403),T60,ENVNUL,PNUL,sloc(315));
  T62 = VARREF_OR(YevalSastYapplication_knownQ_setter,YPfalse);
  T63 = fun_application_knownQ_setter_187;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSastYapplication_knownQ_setter,T61);
  lit_405 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_405),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T64,ENVNUL,PNUL,sloc(315));
  T65 = fun_188;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T65);
  lit_406 = YPPsym((P)"<method-application>");
  T67 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_406),T67);
  VARSET(YevalSastYLmethod_applicationG,T66);
  lit_407 = YPPsym((P)"application-next-methods");
  lit_408 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_408),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_189 = YPmet(FUNCODEREF(fun_application_next_methods_189),LITREF(lit_407),T68,ENVNUL,PNUL,sloc(318));
  T70 = VARREF_OR(YevalSastYapplication_next_methods,YPfalse);
  T71 = fun_application_next_methods_189;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YevalSastYapplication_next_methods,T69);
  lit_409 = YPPsym((P)"application-next-methods-setter");
  lit_410 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_410),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_190 = YPmet(FUNCODEREF(fun_application_next_methods_setter_190),LITREF(lit_409),T72,ENVNUL,PNUL,sloc(318));
  T74 = VARREF_OR(YevalSastYapplication_next_methods_setter,YPfalse);
  T75 = fun_application_next_methods_setter_190;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YevalSastYapplication_next_methods_setter,T73);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_411 = YPPsym((P)"<predefined-application>");
  T77 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T76 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_411),T77);
  VARSET(YevalSastYLpredefined_applicationG,T76);
  lit_412 = YPPsym((P)"application-binding");
  lit_413 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_413),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_191 = YPmet(FUNCODEREF(fun_application_binding_191),LITREF(lit_412),T78,ENVNUL,PNUL,sloc(321));
  T80 = VARREF_OR(YevalSastYapplication_binding,YPfalse);
  T81 = fun_application_binding_191;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSastYapplication_binding,T79);
  lit_414 = YPPsym((P)"application-binding-setter");
  lit_415 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_415),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_192 = YPmet(FUNCODEREF(fun_application_binding_setter_192),LITREF(lit_414),T82,ENVNUL,PNUL,sloc(321));
  T84 = VARREF_OR(YevalSastYapplication_binding_setter,YPfalse);
  T85 = fun_application_binding_setter_192;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSastYapplication_binding_setter,T83);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_416 = YPPsym((P)"<fix-let>");
  T87 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T86 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_416),T87);
  VARSET(YevalSastYLfix_letG,T86);
  lit_417 = YPPsym((P)"fix-let-bindings");
  lit_418 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_418),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_193 = YPmet(FUNCODEREF(fun_fix_let_bindings_193),LITREF(lit_417),T88,ENVNUL,PNUL,sloc(324));
  T90 = VARREF_OR(YevalSastYfix_let_bindings,YPfalse);
  T91 = fun_fix_let_bindings_193;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSastYfix_let_bindings,T89);
  lit_419 = YPPsym((P)"fix-let-bindings-setter");
  lit_420 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_420),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_194 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_194),LITREF(lit_419),T92,ENVNUL,PNUL,sloc(324));
  T94 = VARREF_OR(YevalSastYfix_let_bindings_setter,YPfalse);
  T95 = fun_fix_let_bindings_setter_194;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSastYfix_let_bindings_setter,T93);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_421 = YPPsym((P)"fix-let-types");
  lit_422 = YPPlist(1,YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_422),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_195 = YPmet(FUNCODEREF(fun_fix_let_types_195),LITREF(lit_421),T96,ENVNUL,PNUL,sloc(325));
  T98 = VARREF_OR(YevalSastYfix_let_types,YPfalse);
  T99 = fun_fix_let_types_195;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSastYfix_let_types,T97);
  lit_423 = YPPsym((P)"fix-let-types-setter");
  lit_424 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_424),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_196 = YPmet(FUNCODEREF(fun_fix_let_types_setter_196),LITREF(lit_423),T100,ENVNUL,PNUL,sloc(325));
  T102 = VARREF_OR(YevalSastYfix_let_types_setter,YPfalse);
  T103 = fun_fix_let_types_setter_196;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSastYfix_let_types_setter,T101);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_425 = YPPsym((P)"fix-let-arguments");
  lit_426 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_426),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_197 = YPmet(FUNCODEREF(fun_fix_let_arguments_197),LITREF(lit_425),T104,ENVNUL,PNUL,sloc(326));
  T106 = VARREF_OR(YevalSastYfix_let_arguments,YPfalse);
  T107 = fun_fix_let_arguments_197;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSastYfix_let_arguments,T105);
  lit_427 = YPPsym((P)"fix-let-arguments-setter");
  lit_428 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_428),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_198 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_198),LITREF(lit_427),T108,ENVNUL,PNUL,sloc(326));
  T110 = VARREF_OR(YevalSastYfix_let_arguments_setter,YPfalse);
  T111 = fun_fix_let_arguments_setter_198;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSastYfix_let_arguments_setter,T109);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_429 = YPPsym((P)"fix-let-body");
  lit_430 = YPPlist(1,YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_430),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_199 = YPmet(FUNCODEREF(fun_fix_let_body_199),LITREF(lit_429),T112,ENVNUL,PNUL,sloc(327));
  T114 = VARREF_OR(YevalSastYfix_let_body,YPfalse);
  T115 = fun_fix_let_body_199;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSastYfix_let_body,T113);
  lit_431 = YPPsym((P)"fix-let-body-setter");
  lit_432 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_432),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_200 = YPmet(FUNCODEREF(fun_fix_let_body_setter_200),LITREF(lit_431),T116,ENVNUL,PNUL,sloc(327));
  T118 = VARREF_OR(YevalSastYfix_let_body_setter,YPfalse);
  T119 = fun_fix_let_body_setter_200;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YevalSastYfix_let_body_setter,T117);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_433 = YPPsym((P)"<low-let>");
  T121 = (P)YPpair(VARREF(YevalSastYLfix_letG),Ynil);
  T120 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_433),T121);
  VARSET(YevalSastYLlow_letG,T120);
  lit_434 = YPPsym((P)"<fab-list>");
  T124 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T123 = (P)YPpair(VARREF(YLlstG),T124);
  T122 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_434),T123);
  VARSET(YevalSastYLfab_listG,T122);
  T125 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T125);
  lit_435 = YPPsym((P)"fab-list");
  lit_436 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T126 = YPsig(LITREF(lit_436),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_435),T126,ENVNUL,PNUL,sloc(331));
  T127 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T127);
  lit_437 = YPPlist(1,YPPsym((P)"e"));
  T129 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T128 = YPsig(LITREF(lit_437),YPPlist(1,T129),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_202 = YPmet(FUNCODEREF(fun_empty_202),LITREF(lit_310),T128,ENVNUL,PNUL,sloc(331));
  T131 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T132 = fun_empty_202;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YgooScolsScolYempty,T130);
  lit_438 = YPPsym((P)"<arguments>");
  T135 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T134 = (P)YPpair(VARREF(YLlstG),T135);
  T133 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_438),T134);
  VARSET(YevalSastYLargumentsG,T133);
  T136 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T136);
  lit_439 = YPPsym((P)"arguments");
  lit_440 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T137 = YPsig(LITREF(lit_440),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_439),T137,ENVNUL,PNUL,sloc(333));
  T138 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T138);
  lit_441 = YPPlist(1,YPPsym((P)"e"));
  T140 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T139 = YPsig(LITREF(lit_441),YPPlist(1,T140),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_204 = YPmet(FUNCODEREF(fun_empty_204),LITREF(lit_310),T139,ENVNUL,PNUL,sloc(333));
  T142 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T143 = fun_empty_204;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YgooScolsScolYempty,T141);
  lit_442 = YPPsym((P)"<locals>");
  T145 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T144 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_442),T145);
  VARSET(YevalSastYLlocalsG,T144);
  lit_443 = YPPsym((P)"locals-bindings");
  lit_444 = YPPlist(1,YPPsym((P)"_x"));
  T146 = YPsig(LITREF(lit_444),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_205 = YPmet(FUNCODEREF(fun_locals_bindings_205),LITREF(lit_443),T146,ENVNUL,PNUL,sloc(336));
  T148 = VARREF_OR(YevalSastYlocals_bindings,YPfalse);
  T149 = fun_locals_bindings_205;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YevalSastYlocals_bindings,T147);
  lit_445 = YPPsym((P)"locals-bindings-setter");
  lit_446 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T150 = YPsig(LITREF(lit_446),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_206 = YPmet(FUNCODEREF(fun_locals_bindings_setter_206),LITREF(lit_445),T150,ENVNUL,PNUL,sloc(336));
  T152 = VARREF_OR(YevalSastYlocals_bindings_setter,YPfalse);
  T153 = fun_locals_bindings_setter_206;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSastYlocals_bindings_setter,T151);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_447 = YPPsym((P)"locals-functions");
  lit_448 = YPPlist(1,YPPsym((P)"_x"));
  T154 = YPsig(LITREF(lit_448),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_207 = YPmet(FUNCODEREF(fun_locals_functions_207),LITREF(lit_447),T154,ENVNUL,PNUL,sloc(337));
  T156 = VARREF_OR(YevalSastYlocals_functions,YPfalse);
  T157 = fun_locals_functions_207;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSastYlocals_functions,T155);
  lit_449 = YPPsym((P)"locals-functions-setter");
  lit_450 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T158 = YPsig(LITREF(lit_450),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_208 = YPmet(FUNCODEREF(fun_locals_functions_setter_208),LITREF(lit_449),T158,ENVNUL,PNUL,sloc(337));
  T160 = VARREF_OR(YevalSastYlocals_functions_setter,YPfalse);
  T161 = fun_locals_functions_setter_208;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSastYlocals_functions_setter,T159);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_451 = YPPsym((P)"locals-body");
  lit_452 = YPPlist(1,YPPsym((P)"_x"));
  T162 = YPsig(LITREF(lit_452),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_209 = YPmet(FUNCODEREF(fun_locals_body_209),LITREF(lit_451),T162,ENVNUL,PNUL,sloc(338));
  T164 = VARREF_OR(YevalSastYlocals_body,YPfalse);
  T165 = fun_locals_body_209;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSastYlocals_body,T163);
  lit_453 = YPPsym((P)"locals-body-setter");
  lit_454 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T168 = YPsig(LITREF(lit_454),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T167 = fun_locals_body_setter_210 = YPmet(FUNCODEREF(fun_locals_body_setter_210),LITREF(lit_453),T168,ENVNUL,PNUL,sloc(338));
  T171 = VARREF_OR(YevalSastYlocals_body_setter,YPfalse);
  T172 = fun_locals_body_setter_210;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T172);
  T169 = VARSET(YevalSastYlocals_body_setter,T170);
  T166 = T169;
  return T166;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187;
DEFCREGS();
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_455 = YPPsym((P)"<bind-exit>");
  T1 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_455),T1);
  VARSET(YevalSastYLbind_exitG,T0);
  lit_456 = YPPsym((P)"bind-exit-main-fun");
  lit_457 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_457),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_211 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_211),LITREF(lit_456),T2,ENVNUL,PNUL,sloc(341));
  T4 = VARREF_OR(YevalSastYbind_exit_main_fun,YPfalse);
  T5 = fun_bind_exit_main_fun_211;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSastYbind_exit_main_fun,T3);
  lit_458 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_459 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_459),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_212 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_212),LITREF(lit_458),T6,ENVNUL,PNUL,sloc(341));
  T8 = VARREF_OR(YevalSastYbind_exit_main_fun_setter,YPfalse);
  T9 = fun_bind_exit_main_fun_setter_212;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSastYbind_exit_main_fun_setter,T7);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_460 = YPPsym((P)"bind-exit-light?");
  lit_461 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_461),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_213 = YPmet(FUNCODEREF(fun_bind_exit_lightQ_213),LITREF(lit_460),T10,ENVNUL,PNUL,sloc(342));
  T12 = VARREF_OR(YevalSastYbind_exit_lightQ,YPfalse);
  T13 = fun_bind_exit_lightQ_213;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YevalSastYbind_exit_lightQ,T11);
  lit_462 = YPPsym((P)"bind-exit-light?-setter");
  lit_463 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_463),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_setter_214 = YPmet(FUNCODEREF(fun_bind_exit_lightQ_setter_214),LITREF(lit_462),T14,ENVNUL,PNUL,sloc(342));
  T16 = VARREF_OR(YevalSastYbind_exit_lightQ_setter,YPfalse);
  T17 = fun_bind_exit_lightQ_setter_214;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YevalSastYbind_exit_lightQ_setter,T15);
  lit_464 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_464),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T18,ENVNUL,PNUL,sloc(342));
  T19 = fun_215;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_lightQ),VARREF(YevalSastYbind_exit_lightQ_setter),VARREF(YLlogG),T19);
  lit_465 = YPPsym((P)"<unwind-protect>");
  T21 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T20 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_465),T21);
  VARSET(YevalSastYLunwind_protectG,T20);
  lit_466 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_467 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_467),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_216 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_216),LITREF(lit_466),T22,ENVNUL,PNUL,sloc(345));
  T24 = VARREF_OR(YevalSastYunwind_protect_protected_thunk,YPfalse);
  T25 = fun_unwind_protect_protected_thunk_216;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSastYunwind_protect_protected_thunk,T23);
  lit_468 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_469 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_469),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_217 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_217),LITREF(lit_468),T26,ENVNUL,PNUL,sloc(345));
  T28 = VARREF_OR(YevalSastYunwind_protect_protected_thunk_setter,YPfalse);
  T29 = fun_unwind_protect_protected_thunk_setter_217;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T27);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_470 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_471 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_471),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_218 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_218),LITREF(lit_470),T30,ENVNUL,PNUL,sloc(346));
  T32 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk,YPfalse);
  T33 = fun_unwind_protect_cleanup_thunk_218;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T31);
  lit_472 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_473 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_473),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_219 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_219),LITREF(lit_472),T34,ENVNUL,PNUL,sloc(346));
  T36 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk_setter,YPfalse);
  T37 = fun_unwind_protect_cleanup_thunk_setter_219;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T35);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_474 = YPPsym((P)"<monitor>");
  T39 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T38 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_474),T39);
  VARSET(YevalSastYLmonitorG,T38);
  lit_475 = YPPsym((P)"monitor-type");
  lit_476 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_476),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_220 = YPmet(FUNCODEREF(fun_monitor_type_220),LITREF(lit_475),T40,ENVNUL,PNUL,sloc(349));
  T42 = VARREF_OR(YevalSastYmonitor_type,YPfalse);
  T43 = fun_monitor_type_220;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSastYmonitor_type,T41);
  lit_477 = YPPsym((P)"monitor-type-setter");
  lit_478 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_478),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_221 = YPmet(FUNCODEREF(fun_monitor_type_setter_221),LITREF(lit_477),T44,ENVNUL,PNUL,sloc(349));
  T46 = VARREF_OR(YevalSastYmonitor_type_setter,YPfalse);
  T47 = fun_monitor_type_setter_221;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSastYmonitor_type_setter,T45);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_479 = YPPsym((P)"monitor-info");
  lit_480 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_480),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_222 = YPmet(FUNCODEREF(fun_monitor_info_222),LITREF(lit_479),T48,ENVNUL,PNUL,sloc(350));
  T50 = VARREF_OR(YevalSastYmonitor_info,YPfalse);
  T51 = fun_monitor_info_222;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSastYmonitor_info,T49);
  lit_481 = YPPsym((P)"monitor-info-setter");
  lit_482 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_482),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_223 = YPmet(FUNCODEREF(fun_monitor_info_setter_223),LITREF(lit_481),T52,ENVNUL,PNUL,sloc(350));
  T54 = VARREF_OR(YevalSastYmonitor_info_setter,YPfalse);
  T55 = fun_monitor_info_setter_223;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSastYmonitor_info_setter,T53);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_483 = YPPsym((P)"monitor-test");
  lit_484 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_484),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_224 = YPmet(FUNCODEREF(fun_monitor_test_224),LITREF(lit_483),T56,ENVNUL,PNUL,sloc(351));
  T58 = VARREF_OR(YevalSastYmonitor_test,YPfalse);
  T59 = fun_monitor_test_224;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSastYmonitor_test,T57);
  lit_485 = YPPsym((P)"monitor-test-setter");
  lit_486 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_486),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_225 = YPmet(FUNCODEREF(fun_monitor_test_setter_225),LITREF(lit_485),T60,ENVNUL,PNUL,sloc(351));
  T62 = VARREF_OR(YevalSastYmonitor_test_setter,YPfalse);
  T63 = fun_monitor_test_setter_225;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSastYmonitor_test_setter,T61);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_487 = YPPsym((P)"monitor-handler");
  lit_488 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_488),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_226 = YPmet(FUNCODEREF(fun_monitor_handler_226),LITREF(lit_487),T64,ENVNUL,PNUL,sloc(352));
  T66 = VARREF_OR(YevalSastYmonitor_handler,YPfalse);
  T67 = fun_monitor_handler_226;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSastYmonitor_handler,T65);
  lit_489 = YPPsym((P)"monitor-handler-setter");
  lit_490 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_490),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_227 = YPmet(FUNCODEREF(fun_monitor_handler_setter_227),LITREF(lit_489),T68,ENVNUL,PNUL,sloc(352));
  T70 = VARREF_OR(YevalSastYmonitor_handler_setter,YPfalse);
  T71 = fun_monitor_handler_setter_227;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YevalSastYmonitor_handler_setter,T69);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_491 = YPPsym((P)"monitor-main-thunk");
  lit_492 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_492),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_228 = YPmet(FUNCODEREF(fun_monitor_main_thunk_228),LITREF(lit_491),T72,ENVNUL,PNUL,sloc(353));
  T74 = VARREF_OR(YevalSastYmonitor_main_thunk,YPfalse);
  T75 = fun_monitor_main_thunk_228;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YevalSastYmonitor_main_thunk,T73);
  lit_493 = YPPsym((P)"monitor-main-thunk-setter");
  lit_494 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_494),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_229 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_229),LITREF(lit_493),T76,ENVNUL,PNUL,sloc(353));
  T78 = VARREF_OR(YevalSastYmonitor_main_thunk_setter,YPfalse);
  T79 = fun_monitor_main_thunk_setter_229;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YevalSastYmonitor_main_thunk_setter,T77);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_495 = YPPsym((P)"ast-walk!");
  lit_496 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T80 = YPsig(LITREF(lit_496),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_230 = YPmet(FUNCODEREF(fun_ast_walkX_230),LITREF(lit_495),T80,ENVNUL,PNUL,sloc(357));
  T82 = VARREF_OR(YevalSastYast_walkX,YPfalse);
  T83 = fun_ast_walkX_230;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YevalSastYast_walkX,T81);
  lit_497 = YPPsym((P)"ast-walk");
  lit_498 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T84 = YPsig(LITREF(lit_498),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_231 = YPmet(FUNCODEREF(fun_ast_walk_231),LITREF(lit_497),T84,ENVNUL,PNUL,sloc(372));
  T86 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T87 = fun_ast_walk_231;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YevalSastYast_walk,T85);
  lit_499 = YPPsym((P)"ast-copy");
  lit_500 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPsig(LITREF(lit_500),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_232 = YPmet(FUNCODEREF(fun_ast_copy_232),LITREF(lit_499),T88,ENVNUL,PNUL,sloc(383));
  T90 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T91 = fun_ast_copy_232;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSastYast_copy,T89);
  lit_501 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_233 = YPmet(FUNCODEREF(fun_ast_copy_233),LITREF(lit_499),T92,ENVNUL,PNUL,sloc(388));
  T94 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T95 = fun_ast_copy_233;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSastYast_copy,T93);
  lit_502 = YPPsym((P)"<static-environment>");
  T97 = (P)YPpair(VARREF(YLanyG),Ynil);
  T96 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_502),T97);
  VARSET(YevalSastYLstatic_environmentG,T96);
  lit_503 = YPPsym((P)"environment-next");
  lit_504 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_504),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_234 = YPmet(FUNCODEREF(fun_environment_next_234),LITREF(lit_503),T98,ENVNUL,PNUL,sloc(396));
  T100 = VARREF_OR(YevalSastYenvironment_next,YPfalse);
  T101 = fun_environment_next_234;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YevalSastYenvironment_next,T99);
  lit_505 = YPPsym((P)"environment-next-setter");
  lit_506 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_506),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_235 = YPmet(FUNCODEREF(fun_environment_next_setter_235),LITREF(lit_505),T102,ENVNUL,PNUL,sloc(396));
  T104 = VARREF_OR(YevalSastYenvironment_next_setter,YPfalse);
  T105 = fun_environment_next_setter_235;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YevalSastYenvironment_next_setter,T103);
  lit_507 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_507),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T106,ENVNUL,PNUL,sloc(396));
  T107 = fun_236;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T107);
  lit_508 = YPPsym((P)"environment-bindings");
  lit_509 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_509),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_237 = YPmet(FUNCODEREF(fun_environment_bindings_237),LITREF(lit_508),T108,ENVNUL,PNUL,sloc(397));
  T110 = VARREF_OR(YevalSastYenvironment_bindings,YPfalse);
  T111 = fun_environment_bindings_237;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSastYenvironment_bindings,T109);
  lit_510 = YPPsym((P)"environment-bindings-setter");
  lit_511 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_511),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_238 = YPmet(FUNCODEREF(fun_environment_bindings_setter_238),LITREF(lit_510),T112,ENVNUL,PNUL,sloc(397));
  T114 = VARREF_OR(YevalSastYenvironment_bindings_setter,YPfalse);
  T115 = fun_environment_bindings_setter_238;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSastYenvironment_bindings_setter,T113);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_512 = YPPsym((P)"<static-global-environment>");
  T117 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T116 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_512),T117);
  VARSET(YevalSastYLstatic_global_environmentG,T116);
  lit_513 = YPPsym((P)"environment-module");
  lit_514 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_514),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_239 = YPmet(FUNCODEREF(fun_environment_module_239),LITREF(lit_513),T118,ENVNUL,PNUL,sloc(401));
  T120 = VARREF_OR(YevalSastYenvironment_module,YPfalse);
  T121 = fun_environment_module_239;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YevalSastYenvironment_module,T119);
  lit_515 = YPPsym((P)"environment-module-setter");
  lit_516 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T122 = YPsig(LITREF(lit_516),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_240 = YPmet(FUNCODEREF(fun_environment_module_setter_240),LITREF(lit_515),T122,ENVNUL,PNUL,sloc(401));
  T124 = VARREF_OR(YevalSastYenvironment_module_setter,YPfalse);
  T125 = fun_environment_module_setter_240;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YevalSastYenvironment_module_setter,T123);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_517 = YPPsym((P)"environment-module-loader");
  lit_518 = YPPlist(1,YPPsym((P)"_x"));
  T126 = YPsig(LITREF(lit_518),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_241 = YPmet(FUNCODEREF(fun_environment_module_loader_241),LITREF(lit_517),T126,ENVNUL,PNUL,sloc(404));
  T128 = VARREF_OR(YevalSastYenvironment_module_loader,YPfalse);
  T129 = fun_environment_module_loader_241;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YevalSastYenvironment_module_loader,T127);
  lit_519 = YPPsym((P)"environment-module-loader-setter");
  lit_520 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T130 = YPsig(LITREF(lit_520),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_242 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_242),LITREF(lit_519),T130,ENVNUL,PNUL,sloc(404));
  T132 = VARREF_OR(YevalSastYenvironment_module_loader_setter,YPfalse);
  T133 = fun_environment_module_loader_setter_242;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YevalSastYenvironment_module_loader_setter,T131);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_521 = YPPsym((P)"environment-uses-modules");
  lit_522 = YPPlist(1,YPPsym((P)"_x"));
  T134 = YPsig(LITREF(lit_522),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_243 = YPmet(FUNCODEREF(fun_environment_uses_modules_243),LITREF(lit_521),T134,ENVNUL,PNUL,sloc(406));
  T136 = VARREF_OR(YevalSastYenvironment_uses_modules,YPfalse);
  T137 = fun_environment_uses_modules_243;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YevalSastYenvironment_uses_modules,T135);
  lit_523 = YPPsym((P)"environment-uses-modules-setter");
  lit_524 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T138 = YPsig(LITREF(lit_524),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_244 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_244),LITREF(lit_523),T138,ENVNUL,PNUL,sloc(406));
  T140 = VARREF_OR(YevalSastYenvironment_uses_modules_setter,YPfalse);
  T141 = fun_environment_uses_modules_setter_244;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YevalSastYenvironment_uses_modules_setter,T139);
  lit_525 = YPPlist(1,YPPsym((P)"_x"));
  T142 = YPsig(LITREF(lit_525),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T142,ENVNUL,PNUL,sloc(406));
  T143 = fun_245;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T143);
  lit_526 = YPPsym((P)"environment-allows-foreign-names?");
  lit_527 = YPPlist(1,YPPsym((P)"_x"));
  T144 = YPsig(LITREF(lit_527),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_246 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_246),LITREF(lit_526),T144,ENVNUL,PNUL,sloc(410));
  T146 = VARREF_OR(YevalSastYenvironment_allows_foreign_namesQ,YPfalse);
  T147 = fun_environment_allows_foreign_namesQ_246;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T145);
  lit_528 = YPPsym((P)"environment-allows-foreign-names?-setter");
  lit_529 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T148 = YPsig(LITREF(lit_529),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_247 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_247),LITREF(lit_528),T148,ENVNUL,PNUL,sloc(410));
  T150 = VARREF_OR(YevalSastYenvironment_allows_foreign_namesQ_setter,YPfalse);
  T151 = fun_environment_allows_foreign_namesQ_setter_247;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T149);
  lit_530 = YPPlist(1,YPPsym((P)"_x"));
  T152 = YPsig(LITREF(lit_530),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T152,ENVNUL,PNUL,sloc(410));
  T153 = fun_248;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T153);
  lit_531 = YPPsym((P)"<static-empty-environment>");
  T155 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_531),T155);
  VARSET(YevalSastYLstatic_empty_environmentG,T154);
  T156 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T156);
  lit_532 = YPPsym((P)"<static-local-environment>");
  T158 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T157 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_532),T158);
  VARSET(YevalSastYLstatic_local_environmentG,T157);
  lit_533 = YPPsym((P)"env-object-name");
  lit_534 = YPPlist(1,YPPsym((P)"x"));
  lit_535 = YPPlist(1,YPPsym((P)"return"));
  lit_536 = YPPlist(1,YPPsym((P)"binding"));
  T161 = YPsig(LITREF(lit_536),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T161,ENVNUL,PNUL,sloc(427));
  T160 = YPsig(LITREF(lit_535),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T160,ENVNUL,PNUL,sloc(425));
  T159 = YPsig(LITREF(lit_534),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_251 = YPmet(FUNCODEREF(fun_env_object_name_251),LITREF(lit_533),T159,ENVNUL,PNUL,sloc(424));
  T163 = VARREF_OR(YevalSastYenv_object_name,YPfalse);
  T164 = fun_env_object_name_251;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YevalSastYenv_object_name,T162);
  lit_537 = YPPsym((P)"objectify");
  lit_538 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T165 = YPsig(LITREF(lit_538),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_252 = YPmet(FUNCODEREF(fun_objectify_252),LITREF(lit_537),T165,ENVNUL,PNUL,sloc(437));
  T167 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T168 = fun_objectify_252;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YevalSastYobjectify,T166);
  lit_539 = YPPsym((P)"objectify-list");
  lit_540 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T169 = YPsig(LITREF(lit_540),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_253 = YPmet(FUNCODEREF(fun_objectify_list_253),LITREF(lit_539),T169,ENVNUL,PNUL,sloc(442));
  T171 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T172 = fun_objectify_list_253;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T172);
  VARSET(YevalSastYobjectify_list,T170);
  lit_541 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T173 = YPsig(LITREF(lit_541),YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_254 = YPmet(FUNCODEREF(fun_objectify_list_254),LITREF(lit_539),T173,ENVNUL,PNUL,sloc(446));
  T175 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T176 = fun_objectify_list_254;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T176);
  VARSET(YevalSastYobjectify_list,T174);
  lit_542 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T177 = YPsig(LITREF(lit_542),YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_255 = YPmet(FUNCODEREF(fun_objectify_list_255),LITREF(lit_539),T177,ENVNUL,PNUL,sloc(450));
  T179 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T180 = fun_objectify_list_255;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YevalSastYobjectify_list,T178);
  lit_543 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T183 = YPsig(LITREF(lit_543),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T182 = fun_objectify_256 = YPmet(FUNCODEREF(fun_objectify_256),LITREF(lit_537),T183,ENVNUL,PNUL,sloc(454));
  T186 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T187 = fun_objectify_256;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  T184 = VARSET(YevalSastYobjectify,T185);
  T181 = T184;
  return T181;
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
  P T240,T241,T242,T243,T244,T245,T246,T247;
DEFCREGS();
  lit_544 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_544),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_257 = YPmet(FUNCODEREF(fun_objectify_257),LITREF(lit_537),T0,ENVNUL,PNUL,sloc(457));
  T2 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T3 = fun_objectify_257;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSastYobjectify,T1);
  lit_545 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T4 = YPsig(LITREF(lit_545),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_258 = YPmet(FUNCODEREF(fun_objectify_258),LITREF(lit_537),T4,ENVNUL,PNUL,sloc(460));
  T6 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T7 = fun_objectify_258;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSastYobjectify,T5);
  lit_546 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T8 = YPsig(LITREF(lit_546),YPPlist(3,T9,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_259 = YPmet(FUNCODEREF(fun_objectify_259),LITREF(lit_537),T8,ENVNUL,PNUL,sloc(463));
  T11 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T12 = fun_objectify_259;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YevalSastYobjectify,T10);
  lit_547 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T13 = YPsig(LITREF(lit_547),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_260 = YPmet(FUNCODEREF(fun_objectify_260),LITREF(lit_537),T13,ENVNUL,PNUL,sloc(466));
  T15 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T16 = fun_objectify_260;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T16);
  VARSET(YevalSastYobjectify,T14);
  lit_548 = YPPsym((P)"objectify-quotation");
  lit_549 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T17 = YPsig(LITREF(lit_549),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_261 = YPmet(FUNCODEREF(fun_objectify_quotation_261),LITREF(lit_548),T17,ENVNUL,PNUL,sloc(469));
  T19 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T20 = fun_objectify_quotation_261;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YevalSastYobjectify_quotation,T18);
  lit_550 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T21 = YPsig(LITREF(lit_550),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_262 = YPmet(FUNCODEREF(fun_objectify_quotation_262),LITREF(lit_548),T21,ENVNUL,PNUL,sloc(472));
  T23 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T24 = fun_objectify_quotation_262;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YevalSastYobjectify_quotation,T22);
  lit_551 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T25 = YPsig(LITREF(lit_551),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_263 = YPmet(FUNCODEREF(fun_objectify_quotation_263),LITREF(lit_548),T25,ENVNUL,PNUL,sloc(475));
  T27 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T28 = fun_objectify_quotation_263;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YevalSastYobjectify_quotation,T26);
  lit_552 = YPPsym((P)"objectify-raw");
  lit_553 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T29 = YPsig(LITREF(lit_553),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_264 = YPmet(FUNCODEREF(fun_objectify_raw_264),LITREF(lit_552),T29,ENVNUL,PNUL,sloc(478));
  T31 = VARREF_OR(YevalSastYobjectify_raw,YPfalse);
  T32 = fun_objectify_raw_264;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YevalSastYobjectify_raw,T30);
  lit_554 = YPPsym((P)"objectify-bound?");
  lit_555 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"default"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T33 = YPsig(LITREF(lit_555),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_265 = YPmet(FUNCODEREF(fun_objectify_boundQ_265),LITREF(lit_554),T33,ENVNUL,PNUL,sloc(481));
  T35 = VARREF_OR(YevalSastYobjectify_boundQ,YPfalse);
  T36 = fun_objectify_boundQ_265;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YevalSastYobjectify_boundQ,T34);
  lit_556 = YPPsym((P)"objectify-compile-time");
  lit_557 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T37 = YPsig(LITREF(lit_557),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_266 = YPmet(FUNCODEREF(fun_objectify_compile_time_266),LITREF(lit_556),T37,ENVNUL,PNUL,sloc(489));
  T39 = VARREF_OR(YevalSastYobjectify_compile_time,YPfalse);
  T40 = fun_objectify_compile_time_266;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YevalSastYobjectify_compile_time,T38);
  lit_558 = YPPsym((P)"objectify-alternative");
  lit_559 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T41 = YPsig(LITREF(lit_559),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_267 = YPmet(FUNCODEREF(fun_objectify_alternative_267),LITREF(lit_558),T41,ENVNUL,PNUL,sloc(505));
  T43 = VARREF_OR(YevalSastYobjectify_alternative,YPfalse);
  T44 = fun_objectify_alternative_267;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YevalSastYobjectify_alternative,T42);
  lit_560 = YPPsym((P)"sequentialize");
  lit_561 = YPPlist(1,YPPsym((P)"e*"));
  lit_562 = YPPsym((P)"loop");
  lit_563 = YPPlist(1,YPPsym((P)"e*"));
  T46 = YPsig(LITREF(lit_563),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_268 = YPmet(FUNCODEREF(fun_loop_268),LITREF(lit_562),T46,ENVNUL,PNUL,sloc(516));
  T45 = YPsig(LITREF(lit_561),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_269 = YPmet(FUNCODEREF(fun_sequentialize_269),LITREF(lit_560),T45,ENVNUL,PNUL,sloc(511));
  T48 = VARREF_OR(YevalSastYsequentialize,YPfalse);
  T49 = fun_sequentialize_269;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSastYsequentialize,T47);
  lit_564 = YPPsym((P)"transform-defs");
  lit_565 = YPPlist(1,YPPsym((P)"e*"));
  T50 = YPsig(LITREF(lit_565),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_270 = YPmet(FUNCODEREF(fun_transform_defs_270),LITREF(lit_564),T50,ENVNUL,PNUL,sloc(521));
  T52 = VARREF_OR(YevalSastYtransform_defs,YPfalse);
  T53 = fun_transform_defs_270;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSastYtransform_defs,T51);
  lit_566 = YPPsym((P)"objectify-sequential");
  lit_567 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T54 = YPsig(LITREF(lit_567),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_271 = YPmet(FUNCODEREF(fun_objectify_sequential_271),LITREF(lit_566),T54,ENVNUL,PNUL,sloc(530));
  T56 = VARREF_OR(YevalSastYobjectify_sequential,YPfalse);
  T57 = fun_objectify_sequential_271;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSastYobjectify_sequential,T55);
  lit_568 = YPPsym((P)"objectify-application");
  lit_569 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_570 = YPPlist(1,YPPsym((P)"e"));
  T59 = YPsig(LITREF(lit_570),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T59,ENVNUL,PNUL,sloc(541));
  T58 = YPsig(LITREF(lit_569),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_273 = YPmet(FUNCODEREF(fun_objectify_application_273),LITREF(lit_568),T58,ENVNUL,PNUL,sloc(540));
  T61 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T62 = fun_objectify_application_273;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YevalSastYobjectify_application,T60);
  lit_571 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_572 = YPPlist(1,YPPsym((P)"e"));
  T64 = YPsig(LITREF(lit_572),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T64,ENVNUL,PNUL,sloc(547));
  T63 = YPsig(LITREF(lit_571),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_275 = YPmet(FUNCODEREF(fun_objectify_application_275),LITREF(lit_568),T63,ENVNUL,PNUL,sloc(546));
  T66 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T67 = fun_objectify_application_275;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSastYobjectify_application,T65);
  lit_573 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_574 = YPPlist(1,YPPsym((P)"e"));
  T69 = YPsig(LITREF(lit_574),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T69,ENVNUL,PNUL,sloc(558));
  T68 = YPsig(LITREF(lit_573),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_277 = YPmet(FUNCODEREF(fun_objectify_application_277),LITREF(lit_568),T68,ENVNUL,PNUL,sloc(557));
  T71 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T72 = fun_objectify_application_277;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSastYobjectify_application,T70);
  lit_575 = YPPsym((P)"process-closed-application");
  lit_576 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_577 = YPsb((P)"incorrect regular arity");
  T73 = YPsig(LITREF(lit_576),YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_278 = YPmet(FUNCODEREF(fun_process_closed_application_278),LITREF(lit_575),T73,ENVNUL,PNUL,sloc(567));
  T75 = VARREF_OR(YevalSastYprocess_closed_application,YPfalse);
  T76 = fun_process_closed_application_278;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YevalSastYprocess_closed_application,T74);
  lit_578 = YPPsym((P)"process-nary-closed-application");
  lit_579 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_580 = YPPsym((P)"pack-nary-args");
  lit_581 = YPPlist(1,YPPsym((P)"e*"));
  lit_582 = YPPsym((P)"quote");
  lit_583 = YPPsym((P)"%pair");
  lit_584 = YPPsym((P)"pack-args");
  lit_585 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_586 = YPPsym((P)"<lst>");
  lit_587 = YPsb((P)"incorrect dotted arity");
  T79 = YPsig(LITREF(lit_581),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_279 = YPmet(FUNCODEREF(fun_pack_nary_args_279),LITREF(lit_580),T79,ENVNUL,PNUL,sloc(582));
  T78 = YPsig(LITREF(lit_585),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_280 = YPmet(FUNCODEREF(fun_pack_args_280),LITREF(lit_584),T78,ENVNUL,PNUL,sloc(586));
  T77 = YPsig(LITREF(lit_579),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_281 = YPmet(FUNCODEREF(fun_process_nary_closed_application_281),LITREF(lit_578),T77,ENVNUL,PNUL,sloc(581));
  T81 = VARREF_OR(YevalSastYprocess_nary_closed_application,YPfalse);
  T82 = fun_process_nary_closed_application_281;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YevalSastYprocess_nary_closed_application,T80);
  lit_588 = YPPsym((P)"convert2arguments");
  lit_589 = YPPlist(1,YPPsym((P)"e*"));
  T83 = YPsig(LITREF(lit_589),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_282 = YPmet(FUNCODEREF(fun_convert2arguments_282),LITREF(lit_588),T83,ENVNUL,PNUL,sloc(607));
  T85 = VARREF_OR(YevalSastYconvert2arguments,YPfalse);
  T86 = fun_convert2arguments_282;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YevalSastYconvert2arguments,T84);
  lit_590 = YPPsym((P)"objectify-assignment");
  lit_591 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_592 = YPsb((P)"Unsupported Set!: %=");
  T87 = YPsig(LITREF(lit_591),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_283 = YPmet(FUNCODEREF(fun_objectify_assignment_283),LITREF(lit_590),T87,ENVNUL,PNUL,sloc(616));
  T89 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T90 = fun_objectify_assignment_283;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YevalSastYobjectify_assignment,T88);
  lit_593 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T91 = YPsig(LITREF(lit_593),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_284 = YPmet(FUNCODEREF(fun_objectify_assignment_284),LITREF(lit_590),T91,ENVNUL,PNUL,sloc(626));
  T93 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T94 = fun_objectify_assignment_284;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSastYobjectify_assignment,T92);
  lit_594 = YPPsym((P)"objectify-assignment-using");
  lit_595 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T95 = YPsig(LITREF(lit_595),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_285 = YPmet(FUNCODEREF(fun_objectify_assignment_using_285),LITREF(lit_594),T95,ENVNUL,PNUL,sloc(631));
  T97 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T98 = fun_objectify_assignment_using_285;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YevalSastYobjectify_assignment_using,T96);
  lit_596 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T99 = YPsig(LITREF(lit_596),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_286 = YPmet(FUNCODEREF(fun_objectify_assignment_using_286),LITREF(lit_594),T99,ENVNUL,PNUL,sloc(638));
  T101 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T102 = fun_objectify_assignment_using_286;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YevalSastYobjectify_assignment_using,T100);
  lit_597 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T103 = YPsig(LITREF(lit_597),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_287 = YPmet(FUNCODEREF(fun_objectify_assignment_using_287),LITREF(lit_594),T103,ENVNUL,PNUL,sloc(644));
  T105 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T106 = fun_objectify_assignment_using_287;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSastYobjectify_assignment_using,T104);
  lit_598 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T107 = YPsig(LITREF(lit_598),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_288 = YPmet(FUNCODEREF(fun_objectify_assignment_using_288),LITREF(lit_594),T107,ENVNUL,PNUL,sloc(650));
  T109 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T110 = fun_objectify_assignment_using_288;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YevalSastYobjectify_assignment_using,T108);
  lit_599 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_600 = YPsb((P)"Unable to assign to static module binding %=");
  T111 = YPsig(LITREF(lit_599),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_289 = YPmet(FUNCODEREF(fun_objectify_assignment_using_289),LITREF(lit_594),T111,ENVNUL,PNUL,sloc(656));
  T113 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T114 = fun_objectify_assignment_using_289;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSastYobjectify_assignment_using,T112);
  lit_601 = YPPsym((P)"update-binding-kind");
  lit_602 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_603 = YPPsym((P)"runtime");
  lit_604 = YPPsym((P)"magic");
  lit_605 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T115 = YPsig(LITREF(lit_602),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_601),T115,ENVNUL,PNUL,sloc(669));
  T116 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T116);
  lit_606 = YPPsym((P)"ast-define-binding");
  lit_607 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_608 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T117 = YPsig(LITREF(lit_607),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_291 = YPmet(FUNCODEREF(fun_ast_define_binding_291),LITREF(lit_606),T117,ENVNUL,PNUL,sloc(678));
  T119 = VARREF_OR(YevalSastYast_define_binding,YPfalse);
  T120 = fun_ast_define_binding_291;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YevalSastYast_define_binding,T118);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_609 = YPPsym((P)"objectify-definition");
  lit_610 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T121 = YPsig(LITREF(lit_610),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_292 = YPmet(FUNCODEREF(fun_objectify_definition_292),LITREF(lit_609),T121,ENVNUL,PNUL,sloc(720));
  T123 = VARREF_OR(YevalSastYobjectify_definition,YPfalse);
  T124 = fun_objectify_definition_292;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSastYobjectify_definition,T122);
  lit_611 = YPPsym((P)"objectify-variable-definition");
  lit_612 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T125 = YPsig(LITREF(lit_612),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_293 = YPmet(FUNCODEREF(fun_objectify_variable_definition_293),LITREF(lit_611),T125,ENVNUL,PNUL,sloc(731));
  T127 = VARREF_OR(YevalSastYobjectify_variable_definition,YPfalse);
  T128 = fun_objectify_variable_definition_293;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YevalSastYobjectify_variable_definition,T126);
  lit_613 = YPPsym((P)"objectify-dynamic-definition");
  lit_614 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_615 = YPPsym((P)"dynamic");
  T129 = YPsig(LITREF(lit_614),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_294 = YPmet(FUNCODEREF(fun_objectify_dynamic_definition_294),LITREF(lit_613),T129,ENVNUL,PNUL,sloc(734));
  T131 = VARREF_OR(YevalSastYobjectify_dynamic_definition,YPfalse);
  T132 = fun_objectify_dynamic_definition_294;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YevalSastYobjectify_dynamic_definition,T130);
  lit_616 = YPPsym((P)"%%macro");
  lit_617 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_618 = YPPsym((P)"macro");
  lit_619 = YPPsym((P)"expand");
  lit_620 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_621 = YPsb((P)"MACRO ");
  lit_622 = YPsb((P)"\n");
  lit_623 = YPsb((P)"  => ");
  lit_624 = YPsb((P)"\n");
  T134 = YPsig(LITREF(lit_620),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_295 = YPmet(FUNCODEREF(fun_expand_295),LITREF(lit_619),T134,ENVNUL,PNUL,sloc(739));
  T133 = YPsig(LITREF(lit_617),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_616),T133,ENVNUL,PNUL,sloc(737));
  T135 = YPPmacro;
  VARSET(YPPmacro,T135);
  lit_625 = YPPsym((P)"objectify-syntax-definition");
  lit_626 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T136 = YPsig(LITREF(lit_626),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_297 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_297),LITREF(lit_625),T136,ENVNUL,PNUL,sloc(761));
  T138 = VARREF_OR(YevalSastYobjectify_syntax_definition,YPfalse);
  T139 = fun_objectify_syntax_definition_297;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSastYobjectify_syntax_definition,T137);
  lit_627 = YPPsym((P)"objectify-function-definition");
  lit_628 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  T140 = YPsig(LITREF(lit_628),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_298 = YPmet(FUNCODEREF(fun_objectify_function_definition_298),LITREF(lit_627),T140,ENVNUL,PNUL,sloc(790));
  T142 = VARREF_OR(YevalSastYobjectify_function_definition,YPfalse);
  T143 = fun_objectify_function_definition_298;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSastYobjectify_function_definition,T141);
  lit_629 = YPPsym((P)"module-binding");
  lit_630 = YPPlist(1,YPPsym((P)"kind"));
  T144 = YPsig(LITREF(lit_630),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_629),T144,ENVNUL,PNUL,sloc(799));
  T145 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T145);
  lit_631 = YPPsym((P)"objectify-primitive-definition");
  lit_632 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_633 = YPPsym((P)"predefined");
  lit_634 = YPPsym((P)"inline");
  T146 = YPsig(LITREF(lit_632),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_300 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_300),LITREF(lit_631),T146,ENVNUL,PNUL,sloc(802));
  T148 = VARREF_OR(YevalSastYobjectify_primitive_definition,YPfalse);
  T149 = fun_objectify_primitive_definition_300;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YevalSastYobjectify_primitive_definition,T147);
  lit_635 = YPPsym((P)"objectify-generic-definition");
  lit_636 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T150 = YPsig(LITREF(lit_636),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_301 = YPmet(FUNCODEREF(fun_objectify_generic_definition_301),LITREF(lit_635),T150,ENVNUL,PNUL,sloc(821));
  T152 = VARREF_OR(YevalSastYobjectify_generic_definition,YPfalse);
  T153 = fun_objectify_generic_definition_301;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSastYobjectify_generic_definition,T151);
  lit_637 = YPPsym((P)"objectify-method-definition");
  lit_638 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_639 = YPPsym((P)"bound?");
  lit_640 = YPPsym((P)"%define-method");
  T154 = YPsig(LITREF(lit_638),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_302 = YPmet(FUNCODEREF(fun_objectify_method_definition_302),LITREF(lit_637),T154,ENVNUL,PNUL,sloc(833));
  T156 = VARREF_OR(YevalSastYobjectify_method_definition,YPfalse);
  T157 = fun_objectify_method_definition_302;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSastYobjectify_method_definition,T155);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_641 = YPPsym((P)"objectify-function-source");
  lit_642 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_643 = Ynil;
  lit_644 = YPsb((P)"(fun %s %s)");
  T162 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T162,ENVNUL,PNUL,sloc(857));
  T161 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T161,ENVNUL,PNUL,sloc(857));
  T160 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T160,ENVNUL,PNUL,sloc(857));
  T159 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T159,ENVNUL,PNUL,sloc(857));
  T158 = YPsig(LITREF(lit_642),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_307 = YPmet(FUNCODEREF(fun_objectify_function_source_307),LITREF(lit_641),T158,ENVNUL,PNUL,sloc(856));
  T164 = VARREF_OR(YevalSastYobjectify_function_source,YPfalse);
  T165 = fun_objectify_function_source_307;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSastYobjectify_function_source,T163);
  lit_645 = YPPsym((P)"objectify-function-using");
  lit_646 = YPPlist(5,YPPsym((P)"met"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T168 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T168,ENVNUL,PNUL,sloc(867));
  T167 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T167,ENVNUL,PNUL,sloc(867));
  T166 = YPsig(LITREF(lit_646),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_using_310 = YPmet(FUNCODEREF(fun_objectify_function_using_310),LITREF(lit_645),T166,ENVNUL,PNUL,sloc(865));
  T170 = VARREF_OR(YevalSastYobjectify_function_using,YPfalse);
  T171 = fun_objectify_function_using_310;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T171);
  VARSET(YevalSastYobjectify_function_using,T169);
  lit_647 = YPPsym((P)"objectify-function");
  lit_648 = YPPlist(5,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T172 = YPsig(LITREF(lit_648),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_311 = YPmet(FUNCODEREF(fun_objectify_function_311),LITREF(lit_647),T172,ENVNUL,PNUL,sloc(877));
  T174 = VARREF_OR(YevalSastYobjectify_function,YPfalse);
  T175 = fun_objectify_function_311;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  VARSET(YevalSastYobjectify_function,T173);
  lit_649 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_649));
  lit_650 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_650));
  lit_651 = YPPsym((P)"objectify-signature");
  lit_652 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  T176 = YPsig(LITREF(lit_652),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_312 = YPmet(FUNCODEREF(fun_objectify_signature_312),LITREF(lit_651),T176,ENVNUL,PNUL,sloc(884));
  T178 = VARREF_OR(YevalSastYobjectify_signature,YPfalse);
  T179 = fun_objectify_signature_312;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T179);
  VARSET(YevalSastYobjectify_signature,T177);
  lit_653 = YPPsym((P)"compute-local-reference-offsets");
  lit_654 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_655 = YPsb((P)"didn't find local binding %= in %=");
  T181 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T180 = YPsig(LITREF(lit_654),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),T181,Ynil);
  fun_compute_local_reference_offsets_313 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_313),LITREF(lit_653),T180,ENVNUL,PNUL,sloc(915));
  T183 = VARREF_OR(YevalSastYcompute_local_reference_offsets,YPfalse);
  T184 = fun_compute_local_reference_offsets_313;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T184);
  VARSET(YevalSastYcompute_local_reference_offsets,T182);
  lit_656 = YPPsym((P)"objectify-binding");
  lit_657 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T185 = YPsig(LITREF(lit_657),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_314 = YPmet(FUNCODEREF(fun_objectify_binding_314),LITREF(lit_656),T185,ENVNUL,PNUL,sloc(929));
  T187 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T188 = fun_objectify_binding_314;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  VARSET(YevalSastYobjectify_binding,T186);
  lit_658 = YPPsym((P)"binding-reference-class");
  lit_659 = YPPlist(1,YPPsym((P)"b"));
  lit_660 = YPsb((P)"Unknown binding-kind %=");
  T189 = YPsig(LITREF(lit_659),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_315 = YPmet(FUNCODEREF(fun_binding_reference_class_315),LITREF(lit_658),T189,ENVNUL,PNUL,sloc(941));
  T191 = VARREF_OR(YevalSastYbinding_reference_class,YPfalse);
  T192 = fun_binding_reference_class_315;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T192);
  VARSET(YevalSastYbinding_reference_class,T190);
  lit_661 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T193 = YPsig(LITREF(lit_661),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_316 = YPmet(FUNCODEREF(fun_objectify_binding_316),LITREF(lit_656),T193,ENVNUL,PNUL,sloc(952));
  T195 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T196 = fun_objectify_binding_316;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T196);
  VARSET(YevalSastYobjectify_binding,T194);
  lit_662 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T197 = YPsig(LITREF(lit_662),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_317 = YPmet(FUNCODEREF(fun_objectify_binding_317),LITREF(lit_656),T197,ENVNUL,PNUL,sloc(961));
  T199 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T200 = fun_objectify_binding_317;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T200);
  VARSET(YevalSastYobjectify_binding,T198);
  lit_663 = YPPsym((P)"default-type");
  lit_664 = YPPlist(1,YPPsym((P)"r"));
  lit_665 = YPPsym((P)"<any>");
  T201 = YPsig(LITREF(lit_664),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_318 = YPmet(FUNCODEREF(fun_default_type_318),LITREF(lit_663),T201,ENVNUL,PNUL,sloc(966));
  T203 = VARREF_OR(YevalSastYdefault_type,YPfalse);
  T204 = fun_default_type_318;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YevalSastYdefault_type,T202);
  lit_666 = YPPsym((P)"objectify-free-global-reference");
  lit_667 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T205 = YPsig(LITREF(lit_667),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_319 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_319),LITREF(lit_666),T205,ENVNUL,PNUL,sloc(971));
  T207 = VARREF_OR(YevalSastYobjectify_free_global_reference,YPfalse);
  T208 = fun_objectify_free_global_reference_319;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T208);
  VARSET(YevalSastYobjectify_free_global_reference,T206);
  lit_668 = YPPsym((P)"foreign-name?");
  lit_669 = YPPlist(1,YPPsym((P)"name"));
  T209 = YPsig(LITREF(lit_669),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_668),T209,ENVNUL,PNUL,sloc(985));
  T210 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T210);
  lit_670 = YPPsym((P)"objectify-foreign-reference");
  lit_671 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_672 = YPsb((P)"Malformed foreign name %s.\n");
  lit_673 = YPsb((P)"No binding %s in %s.\n");
  T211 = YPsig(LITREF(lit_671),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_321 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_321),LITREF(lit_670),T211,ENVNUL,PNUL,sloc(989));
  T213 = VARREF_OR(YevalSastYobjectify_foreign_reference,YPfalse);
  T214 = fun_objectify_foreign_reference_321;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T214);
  VARSET(YevalSastYobjectify_foreign_reference,T212);
  lit_674 = YPPsym((P)"objectify-symbol");
  lit_675 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T215 = YPsig(LITREF(lit_675),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_322 = YPmet(FUNCODEREF(fun_objectify_symbol_322),LITREF(lit_674),T215,ENVNUL,PNUL,sloc(1007));
  T217 = VARREF_OR(YevalSastYobjectify_symbol,YPfalse);
  T218 = fun_objectify_symbol_322;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T218);
  VARSET(YevalSastYobjectify_symbol,T216);
  lit_676 = YPPsym((P)"ftype");
  lit_677 = YPPlist(1,YPPsym((P)"r"));
  lit_678 = YPPsym((P)"<fun>");
  T219 = YPsig(LITREF(lit_677),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_323 = YPmet(FUNCODEREF(fun_ftype_323),LITREF(lit_676),T219,ENVNUL,PNUL,sloc(1010));
  T221 = VARREF_OR(YevalSastYftype,YPfalse);
  T222 = fun_ftype_323;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T222);
  VARSET(YevalSastYftype,T220);
  lit_679 = YPPsym((P)"<functions>");
  T225 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T224 = (P)YPpair(VARREF(YLlstG),T225);
  T223 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_679),T224);
  VARSET(YevalSastYLfunctionsG,T223);
  T226 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T226);
  lit_680 = YPPsym((P)"functions");
  lit_681 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T227 = YPsig(LITREF(lit_681),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_680),T227,ENVNUL,PNUL,sloc(1013));
  T228 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T228);
  lit_682 = YPPlist(1,YPPsym((P)"e"));
  T230 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T229 = YPsig(LITREF(lit_682),YPPlist(1,T230),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_325 = YPmet(FUNCODEREF(fun_empty_325),LITREF(lit_310),T229,ENVNUL,PNUL,sloc(1013));
  T232 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T233 = fun_empty_325;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T233);
  VARSET(YgooScolsScolYempty,T231);
  lit_683 = YPPsym((P)"objectify-locals");
  lit_684 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_685 = YPPlist(1,YPPsym((P)"n"));
  lit_686 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"body"));
  lit_687 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T237 = YPsig(LITREF(lit_685),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_326 = YPmet(FUNCODEREF(fun_326),YPfalse,T237,ENVNUL,PNUL,sloc(1016));
  T236 = YPsig(LITREF(lit_686),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_327 = YPmet(FUNCODEREF(fun_327),YPfalse,T236,ENVNUL,PNUL,sloc(1020));
  T235 = YPsig(LITREF(lit_687),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T235,ENVNUL,PNUL,sloc(1028));
  T234 = YPsig(LITREF(lit_684),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_329 = YPmet(FUNCODEREF(fun_objectify_locals_329),LITREF(lit_683),T234,ENVNUL,PNUL,sloc(1015));
  T239 = VARREF_OR(YevalSastYobjectify_locals,YPfalse);
  T240 = fun_objectify_locals_329;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T240);
  VARSET(YevalSastYobjectify_locals,T238);
  lit_688 = YPPsym((P)"objectify-bind-exit");
  lit_689 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T243 = YPsig(LITREF(lit_689),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLbind_exitG),Ynil);
  T242 = fun_objectify_bind_exit_330 = YPmet(FUNCODEREF(fun_objectify_bind_exit_330),LITREF(lit_688),T243,ENVNUL,PNUL,sloc(1038));
  T246 = VARREF_OR(YevalSastYobjectify_bind_exit,YPfalse);
  T247 = fun_objectify_bind_exit_330;
  T245 = XCALL2(1,VARREF(YPdefine_method),T246,T247);
  T244 = VARSET(YevalSastYobjectify_bind_exit,T245);
  T241 = T244;
  return T241;
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188;
DEFCREGS();
  lit_690 = YPPsym((P)"objectify-unwind-protect");
  lit_691 = YPPlist(5,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_691),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_331 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_331),LITREF(lit_690),T0,ENVNUL,PNUL,sloc(1044));
  T2 = VARREF_OR(YevalSastYobjectify_unwind_protect,YPfalse);
  T3 = fun_objectify_unwind_protect_331;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSastYobjectify_unwind_protect,T1);
  lit_692 = YPPsym((P)"objectify-monitor");
  lit_693 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T4 = YPsig(LITREF(lit_693),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_332 = YPmet(FUNCODEREF(fun_objectify_monitor_332),LITREF(lit_692),T4,ENVNUL,PNUL,sloc(1056));
  T6 = VARREF_OR(YevalSastYobjectify_monitor,YPfalse);
  T7 = fun_objectify_monitor_332;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSastYobjectify_monitor,T5);
  lit_694 = YPPsym((P)"objectify-export");
  lit_695 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_696 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_697 = YPPlist(1,YPPsym((P)"name"));
  lit_698 = YPPlist(1,YPPsym((P)"exit"));
  lit_699 = YPsb((P)"Continue without exporting %s");
  lit_700 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_701 = YPsb((P)"Can't export undefined binding %s.\n");
  T13 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_333 = YPmet(FUNCODEREF(fun_333),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(LITREF(lit_700),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_334 = YPmet(FUNCODEREF(fun_334),YPfalse,T12,ENVNUL,PNUL,sloc(1077));
  T11 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_335 = YPmet(FUNCODEREF(fun_335),YPfalse,T11,ENVNUL,PNUL,sloc(1078));
  T10 = YPsig(LITREF(lit_698),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_336 = YPmet(FUNCODEREF(fun_336),YPfalse,T10,ENVNUL,PNUL,sloc(1074));
  T9 = YPsig(LITREF(lit_697),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T9,ENVNUL,PNUL,sloc(1071));
  T8 = YPsig(LITREF(lit_695),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_338 = YPmet(FUNCODEREF(fun_objectify_export_338),LITREF(lit_694),T8,ENVNUL,PNUL,sloc(1064));
  T15 = VARREF_OR(YevalSastYobjectify_export,YPfalse);
  T16 = fun_objectify_export_338;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T16);
  VARSET(YevalSastYobjectify_export,T14);
  lit_702 = YPPsym((P)"import-global!");
  lit_703 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"env"));
  lit_704 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T17 = YPsig(LITREF(lit_703),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_702),T17,ENVNUL,PNUL,sloc(1084));
  T18 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T18);
  lit_705 = YPPsym((P)"objectify-use/export-module");
  lit_706 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_707 = YPPlist(1,YPPsym((P)"b"));
  T20 = YPsig(LITREF(lit_707),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_340 = YPmet(FUNCODEREF(fun_340),YPfalse,T20,ENVNUL,PNUL,sloc(1098));
  T19 = YPsig(LITREF(lit_706),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_341 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_341),LITREF(lit_705),T19,ENVNUL,PNUL,sloc(1092));
  T22 = VARREF_OR(YevalSastYobjectify_useSexport_module,YPfalse);
  T23 = fun_objectify_useSexport_module_341;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSastYobjectify_useSexport_module,T21);
  lit_708 = YPPsym((P)"objectify-use-include");
  lit_709 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_710 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_710),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_342 = YPmet(FUNCODEREF(fun_342),YPfalse,T25,ENVNUL,PNUL,sloc(1107));
  T24 = YPsig(LITREF(lit_709),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_343 = YPmet(FUNCODEREF(fun_objectify_use_include_343),LITREF(lit_708),T24,ENVNUL,PNUL,sloc(1104));
  T27 = VARREF_OR(YevalSastYobjectify_use_include,YPfalse);
  T28 = fun_objectify_use_include_343;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YevalSastYobjectify_use_include,T26);
  lit_711 = YPPsym((P)"objectify-use-library");
  lit_712 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_713 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_713),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_344 = YPmet(FUNCODEREF(fun_344),YPfalse,T30,ENVNUL,PNUL,sloc(1114));
  T29 = YPsig(LITREF(lit_712),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_345 = YPmet(FUNCODEREF(fun_objectify_use_library_345),LITREF(lit_711),T29,ENVNUL,PNUL,sloc(1111));
  T32 = VARREF_OR(YevalSastYobjectify_use_library,YPfalse);
  T33 = fun_objectify_use_library_345;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSastYobjectify_use_library,T31);
  lit_714 = YPPsym((P)"objectify-use-module");
  lit_715 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_716 = YPPsym((P)"use-mod");
  lit_717 = YPPlist(1,YPPsym((P)"name"));
  lit_718 = YPPlist(1,YPPsym((P)"b"));
  lit_719 = YPPsym((P)"use-c-mod");
  lit_720 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_721 = YPsb((P)".c");
  lit_722 = YPsb((P)".h");
  lit_723 = YPsb((P)".swig");
  lit_724 = YPsb((P)".c");
  T37 = YPsig(LITREF(lit_718),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T37,ENVNUL,PNUL,sloc(1125));
  T36 = YPsig(LITREF(lit_717),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_347 = YPmet(FUNCODEREF(fun_use_mod_347),LITREF(lit_716),T36,ENVNUL,PNUL,sloc(1121));
  T35 = YPsig(LITREF(lit_720),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_348 = YPmet(FUNCODEREF(fun_use_c_mod_348),LITREF(lit_719),T35,ENVNUL,PNUL,sloc(1128));
  T34 = YPsig(LITREF(lit_715),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_349 = YPmet(FUNCODEREF(fun_objectify_use_module_349),LITREF(lit_714),T34,ENVNUL,PNUL,sloc(1118));
  T39 = VARREF_OR(YevalSastYobjectify_use_module,YPfalse);
  T40 = fun_objectify_use_module_349;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YevalSastYobjectify_use_module,T38);
  lit_725 = YPPsym((P)"insert-and-mangle-global!");
  lit_726 = YPPlist(3,YPPsym((P)"binding"),YPPsym((P)"mangle-prefix"),YPPsym((P)"r"));
  T41 = YPsig(LITREF(lit_726),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_350 = YPmet(FUNCODEREF(fun_insert_and_mangle_globalX_350),LITREF(lit_725),T41,ENVNUL,PNUL,sloc(1142));
  T43 = VARREF_OR(YevalSastYinsert_and_mangle_globalX,YPfalse);
  T44 = fun_insert_and_mangle_globalX_350;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YevalSastYinsert_and_mangle_globalX,T42);
  lit_727 = YPPsym((P)"import-and-mangle-global!");
  lit_728 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"mangle-prefix"),YPPsym((P)"env"));
  lit_729 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T45 = YPsig(LITREF(lit_728),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYimport_and_mangle_globalX = YPmet(FUNCODEREF(YevalSastYimport_and_mangle_globalX),LITREF(lit_727),T45,ENVNUL,PNUL,sloc(1148));
  T46 = YevalSastYimport_and_mangle_globalX;
  VARSET(YevalSastYimport_and_mangle_globalX,T46);
  lit_730 = YPPsym((P)"objectify-use-mangle-module");
  lit_731 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_732 = YPPlist(1,YPPsym((P)"b"));
  T48 = YPsig(LITREF(lit_732),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T48,ENVNUL,PNUL,sloc(1165));
  T47 = YPsig(LITREF(lit_731),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_353 = YPmet(FUNCODEREF(fun_objectify_use_mangle_module_353),LITREF(lit_730),T47,ENVNUL,PNUL,sloc(1157));
  T50 = VARREF_OR(YevalSastYobjectify_use_mangle_module,YPfalse);
  T51 = fun_objectify_use_mangle_module_353;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSastYobjectify_use_mangle_module,T49);
  lit_733 = YPPsym((P)"expand-bind-list");
  lit_734 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_735 = YPsb((P)"Expected Pattern List %=\n");
  T52 = YPsig(LITREF(lit_734),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_354 = YPmet(FUNCODEREF(fun_expand_bind_list_354),LITREF(lit_733),T52,ENVNUL,PNUL,sloc(1171));
  T54 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T55 = fun_expand_bind_list_354;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSastYexpand_bind_list,T53);
  lit_736 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_737 = YPPsym((P)"match-empty-list");
  T57 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T56 = YPsig(LITREF(lit_736),YPPlist(3,T57,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_355 = YPmet(FUNCODEREF(fun_expand_bind_list_355),LITREF(lit_733),T56,ENVNUL,PNUL,sloc(1174));
  T59 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T60 = fun_expand_bind_list_355;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T60);
  VARSET(YevalSastYexpand_bind_list,T58);
  lit_738 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_739 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_740 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T61 = YPsig(LITREF(lit_738),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_356 = YPmet(FUNCODEREF(fun_expand_bind_list_356),LITREF(lit_733),T61,ENVNUL,PNUL,sloc(1177));
  T63 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T64 = fun_expand_bind_list_356;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T64);
  VARSET(YevalSastYexpand_bind_list,T62);
  lit_741 = YPPsym((P)"expand-bind-list*");
  lit_742 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T66 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T65 = YPsig(LITREF(lit_742),YPPlist(3,T66,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_357 = YPmet(FUNCODEREF(fun_expand_bind_listT_357),LITREF(lit_741),T65,ENVNUL,PNUL,sloc(1186));
  T68 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T69 = fun_expand_bind_listT_357;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSastYexpand_bind_listT,T67);
  lit_743 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T70 = YPsig(LITREF(lit_743),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_358 = YPmet(FUNCODEREF(fun_expand_bind_listT_358),LITREF(lit_741),T70,ENVNUL,PNUL,sloc(1189));
  T72 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T73 = fun_expand_bind_listT_358;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSastYexpand_bind_listT,T71);
  lit_744 = YPPsym((P)"expand-bind-element");
  lit_745 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_746 = YPPsym((P)"match-atom");
  T74 = YPsig(LITREF(lit_745),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_359 = YPmet(FUNCODEREF(fun_expand_bind_element_359),LITREF(lit_744),T74,ENVNUL,PNUL,sloc(1193));
  T76 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T77 = fun_expand_bind_element_359;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSastYexpand_bind_element,T75);
  lit_747 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_748 = YPPsym((P)"match-unquote");
  lit_749 = YPPsym((P)"tail");
  lit_750 = YPPsym((P)"match-sublist");
  T78 = YPsig(LITREF(lit_747),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_360 = YPmet(FUNCODEREF(fun_expand_bind_element_360),LITREF(lit_744),T78,ENVNUL,PNUL,sloc(1196));
  T80 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T81 = fun_expand_bind_element_360;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSastYexpand_bind_element,T79);
  lit_751 = YPPsym((P)"expand-pattern");
  lit_752 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_753 = YPPsym((P)"if");
  lit_754 = YPPsym((P)"isa?");
  lit_755 = YPsb((P)"Match Pattern Failure");
  T82 = YPsig(LITREF(lit_752),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_361 = YPmet(FUNCODEREF(fun_expand_pattern_361),LITREF(lit_751),T82,ENVNUL,PNUL,sloc(1207));
  T84 = VARREF_OR(YevalSastYexpand_pattern,YPfalse);
  T85 = fun_expand_pattern_361;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSastYexpand_pattern,T83);
  lit_756 = YPPsym((P)"expand-syntax-if");
  lit_757 = YPPlist(1,YPPsym((P)"x"));
  lit_758 = YPPsym((P)"esc");
  lit_759 = YPPsym((P)"return");
  lit_760 = YPPsym((P)"loc");
  lit_761 = YPPsym((P)"msg");
  lit_762 = YPPsym((P)"<str>");
  lit_763 = YPPsym((P)"args");
  lit_764 = YPPlist(1,YPPsym((P)"x"));
  T87 = YPsig(LITREF(lit_764),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_362 = YPmet(FUNCODEREF(fun_362),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(LITREF(lit_757),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_363 = YPmet(FUNCODEREF(fun_expand_syntax_if_363),LITREF(lit_756),T86,ENVNUL,PNUL,sloc(1212));
  T89 = VARREF_OR(YevalSastYexpand_syntax_if,YPfalse);
  T90 = fun_expand_syntax_if_363;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YevalSastYexpand_syntax_if,T88);
  lit_765 = YPPsym((P)"r-extend*");
  lit_766 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T91 = YPsig(LITREF(lit_766),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_364 = YPmet(FUNCODEREF(fun_r_extendT_364),LITREF(lit_765),T91,ENVNUL,PNUL,sloc(1236));
  T93 = VARREF_OR(YevalSastYr_extendT,YPfalse);
  T94 = fun_r_extendT_364;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSastYr_extendT,T92);
  lit_767 = YPPsym((P)"insert-global!");
  lit_768 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  T95 = YPsig(LITREF(lit_768),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_365 = YPmet(FUNCODEREF(fun_insert_globalX_365),LITREF(lit_767),T95,ENVNUL,PNUL,sloc(1240));
  T97 = VARREF_OR(YevalSastYinsert_globalX,YPfalse);
  T98 = fun_insert_globalX_365;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YevalSastYinsert_globalX,T96);
  lit_769 = YPPsym((P)"insert-globals!");
  lit_770 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"r"));
  lit_771 = YPPlist(1,YPPsym((P)"b"));
  T100 = YPsig(LITREF(lit_771),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T100,ENVNUL,PNUL,sloc(1245));
  T99 = YPsig(LITREF(lit_770),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_367 = YPmet(FUNCODEREF(fun_insert_globalsX_367),LITREF(lit_769),T99,ENVNUL,PNUL,sloc(1244));
  T102 = VARREF_OR(YevalSastYinsert_globalsX,YPfalse);
  T103 = fun_insert_globalsX_367;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSastYinsert_globalsX,T101);
  lit_772 = YPPsym((P)"find-static-global-environment");
  lit_773 = YPPlist(1,YPPsym((P)"r"));
  T104 = YPsig(LITREF(lit_773),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_368 = YPmet(FUNCODEREF(fun_find_static_global_environment_368),LITREF(lit_772),T104,ENVNUL,PNUL,sloc(1247));
  T106 = VARREF_OR(YevalSastYfind_static_global_environment,YPfalse);
  T107 = fun_find_static_global_environment_368;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSastYfind_static_global_environment,T105);
  lit_774 = YPPlist(1,YPPsym((P)"r"));
  T108 = YPsig(LITREF(lit_774),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_369 = YPmet(FUNCODEREF(fun_find_static_global_environment_369),LITREF(lit_772),T108,ENVNUL,PNUL,sloc(1251));
  T110 = VARREF_OR(YevalSastYfind_static_global_environment,YPfalse);
  T111 = fun_find_static_global_environment_369;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSastYfind_static_global_environment,T109);
  lit_775 = YPPsym((P)"find-syntax-environment");
  lit_776 = YPPlist(1,YPPsym((P)"r"));
  T112 = YPsig(LITREF(lit_776),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_370 = YPmet(FUNCODEREF(fun_find_syntax_environment_370),LITREF(lit_775),T112,ENVNUL,PNUL,sloc(1255));
  T114 = VARREF_OR(YevalSastYfind_syntax_environment,YPfalse);
  T115 = fun_find_syntax_environment_370;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSastYfind_syntax_environment,T113);
  lit_777 = YPPsym((P)"find-environment-module");
  lit_778 = YPPlist(1,YPPsym((P)"r"));
  T116 = YPsig(LITREF(lit_778),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_371 = YPmet(FUNCODEREF(fun_find_environment_module_371),LITREF(lit_777),T116,ENVNUL,PNUL,sloc(1259));
  T118 = VARREF_OR(YevalSastYfind_environment_module,YPfalse);
  T119 = fun_find_environment_module_371;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YevalSastYfind_environment_module,T117);
  lit_779 = YPPsym((P)"find-binding");
  lit_780 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T120 = YPsig(LITREF(lit_780),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_372 = YPmet(FUNCODEREF(fun_find_binding_372),LITREF(lit_779),T120,ENVNUL,PNUL,sloc(1262));
  T122 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T123 = fun_find_binding_372;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YevalSastYfind_binding,T121);
  lit_781 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T124 = YPsig(LITREF(lit_781),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_373 = YPmet(FUNCODEREF(fun_find_binding_373),LITREF(lit_779),T124,ENVNUL,PNUL,sloc(1272));
  T126 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T127 = fun_find_binding_373;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YevalSastYfind_binding,T125);
  lit_782 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T128 = YPsig(LITREF(lit_782),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_374 = YPmet(FUNCODEREF(fun_find_binding_374),LITREF(lit_779),T128,ENVNUL,PNUL,sloc(1275));
  T130 = VARREF_OR(YevalSastYfind_binding,YPfalse);
  T131 = fun_find_binding_374;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YevalSastYfind_binding,T129);
  lit_783 = YPPsym((P)"frame-bindings");
  lit_784 = YPPlist(1,YPPsym((P)"env"));
  T132 = YPsig(LITREF(lit_784),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_375 = YPmet(FUNCODEREF(fun_frame_bindings_375),LITREF(lit_783),T132,ENVNUL,PNUL,sloc(1281));
  T134 = VARREF_OR(YevalSastYframe_bindings,YPfalse);
  T135 = fun_frame_bindings_375;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YevalSastYframe_bindings,T133);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_785 = YPPsym((P)"register-magic-binding");
  lit_786 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T136 = YPsig(LITREF(lit_786),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_376 = YPmet(FUNCODEREF(fun_register_magic_binding_376),LITREF(lit_785),T136,ENVNUL,PNUL,sloc(1289));
  T138 = VARREF_OR(YevalSastYregister_magic_binding,YPfalse);
  T139 = fun_register_magic_binding_376;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSastYregister_magic_binding,T137);
  lit_787 = YPPsym((P)"magic-bindings");
  T140 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_377 = YPmet(FUNCODEREF(fun_magic_bindings_377),LITREF(lit_787),T140,ENVNUL,PNUL,sloc(1292));
  T142 = VARREF_OR(YevalSastYmagic_bindings,YPfalse);
  T143 = fun_magic_bindings_377;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSastYmagic_bindings,T141);
  lit_788 = YPPlist(1,YPPsym((P)"exp"));
  lit_789 = YPPlist(1,YPPsym((P)"return"));
  lit_790 = YPPsym((P)"x-1462");
  lit_791 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_792 = YPPsym((P)"define-magic-binding");
  lit_793 = YPsb((P)"special-");
  lit_794 = YPsb((P)"$sexpr-");
  lit_795 = YPsb((P)"-tag");
  lit_796 = YPPsym((P)"dv");
  lit_797 = YPPsym((P)"new");
  lit_798 = YPPsym((P)"binding-handler");
  lit_799 = YPPsym((P)"fun");
  T146 = YPsig(LITREF(lit_791),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1462_378 = YPmet(FUNCODEREF(fun_x_1462_378),LITREF(lit_790),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_789),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_788),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T147 = fun_380;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T147);
  lit_800 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T148 = YPsig(LITREF(lit_800),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T148,ENVNUL,PNUL,sloc(1307));
  T150 = fun_381;
  T149 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T150,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T149);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_753),VARREF(YevalSastYspecial_if));
  lit_801 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T151 = YPsig(LITREF(lit_801),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T151,ENVNUL,PNUL,sloc(1311));
  T153 = fun_382;
  T152 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T153,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T152);
  lit_802 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_802),VARREF(YevalSastYspecial_begin));
  lit_803 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_803));
  lit_804 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T154 = YPsig(LITREF(lit_804),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T154,ENVNUL,PNUL,sloc(1316));
  T156 = fun_383;
  T155 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T156,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T155);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_803),VARREF(YevalSastYspecial_Praw));
  lit_805 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T157 = YPsig(LITREF(lit_805),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T157,ENVNUL,PNUL,sloc(1319));
  T159 = fun_384;
  T158 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T159,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T158);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_582),VARREF(YevalSastYspecial_quote));
  lit_806 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T160 = YPsig(LITREF(lit_806),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T160,ENVNUL,PNUL,sloc(1322));
  T162 = fun_385;
  T161 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T162,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T161);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_10),VARREF(YevalSastYspecial_set));
  lit_807 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T163 = YPsig(LITREF(lit_807),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T163,ENVNUL,PNUL,sloc(1326));
  T165 = fun_386;
  T164 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T165,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T164);
  lit_808 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_808),VARREF(YevalSastYspecial_define));
  lit_809 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_809));
  lit_810 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T166 = YPsig(LITREF(lit_810),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T166,ENVNUL,PNUL,sloc(1332));
  T168 = fun_387;
  T167 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T168,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T167);
  lit_811 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_811),VARREF(YevalSastYspecial_define_dynamic));
  lit_812 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T169 = YPsig(LITREF(lit_812),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T169,ENVNUL,PNUL,sloc(1336));
  T171 = fun_388;
  T170 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T171,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T170);
  lit_813 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_813),VARREF(YevalSastYspecial_define_syntax));
  lit_814 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_814));
  lit_815 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T172 = YPsig(LITREF(lit_815),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T172,ENVNUL,PNUL,sloc(1342));
  T174 = fun_389;
  T173 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T174,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T173);
  lit_816 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_816),VARREF(YevalSastYspecial_define_static_syntax));
  lit_817 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T175 = YPsig(LITREF(lit_817),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T175,ENVNUL,PNUL,sloc(1346));
  T177 = fun_390;
  T176 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T177,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T176);
  lit_818 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_818),VARREF(YevalSastYspecial_define_method));
  lit_819 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T178 = YPsig(LITREF(lit_819),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T178,ENVNUL,PNUL,sloc(1351));
  T180 = fun_391;
  T179 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T180,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T179);
  lit_820 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_820),VARREF(YevalSastYspecial_define_generic));
  lit_821 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T181 = YPsig(LITREF(lit_821),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T181,ENVNUL,PNUL,sloc(1355));
  T183 = fun_392;
  T182 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T183,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T182);
  lit_822 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_822),VARREF(YevalSastYspecial_define_function));
  lit_823 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T184 = YPsig(LITREF(lit_823),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T184,ENVNUL,PNUL,sloc(1360));
  T186 = fun_393;
  T185 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T186,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T185);
  lit_824 = YPPsym((P)"method");
  T188 = XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_824),VARREF(YevalSastYspecial_method));
  T187 = T188;
  return T187;
}

P YevalSastY___main_8___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97;
DEFCREGS();
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_639));
  lit_825 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_825),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_394 = YPmet(FUNCODEREF(fun_394),YPfalse,T0,ENVNUL,PNUL,sloc(1366));
  T2 = fun_394;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T1);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_639),VARREF(YevalSastYspecial_boundQ));
  lit_826 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPsig(LITREF(lit_826),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_395 = YPmet(FUNCODEREF(fun_395),YPfalse,T3,ENVNUL,PNUL,sloc(1369));
  T5 = fun_395;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T4);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_7),VARREF(YevalSastYspecial_let));
  lit_827 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPsig(LITREF(lit_827),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T6,ENVNUL,PNUL,sloc(1375));
  T8 = fun_396;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T8,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T7);
  lit_828 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_828),VARREF(YevalSastYspecial_def));
  lit_829 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = YPsig(LITREF(lit_829),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T9,ENVNUL,PNUL,sloc(1378));
  T11 = fun_397;
  T10 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T11,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T10);
  lit_830 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_830),VARREF(YevalSastYspecial_locals));
  lit_831 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T12 = YPsig(LITREF(lit_831),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T12,ENVNUL,PNUL,sloc(1383));
  T14 = fun_398;
  T13 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T14,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T13);
  lit_832 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_832),VARREF(YevalSastYspecial_iterate));
  lit_833 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T15 = YPsig(LITREF(lit_833),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T15,ENVNUL,PNUL,sloc(1386));
  T17 = fun_399;
  T16 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T17,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T16);
  lit_834 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_834),VARREF(YevalSastYspecial_bind_exit));
  lit_835 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T18 = YPsig(LITREF(lit_835),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T18,ENVNUL,PNUL,sloc(1390));
  T20 = fun_400;
  T19 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T20,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T19);
  lit_836 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_836),VARREF(YevalSastYspecial_unwind_protect));
  lit_837 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T21 = YPsig(LITREF(lit_837),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_401 = YPmet(FUNCODEREF(fun_401),YPfalse,T21,ENVNUL,PNUL,sloc(1396));
  T23 = fun_401;
  T22 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T23,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T22);
  lit_838 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_838),VARREF(YevalSastYspecial_monitor));
  lit_839 = YPPsym((P)"pairize");
  lit_840 = YPPlist(1,YPPsym((P)"args"));
  T24 = YPsig(LITREF(lit_840),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_402 = YPmet(FUNCODEREF(fun_pairize_402),LITREF(lit_839),T24,ENVNUL,PNUL,sloc(1400));
  T26 = VARREF_OR(YevalSastYpairize,YPfalse);
  T27 = fun_pairize_402;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSastYpairize,T25);
  lit_841 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_842 = YPPsym((P)"fab-class");
  T28 = YPsig(LITREF(lit_841),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T28,ENVNUL,PNUL,sloc(1405));
  T30 = fun_403;
  T29 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T30,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T29);
  lit_843 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_843),VARREF(YevalSastYspecial_define_class));
  lit_844 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_845 = YPPsym((P)"%prop");
  lit_846 = YPPsym((P)"%prop-unbound-error");
  T31 = YPsig(LITREF(lit_844),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_404 = YPmet(FUNCODEREF(fun_404),YPfalse,T31,ENVNUL,PNUL,sloc(1410));
  T33 = fun_404;
  T32 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T33,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T32);
  lit_847 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_847),VARREF(YevalSastYspecial_prop));
  lit_848 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_848));
  lit_849 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T34 = YPsig(LITREF(lit_849),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_405 = YPmet(FUNCODEREF(fun_405),YPfalse,T34,ENVNUL,PNUL,sloc(1433));
  T36 = fun_405;
  T35 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T36,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T35);
  lit_850 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_850),VARREF(YevalSastYspecial_compile_time));
  lit_851 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_851));
  lit_852 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T37 = YPsig(LITREF(lit_852),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_406 = YPmet(FUNCODEREF(fun_406),YPfalse,T37,ENVNUL,PNUL,sloc(1438));
  T39 = fun_406;
  T38 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T39,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T38);
  lit_853 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_853),VARREF(YevalSastYspecial_compile_time_also));
  lit_854 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_854));
  lit_855 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T40 = YPsig(LITREF(lit_855),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_407 = YPmet(FUNCODEREF(fun_407),YPfalse,T40,ENVNUL,PNUL,sloc(1443));
  T42 = fun_407;
  T41 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T42,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T41);
  lit_856 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_856),VARREF(YevalSastYspecial_define_primitive));
  lit_857 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T43 = YPsig(LITREF(lit_857),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T43,ENVNUL,PNUL,sloc(1453));
  T45 = fun_408;
  T44 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T45,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T44);
  lit_858 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_858),VARREF(YevalSastYspecial_quasiquote));
  lit_859 = YPPsym((P)"ast-macro-expand");
  lit_860 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T46 = YPsig(LITREF(lit_860),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_409 = YPmet(FUNCODEREF(fun_ast_macro_expand_409),LITREF(lit_859),T46,ENVNUL,PNUL,sloc(1456));
  T48 = VARREF_OR(YevalSastYast_macro_expand,YPfalse);
  T49 = fun_ast_macro_expand_409;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSastYast_macro_expand,T47);
  lit_861 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T50 = YPsig(LITREF(lit_861),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_410 = YPmet(FUNCODEREF(fun_410),YPfalse,T50,ENVNUL,PNUL,sloc(1465));
  T52 = fun_410;
  T51 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T52,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T51);
  lit_862 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_862),VARREF(YevalSastYspecial_macro_expand));
  lit_863 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T53 = YPsig(LITREF(lit_863),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_411 = YPmet(FUNCODEREF(fun_411),YPfalse,T53,ENVNUL,PNUL,sloc(1469));
  T55 = fun_411;
  T54 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T55,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T54);
  lit_864 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_864),VARREF(YevalSastYspecial_syntax_if));
  lit_865 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_865));
  lit_866 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPsig(LITREF(lit_866),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_412 = YPmet(FUNCODEREF(fun_412),YPfalse,T56,ENVNUL,PNUL,sloc(1479));
  T58 = fun_412;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T58,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T57);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_865),VARREF(YevalSastYspecial_export));
  lit_867 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_867));
  lit_868 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPsig(LITREF(lit_868),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T59,ENVNUL,PNUL,sloc(1484));
  T61 = fun_413;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T61,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T60);
  lit_869 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_869),VARREF(YevalSastYspecial_use_module));
  lit_870 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_870));
  lit_871 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T62 = YPsig(LITREF(lit_871),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_414 = YPmet(FUNCODEREF(fun_414),YPfalse,T62,ENVNUL,PNUL,sloc(1489));
  T64 = fun_414;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T64,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T63);
  lit_872 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_872),VARREF(YevalSastYspecial_use_mangle_module));
  lit_873 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_873));
  lit_874 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T65 = YPsig(LITREF(lit_874),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_415 = YPmet(FUNCODEREF(fun_415),YPfalse,T65,ENVNUL,PNUL,sloc(1494));
  T67 = fun_415;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T67,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T66);
  lit_875 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_875),VARREF(YevalSastYspecial_use_include));
  lit_876 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_876));
  lit_877 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPsig(LITREF(lit_877),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T68,ENVNUL,PNUL,sloc(1499));
  T70 = fun_416;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T70,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T69);
  lit_878 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_878),VARREF(YevalSastYspecial_use_library));
  lit_879 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_879));
  lit_880 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T71 = YPsig(LITREF(lit_880),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_417 = YPmet(FUNCODEREF(fun_417),YPfalse,T71,ENVNUL,PNUL,sloc(1504));
  T73 = fun_417;
  T72 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_604),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T73,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T72);
  lit_881 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_881),VARREF(YevalSastYspecial_useSexport_module));
  lit_882 = YPPsym((P)"<transaction>");
  T75 = (P)YPpair(VARREF(YLanyG),Ynil);
  T74 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_882),T75);
  VARSET(YevalSastYLtransactionG,T74);
  lit_883 = YPPsym((P)"transaction-implemented-bindings");
  lit_884 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_884),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_418 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_418),LITREF(lit_883),T76,ENVNUL,PNUL,sloc(1534));
  T78 = VARREF_OR(YevalSastYtransaction_implemented_bindings,YPfalse);
  T79 = fun_transaction_implemented_bindings_418;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YevalSastYtransaction_implemented_bindings,T77);
  lit_885 = YPPsym((P)"transaction-implemented-bindings-setter");
  lit_886 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_886),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_419 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_419),LITREF(lit_885),T80,ENVNUL,PNUL,sloc(1534));
  T82 = VARREF_OR(YevalSastYtransaction_implemented_bindings_setter,YPfalse);
  T83 = fun_transaction_implemented_bindings_setter_419;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T81);
  lit_887 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_887),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T84,ENVNUL,PNUL,sloc(1534));
  T85 = fun_420;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T85);
  lit_888 = YPPsym((P)"transaction-dependents");
  lit_889 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_889),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_421 = YPmet(FUNCODEREF(fun_transaction_dependents_421),LITREF(lit_888),T86,ENVNUL,PNUL,sloc(1535));
  T88 = VARREF_OR(YevalSastYtransaction_dependents,YPfalse);
  T89 = fun_transaction_dependents_421;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSastYtransaction_dependents,T87);
  lit_890 = YPPsym((P)"transaction-dependents-setter");
  lit_891 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_891),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_422 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_422),LITREF(lit_890),T90,ENVNUL,PNUL,sloc(1535));
  T92 = VARREF_OR(YevalSastYtransaction_dependents_setter,YPfalse);
  T93 = fun_transaction_dependents_setter_422;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSastYtransaction_dependents_setter,T91);
  lit_892 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_892),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T94,ENVNUL,PNUL,sloc(1535));
  T95 = fun_423;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T95);
  T97 = VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  T96 = T97;
  return T96;
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
  P T192,T193,T194,T195;
DEFCREGS();
  lit_893 = YPPsym((P)"transaction-register-implemented-binding");
  lit_894 = YPPlist(1,YPPsym((P)"b"));
  lit_895 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T0 = YPsig(LITREF(lit_894),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_893),T0,ENVNUL,PNUL,sloc(1539));
  T1 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T1);
  lit_896 = YPPsym((P)"transaction-register-dependent");
  lit_897 = YPPlist(1,YPPsym((P)"d"));
  lit_898 = YPsb((P)"Can't register dependent (no subtransaction)");
  T2 = YPsig(LITREF(lit_897),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_896),T2,ENVNUL,PNUL,sloc(1545));
  T3 = YevalSastYtransaction_register_dependent;
  VARSET(YevalSastYtransaction_register_dependent,T3);
  lit_899 = YPPsym((P)"transaction-empty?");
  lit_900 = YPPlist(1,YPPsym((P)"t"));
  T4 = YPsig(LITREF(lit_900),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_899),T4,ENVNUL,PNUL,sloc(1550));
  T5 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T5);
  lit_901 = YPPsym((P)"merge-transactions!");
  lit_902 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_903 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_904 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T8 = YPsig(LITREF(lit_903),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_427 = YPmet(FUNCODEREF(fun_427),YPfalse,T8,ENVNUL,PNUL,sloc(1565));
  T7 = YPsig(LITREF(lit_904),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_428 = YPmet(FUNCODEREF(fun_428),YPfalse,T7,ENVNUL,PNUL,sloc(1566));
  T6 = YPsig(LITREF(lit_902),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_901),T6,ENVNUL,PNUL,sloc(1554));
  T9 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T9);
  lit_905 = YPPsym((P)"roll-back-transaction");
  lit_906 = YPPlist(1,YPPsym((P)"t"));
  lit_907 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"junk"));
  lit_908 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"junk"));
  T12 = YPsig(LITREF(lit_907),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_430 = YPmet(FUNCODEREF(fun_430),YPfalse,T12,ENVNUL,PNUL,sloc(1571));
  T11 = YPsig(LITREF(lit_908),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_431 = YPmet(FUNCODEREF(fun_431),YPfalse,T11,ENVNUL,PNUL,sloc(1574));
  T10 = YPsig(LITREF(lit_906),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_905),T10,ENVNUL,PNUL,sloc(1569));
  T13 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T13);
  lit_909 = YPPsym((P)"call-with-subtransaction");
  lit_910 = YPPlist(2,YPPsym((P)"module"),YPPsym((P)"thunk"));
  T16 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_433 = YPmet(FUNCODEREF(fun_433),YPfalse,T16,ENVNUL,PNUL,sloc(1580));
  T15 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_434 = YPmet(FUNCODEREF(fun_434),YPfalse,T15,ENVNUL,PNUL,sloc(1592));
  T14 = YPsig(LITREF(lit_910),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_909),T14,ENVNUL,PNUL,sloc(1577));
  T17 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T17);
  lit_911 = YPPlist(1,YPPsym((P)"exp"));
  lit_912 = YPPlist(1,YPPsym((P)"return"));
  lit_913 = YPPsym((P)"x-1466");
  lit_914 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_915 = YPPsym((P)"with-subtransaction");
  T20 = YPsig(LITREF(lit_914),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1466_436 = YPmet(FUNCODEREF(fun_x_1466_436),LITREF(lit_913),T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(LITREF(lit_912),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_437 = YPmet(FUNCODEREF(fun_437),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(LITREF(lit_911),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_438 = YPmet(FUNCODEREF(fun_438),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T21 = fun_438;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T21);
  lit_916 = YPPsym((P)"objectify-with-subtransaction");
  lit_917 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T23 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_439 = YPmet(FUNCODEREF(fun_439),YPfalse,T23,ENVNUL,PNUL,sloc(1607));
  T22 = YPsig(LITREF(lit_917),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_916),T22,ENVNUL,PNUL,sloc(1606));
  T24 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T24);
  lit_918 = YPPsym((P)"<module-loader>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_918),T26);
  VARSET(YevalSastYLmodule_loaderG,T25);
  lit_919 = YPPsym((P)"module-loader-modules");
  lit_920 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_920),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_441 = YPmet(FUNCODEREF(fun_module_loader_modules_441),LITREF(lit_919),T27,ENVNUL,PNUL,sloc(1631));
  T29 = VARREF_OR(YevalSastYmodule_loader_modules,YPfalse);
  T30 = fun_module_loader_modules_441;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T30);
  VARSET(YevalSastYmodule_loader_modules,T28);
  lit_921 = YPPsym((P)"module-loader-modules-setter");
  lit_922 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T31 = YPsig(LITREF(lit_922),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_442 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_442),LITREF(lit_921),T31,ENVNUL,PNUL,sloc(1631));
  T33 = VARREF_OR(YevalSastYmodule_loader_modules_setter,YPfalse);
  T34 = fun_module_loader_modules_setter_442;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T34);
  VARSET(YevalSastYmodule_loader_modules_setter,T32);
  lit_923 = YPPlist(1,YPPsym((P)"_x"));
  T35 = YPsig(LITREF(lit_923),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_443 = YPmet(FUNCODEREF(fun_443),YPfalse,T35,ENVNUL,PNUL,sloc(1631));
  T36 = fun_443;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T36);
  lit_924 = YPPsym((P)"module-loader-stack");
  lit_925 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_925),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_444 = YPmet(FUNCODEREF(fun_module_loader_stack_444),LITREF(lit_924),T37,ENVNUL,PNUL,sloc(1634));
  T39 = VARREF_OR(YevalSastYmodule_loader_stack,YPfalse);
  T40 = fun_module_loader_stack_444;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YevalSastYmodule_loader_stack,T38);
  lit_926 = YPPsym((P)"module-loader-stack-setter");
  lit_927 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_927),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_445 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_445),LITREF(lit_926),T41,ENVNUL,PNUL,sloc(1634));
  T43 = VARREF_OR(YevalSastYmodule_loader_stack_setter,YPfalse);
  T44 = fun_module_loader_stack_setter_445;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YevalSastYmodule_loader_stack_setter,T42);
  lit_928 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPsig(LITREF(lit_928),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_446 = YPmet(FUNCODEREF(fun_446),YPfalse,T45,ENVNUL,PNUL,sloc(1634));
  T46 = fun_446;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T46);
  lit_929 = YPPsym((P)"<module>");
  T48 = (P)YPpair(VARREF(YLanyG),Ynil);
  T47 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_929),T48);
  VARSET(YevalSastYLmoduleG,T47);
  lit_930 = YPPsym((P)"module-name");
  lit_931 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_931),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_447 = YPmet(FUNCODEREF(fun_module_name_447),LITREF(lit_930),T49,ENVNUL,PNUL,sloc(1639));
  T51 = VARREF_OR(YevalSastYmodule_name,YPfalse);
  T52 = fun_module_name_447;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T52);
  VARSET(YevalSastYmodule_name,T50);
  lit_932 = YPPsym((P)"module-name-setter");
  lit_933 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_933),YPPlist(2,VARREF(YLsymG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_448 = YPmet(FUNCODEREF(fun_module_name_setter_448),LITREF(lit_932),T53,ENVNUL,PNUL,sloc(1639));
  T55 = VARREF_OR(YevalSastYmodule_name_setter,YPfalse);
  T56 = fun_module_name_setter_448;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YevalSastYmodule_name_setter,T54);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),VARREF(YevalSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_934 = YPPsym((P)"module-mangled-name");
  lit_935 = YPPlist(1,YPPsym((P)"_x"));
  T57 = YPsig(LITREF(lit_935),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_449 = YPmet(FUNCODEREF(fun_module_mangled_name_449),LITREF(lit_934),T57,ENVNUL,PNUL,sloc(1640));
  T59 = VARREF_OR(YevalSastYmodule_mangled_name,YPfalse);
  T60 = fun_module_mangled_name_449;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T60);
  VARSET(YevalSastYmodule_mangled_name,T58);
  lit_936 = YPPsym((P)"module-mangled-name-setter");
  lit_937 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T62 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T61 = YPsig(LITREF(lit_937),YPPlist(2,T62,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_450 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_450),LITREF(lit_936),T61,ENVNUL,PNUL,sloc(1640));
  T64 = VARREF_OR(YevalSastYmodule_mangled_name_setter,YPfalse);
  T65 = fun_module_mangled_name_setter_450;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSastYmodule_mangled_name_setter,T63);
  lit_938 = YPPlist(1,YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_938),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_451 = YPmet(FUNCODEREF(fun_451),YPfalse,T66,ENVNUL,PNUL,sloc(1640));
  T67 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T68 = fun_451;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T67,T68);
  lit_939 = YPPsym((P)"module-mangled-string-name");
  lit_940 = YPPlist(1,YPPsym((P)"_x"));
  T69 = YPsig(LITREF(lit_940),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_452 = YPmet(FUNCODEREF(fun_module_mangled_string_name_452),LITREF(lit_939),T69,ENVNUL,PNUL,sloc(1641));
  T71 = VARREF_OR(YevalSastYmodule_mangled_string_name,YPfalse);
  T72 = fun_module_mangled_string_name_452;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSastYmodule_mangled_string_name,T70);
  lit_941 = YPPsym((P)"module-mangled-string-name-setter");
  lit_942 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T73 = YPsig(LITREF(lit_942),YPPlist(2,T74,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_453 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_453),LITREF(lit_941),T73,ENVNUL,PNUL,sloc(1641));
  T76 = VARREF_OR(YevalSastYmodule_mangled_string_name_setter,YPfalse);
  T77 = fun_module_mangled_string_name_setter_453;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T75);
  lit_943 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_943),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_454 = YPmet(FUNCODEREF(fun_454),YPfalse,T78,ENVNUL,PNUL,sloc(1641));
  T79 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T80 = fun_454;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T79,T80);
  lit_944 = YPPsym((P)"module-target-environment");
  lit_945 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_945),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_455 = YPmet(FUNCODEREF(fun_module_target_environment_455),LITREF(lit_944),T81,ENVNUL,PNUL,sloc(1643));
  T83 = VARREF_OR(YevalSastYmodule_target_environment,YPfalse);
  T84 = fun_module_target_environment_455;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YevalSastYmodule_target_environment,T82);
  lit_946 = YPPsym((P)"module-target-environment-setter");
  lit_947 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_947),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_456 = YPmet(FUNCODEREF(fun_module_target_environment_setter_456),LITREF(lit_946),T85,ENVNUL,PNUL,sloc(1643));
  T87 = VARREF_OR(YevalSastYmodule_target_environment_setter,YPfalse);
  T88 = fun_module_target_environment_setter_456;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YevalSastYmodule_target_environment_setter,T86);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_948 = YPPsym((P)"module-syntax-environment");
  lit_949 = YPPlist(1,YPPsym((P)"_x"));
  T89 = YPsig(LITREF(lit_949),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_457 = YPmet(FUNCODEREF(fun_module_syntax_environment_457),LITREF(lit_948),T89,ENVNUL,PNUL,sloc(1644));
  T91 = VARREF_OR(YevalSastYmodule_syntax_environment,YPfalse);
  T92 = fun_module_syntax_environment_457;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YevalSastYmodule_syntax_environment,T90);
  lit_950 = YPPsym((P)"module-syntax-environment-setter");
  lit_951 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T93 = YPsig(LITREF(lit_951),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_458 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_458),LITREF(lit_950),T93,ENVNUL,PNUL,sloc(1644));
  T95 = VARREF_OR(YevalSastYmodule_syntax_environment_setter,YPfalse);
  T96 = fun_module_syntax_environment_setter_458;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YevalSastYmodule_syntax_environment_setter,T94);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_952 = YPPsym((P)"%module-exports");
  lit_953 = YPPlist(1,YPPsym((P)"_x"));
  T97 = YPsig(LITREF(lit_953),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_459 = YPmet(FUNCODEREF(fun_Pmodule_exports_459),LITREF(lit_952),T97,ENVNUL,PNUL,sloc(1646));
  T99 = VARREF_OR(YevalSastYPmodule_exports,YPfalse);
  T100 = fun_Pmodule_exports_459;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YevalSastYPmodule_exports,T98);
  lit_954 = YPPsym((P)"%module-exports-setter");
  lit_955 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T101 = YPsig(LITREF(lit_955),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_460 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_460),LITREF(lit_954),T101,ENVNUL,PNUL,sloc(1646));
  T103 = VARREF_OR(YevalSastYPmodule_exports_setter,YPfalse);
  T104 = fun_Pmodule_exports_setter_460;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YevalSastYPmodule_exports_setter,T102);
  lit_956 = YPPlist(1,YPPsym((P)"_x"));
  T105 = YPsig(LITREF(lit_956),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_461 = YPmet(FUNCODEREF(fun_461),YPfalse,T105,ENVNUL,PNUL,sloc(1646));
  T106 = fun_461;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),VARREF(YevalSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T106);
  lit_957 = YPPsym((P)"module-data-processed?");
  lit_958 = YPPlist(1,YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_958),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_462 = YPmet(FUNCODEREF(fun_module_data_processedQ_462),LITREF(lit_957),T107,ENVNUL,PNUL,sloc(1647));
  T109 = VARREF_OR(YevalSastYmodule_data_processedQ,YPfalse);
  T110 = fun_module_data_processedQ_462;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YevalSastYmodule_data_processedQ,T108);
  lit_959 = YPPsym((P)"module-data-processed?-setter");
  lit_960 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T111 = YPsig(LITREF(lit_960),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_463 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_463),LITREF(lit_959),T111,ENVNUL,PNUL,sloc(1647));
  T113 = VARREF_OR(YevalSastYmodule_data_processedQ_setter,YPfalse);
  T114 = fun_module_data_processedQ_setter_463;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSastYmodule_data_processedQ_setter,T112);
  lit_961 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_961),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_464 = YPmet(FUNCODEREF(fun_464),YPfalse,T115,ENVNUL,PNUL,sloc(1647));
  T116 = fun_464;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T116);
  lit_962 = YPPsym((P)"module-runtime-data");
  lit_963 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_963),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_465 = YPmet(FUNCODEREF(fun_module_runtime_data_465),LITREF(lit_962),T117,ENVNUL,PNUL,sloc(1648));
  T119 = VARREF_OR(YevalSastYmodule_runtime_data,YPfalse);
  T120 = fun_module_runtime_data_465;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YevalSastYmodule_runtime_data,T118);
  lit_964 = YPPsym((P)"module-runtime-data-setter");
  lit_965 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_965),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_466 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_466),LITREF(lit_964),T121,ENVNUL,PNUL,sloc(1648));
  T123 = VARREF_OR(YevalSastYmodule_runtime_data_setter,YPfalse);
  T124 = fun_module_runtime_data_setter_466;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSastYmodule_runtime_data_setter,T122);
  lit_966 = YPPlist(1,YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_966),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_467 = YPmet(FUNCODEREF(fun_467),YPfalse,T125,ENVNUL,PNUL,sloc(1648));
  T126 = fun_467;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T126);
  lit_967 = YPPsym((P)"module-transaction");
  lit_968 = YPPlist(1,YPPsym((P)"_x"));
  T127 = YPsig(LITREF(lit_968),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_468 = YPmet(FUNCODEREF(fun_module_transaction_468),LITREF(lit_967),T127,ENVNUL,PNUL,sloc(1649));
  T129 = VARREF_OR(YevalSastYmodule_transaction,YPfalse);
  T130 = fun_module_transaction_468;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T130);
  VARSET(YevalSastYmodule_transaction,T128);
  lit_969 = YPPsym((P)"module-transaction-setter");
  lit_970 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_970),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_469 = YPmet(FUNCODEREF(fun_module_transaction_setter_469),LITREF(lit_969),T131,ENVNUL,PNUL,sloc(1649));
  T133 = VARREF_OR(YevalSastYmodule_transaction_setter,YPfalse);
  T134 = fun_module_transaction_setter_469;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YevalSastYmodule_transaction_setter,T132);
  lit_971 = YPPlist(1,YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_971),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_470 = YPmet(FUNCODEREF(fun_470),YPfalse,T135,ENVNUL,PNUL,sloc(1649));
  T136 = fun_470;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T136);
  lit_972 = YPPsym((P)"module-uses-c-files");
  lit_973 = YPPlist(1,YPPsym((P)"_x"));
  T137 = YPsig(LITREF(lit_973),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_471 = YPmet(FUNCODEREF(fun_module_uses_c_files_471),LITREF(lit_972),T137,ENVNUL,PNUL,sloc(1650));
  T139 = VARREF_OR(YevalSastYmodule_uses_c_files,YPfalse);
  T140 = fun_module_uses_c_files_471;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T140);
  VARSET(YevalSastYmodule_uses_c_files,T138);
  lit_974 = YPPsym((P)"module-uses-c-files-setter");
  lit_975 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_975),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_setter_472 = YPmet(FUNCODEREF(fun_module_uses_c_files_setter_472),LITREF(lit_974),T141,ENVNUL,PNUL,sloc(1650));
  T143 = VARREF_OR(YevalSastYmodule_uses_c_files_setter,YPfalse);
  T144 = fun_module_uses_c_files_setter_472;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YevalSastYmodule_uses_c_files_setter,T142);
  lit_976 = YPPlist(1,YPPsym((P)"_x"));
  T145 = YPsig(LITREF(lit_976),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_473 = YPmet(FUNCODEREF(fun_473),YPfalse,T145,ENVNUL,PNUL,sloc(1650));
  T146 = fun_473;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_files),VARREF(YevalSastYmodule_uses_c_files_setter),VARREF(YgooScolsSvecYLvecG),T146);
  lit_977 = YPPsym((P)"module-uses-c-includes");
  lit_978 = YPPlist(1,YPPsym((P)"_x"));
  T147 = YPsig(LITREF(lit_978),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_474 = YPmet(FUNCODEREF(fun_module_uses_c_includes_474),LITREF(lit_977),T147,ENVNUL,PNUL,sloc(1651));
  T149 = VARREF_OR(YevalSastYmodule_uses_c_includes,YPfalse);
  T150 = fun_module_uses_c_includes_474;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSastYmodule_uses_c_includes,T148);
  lit_979 = YPPsym((P)"module-uses-c-includes-setter");
  lit_980 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_980),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_setter_475 = YPmet(FUNCODEREF(fun_module_uses_c_includes_setter_475),LITREF(lit_979),T151,ENVNUL,PNUL,sloc(1651));
  T153 = VARREF_OR(YevalSastYmodule_uses_c_includes_setter,YPfalse);
  T154 = fun_module_uses_c_includes_setter_475;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YevalSastYmodule_uses_c_includes_setter,T152);
  lit_981 = YPPlist(1,YPPsym((P)"_x"));
  T155 = YPsig(LITREF(lit_981),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_476 = YPmet(FUNCODEREF(fun_476),YPfalse,T155,ENVNUL,PNUL,sloc(1651));
  T156 = fun_476;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_includes),VARREF(YevalSastYmodule_uses_c_includes_setter),VARREF(YgooScolsSvecYLvecG),T156);
  lit_982 = YPPsym((P)"module-uses-c-libraries");
  lit_983 = YPPlist(1,YPPsym((P)"_x"));
  T157 = YPsig(LITREF(lit_983),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_477 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_477),LITREF(lit_982),T157,ENVNUL,PNUL,sloc(1652));
  T159 = VARREF_OR(YevalSastYmodule_uses_c_libraries,YPfalse);
  T160 = fun_module_uses_c_libraries_477;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(YevalSastYmodule_uses_c_libraries,T158);
  lit_984 = YPPsym((P)"module-uses-c-libraries-setter");
  lit_985 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_985),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_setter_478 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_setter_478),LITREF(lit_984),T161,ENVNUL,PNUL,sloc(1652));
  T163 = VARREF_OR(YevalSastYmodule_uses_c_libraries_setter,YPfalse);
  T164 = fun_module_uses_c_libraries_setter_478;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YevalSastYmodule_uses_c_libraries_setter,T162);
  lit_986 = YPPlist(1,YPPsym((P)"_x"));
  T165 = YPsig(LITREF(lit_986),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_479 = YPmet(FUNCODEREF(fun_479),YPfalse,T165,ENVNUL,PNUL,sloc(1652));
  T166 = fun_479;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_libraries),VARREF(YevalSastYmodule_uses_c_libraries_setter),VARREF(YgooScolsSvecYLvecG),T166);
  VARSET(YevalSastYmodule_exports_setter,VARREF(YevalSastYPmodule_exports_setter));
  lit_987 = YPPsym((P)"module-exports");
  lit_988 = YPPlist(1,YPPsym((P)"x"));
  T167 = YPsig(LITREF(lit_988),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_480 = YPmet(FUNCODEREF(fun_module_exports_480),LITREF(lit_987),T167,ENVNUL,PNUL,sloc(1655));
  T169 = VARREF_OR(YevalSastYmodule_exports,YPfalse);
  T170 = fun_module_exports_480;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSastYmodule_exports,T168);
  lit_989 = YPPsym((P)"set-module-environments");
  lit_990 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"syntax-env"),YPPsym((P)"target-env"));
  T171 = YPsig(LITREF(lit_990),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_989),T171,ENVNUL,PNUL,sloc(1665));
  T172 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T172);
  lit_991 = YPPsym((P)"do-module-loader-modules");
  lit_992 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"loader"));
  lit_993 = YPPlist(1,YPPsym((P)"mod"));
  T174 = YPsig(LITREF(lit_993),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_482 = YPmet(FUNCODEREF(fun_482),YPfalse,T174,ENVNUL,PNUL,sloc(1673));
  T173 = YPsig(LITREF(lit_992),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_991),T173,ENVNUL,PNUL,sloc(1672));
  T175 = YevalSastYdo_module_loader_modules;
  VARSET(YevalSastYdo_module_loader_modules,T175);
  lit_994 = YPPsym((P)"module-loader-module-type");
  lit_995 = YPPlist(1,YPPsym((P)"loader"));
  T176 = YPsig(LITREF(lit_995),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_484 = YPmet(FUNCODEREF(fun_module_loader_module_type_484),LITREF(lit_994),T176,ENVNUL,PNUL,sloc(1678));
  T178 = VARREF_OR(YevalSastYmodule_loader_module_type,YPfalse);
  T179 = fun_module_loader_module_type_484;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T179);
  VARSET(YevalSastYmodule_loader_module_type,T177);
  lit_996 = YPPsym((P)"register-module!");
  lit_997 = YPPlist(2,YPPsym((P)"module-loader"),YPPsym((P)"mod"));
  T180 = YPsig(LITREF(lit_997),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_996),T180,ENVNUL,PNUL,sloc(1682));
  T181 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T181);
  lit_998 = YPPsym((P)"probe-module");
  lit_999 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T182 = YPsig(LITREF(lit_999),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_998),T182,ENVNUL,PNUL,sloc(1688));
  T183 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T183);
  lit_1000 = YPPsym((P)"load-and-register-module");
  lit_1001 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_1002 = YPsb((P)"  ");
  lit_1003 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_1004 = YPsb((P)"%s[Loading module %s...\n");
  lit_1005 = YPsb((P)"%s]\n");
  T186 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_487 = YPmet(FUNCODEREF(fun_487),YPfalse,T186,ENVNUL,PNUL,sloc(1709));
  T185 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_488 = YPmet(FUNCODEREF(fun_488),YPfalse,T185,ENVNUL,PNUL,sloc(1710));
  T184 = YPsig(LITREF(lit_1001),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_1000),T184,ENVNUL,PNUL,sloc(1693));
  T187 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T187);
  lit_1006 = YPPsym((P)"load-module");
  lit_1007 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T189 = YPsig(LITREF(lit_1007),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T188 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1006),T189,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T188);
  lit_1008 = YPPsym((P)"export-binding!");
  lit_1009 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"name"),YPPsym((P)"binding"));
  lit_1010 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T193 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T192 = YPsig(LITREF(lit_1009),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T193,Ynil);
  T191 = YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_1008),T192,ENVNUL,PNUL,sloc(1726));
  T195 = YevalSastYexport_bindingX;
  T194 = VARSET(YevalSastYexport_bindingX,T195);
  T190 = T194;
  return T190;
}

P YevalSastY___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91;
DEFCREGS();
  lit_1011 = YPPsym((P)"binding-native-to?");
  lit_1012 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"module"));
  T0 = YPsig(LITREF(lit_1012),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_1011),T0,ENVNUL,PNUL,sloc(1739));
  T1 = YevalSastYbinding_native_toQ;
  VARSET(YevalSastYbinding_native_toQ,T1);
  lit_1013 = YPPsym((P)"report-undefined-global-bindings");
  lit_1014 = YPPlist(1,YPPsym((P)"mod"));
  lit_1015 = YPPlist(1,YPPsym((P)"binding"));
  lit_1016 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T3 = YPsig(LITREF(lit_1015),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_492 = YPmet(FUNCODEREF(fun_492),YPfalse,T3,ENVNUL,PNUL,sloc(1745));
  T2 = YPsig(LITREF(lit_1014),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_1013),T2,ENVNUL,PNUL,sloc(1743));
  T4 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T4);
  lit_1017 = YPPsym((P)"compute-transitive-users");
  lit_1018 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_1019 = YPPsym((P)"add-user");
  lit_1020 = YPPlist(1,YPPsym((P)"modname"));
  lit_1021 = YPPlist(1,YPPsym((P)"mod"));
  lit_1022 = YPPlist(1,YPPsym((P)"uses-mod"));
  lit_1023 = YPPlist(1,YPPsym((P)"v"));
  T9 = YPsig(LITREF(lit_1022),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T9,ENVNUL,PNUL,sloc(1764));
  T8 = YPsig(LITREF(lit_1021),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T8,ENVNUL,PNUL,sloc(1762));
  T7 = YPsig(LITREF(lit_1020),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_496 = YPmet(FUNCODEREF(fun_add_user_496),LITREF(lit_1019),T7,ENVNUL,PNUL,sloc(1758));
  T6 = YPsig(LITREF(lit_1023),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_497 = YPmet(FUNCODEREF(fun_497),YPfalse,T6,ENVNUL,PNUL,sloc(1770));
  T5 = YPsig(LITREF(lit_1018),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_1017),T5,ENVNUL,PNUL,sloc(1755));
  T10 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T10);
  lit_1024 = YPPsym((P)"remove-module-internal!");
  lit_1025 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  T11 = YPsig(LITREF(lit_1025),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_1024),T11,ENVNUL,PNUL,sloc(1775));
  T12 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T12);
  lit_1026 = YPPsym((P)"remove-modules-by-name!");
  lit_1027 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_1028 = YPPlist(1,YPPsym((P)"modname"));
  T15 = YPsig(LITREF(lit_1028),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_500 = YPmet(FUNCODEREF(fun_500),YPfalse,T15,ENVNUL,PNUL,sloc(1782));
  T14 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T13 = YPsig(LITREF(lit_1027),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T14,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_1026),T13,ENVNUL,PNUL,sloc(1780));
  T16 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T16);
  lit_1029 = YPPsym((P)"module-name-to-relpath");
  lit_1030 = YPPlist(1,YPPsym((P)"name"));
  T17 = YPsig(LITREF(lit_1030),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_1029),T17,ENVNUL,PNUL,sloc(1790));
  T18 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T18);
  lit_1031 = YPPsym((P)"install-initial-bindings");
  lit_1032 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_1033 = YPPlist(1,YPPsym((P)"name"));
  lit_1034 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T20 = YPsig(LITREF(lit_1033),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_503 = YPmet(FUNCODEREF(fun_503),YPfalse,T20,ENVNUL,PNUL,sloc(1801));
  T19 = YPsig(LITREF(lit_1032),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_1031),T19,ENVNUL,PNUL,sloc(1797));
  T21 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T21);
  lit_1035 = YPPsym((P)"fab-static-global-environment");
  lit_1036 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"module-loader"),YPPsym((P)"allow-foreign-names?"));
  T22 = YPsig(LITREF(lit_1036),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_1035),T22,ENVNUL,PNUL,sloc(1845));
  T23 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T23);
  lit_1037 = YPPsym((P)"fab-subset-environment");
  lit_1038 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"src-module"),YPPsym((P)"excluded"));
  lit_1039 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"binding"));
  T25 = YPsig(LITREF(lit_1039),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_506 = YPmet(FUNCODEREF(fun_506),YPfalse,T25,ENVNUL,PNUL,sloc(1866));
  T24 = YPsig(LITREF(lit_1038),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_1037),T24,ENVNUL,PNUL,sloc(1859));
  T26 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T26);
  lit_1040 = YPPsym((P)"<runtime-module-loader>");
  T28 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T27 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_1040),T28);
  VARSET(YevalSastYLruntime_module_loaderG,T27);
  DYNDEFSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_1041 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_1042 = YPsb((P)"Unable to find module %s");
  T33 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_508 = YPmet(FUNCODEREF(fun_508),YPfalse,T33,ENVNUL,PNUL,sloc(1902));
  T32 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_509 = YPmet(FUNCODEREF(fun_509),YPfalse,T32,ENVNUL,PNUL,sloc(1902));
  T31 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_510 = YPmet(FUNCODEREF(fun_510),YPfalse,T31,ENVNUL,PNUL,sloc(1899));
  T30 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_511 = YPmet(FUNCODEREF(fun_511),YPfalse,T30,ENVNUL,PNUL,sloc(1918));
  T29 = YPsig(LITREF(lit_1041),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_512 = YPmet(FUNCODEREF(fun_load_module_512),LITREF(lit_1006),T29,ENVNUL,PNUL,sloc(1889));
  T35 = VARREF_OR(YevalSastYload_module,YPfalse);
  T36 = fun_load_module_512;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YevalSastYload_module,T34);
  T37 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T37);
  lit_1043 = YPPsym((P)"runtime-module-loader");
  T38 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_1043),T38,ENVNUL,PNUL,sloc(1921));
  T39 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T39);
  lit_1044 = YPPsym((P)"runtime-module");
  lit_1045 = YPPlist(1,YPPsym((P)"modname"));
  T40 = YPsig(LITREF(lit_1045),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_1044),T40,ENVNUL,PNUL,sloc(1922));
  T41 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T41);
  lit_1046 = YPPsym((P)"runtime-environment");
  lit_1047 = YPPlist(1,YPPsym((P)"modname"));
  T42 = YPsig(LITREF(lit_1047),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_1046),T42,ENVNUL,PNUL,sloc(1924));
  T43 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T43);
  lit_1048 = YPPsym((P)"runtime-core-environment");
  lit_1049 = YPPlist(1,YPPsym((P)"modname"));
  T44 = YPsig(LITREF(lit_1049),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_1048),T44,ENVNUL,PNUL,sloc(1928));
  T45 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T45);
  lit_1050 = YPPsym((P)"unchecked-runtime-environment");
  lit_1051 = YPPlist(1,YPPsym((P)"modname"));
  T46 = YPsig(LITREF(lit_1051),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_1050),T46,ENVNUL,PNUL,sloc(1930));
  T47 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T47);
  lit_1052 = YPPsym((P)"reloader-do-create-module");
  lit_1053 = YPPlist(2,YPPsym((P)"modname"),YPPsym((P)"data"));
  T48 = YPsig(LITREF(lit_1053),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_1052),T48,ENVNUL,PNUL,sloc(1939));
  T49 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T49);
  lit_1054 = YPPsym((P)"reloader-do-use-module");
  lit_1055 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"uses"));
  T50 = YPsig(LITREF(lit_1055),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_1054),T50,ENVNUL,PNUL,sloc(1950));
  T51 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T51);
  lit_1056 = YPPsym((P)"reloader-do-import");
  lit_1057 = YPPlist(4,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"from-mod"),YPPsym((P)"original-name"));
  lit_1058 = YPsb((P)"Can't find %s from %s for %s\n");
  T52 = YPsig(LITREF(lit_1057),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_1056),T52,ENVNUL,PNUL,sloc(1953));
  T53 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T53);
  lit_1059 = YPPsym((P)"process-module-data");
  lit_1060 = YPPlist(1,YPPsym((P)"module"));
  T54 = YPsig(LITREF(lit_1060),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_1059),T54,ENVNUL,PNUL,sloc(1963));
  T55 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T55);
  lit_1061 = YPPsym((P)"ensure-module-data");
  lit_1062 = YPPlist(1,YPPsym((P)"module"));
  T56 = YPsig(LITREF(lit_1062),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_1061),T56,ENVNUL,PNUL,sloc(1968));
  T57 = YevalSastYensure_module_data;
  VARSET(YevalSastYensure_module_data,T57);
  lit_1063 = YPPsym((P)"reloader-do-runtime-binding");
  lit_1064 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T58 = YPsig(LITREF(lit_1064),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_1063),T58,ENVNUL,PNUL,sloc(1974));
  T59 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T59);
  lit_1065 = YPPsym((P)"reloader-do-dynamic-binding");
  lit_1066 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T60 = YPsig(LITREF(lit_1066),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_dynamic_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_dynamic_binding),LITREF(lit_1065),T60,ENVNUL,PNUL,sloc(1983));
  T61 = YevalSastYreloader_do_dynamic_binding;
  VARSET(YevalSastYreloader_do_dynamic_binding,T61);
  lit_1067 = YPPsym((P)"reloader-do-other-binding");
  lit_1068 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T62 = YPsig(LITREF(lit_1068),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_1067),T62,ENVNUL,PNUL,sloc(1996));
  T63 = YevalSastYreloader_do_other_binding;
  VARSET(YevalSastYreloader_do_other_binding,T63);
  lit_1069 = YPPsym((P)"reloader-do-export");
  lit_1070 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"as-name"));
  lit_1071 = YPsb((P)"Can't find %s in %s\n");
  T64 = YPsig(LITREF(lit_1070),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_1069),T64,ENVNUL,PNUL,sloc(2004));
  T65 = YevalSastYreloader_do_export;
  VARSET(YevalSastYreloader_do_export,T65);
  lit_1072 = YPPsym((P)"reload-modules");
  T66 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_1072),T66,ENVNUL,PNUL,sloc(2011));
  T67 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T67);
  lit_1073 = YPPsym((P)"install-magic-bindings");
  lit_1074 = YPPlist(1,YPPsym((P)"env"));
  lit_1075 = YPPlist(1,YPPsym((P)"binding"));
  T69 = YPsig(LITREF(lit_1075),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_528 = YPmet(FUNCODEREF(fun_528),YPfalse,T69,ENVNUL,PNUL,sloc(2023));
  T68 = YPsig(LITREF(lit_1074),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_1073),T68,ENVNUL,PNUL,sloc(2021));
  T70 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T70);
  lit_1076 = YPPsym((P)"reload-macros");
  T71 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_1076),T71,ENVNUL,PNUL,sloc(2029));
  T72 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T72);
  lit_1077 = YPPsym((P)"install-interpreter-hacks");
  lit_1078 = YPPlist(1,YPPsym((P)"env"));
  T73 = YPsig(LITREF(lit_1078),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_1077),T73,ENVNUL,PNUL,sloc(2036));
  T74 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T74);
  lit_1079 = YPPsym((P)"init-runtime");
  T75 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_1079),T75,ENVNUL,PNUL,sloc(2039));
  T76 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T76);
  lit_1080 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_1080));
  lit_1081 = YPPsym((P)"fab-syntax-environment");
  lit_1082 = YPPlist(1,YPPsym((P)"module"));
  lit_1083 = YPPsym((P)"goo");
  T77 = YPsig(LITREF(lit_1082),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_1081),T77,ENVNUL,PNUL,sloc(2063));
  T78 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T78);
  lit_1084 = YPPsym((P)"fab-g2c-module");
  lit_1085 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T79 = YPsig(LITREF(lit_1085),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_1084),T79,ENVNUL,PNUL,sloc(2068));
  T80 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T80);
  lit_1086 = YPPsym((P)"init-g2c-boot-environment");
  lit_1087 = YPPlist(1,YPPsym((P)"env"));
  T81 = YPsig(LITREF(lit_1087),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_1086),T81,ENVNUL,PNUL,sloc(2081));
  T82 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T82);
  lit_1088 = YPPsym((P)"init-g2c-regular-environment");
  lit_1089 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T83 = YPsig(LITREF(lit_1089),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_1088),T83,ENVNUL,PNUL,sloc(2087));
  T84 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T84);
  lit_1090 = YPPsym((P)"init-ast");
  T85 = YPsig(LITREF(lit_643),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_1090),T85,ENVNUL,PNUL,sloc(2096));
  T86 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T86);
  lit_1091 = YPPsym((P)"do-static-global-bindings");
  lit_1092 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T87 = YPsig(LITREF(lit_1092),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_1091),T87,ENVNUL,PNUL,sloc(2100));
  T88 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T88);
  lit_1093 = YPPsym((P)"do-named-static-global-bindings");
  lit_1094 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T89 = YPsig(LITREF(lit_1094),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_1093),T89,ENVNUL,PNUL,sloc(2107));
  T90 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T90);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T91 = YPfalse;
  return T91;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmag;

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
  {"%vpc", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"dependency-empty?", &module_info_evalSdependency, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"$empty-dependency", &module_info_evalSdependency, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"binding-info-setter", CVAR, &YevalSastYbinding_info_setter},
  {"environment-module-loader", CVAR, &YevalSastYenvironment_module_loader},
  {"module-uses-c-files", CVAR, &YevalSastYmodule_uses_c_files},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"$goo-boot-module-name", CVAR, &YevalSastYDgoo_boot_module_name},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"register-module!", CVAR, &YevalSastYregister_moduleX},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"call-with-subtransaction", CVAR, &YevalSastYcall_with_subtransaction},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"function-ref-count", CVAR, &YevalSastYfunction_ref_count},
  {"remove-module-internal!", CVAR, &YevalSastYremove_module_internalX},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"module-mangled-name-setter", CVAR, &YevalSastYmodule_mangled_name_setter},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"module-target-environment", CVAR, &YevalSastYmodule_target_environment},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"report-undefined-global-bindings", CVAR, &YevalSastYreport_undefined_global_bindings},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"application-loop-setter", CVAR, &YevalSastYapplication_loop_setter},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"binding-inferred-type", CVAR, &YevalSastYbinding_inferred_type},
  {"<static-global-environment>", CVAR, &YevalSastYLstatic_global_environmentG},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"define-magic-binding", PVAR, NULL},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"binding-mangled-name", CVAR, &YevalSastYbinding_mangled_name},
  {"---main-9---", PVAR, NULL},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"module-loader-module-type", CVAR, &YevalSastYmodule_loader_module_type},
  {"runtime-core-environment", CVAR, &YevalSastYruntime_core_environment},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"do-module-loader-modules", CVAR, &YevalSastYdo_module_loader_modules},
  {"<module-binding>", CVAR, &YevalSastYLmodule_bindingG},
  {"bound?-default", CVAR, &YevalSastYboundQ_default},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"reloader-do-import", CVAR, &YevalSastYreloader_do_import},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"<static-environment>", CVAR, &YevalSastYLstatic_environmentG},
  {"module-syntax-environment-setter", CVAR, &YevalSastYmodule_syntax_environment_setter},
  {"find-syntax-environment", CVAR, &YevalSastYfind_syntax_environment},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"reloader-do-use-module", CVAR, &YevalSastYreloader_do_use_module},
  {"binding-native-to?", CVAR, &YevalSastYbinding_native_toQ},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"environment-module", CVAR, &YevalSastYenvironment_module},
  {"---main-7---", PVAR, NULL},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"<static-local-environment>", CVAR, &YevalSastYLstatic_local_environmentG},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"<binding>", CVAR, &YevalSastYLbindingG},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"transaction-dependents-setter", CVAR, &YevalSastYtransaction_dependents_setter},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"transaction-dependents", CVAR, &YevalSastYtransaction_dependents},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"module-uses-c-includes", CVAR, &YevalSastYmodule_uses_c_includes},
  {"binding-global-box-setter", CVAR, &YevalSastYbinding_global_box_setter},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"<global-box>", CVAR, &YevalSastYLglobal_boxG},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"module-target-environment-setter", CVAR, &YevalSastYmodule_target_environment_setter},
  {"$sequential-empty", CVAR, &YevalSastYDsequential_empty},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"arguments", CVAR, &YevalSastYarguments},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"transaction-implemented-bindings", CVAR, &YevalSastYtransaction_implemented_bindings},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"module-runtime-data-setter", CVAR, &YevalSastYmodule_runtime_data_setter},
  {"runtime-environment", CVAR, &YevalSastYruntime_environment},
  {"binding-info", CVAR, &YevalSastYbinding_info},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"process-module-data", CVAR, &YevalSastYprocess_module_data},
  {"binding-locative", CVAR, &YevalSastYbinding_locative},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"do-named-static-global-bindings", CVAR, &YevalSastYdo_named_static_global_bindings},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"with-subtransaction", PVAR, NULL},
  {"unchecked-runtime-environment", CVAR, &YevalSastYunchecked_runtime_environment},
  {"insert-and-mangle-global!", CVAR, &YevalSastYinsert_and_mangle_globalX},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"ensure-module-data", CVAR, &YevalSastYensure_module_data},
  {"reloader-do-runtime-binding", CVAR, &YevalSastYreloader_do_runtime_binding},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"reloader-do-export", CVAR, &YevalSastYreloader_do_export},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"objectify-function-using", CVAR, &YevalSastYobjectify_function_using},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"export-binding!", CVAR, &YevalSastYexport_bindingX},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"binding-global-box", CVAR, &YevalSastYbinding_global_box},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"fab-static-global-environment", CVAR, &YevalSastYfab_static_global_environment},
  {"module-name-setter", CVAR, &YevalSastYmodule_name_setter},
  {"binding-free?-setter", CVAR, &YevalSastYbinding_freeQ_setter},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"$empty-static-environment", CVAR, &YevalSastYDempty_static_environment},
  {"probe-module", CVAR, &YevalSastYprobe_module},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"module-data-processed?-setter", CVAR, &YevalSastYmodule_data_processedQ_setter},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"insert-globals!", CVAR, &YevalSastYinsert_globalsX},
  {"module-runtime-data", CVAR, &YevalSastYmodule_runtime_data},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"program-line-setter", CVAR, &YevalSastYprogram_line_setter},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"loop-body", CVAR, &YevalSastYloop_body},
  {"loop-continue", CVAR, &YevalSastYloop_continue},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"---main-5---", PVAR, NULL},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"loop-bindings-setter", CVAR, &YevalSastYloop_bindings_setter},
  {"roll-back-transaction", CVAR, &YevalSastYroll_back_transaction},
  {"module-syntax-environment", CVAR, &YevalSastYmodule_syntax_environment},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"module-uses-c-includes-setter", CVAR, &YevalSastYmodule_uses_c_includes_setter},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"runtime-module", CVAR, &YevalSastYruntime_module},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"---main-4---", PVAR, NULL},
  {"module-name", CVAR, &YevalSastYmodule_name},
  {"module-mangled-name", CVAR, &YevalSastYmodule_mangled_name},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"<module-loader>", CVAR, &YevalSastYLmodule_loaderG},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"environment-bindings-setter", CVAR, &YevalSastYenvironment_bindings_setter},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"transaction-register-implemented-binding", CVAR, &YevalSastYtransaction_register_implemented_binding},
  {"merge-transactions!", CVAR, &YevalSastYmerge_transactionsX},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"fab-subset-environment", CVAR, &YevalSastYfab_subset_environment},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"<transaction>", CVAR, &YevalSastYLtransactionG},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"pairize", CVAR, &YevalSastYpairize},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"load-module", CVAR, &YevalSastYload_module},
  {"function-loop", CVAR, &YevalSastYfunction_loop},
  {"ast-<bot>", CVAR, &YevalSastYast_LbotG},
  {"binding-module-setter", CVAR, &YevalSastYbinding_module_setter},
  {"transaction-empty?", CVAR, &YevalSastYtransaction_emptyQ},
  {"install-initial-bindings", CVAR, &YevalSastYinstall_initial_bindings},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"module-loader-stack-setter", CVAR, &YevalSastYmodule_loader_stack_setter},
  {"module-loader-modules-setter", CVAR, &YevalSastYmodule_loader_modules_setter},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"$fab-list-empty", CVAR, &YevalSastYDfab_list_empty},
  {"---main-6---", PVAR, NULL},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"ftype", CVAR, &YevalSastYftype},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"function-data-refs-setter", CVAR, &YevalSastYfunction_data_refs_setter},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"<module>", CVAR, &YevalSastYLmoduleG},
  {"find-binding", CVAR, &YevalSastYfind_binding},
  {"environment-next", CVAR, &YevalSastYenvironment_next},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"module-exports-setter", CVAR, &YevalSastYmodule_exports_setter},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"$functions-empty", CVAR, &YevalSastYDfunctions_empty},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"binding-name-setter", CVAR, &YevalSastYbinding_name_setter},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"environment-uses-modules", CVAR, &YevalSastYenvironment_uses_modules},
  {"loop-continue-setter", CVAR, &YevalSastYloop_continue_setter},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"binding-free?", CVAR, &YevalSastYbinding_freeQ},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"namespace-error", CVAR, &YevalSastYnamespace_error},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"loop-body-setter", CVAR, &YevalSastYloop_body_setter},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"env-object-name", CVAR, &YevalSastYenv_object_name},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"module-mangled-string-name-setter", CVAR, &YevalSastYmodule_mangled_string_name_setter},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"module-transaction-setter", CVAR, &YevalSastYmodule_transaction_setter},
  {"---main-3---", PVAR, NULL},
  {"environment-uses-modules-setter", CVAR, &YevalSastYenvironment_uses_modules_setter},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"<runtime-module-loader>", CVAR, &YevalSastYLruntime_module_loaderG},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"<static-empty-environment>", CVAR, &YevalSastYLstatic_empty_environmentG},
  {"transaction-implemented-bindings-setter", CVAR, &YevalSastYtransaction_implemented_bindings_setter},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"insert-global!", CVAR, &YevalSastYinsert_globalX},
  {"module-uses-c-files-setter", CVAR, &YevalSastYmodule_uses_c_files_setter},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"environment-module-setter", CVAR, &YevalSastYenvironment_module_setter},
  {"program-line", CVAR, &YevalSastYprogram_line},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"environment-module-loader-setter", CVAR, &YevalSastYenvironment_module_loader_setter},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"reload-modules", CVAR, &YevalSastYreload_modules},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"---main-1---", PVAR, NULL},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"%module-exports", CVAR, &YevalSastYPmodule_exports},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"load-and-register-module", CVAR, &YevalSastYload_and_register_module},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"module-name-to-relpath", CVAR, &YevalSastYmodule_name_to_relpath},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"incf-ref-count", CVAR, &YevalSastYincf_ref_count},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"reloader-do-dynamic-binding", CVAR, &YevalSastYreloader_do_dynamic_binding},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"transaction-register-dependent", CVAR, &YevalSastYtransaction_register_dependent},
  {"module-data-processed?", CVAR, &YevalSastYmodule_data_processedQ},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"module-exports", CVAR, &YevalSastYmodule_exports},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"runtime-module-loader", CVAR, &YevalSastYruntime_module_loader},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"import-global!", CVAR, &YevalSastYimport_globalX},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"binding-type-setter", CVAR, &YevalSastYbinding_type_setter},
  {"%module-exports-setter", CVAR, &YevalSastYPmodule_exports_setter},
  {"compute-transitive-users", CVAR, &YevalSastYcompute_transitive_users},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"<loop>", CVAR, &YevalSastYLloopG},
  {"*current-subtransaction*", CVAR, &YevalSastYTcurrent_subtransactionT},
  {"binding-module", CVAR, &YevalSastYbinding_module},
  {"bind-exit-light?-setter", CVAR, &YevalSastYbind_exit_lightQ_setter},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"<binding-name>", CVAR, &YevalSastYLbinding_nameG},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"binding-prop-setter", CVAR, &YevalSastYbinding_prop_setter},
  {"binding-locative-setter", CVAR, &YevalSastYbinding_locative_setter},
  {"binding-handler-setter", CVAR, &YevalSastYbinding_handler_setter},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"req-sig-specs", CVAR, &YevalSastYreq_sig_specs},
  {"module-uses-c-libraries-setter", CVAR, &YevalSastYmodule_uses_c_libraries_setter},
  {"loop-bindings", CVAR, &YevalSastYloop_bindings},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"find-static-global-environment", CVAR, &YevalSastYfind_static_global_environment},
  {"function-loop-setter", CVAR, &YevalSastYfunction_loop_setter},
  {"function-data-refs", CVAR, &YevalSastYfunction_data_refs},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"binding-module-name", CVAR, &YevalSastYbinding_module_name},
  {"import-and-mangle-global!", CVAR, &YevalSastYimport_and_mangle_globalX},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"load-in", CVAR, &YevalSastYload_in},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"function-ref-count-setter", CVAR, &YevalSastYfunction_ref_count_setter},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"global-box-value", CVAR, &YevalSastYglobal_box_value},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"reloader-do-create-module", CVAR, &YevalSastYreloader_do_create_module},
  {"---main-2---", PVAR, NULL},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"def-programs", PVAR, NULL},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"do-static-global-bindings", CVAR, &YevalSastYdo_static_global_bindings},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"global-box-value-setter", CVAR, &YevalSastYglobal_box_value_setter},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"module-uses-c-libraries", CVAR, &YevalSastYmodule_uses_c_libraries},
  {"binding-kind-setter", CVAR, &YevalSastYbinding_kind_setter},
  {"application-loop", CVAR, &YevalSastYapplication_loop},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"binding-mangled-name-setter", CVAR, &YevalSastYbinding_mangled_name_setter},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"binding-type", CVAR, &YevalSastYbinding_type},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"find-environment-module", CVAR, &YevalSastYfind_environment_module},
  {"binding-inferred-type-setter", CVAR, &YevalSastYbinding_inferred_type_setter},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"bound?-default-setter", CVAR, &YevalSastYboundQ_default_setter},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"environment-next-setter", CVAR, &YevalSastYenvironment_next_setter},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"functions", CVAR, &YevalSastYfunctions},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"bind-exit-light?", CVAR, &YevalSastYbind_exit_lightQ},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"with-dependent", PVAR, NULL},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"binding-kind", CVAR, &YevalSastYbinding_kind},
  {"<namespace-error>", CVAR, &YevalSastYLnamespace_errorG},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"environment-allows-foreign-names?", CVAR, &YevalSastYenvironment_allows_foreign_namesQ},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"environment-bindings", CVAR, &YevalSastYenvironment_bindings},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"---main-10---", PVAR, NULL},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"---main-8---", PVAR, NULL},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"*now-rt-env*", DVAR, &YevalSastYTnow_rt_envT},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"<loop-application>", CVAR, &YevalSastYLloop_applicationG},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"module-loader-modules", CVAR, &YevalSastYmodule_loader_modules},
  {"binding-name", CVAR, &YevalSastYbinding_name},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"frame-bindings", CVAR, &YevalSastYframe_bindings},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"module-mangled-string-name", CVAR, &YevalSastYmodule_mangled_string_name},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"binding-handler", CVAR, &YevalSastYbinding_handler},
  {"remove-modules-by-name!", CVAR, &YevalSastYremove_modules_by_nameX},
  {"binding-prop", CVAR, &YevalSastYbinding_prop},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"sequential", CVAR, &YevalSastYsequential},
  {"$free-environment-empty", CVAR, &YevalSastYDfree_environment_empty},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"set-module-environments", CVAR, &YevalSastYset_module_environments},
  {"reloader-do-other-binding", CVAR, &YevalSastYreloader_do_other_binding},
  {"module-loader-stack", CVAR, &YevalSastYmodule_loader_stack},
  {"$arguments-empty", CVAR, &YevalSastYDarguments_empty},
  {"module-transaction", CVAR, &YevalSastYmodule_transaction},
  {"*runtime-module-loader*", CVAR, &YevalSastYTruntime_module_loaderT},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"binding-info-setter", NULL},
  {"module-uses-c-files", NULL},
  {"$goo-boot-module-name", NULL},
  {"bind-exit-light?", NULL},
  {"objectify-with-subtransaction", NULL},
  {"function-source-setter", NULL},
  {"<bound?>", NULL},
  {"program-type-setter", NULL},
  {"application-known?", NULL},
  {"function-value", NULL},
  {"<dynamic-assignment>", NULL},
  {"function-temporaries", NULL},
  {"function-ref-count", NULL},
  {"bound?-reference", NULL},
  {"fix-let-body-setter", NULL},
  {"module-mangled-name-setter", NULL},
  {"set-module-environments", NULL},
  {"module-target-environment", NULL},
  {"signature-value", NULL},
  {"signature-arity-setter", NULL},
  {"bind-exit-main-fun", NULL},
  {"<assignment>", NULL},
  {"<local-assignment>", NULL},
  {"binding-inferred-type", NULL},
  {"<static-global-environment>", NULL},
  {"<ast-primitive-definition>", NULL},
  {"binding-mangled-name", NULL},
  {"<application>", NULL},
  {"module-loader-module-type", NULL},
  {"function-binding", NULL},
  {"<module-binding>", NULL},
  {"reference-called-function?", NULL},
  {"process-closed-application", NULL},
  {"binding-dynamic-extent?", NULL},
  {"<runtime-reference>", NULL},
  {"binding-value", NULL},
  {"assignment-form", NULL},
  {"binding-mutable?", NULL},
  {"locals-body-setter", NULL},
  {"<loop-application>", NULL},
  {"fix-let-arguments-setter", NULL},
  {"environment-module", NULL},
  {"monitor-test", NULL},
  {"application-arguments", NULL},
  {"ast-walk", NULL},
  {"fix-let-types-setter", NULL},
  {"<low-let>", NULL},
  {"<binding>", NULL},
  {"<bind-exit>", NULL},
  {"<module-binding-reference>", NULL},
  {"function-nary?", NULL},
  {"application-function", NULL},
  {"application-tail?", NULL},
  {"monitor-handler", NULL},
  {"<programs>", NULL},
  {"module-uses-c-includes", NULL},
  {"binding-global-box-setter", NULL},
  {"probe-module", NULL},
  {"function-frame-len-setter", NULL},
  {"<global-box>", NULL},
  {"objectify-quotation", NULL},
  {"def-list", NULL},
  {"signature-nary?-setter", NULL},
  {"as-lst", NULL},
  {"<ast-primitive>", NULL},
  {"function-registers-setter", NULL},
  {"runtime-environment", NULL},
  {"binding-info", NULL},
  {"binding-locative", NULL},
  {"function-source", NULL},
  {"program-type", NULL},
  {"do-named-static-global-bindings", NULL},
  {"<dynamic-definition>", NULL},
  {"unchecked-runtime-environment", NULL},
  {"fix-let-bindings-setter", NULL},
  {"function-index-setter", NULL},
  {"signature-arity", NULL},
  {"binding-global-box", NULL},
  {"<fix-let>", NULL},
  {"ast-error", NULL},
  {"fix-let-body", NULL},
  {"binding-locative-setter", NULL},
  {"<module>", NULL},
  {"module-mangled-name", NULL},
  {"fix-let-bindings", NULL},
  {"<ast-macro-definition>", NULL},
  {"signature-specs-setter", NULL},
  {"objectify-signature", NULL},
  {"<static-module-binding-reference>", NULL},
  {"signature-bindings-setter", NULL},
  {"fix-let-arguments", NULL},
  {"<immediate-constant>", NULL},
  {"fix-let-types", NULL},
  {"locals-bindings-setter", NULL},
  {"function-adjectives", NULL},
  {"monitor-main-thunk", NULL},
  {"signature-names-setter", NULL},
  {"<dynamic-reference>", NULL},
  {"function-frame-len", NULL},
  {"module-syntax-environment", NULL},
  {"constant-index-setter", NULL},
  {"application-binding", NULL},
  {"function-signature-setter", NULL},
  {"load-module", NULL},
  {"function-loop", NULL},
  {"function-bindings", NULL},
  {"install-initial-bindings", NULL},
  {"<ast-method>", NULL},
  {"program-register-setter", NULL},
  {"<regular-application>", NULL},
  {"signature-nary?", NULL},
  {"function-registers", NULL},
  {"<ast-function>", NULL},
  {"loop-bindings-setter", NULL},
  {"<functions>", NULL},
  {"function-debug-name-setter", NULL},
  {"function-data-refs-setter", NULL},
  {"find-binding", NULL},
  {"<ast-generic>", NULL},
  {"<local-reference>", NULL},
  {"fab-g2c-module", NULL},
  {"function-index", NULL},
  {"global-box-value-setter", NULL},
  {"<definition>", NULL},
  {"loop-continue-setter", NULL},
  {"binding-index-setter", NULL},
  {"reference-frame-offset", NULL},
  {"locals-functions-setter", NULL},
  {"sequentialize", NULL},
  {"reference-binding", NULL},
  {"report-undefined-global-bindings", NULL},
  {"do-module-loader-modules", NULL},
  {"module-name", NULL},
  {"loop-body-setter", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"<constant>", NULL},
  {"<free-environment>", NULL},
  {"<compile-time>", NULL},
  {"program-register", NULL},
  {"<ast-signature>", NULL},
  {"<ast-embodied-function>", NULL},
  {"<arguments>", NULL},
  {"signature-specs", NULL},
  {"constant-value", NULL},
  {"compile-time-program", NULL},
  {"<runtime-assignment>", NULL},
  {"signature-bindings", NULL},
  {"binding-module-name", NULL},
  {"ast-walk!", NULL},
  {"assignment-binding", NULL},
  {"module-name-to-relpath", NULL},
  {"function-free-setter", NULL},
  {"<computed-program>", NULL},
  {"constant-index", NULL},
  {"bound?-default", NULL},
  {"init-environment-for-eval", NULL},
  {"<reference>", NULL},
  {"signature-names", NULL},
  {"environment-uses-modules", NULL},
  {"module-exports", NULL},
  {"<raw-constant>", NULL},
  {"<program>", NULL},
  {"<real-reference>", NULL},
  {"binding-type-setter", NULL},
  {"environment-bindings", NULL},
  {"function-signature", NULL},
  {"<alternative>", NULL},
  {"locals-bindings", NULL},
  {"<loop>", NULL},
  {"binding-module", NULL},
  {"%%macro", NULL},
  {"ast-evaluate", NULL},
  {"<sequential>", NULL},
  {"<predefined-application>", NULL},
  {"function-body-setter", NULL},
  {"binding-dotted?-setter", NULL},
  {"alternative-condition", NULL},
  {"binding-name", NULL},
  {"<macro-reference>", NULL},
  {"req-sig-specs", NULL},
  {"loop-bindings", NULL},
  {"load-in", NULL},
  {"module-binding", NULL},
  {"<fab-list>", NULL},
  {"<global-reference>", NULL},
  {"<unwind-protect>", NULL},
  {"function-loop-setter", NULL},
  {"function-data-refs", NULL},
  {"application-known?-setter", NULL},
  {"unwind-protect-protected-thunk", NULL},
  {"function-temporaries-setter", NULL},
  {"monitor-info", NULL},
  {"<monitor>", NULL},
  {"function-ref-count-setter", NULL},
  {"<module-loader>", NULL},
  {"alternative-alternant", NULL},
  {"loop-continue", NULL},
  {"binding-index", NULL},
  {"signature-value-setter", NULL},
  {"def-programs", NULL},
  {"do-static-global-bindings", NULL},
  {"global-box-value", NULL},
  {"alternative-consequent", NULL},
  {"monitor-type", NULL},
  {"application-loop", NULL},
  {"loop-body", NULL},
  {"module-uses-c-libraries", NULL},
  {"binding-mangled-name-setter", NULL},
  {"free-environment", NULL},
  {"find-environment-module", NULL},
  {"ast-define-binding", NULL},
  {"reference-called-function?-setter", NULL},
  {"binding-dynamic-extent?-setter", NULL},
  {"binding-inferred-type-setter", NULL},
  {"binding-value-setter", NULL},
  {"locals-body", NULL},
  {"program-line", NULL},
  {"<global-assignment>", NULL},
  {"<magic-reference>", NULL},
  {"binding-kind", NULL},
  {"unwind-protect-cleanup-thunk", NULL},
  {"<passive-program>", NULL},
  {"reference-frame-number", NULL},
  {"assignment-form-setter", NULL},
  {"function-free", NULL},
  {"<locals>", NULL},
  {"binding-native-to?", NULL},
  {"function-debug-name", NULL},
  {"<local-binding>", NULL},
  {"module-mangled-string-name", NULL},
  {"init-ast", NULL},
  {"locals-functions", NULL},
  {"assignment-reference", NULL},
  {"binding-type", NULL},
  {"remove-modules-by-name!", NULL},
  {"env-object-name", NULL},
  {"function-body", NULL},
  {"binding-dotted?", NULL},
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
