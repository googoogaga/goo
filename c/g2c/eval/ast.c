/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast */

DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
DEF(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
DEF(YevalSastYfunctions,"eval/ast","functions");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ytail,"goo/boot","tail");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(Ynot,"goo/boot","not");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
DEF(YevalSastYreloader_do_dynamic_binding,"eval/ast","reloader-do-dynamic-binding");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YevalSastYPmodule_exports_setter,"eval/ast","%module-exports-setter");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSastYarguments,"eval/ast","arguments");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
DEF(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
DEF(YevalSastYobjectify_error,"eval/ast","objectify-error");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YPsnul,"goo/boot","%snul");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
DEF(YevalSastYmodule_uses_c_files_setter,"eval/ast","module-uses-c-files-setter");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
DEF(YevalSastYobjectify,"eval/ast","objectify");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalSastYmodule_exports_setter,"eval/ast","module-exports-setter");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
DEF(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
DYNDEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YevalSastYmodule_name_setter,"eval/ast","module-name-setter");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSastYftype,"eval/ast","ftype");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(Ynew,"goo/boot","new");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSastYsequential,"eval/ast","sequential");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
EXT(YisaQ,"goo/boot","isa?");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_60);
DEFLIT(lit_394);
DEFLIT(lit_58);
DEFLIT(lit_569);
DEFLIT(lit_115);
DEFLIT(lit_413);
DEFLIT(lit_269);
DEFLIT(lit_113);
DEFLIT(lit_44);
DEFLIT(lit_124);
DEFLIT(lit_326);
DEFLIT(lit_230);
DEFLIT(lit_378);
DEFLIT(lit_460);
DEFLIT(lit_181);
DEFLIT(lit_585);
DEFLIT(lit_149);
DEFLIT(lit_362);
DEFLIT(lit_209);
DEFLIT(lit_490);
DEFLIT(lit_469);
DEFLIT(lit_36);
DEFLIT(lit_464);
DEFLIT(lit_352);
DEFLIT(lit_329);
DEFLIT(lit_344);
DEFLIT(lit_495);
DEFLIT(lit_238);
DEFLIT(lit_34);
DEFLIT(lit_372);
DEFLIT(lit_586);
DEFLIT(lit_593);
DEFLIT(lit_583);
DEFLIT(lit_183);
DEFLIT(lit_563);
DEFLIT(lit_243);
DEFLIT(lit_497);
DEFLIT(lit_306);
DEFLIT(lit_227);
DEFLIT(lit_107);
DEFLIT(lit_294);
DEFLIT(lit_578);
DEFLIT(lit_322);
DEFLIT(lit_568);
DEFLIT(lit_551);
DEFLIT(lit_135);
DEFLIT(lit_545);
DEFLIT(lit_398);
DEFLIT(lit_240);
DEFLIT(lit_348);
DEFLIT(lit_133);
DEFLIT(lit_392);
DEFLIT(lit_414);
DEFLIT(lit_152);
DEFLIT(lit_171);
DEFLIT(lit_315);
DEFLIT(lit_273);
DEFLIT(lit_127);
DEFLIT(lit_128);
DEFLIT(lit_410);
DEFLIT(lit_236);
DEFLIT(lit_609);
DEFLIT(lit_314);
DEFLIT(lit_92);
DEFLIT(lit_80);
DEFLIT(lit_117);
DEFLIT(lit_232);
DEFLIT(lit_120);
DEFLIT(lit_122);
DEFLIT(lit_123);
DEFLIT(lit_145);
DEFLIT(lit_211);
DEFLIT(lit_189);
DEFLIT(lit_165);
DEFLIT(lit_31);
DEFLIT(lit_514);
DEFLIT(lit_476);
DEFLIT(lit_343);
DEFLIT(lit_234);
DEFLIT(lit_477);
DEFLIT(lit_438);
DEFLIT(lit_459);
DEFLIT(lit_400);
DEFLIT(lit_561);
DEFLIT(lit_141);
DEFLIT(lit_527);
DEFLIT(lit_39);
DEFLIT(lit_351);
DEFLIT(lit_379);
DEFLIT(lit_489);
DEFLIT(lit_468);
DEFLIT(lit_177);
DEFLIT(lit_411);
DEFLIT(lit_167);
DEFLIT(lit_562);
DEFLIT(lit_319);
DEFLIT(lit_304);
DEFLIT(lit_600);
DEFLIT(lit_245);
DEFLIT(lit_300);
DEFLIT(lit_0);
DEFLIT(lit_293);
DEFLIT(lit_579);
DEFLIT(lit_374);
DEFLIT(lit_454);
DEFLIT(lit_97);
DEFLIT(lit_386);
DEFLIT(lit_407);
DEFLIT(lit_100);
DEFLIT(lit_481);
DEFLIT(lit_14);
DEFLIT(lit_91);
DEFLIT(lit_408);
DEFLIT(lit_385);
DEFLIT(lit_317);
DEFLIT(lit_94);
DEFLIT(lit_184);
DEFLIT(lit_423);
DEFLIT(lit_441);
DEFLIT(lit_472);
DEFLIT(lit_537);
DEFLIT(lit_148);
DEFLIT(lit_250);
DEFLIT(lit_84);
DEFLIT(lit_433);
DEFLIT(lit_134);
DEFLIT(lit_24);
DEFLIT(lit_510);
DEFLIT(lit_81);
DEFLIT(lit_101);
DEFLIT(lit_533);
DEFLIT(lit_337);
DEFLIT(lit_79);
DEFLIT(lit_280);
DEFLIT(lit_401);
DEFLIT(lit_103);
DEFLIT(lit_409);
DEFLIT(lit_575);
DEFLIT(lit_29);
DEFLIT(lit_26);
DEFLIT(lit_268);
DEFLIT(lit_66);
DEFLIT(lit_544);
DEFLIT(lit_550);
DEFLIT(lit_241);
DEFLIT(lit_430);
DEFLIT(lit_195);
DEFLIT(lit_594);
DEFLIT(lit_376);
DEFLIT(lit_434);
DEFLIT(lit_522);
DEFLIT(lit_59);
DEFLIT(lit_162);
DEFLIT(lit_529);
DEFLIT(lit_82);
DEFLIT(lit_354);
DEFLIT(lit_278);
DEFLIT(lit_536);
DEFLIT(lit_151);
DEFLIT(lit_140);
DEFLIT(lit_138);
DEFLIT(lit_318);
DEFLIT(lit_303);
DEFLIT(lit_33);
DEFLIT(lit_37);
DEFLIT(lit_299);
DEFLIT(lit_288);
DEFLIT(lit_28);
DEFLIT(lit_531);
DEFLIT(lit_290);
DEFLIT(lit_242);
DEFLIT(lit_360);
DEFLIT(lit_599);
DEFLIT(lit_498);
DEFLIT(lit_449);
DEFLIT(lit_473);
DEFLIT(lit_453);
DEFLIT(lit_2);
DEFLIT(lit_12);
DEFLIT(lit_539);
DEFLIT(lit_587);
DEFLIT(lit_375);
DEFLIT(lit_353);
DEFLIT(lit_387);
DEFLIT(lit_77);
DEFLIT(lit_513);
DEFLIT(lit_525);
DEFLIT(lit_305);
DEFLIT(lit_199);
DEFLIT(lit_176);
DEFLIT(lit_503);
DEFLIT(lit_20);
DEFLIT(lit_52);
DEFLIT(lit_534);
DEFLIT(lit_415);
DEFLIT(lit_3);
DEFLIT(lit_452);
DEFLIT(lit_336);
DEFLIT(lit_560);
DEFLIT(lit_158);
DEFLIT(lit_309);
DEFLIT(lit_275);
DEFLIT(lit_226);
DEFLIT(lit_271);
DEFLIT(lit_330);
DEFLIT(lit_390);
DEFLIT(lit_543);
DEFLIT(lit_161);
DEFLIT(lit_15);
DEFLIT(lit_136);
DEFLIT(lit_75);
DEFLIT(lit_488);
DEFLIT(lit_78);
DEFLIT(lit_366);
DEFLIT(lit_567);
DEFLIT(lit_506);
DEFLIT(lit_168);
DEFLIT(lit_281);
DEFLIT(lit_492);
DEFLIT(lit_517);
DEFLIT(lit_535);
DEFLIT(lit_38);
DEFLIT(lit_467);
DEFLIT(lit_507);
DEFLIT(lit_565);
DEFLIT(lit_193);
DEFLIT(lit_499);
DEFLIT(lit_526);
DEFLIT(lit_119);
DEFLIT(lit_220);
DEFLIT(lit_253);
DEFLIT(lit_482);
DEFLIT(lit_50);
DEFLIT(lit_48);
DEFLIT(lit_418);
DEFLIT(lit_47);
DEFLIT(lit_574);
DEFLIT(lit_554);
DEFLIT(lit_244);
DEFLIT(lit_357);
DEFLIT(lit_347);
DEFLIT(lit_388);
DEFLIT(lit_421);
DEFLIT(lit_201);
DEFLIT(lit_598);
DEFLIT(lit_549);
DEFLIT(lit_157);
DEFLIT(lit_591);
DEFLIT(lit_159);
DEFLIT(lit_239);
DEFLIT(lit_320);
DEFLIT(lit_384);
DEFLIT(lit_35);
DEFLIT(lit_246);
DEFLIT(lit_180);
DEFLIT(lit_188);
DEFLIT(lit_442);
DEFLIT(lit_164);
DEFLIT(lit_249);
DEFLIT(lit_571);
DEFLIT(lit_485);
DEFLIT(lit_364);
DEFLIT(lit_16);
DEFLIT(lit_399);
DEFLIT(lit_368);
DEFLIT(lit_532);
DEFLIT(lit_68);
DEFLIT(lit_225);
DEFLIT(lit_450);
DEFLIT(lit_146);
DEFLIT(lit_541);
DEFLIT(lit_463);
DEFLIT(lit_542);
DEFLIT(lit_279);
DEFLIT(lit_426);
DEFLIT(lit_13);
DEFLIT(lit_502);
DEFLIT(lit_516);
DEFLIT(lit_416);
DEFLIT(lit_504);
DEFLIT(lit_557);
DEFLIT(lit_255);
DEFLIT(lit_437);
DEFLIT(lit_487);
DEFLIT(lit_456);
DEFLIT(lit_370);
DEFLIT(lit_395);
DEFLIT(lit_99);
DEFLIT(lit_523);
DEFLIT(lit_104);
DEFLIT(lit_528);
DEFLIT(lit_361);
DEFLIT(lit_277);
DEFLIT(lit_350);
DEFLIT(lit_8);
DEFLIT(lit_424);
DEFLIT(lit_276);
DEFLIT(lit_559);
DEFLIT(lit_221);
DEFLIT(lit_332);
DEFLIT(lit_197);
DEFLIT(lit_412);
DEFLIT(lit_105);
DEFLIT(lit_342);
DEFLIT(lit_49);
DEFLIT(lit_186);
DEFLIT(lit_530);
DEFLIT(lit_445);
DEFLIT(lit_548);
DEFLIT(lit_479);
DEFLIT(lit_369);
DEFLIT(lit_474);
DEFLIT(lit_520);
DEFLIT(lit_144);
DEFLIT(lit_566);
DEFLIT(lit_447);
DEFLIT(lit_313);
DEFLIT(lit_215);
DEFLIT(lit_223);
DEFLIT(lit_129);
DEFLIT(lit_160);
DEFLIT(lit_524);
DEFLIT(lit_572);
DEFLIT(lit_605);
DEFLIT(lit_198);
DEFLIT(lit_175);
DEFLIT(lit_10);
DEFLIT(lit_18);
DEFLIT(lit_4);
DEFLIT(lit_196);
DEFLIT(lit_147);
DEFLIT(lit_601);
DEFLIT(lit_380);
DEFLIT(lit_604);
DEFLIT(lit_30);
DEFLIT(lit_258);
DEFLIT(lit_461);
DEFLIT(lit_143);
DEFLIT(lit_462);
DEFLIT(lit_270);
DEFLIT(lit_323);
DEFLIT(lit_576);
DEFLIT(lit_191);
DEFLIT(lit_558);
DEFLIT(lit_266);
DEFLIT(lit_377);
DEFLIT(lit_592);
DEFLIT(lit_74);
DEFLIT(lit_596);
DEFLIT(lit_446);
DEFLIT(lit_425);
DEFLIT(lit_512);
DEFLIT(lit_72);
DEFLIT(lit_335);
DEFLIT(lit_546);
DEFLIT(lit_552);
DEFLIT(lit_208);
DEFLIT(lit_65);
DEFLIT(lit_491);
DEFLIT(lit_109);
DEFLIT(lit_511);
DEFLIT(lit_582);
DEFLIT(lit_287);
DEFLIT(lit_612);
DEFLIT(lit_307);
DEFLIT(lit_494);
DEFLIT(lit_321);
DEFLIT(lit_538);
DEFLIT(lit_540);
DEFLIT(lit_219);
DEFLIT(lit_252);
DEFLIT(lit_1);
DEFLIT(lit_480);
DEFLIT(lit_341);
DEFLIT(lit_7);
DEFLIT(lit_389);
DEFLIT(lit_46);
DEFLIT(lit_570);
DEFLIT(lit_501);
DEFLIT(lit_130);
DEFLIT(lit_367);
DEFLIT(lit_296);
DEFLIT(lit_87);
DEFLIT(lit_121);
DEFLIT(lit_204);
DEFLIT(lit_285);
DEFLIT(lit_153);
DEFLIT(lit_200);
DEFLIT(lit_169);
DEFLIT(lit_589);
DEFLIT(lit_381);
DEFLIT(lit_420);
DEFLIT(lit_508);
DEFLIT(lit_224);
DEFLIT(lit_172);
DEFLIT(lit_264);
DEFLIT(lit_457);
DEFLIT(lit_267);
DEFLIT(lit_509);
DEFLIT(lit_260);
DEFLIT(lit_179);
DEFLIT(lit_356);
DEFLIT(lit_132);
DEFLIT(lit_397);
DEFLIT(lit_194);
DEFLIT(lit_486);
DEFLIT(lit_202);
DEFLIT(lit_363);
DEFLIT(lit_484);
DEFLIT(lit_505);
DEFLIT(lit_553);
DEFLIT(lit_21);
DEFLIT(lit_174);
DEFLIT(lit_458);
DEFLIT(lit_417);
DEFLIT(lit_67);
DEFLIT(lit_282);
DEFLIT(lit_475);
DEFLIT(lit_262);
DEFLIT(lit_41);
DEFLIT(lit_63);
DEFLIT(lit_429);
DEFLIT(lit_23);
DEFLIT(lit_471);
DEFLIT(lit_515);
DEFLIT(lit_439);
DEFLIT(lit_213);
DEFLIT(lit_57);
DEFLIT(lit_142);
DEFLIT(lit_444);
DEFLIT(lit_404);
DEFLIT(lit_112);
DEFLIT(lit_102);
DEFLIT(lit_470);
DEFLIT(lit_254);
DEFLIT(lit_518);
DEFLIT(lit_519);
DEFLIT(lit_581);
DEFLIT(lit_365);
DEFLIT(lit_406);
DEFLIT(lit_405);
DEFLIT(lit_359);
DEFLIT(lit_98);
DEFLIT(lit_83);
DEFLIT(lit_118);
DEFLIT(lit_607);
DEFLIT(lit_595);
DEFLIT(lit_422);
DEFLIT(lit_206);
DEFLIT(lit_298);
DEFLIT(lit_90);
DEFLIT(lit_371);
DEFLIT(lit_192);
DEFLIT(lit_340);
DEFLIT(lit_325);
DEFLIT(lit_391);
DEFLIT(lit_256);
DEFLIT(lit_603);
DEFLIT(lit_440);
DEFLIT(lit_310);
DEFLIT(lit_483);
DEFLIT(lit_291);
DEFLIT(lit_185);
DEFLIT(lit_43);
DEFLIT(lit_358);
DEFLIT(lit_443);
DEFLIT(lit_547);
DEFLIT(lit_96);
DEFLIT(lit_588);
DEFLIT(lit_61);
DEFLIT(lit_349);
DEFLIT(lit_312);
DEFLIT(lit_116);
DEFLIT(lit_521);
DEFLIT(lit_114);
DEFLIT(lit_327);
DEFLIT(lit_292);
DEFLIT(lit_125);
DEFLIT(lit_302);
DEFLIT(lit_231);
DEFLIT(lit_69);
DEFLIT(lit_214);
DEFLIT(lit_182);
DEFLIT(lit_289);
DEFLIT(lit_139);
DEFLIT(lit_451);
DEFLIT(lit_210);
DEFLIT(lit_427);
DEFLIT(lit_436);
DEFLIT(lit_5);
DEFLIT(lit_403);
DEFLIT(lit_272);
DEFLIT(lit_265);
DEFLIT(lit_346);
DEFLIT(lit_106);
DEFLIT(lit_500);
DEFLIT(lit_496);
DEFLIT(lit_393);
DEFLIT(lit_131);
DEFLIT(lit_465);
DEFLIT(lit_373);
DEFLIT(lit_55);
DEFLIT(lit_51);
DEFLIT(lit_611);
DEFLIT(lit_190);
DEFLIT(lit_228);
DEFLIT(lit_11);
DEFLIT(lit_274);
DEFLIT(lit_432);
DEFLIT(lit_259);
DEFLIT(lit_383);
DEFLIT(lit_71);
DEFLIT(lit_263);
DEFLIT(lit_137);
DEFLIT(lit_251);
DEFLIT(lit_207);
DEFLIT(lit_64);
DEFLIT(lit_577);
DEFLIT(lit_9);
DEFLIT(lit_257);
DEFLIT(lit_448);
DEFLIT(lit_339);
DEFLIT(lit_324);
DEFLIT(lit_584);
DEFLIT(lit_493);
DEFLIT(lit_316);
DEFLIT(lit_308);
DEFLIT(lit_580);
DEFLIT(lit_247);
DEFLIT(lit_27);
DEFLIT(lit_248);
DEFLIT(lit_237);
DEFLIT(lit_93);
DEFLIT(lit_333);
DEFLIT(lit_233);
DEFLIT(lit_218);
DEFLIT(lit_45);
DEFLIT(lit_19);
DEFLIT(lit_216);
DEFLIT(lit_54);
DEFLIT(lit_284);
DEFLIT(lit_85);
DEFLIT(lit_606);
DEFLIT(lit_602);
DEFLIT(lit_597);
DEFLIT(lit_32);
DEFLIT(lit_163);
DEFLIT(lit_328);
DEFLIT(lit_170);
DEFLIT(lit_345);
DEFLIT(lit_311);
DEFLIT(lit_156);
DEFLIT(lit_76);
DEFLIT(lit_556);
DEFLIT(lit_608);
DEFLIT(lit_235);
DEFLIT(lit_88);
DEFLIT(lit_110);
DEFLIT(lit_301);
DEFLIT(lit_331);
DEFLIT(lit_419);
DEFLIT(lit_382);
DEFLIT(lit_212);
DEFLIT(lit_108);
DEFLIT(lit_70);
DEFLIT(lit_166);
DEFLIT(lit_40);
DEFLIT(lit_573);
DEFLIT(lit_178);
DEFLIT(lit_173);
DEFLIT(lit_73);
DEFLIT(lit_334);
DEFLIT(lit_222);
DEFLIT(lit_155);
DEFLIT(lit_610);
DEFLIT(lit_261);
DEFLIT(lit_126);
DEFLIT(lit_62);
DEFLIT(lit_22);
DEFLIT(lit_355);
DEFLIT(lit_56);
DEFLIT(lit_564);
DEFLIT(lit_217);
DEFLIT(lit_25);
DEFLIT(lit_590);
DEFLIT(lit_111);
DEFLIT(lit_229);
DEFLIT(lit_86);
DEFLIT(lit_6);
DEFLIT(lit_295);
DEFLIT(lit_478);
DEFLIT(lit_338);
DEFLIT(lit_154);
DEFLIT(lit_150);
DEFLIT(lit_286);
DEFLIT(lit_297);
DEFLIT(lit_89);
DEFLIT(lit_455);
DEFLIT(lit_205);
DEFLIT(lit_428);
DEFLIT(lit_435);
DEFLIT(lit_187);
DEFLIT(lit_555);
DEFLIT(lit_17);
DEFLIT(lit_396);
DEFLIT(lit_53);
DEFLIT(lit_283);
DEFLIT(lit_466);
DEFLIT(lit_42);
DEFLIT(lit_203);
DEFLIT(lit_431);
DEFLIT(lit_402);
DEFLIT(lit_95);

/* FUNCTIONS: */

LOCFOR(fun_x_1418_0);
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
LOCFOR(fun_binding_mangled_name_14);
LOCFOR(fun_binding_mangled_name_setter_15);
LOCFOR(fun_16);
LOCFOR(fun_binding_type_17);
LOCFOR(fun_binding_type_setter_18);
LOCFOR(fun_binding_inferred_type_19);
LOCFOR(fun_binding_inferred_type_setter_20);
LOCFOR(fun_21);
LOCFOR(fun_global_box_value_22);
LOCFOR(fun_global_box_value_setter_23);
LOCFOR(fun_24);
LOCFOR(fun_binding_kind_25);
LOCFOR(fun_binding_kind_setter_26);
LOCFOR(fun_27);
LOCFOR(fun_binding_module_28);
LOCFOR(fun_binding_module_setter_29);
LOCFOR(fun_30);
LOCFOR(fun_binding_freeQ_31);
LOCFOR(fun_binding_freeQ_setter_32);
LOCFOR(fun_33);
LOCFOR(fun_binding_info_34);
LOCFOR(fun_binding_info_setter_35);
LOCFOR(fun_36);
LOCFOR(fun_binding_module_name_37);
FUNFOR(YevalSastYmaybe_log_dependency);
FUNFOR(YevalSastYmacro_expander);
LOCFOR(fun_binding_value_40);
LOCFOR(fun_binding_value_setter_41);
LOCFOR(fun_42);
LOCFOR(fun_binding_mutableQ_43);
LOCFOR(fun_binding_mutableQ_setter_44);
LOCFOR(fun_45);
LOCFOR(fun_binding_dynamic_extentQ_46);
LOCFOR(fun_binding_dynamic_extentQ_setter_47);
LOCFOR(fun_48);
LOCFOR(fun_binding_dottedQ_49);
LOCFOR(fun_binding_dottedQ_setter_50);
LOCFOR(fun_51);
LOCFOR(fun_binding_index_52);
LOCFOR(fun_binding_index_setter_53);
LOCFOR(fun_54);
LOCFOR(fun_compile_time_program_55);
LOCFOR(fun_compile_time_program_setter_56);
LOCFOR(fun_reference_binding_57);
LOCFOR(fun_reference_binding_setter_58);
LOCFOR(fun_reference_called_functionQ_59);
LOCFOR(fun_reference_called_functionQ_setter_60);
LOCFOR(fun_61);
LOCFOR(fun_reference_frame_number_62);
LOCFOR(fun_reference_frame_number_setter_63);
LOCFOR(fun_reference_frame_offset_64);
LOCFOR(fun_reference_frame_offset_setter_65);
LOCFOR(fun_boundQ_reference_66);
LOCFOR(fun_boundQ_reference_setter_67);
LOCFOR(fun_assignment_form_68);
LOCFOR(fun_assignment_form_setter_69);
LOCFOR(fun_assignment_reference_70);
LOCFOR(fun_assignment_reference_setter_71);
LOCFOR(fun_assignment_binding_72);
LOCFOR(fun_assignment_binding_setter_73);
LOCFOR(fun_signature_bindings_74);
LOCFOR(fun_signature_bindings_setter_75);
LOCFOR(fun_76);
LOCFOR(fun_signature_names_77);
LOCFOR(fun_signature_names_setter_78);
LOCFOR(fun_79);
LOCFOR(fun_signature_specs_80);
LOCFOR(fun_signature_specs_setter_81);
LOCFOR(fun_82);
LOCFOR(fun_signature_naryQ_83);
LOCFOR(fun_signature_naryQ_setter_84);
LOCFOR(fun_85);
LOCFOR(fun_signature_arity_86);
LOCFOR(fun_signature_arity_setter_87);
LOCFOR(fun_88);
LOCFOR(fun_signature_value_89);
LOCFOR(fun_signature_value_setter_90);
LOCFOR(fun_91);
LOCFOR(fun_function_binding_92);
LOCFOR(fun_function_binding_setter_93);
LOCFOR(fun_94);
LOCFOR(fun_function_debug_name_95);
LOCFOR(fun_function_debug_name_setter_96);
LOCFOR(fun_97);
LOCFOR(fun_function_signature_98);
LOCFOR(fun_function_signature_setter_99);
FUNFOR(YevalSastYfunction_bindings);
FUNFOR(YevalSastYfunction_specs);
FUNFOR(YevalSastYfunction_naryQ);
FUNFOR(YevalSastYfunction_value);
LOCFOR(fun_function_kind_104);
FUNFOR(YevalSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_106);
LOCFOR(fun_loop_107);
LOCFOR(fun_as_lst_108);
LOCFOR(fun_x_1424_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1428_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_function_body_115);
LOCFOR(fun_function_body_setter_116);
LOCFOR(fun_117);
LOCFOR(fun_function_index_118);
LOCFOR(fun_function_index_setter_119);
LOCFOR(fun_120);
LOCFOR(fun_function_temporaries_121);
LOCFOR(fun_function_temporaries_setter_122);
LOCFOR(fun_123);
LOCFOR(fun_function_registers_124);
LOCFOR(fun_function_registers_setter_125);
LOCFOR(fun_126);
LOCFOR(fun_function_data_refs_127);
LOCFOR(fun_function_data_refs_setter_128);
LOCFOR(fun_129);
LOCFOR(fun_function_self_recursiveQ_130);
LOCFOR(fun_function_self_recursiveQ_setter_131);
LOCFOR(fun_132);
LOCFOR(fun_function_source_133);
LOCFOR(fun_function_source_setter_134);
LOCFOR(fun_135);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_empty_137);
LOCFOR(fun_function_free_138);
LOCFOR(fun_function_free_setter_139);
LOCFOR(fun_140);
LOCFOR(fun_function_kind_141);
LOCFOR(fun_function_kind_142);
LOCFOR(fun_function_kind_143);
LOCFOR(fun_alternative_condition_144);
LOCFOR(fun_alternative_condition_setter_145);
LOCFOR(fun_alternative_consequent_146);
LOCFOR(fun_alternative_consequent_setter_147);
LOCFOR(fun_alternative_alternant_148);
LOCFOR(fun_alternative_alternant_setter_149);
FUNFOR(YevalSastYsequential);
LOCFOR(fun_empty_151);
LOCFOR(fun_constant_value_152);
LOCFOR(fun_constant_value_setter_153);
LOCFOR(fun_constant_index_154);
LOCFOR(fun_constant_index_setter_155);
LOCFOR(fun_application_arguments_156);
LOCFOR(fun_application_arguments_setter_157);
LOCFOR(fun_application_tailQ_158);
LOCFOR(fun_application_tailQ_setter_159);
LOCFOR(fun_160);
LOCFOR(fun_application_function_161);
LOCFOR(fun_application_function_setter_162);
LOCFOR(fun_application_knownQ_163);
LOCFOR(fun_application_knownQ_setter_164);
LOCFOR(fun_165);
LOCFOR(fun_application_next_methods_166);
LOCFOR(fun_application_next_methods_setter_167);
LOCFOR(fun_application_binding_168);
LOCFOR(fun_application_binding_setter_169);
LOCFOR(fun_fix_let_bindings_170);
LOCFOR(fun_fix_let_bindings_setter_171);
LOCFOR(fun_fix_let_types_172);
LOCFOR(fun_fix_let_types_setter_173);
LOCFOR(fun_fix_let_arguments_174);
LOCFOR(fun_fix_let_arguments_setter_175);
LOCFOR(fun_fix_let_body_176);
LOCFOR(fun_fix_let_body_setter_177);
FUNFOR(YevalSastYfab_list);
LOCFOR(fun_empty_179);
FUNFOR(YevalSastYarguments);
LOCFOR(fun_empty_181);
LOCFOR(fun_locals_bindings_182);
LOCFOR(fun_locals_bindings_setter_183);
LOCFOR(fun_locals_functions_184);
LOCFOR(fun_locals_functions_setter_185);
LOCFOR(fun_locals_body_186);
LOCFOR(fun_locals_body_setter_187);
LOCFOR(fun_bind_exit_main_fun_188);
LOCFOR(fun_bind_exit_main_fun_setter_189);
LOCFOR(fun_unwind_protect_protected_thunk_190);
LOCFOR(fun_unwind_protect_protected_thunk_setter_191);
LOCFOR(fun_unwind_protect_cleanup_thunk_192);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_193);
LOCFOR(fun_monitor_type_194);
LOCFOR(fun_monitor_type_setter_195);
LOCFOR(fun_monitor_info_196);
LOCFOR(fun_monitor_info_setter_197);
LOCFOR(fun_monitor_test_198);
LOCFOR(fun_monitor_test_setter_199);
LOCFOR(fun_monitor_handler_200);
LOCFOR(fun_monitor_handler_setter_201);
LOCFOR(fun_monitor_main_thunk_202);
LOCFOR(fun_monitor_main_thunk_setter_203);
LOCFOR(fun_environment_next_204);
LOCFOR(fun_environment_next_setter_205);
LOCFOR(fun_206);
LOCFOR(fun_environment_bindings_207);
LOCFOR(fun_environment_bindings_setter_208);
LOCFOR(fun_environment_module_209);
LOCFOR(fun_environment_module_setter_210);
LOCFOR(fun_environment_module_loader_211);
LOCFOR(fun_environment_module_loader_setter_212);
LOCFOR(fun_environment_uses_modules_213);
LOCFOR(fun_environment_uses_modules_setter_214);
LOCFOR(fun_215);
LOCFOR(fun_environment_allows_foreign_namesQ_216);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_217);
LOCFOR(fun_218);
LOCFOR(fun_219);
LOCFOR(fun_220);
LOCFOR(fun_env_object_name_221);
LOCFOR(fun_objectify_222);
LOCFOR(fun_objectify_list_223);
LOCFOR(fun_objectify_list_224);
LOCFOR(fun_objectify_list_225);
LOCFOR(fun_objectify_226);
LOCFOR(fun_objectify_227);
LOCFOR(fun_objectify_228);
LOCFOR(fun_objectify_229);
LOCFOR(fun_objectify_230);
LOCFOR(fun_objectify_quotation_231);
LOCFOR(fun_objectify_quotation_232);
LOCFOR(fun_objectify_quotation_233);
LOCFOR(fun_objectify_raw_234);
LOCFOR(fun_objectify_boundQ_235);
LOCFOR(fun_objectify_compile_time_236);
LOCFOR(fun_objectify_alternative_237);
LOCFOR(fun_loop_238);
LOCFOR(fun_sequentialize_239);
LOCFOR(fun_transform_defs_240);
LOCFOR(fun_loop_241);
LOCFOR(fun_objectify_sequential_242);
LOCFOR(fun_243);
LOCFOR(fun_objectify_application_244);
LOCFOR(fun_245);
LOCFOR(fun_objectify_application_246);
LOCFOR(fun_247);
LOCFOR(fun_objectify_application_248);
LOCFOR(fun_process_closed_application_249);
LOCFOR(fun_pack_nary_args_250);
LOCFOR(fun_pack_args_251);
LOCFOR(fun_process_nary_closed_application_252);
LOCFOR(fun_convert2arguments_253);
LOCFOR(fun_objectify_assignment_254);
LOCFOR(fun_objectify_assignment_255);
LOCFOR(fun_objectify_assignment_using_256);
LOCFOR(fun_objectify_assignment_using_257);
LOCFOR(fun_objectify_assignment_using_258);
LOCFOR(fun_objectify_assignment_using_259);
LOCFOR(fun_objectify_assignment_using_260);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_262);
LOCFOR(fun_objectify_definition_263);
LOCFOR(fun_objectify_variable_definition_264);
LOCFOR(fun_objectify_dynamic_definition_265);
LOCFOR(fun_expand_266);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_268);
LOCFOR(fun_objectify_function_definition_269);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_271);
LOCFOR(fun_objectify_generic_definition_272);
LOCFOR(fun_objectify_method_definition_273);
LOCFOR(fun_274);
LOCFOR(fun_275);
LOCFOR(fun_276);
LOCFOR(fun_277);
LOCFOR(fun_objectify_function_source_278);
LOCFOR(fun_279);
LOCFOR(fun_280);
LOCFOR(fun_objectify_function_281);
LOCFOR(fun_col_282);
LOCFOR(fun_objectify_signature_283);
LOCFOR(fun_find_284);
LOCFOR(fun_loop_285);
LOCFOR(fun_compute_local_reference_offsets_286);
LOCFOR(fun_objectify_binding_287);
LOCFOR(fun_binding_reference_class_288);
LOCFOR(fun_objectify_binding_289);
LOCFOR(fun_objectify_binding_290);
LOCFOR(fun_default_type_291);
LOCFOR(fun_objectify_free_global_reference_292);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_294);
LOCFOR(fun_objectify_symbol_295);
LOCFOR(fun_ftype_296);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_empty_298);
LOCFOR(fun_299);
LOCFOR(fun_300);
LOCFOR(fun_objectify_locals_301);
LOCFOR(fun_objectify_bind_exit_302);
LOCFOR(fun_objectify_unwind_protect_303);
LOCFOR(fun_objectify_monitor_304);
LOCFOR(fun_305);
LOCFOR(fun_306);
LOCFOR(fun_307);
LOCFOR(fun_308);
LOCFOR(fun_309);
LOCFOR(fun_objectify_export_310);
FUNFOR(YevalSastYimport_globalX);
LOCFOR(fun_312);
LOCFOR(fun_objectify_useSexport_module_313);
LOCFOR(fun_314);
LOCFOR(fun_objectify_use_module_315);
LOCFOR(fun_expand_bind_list_316);
LOCFOR(fun_expand_bind_list_317);
LOCFOR(fun_expand_bind_list_318);
LOCFOR(fun_expand_bind_listT_319);
LOCFOR(fun_expand_bind_listT_320);
LOCFOR(fun_expand_bind_element_321);
LOCFOR(fun_expand_bind_element_322);
LOCFOR(fun_expand_pattern_323);
LOCFOR(fun_324);
LOCFOR(fun_expand_syntax_if_325);
LOCFOR(fun_r_extendT_326);
LOCFOR(fun_insert_globalX_327);
LOCFOR(fun_328);
LOCFOR(fun_insert_globalsX_329);
LOCFOR(fun_find_static_global_environment_330);
LOCFOR(fun_find_static_global_environment_331);
LOCFOR(fun_find_syntax_environment_332);
LOCFOR(fun_find_environment_module_333);
LOCFOR(fun_loop_334);
LOCFOR(fun_find_binding_335);
LOCFOR(fun_find_binding_336);
LOCFOR(fun_find_binding_337);
LOCFOR(fun_frame_bindings_338);
LOCFOR(fun_register_magic_binding_339);
LOCFOR(fun_magic_bindings_340);
LOCFOR(fun_x_1437_341);
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
LOCFOR(fun_pairize_365);
LOCFOR(fun_366);
LOCFOR(fun_367);
LOCFOR(fun_368);
LOCFOR(fun_369);
LOCFOR(fun_370);
LOCFOR(fun_371);
LOCFOR(fun_ast_macro_expand_372);
LOCFOR(fun_373);
LOCFOR(fun_374);
LOCFOR(fun_375);
LOCFOR(fun_376);
LOCFOR(fun_377);
LOCFOR(fun_transaction_implemented_bindings_378);
LOCFOR(fun_transaction_implemented_bindings_setter_379);
LOCFOR(fun_380);
LOCFOR(fun_transaction_dependents_381);
LOCFOR(fun_transaction_dependents_setter_382);
LOCFOR(fun_383);
FUNFOR(YevalSastYtransaction_register_implemented_binding);
FUNFOR(YevalSastYtransaction_register_dependent);
FUNFOR(YevalSastYtransaction_emptyQ);
LOCFOR(fun_387);
LOCFOR(fun_388);
FUNFOR(YevalSastYmerge_transactionsX);
LOCFOR(fun_390);
LOCFOR(fun_391);
FUNFOR(YevalSastYroll_back_transaction);
LOCFOR(fun_393);
LOCFOR(fun_394);
FUNFOR(YevalSastYcall_with_subtransaction);
LOCFOR(fun_x_1441_396);
LOCFOR(fun_397);
LOCFOR(fun_398);
LOCFOR(fun_399);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_401);
LOCFOR(fun_module_loader_modules_setter_402);
LOCFOR(fun_403);
LOCFOR(fun_module_loader_stack_404);
LOCFOR(fun_module_loader_stack_setter_405);
LOCFOR(fun_406);
LOCFOR(fun_module_name_407);
LOCFOR(fun_module_name_setter_408);
LOCFOR(fun_module_mangled_name_409);
LOCFOR(fun_module_mangled_name_setter_410);
LOCFOR(fun_411);
LOCFOR(fun_module_mangled_string_name_412);
LOCFOR(fun_module_mangled_string_name_setter_413);
LOCFOR(fun_414);
LOCFOR(fun_module_target_environment_415);
LOCFOR(fun_module_target_environment_setter_416);
LOCFOR(fun_module_syntax_environment_417);
LOCFOR(fun_module_syntax_environment_setter_418);
LOCFOR(fun_Pmodule_exports_419);
LOCFOR(fun_Pmodule_exports_setter_420);
LOCFOR(fun_421);
LOCFOR(fun_module_data_processedQ_422);
LOCFOR(fun_module_data_processedQ_setter_423);
LOCFOR(fun_424);
LOCFOR(fun_module_runtime_data_425);
LOCFOR(fun_module_runtime_data_setter_426);
LOCFOR(fun_427);
LOCFOR(fun_module_transaction_428);
LOCFOR(fun_module_transaction_setter_429);
LOCFOR(fun_430);
LOCFOR(fun_module_uses_c_files_431);
LOCFOR(fun_module_uses_c_files_setter_432);
LOCFOR(fun_433);
LOCFOR(fun_module_exports_434);
FUNFOR(YevalSastYset_module_environments);
LOCFOR(fun_436);
FUNFOR(YevalSastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_438);
FUNFOR(YevalSastYregister_moduleX);
FUNFOR(YevalSastYprobe_module);
LOCFOR(fun_441);
LOCFOR(fun_442);
FUNFOR(YevalSastYload_and_register_module);
FUNFOR(YevalSastYexport_bindingX);
FUNFOR(YevalSastYbinding_native_toQ);
LOCFOR(fun_446);
FUNFOR(YevalSastYreport_undefined_global_bindings);
LOCFOR(fun_448);
LOCFOR(fun_449);
LOCFOR(fun_add_user_450);
LOCFOR(fun_451);
FUNFOR(YevalSastYcompute_transitive_users);
FUNFOR(YevalSastYremove_module_internalX);
LOCFOR(fun_454);
FUNFOR(YevalSastYremove_modules_by_nameX);
FUNFOR(YevalSastYmodule_name_to_relpath);
LOCFOR(fun_457);
FUNFOR(YevalSastYinstall_initial_bindings);
FUNFOR(YevalSastYfab_static_global_environment);
LOCFOR(fun_460);
FUNFOR(YevalSastYfab_subset_environment);
LOCFOR(fun_462);
LOCFOR(fun_463);
LOCFOR(fun_464);
LOCFOR(fun_465);
LOCFOR(fun_load_module_466);
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
LOCFOR(fun_482);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_loop_492);
FUNFOR(YevalSastYdo_static_global_bindings);
LOCFOR(fun_loop_494);
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

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1418_0) {
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
  P saved_dependentF1649;
  P x_1417F1648;
  P x_1417F1647;
  P x_1417F1646;
  P bodyF1645;
  P dependentF1644;
  P x_1417F1643;
  P x_1418F1642;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1418_0,1);
  x_1418F1642 = T1;
  FUNINIT(x_1418F1642, 1,return_);
  x_1417F1643 = FREEREF(0);
  dependentF1644 = YPfalse;
  dependentF1644 = BOXFAB(dependentF1644);
  bodyF1645 = YPfalse;
  bodyF1645 = BOXFAB(bodyF1645);
  T7 = CALL2(1,VARREF(YisaQ),x_1417F1643,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1417F1643,LITREF(lit_6),x_1418F1642);
    x_1417F1646 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1417F1646,x_1418F1642);
    BOXVAL(dependentF1644) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1417F1646);
    x_1417F1647 = T12;
    BOXVAL(bodyF1645) = x_1417F1647;
    x_1417F1648 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1417F1648,x_1418F1642);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1418F1642,LITREF(lit_7),x_1417F1643);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF1649 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T24 = CALL1(1,VARREF(Ylst),saved_dependentF1649);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T31 = BOXVAL(dependentF1644);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T38 = BOXVAL(bodyF1645);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),saved_dependentF1649);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_type));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_type));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_register));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_register));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_name));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mangled_name_14) {
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

FUNCODEDEF(fun_binding_mangled_name_setter_15) {
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

FUNCODEDEF(fun_16) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_type_17) {
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

FUNCODEDEF(fun_binding_type_setter_18) {
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

FUNCODEDEF(fun_binding_inferred_type_19) {
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

FUNCODEDEF(fun_binding_inferred_type_setter_20) {
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

FUNCODEDEF(fun_21) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYast_LbotG));
}

FUNCODEDEF(fun_global_box_value_22) {
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

FUNCODEDEF(fun_global_box_value_setter_23) {
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

FUNCODEDEF(fun_24) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_binding_kind_25) {
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

FUNCODEDEF(fun_binding_kind_setter_26) {
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

FUNCODEDEF(fun_27) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_41));
}

FUNCODEDEF(fun_binding_module_28) {
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

FUNCODEDEF(fun_binding_module_setter_29) {
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

FUNCODEDEF(fun_30) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_freeQ_31) {
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

FUNCODEDEF(fun_binding_freeQ_setter_32) {
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

FUNCODEDEF(fun_33) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_info_34) {
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

FUNCODEDEF(fun_binding_info_setter_35) {
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

FUNCODEDEF(fun_36) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_module_name_37) {
  P b_;
  P modF1650;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF1650 = T1;
  if (modF1650 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),modF1650);
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
  if (VARREF(YevalSastYTcurrent_dependentT) != YPfalse) {
    CALL3(1,VARREF(YevalSdependencyYlog_dependency),dependable_,VARREF(YevalSastYTcurrent_dependentT),dtype_);
    T1 = CALL1(1,VARREF(YevalSastYtransaction_register_dependent),VARREF(YevalSastYTcurrent_dependentT));
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

FUNCODEDEF(fun_binding_value_40) {
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

FUNCODEDEF(fun_binding_value_setter_41) {
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

FUNCODEDEF(fun_42) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_mutableQ_43) {
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

FUNCODEDEF(fun_binding_mutableQ_setter_44) {
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

FUNCODEDEF(fun_45) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_46) {
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

FUNCODEDEF(fun_binding_dynamic_extentQ_setter_47) {
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

FUNCODEDEF(fun_48) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_binding_dottedQ_49) {
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

FUNCODEDEF(fun_binding_dottedQ_setter_50) {
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

FUNCODEDEF(fun_51) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_index_52) {
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

FUNCODEDEF(fun_binding_index_setter_53) {
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

FUNCODEDEF(fun_54) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compile_time_program_55) {
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

FUNCODEDEF(fun_compile_time_program_setter_56) {
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

FUNCODEDEF(fun_reference_binding_57) {
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

FUNCODEDEF(fun_reference_binding_setter_58) {
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

FUNCODEDEF(fun_reference_called_functionQ_59) {
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

FUNCODEDEF(fun_reference_called_functionQ_setter_60) {
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

FUNCODEDEF(fun_61) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reference_frame_number_62) {
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

FUNCODEDEF(fun_reference_frame_number_setter_63) {
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

FUNCODEDEF(fun_reference_frame_offset_64) {
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

FUNCODEDEF(fun_reference_frame_offset_setter_65) {
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

FUNCODEDEF(fun_boundQ_reference_66) {
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

FUNCODEDEF(fun_boundQ_reference_setter_67) {
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

FUNCODEDEF(fun_assignment_form_68) {
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

FUNCODEDEF(fun_assignment_form_setter_69) {
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

FUNCODEDEF(fun_assignment_reference_70) {
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

FUNCODEDEF(fun_assignment_reference_setter_71) {
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

FUNCODEDEF(fun_assignment_binding_72) {
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

FUNCODEDEF(fun_assignment_binding_setter_73) {
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

FUNCODEDEF(fun_signature_bindings_74) {
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

FUNCODEDEF(fun_signature_bindings_setter_75) {
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

FUNCODEDEF(fun_76) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_names_77) {
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

FUNCODEDEF(fun_signature_names_setter_78) {
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

FUNCODEDEF(fun_79) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_specs_80) {
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

FUNCODEDEF(fun_signature_specs_setter_81) {
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

FUNCODEDEF(fun_82) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_naryQ_83) {
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

FUNCODEDEF(fun_signature_naryQ_setter_84) {
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

FUNCODEDEF(fun_85) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_arity_86) {
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

FUNCODEDEF(fun_signature_arity_setter_87) {
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

FUNCODEDEF(fun_88) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_value_89) {
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

FUNCODEDEF(fun_signature_value_setter_90) {
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

FUNCODEDEF(fun_91) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_binding_92) {
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

FUNCODEDEF(fun_function_binding_setter_93) {
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

FUNCODEDEF(fun_94) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_debug_name_95) {
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

FUNCODEDEF(fun_function_debug_name_setter_96) {
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

FUNCODEDEF(fun_97) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_signature_98) {
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

FUNCODEDEF(fun_function_signature_setter_99) {
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

FUNCODEDEF(fun_function_kind_104) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_136));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1420F1653;
  P x_1419F1652;
  P bF1651;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF1651 = T1;
  x_1419F1652 = bF1651;
  x_1420F1653 = VARREF(YisaQ);
  T5 = CALL2(1,x_1420F1653,x_1419F1652,VARREF(YLsymG));
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF1651);
    T4 = T6;
  } else {
    T8 = CALL2(1,x_1420F1653,x_1419F1652,VARREF(YevalSastYLmodule_bindingG));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF1651);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),bF1651);
      T9 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_139),T10,T11);
      T7 = T9;
    } else {
      T7 = LITREF(lit_140);
    }
    T4 = T7;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_106) {
  P dependent_,dependable_,dtype_;
  P nameF1654;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF1654 = T1;
  T3 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_143),nameF1654);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_144),nameF1654);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_145),nameF1654);
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

FUNCODEDEF(fun_loop_107) {
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

FUNCODEDEF(fun_as_lst_108) {
  P e_;
  P loopF1655;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_107,1);
  loopF1655 = T1;
  FUNINIT(loopF1655, 1,loopF1655);
  T2 = CALL2(0,loopF1655,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1424_109) {
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

FUNCODEDEF(fun_110) {
  P return_;
  P DemptyF1666;
  P classF1665;
  P x_1423F1664;
  P x_1423F1663;
  P x_1423F1662;
  P x_1423F1661;
  P x_1423F1660;
  P supersF1659;
  P nameF1658;
  P x_1423F1657;
  P x_1424F1656;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1424_109,1);
  x_1424F1656 = T1;
  FUNINIT(x_1424F1656, 1,return_);
  x_1423F1657 = FREEREF(0);
  nameF1658 = YPfalse;
  nameF1658 = BOXFAB(nameF1658);
  supersF1659 = YPfalse;
  supersF1659 = BOXFAB(supersF1659);
  T7 = CALL2(1,VARREF(YisaQ),x_1423F1657,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1423F1657,LITREF(lit_152),x_1424F1656);
    x_1423F1660 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1423F1660,x_1424F1656);
    BOXVAL(nameF1658) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1423F1660);
    x_1423F1661 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1423F1661,x_1424F1656);
    x_1423F1662 = T14;
    BOXVAL(supersF1659) = x_1423F1662;
    x_1423F1663 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1423F1663,x_1424F1656);
    T15 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1423F1661);
    x_1423F1664 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1423F1664,x_1424F1656);
    T13 = T18;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1424F1656,LITREF(lit_7),x_1423F1657);
  }
  T22 = BOXVAL(nameF1658);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_153),T22,LITREF(lit_154));
  classF1665 = T21;
  T25 = BOXVAL(nameF1658);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_155),T25,LITREF(lit_156));
  DemptyF1666 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T31 = CALL1(1,VARREF(Ylst),classF1665);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T35 = BOXVAL(supersF1659);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T39 = CALL1(1,VARREF(Ylst),DemptyF1666);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T43 = CALL1(1,VARREF(Ylst),classF1665);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T48 = BOXVAL(nameF1658);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T50 = CALL3(1,VARREF(YgooSmacrosYcat),T51,T52,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T56 = CALL1(1,VARREF(Ylst),classF1665);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T54 = CALLN(1,VARREF(YgooSmacrosYcat),7,T55,T56,T57,T58,T59,T60,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T45 = CALL5(1,VARREF(YgooSmacrosYcat),T46,T47,T49,T53,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_166));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
  T69 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
  T73 = CALL1(1,VARREF(Ylst),classF1665);
  T71 = CALL3(1,VARREF(YgooSmacrosYcat),T72,T73,Ynil);
  T70 = CALL1(1,VARREF(Ylst),T71);
  T68 = CALL3(1,VARREF(YgooSmacrosYcat),T69,T70,Ynil);
  T67 = CALL1(1,VARREF(Ylst),T68);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_169));
  T75 = CALL1(1,VARREF(Ylst),classF1665);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T74,T75,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T76 = CALL1(1,VARREF(Ylst),DemptyF1666);
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

FUNCODEDEF(fun_111) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_110,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1428_112) {
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

FUNCODEDEF(fun_113) {
  P return_;
  P x_1427F1671;
  P x_1427F1670;
  P nameF1669;
  P x_1427F1668;
  P x_1428F1667;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1428_112,1);
  x_1428F1667 = T1;
  FUNINIT(x_1428F1667, 1,return_);
  x_1427F1668 = FREEREF(0);
  nameF1669 = YPfalse;
  nameF1669 = BOXFAB(nameF1669);
  T5 = CALL2(1,VARREF(YisaQ),x_1427F1668,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1427F1668,LITREF(lit_171),x_1428F1667);
    x_1427F1670 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1670,x_1428F1667);
    BOXVAL(nameF1669) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1427F1670);
    x_1427F1671 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1427F1671,x_1428F1667);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1428F1667,LITREF(lit_7),x_1427F1668);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T16 = BOXVAL(nameF1669);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_113,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_115) {
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

FUNCODEDEF(fun_function_body_setter_116) {
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

FUNCODEDEF(fun_117) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_index_118) {
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

FUNCODEDEF(fun_function_index_setter_119) {
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

FUNCODEDEF(fun_120) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_function_temporaries_121) {
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

FUNCODEDEF(fun_function_temporaries_setter_122) {
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

FUNCODEDEF(fun_123) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_124) {
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

FUNCODEDEF(fun_function_registers_setter_125) {
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

FUNCODEDEF(fun_126) {
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

FUNCODEDEF(fun_function_data_refs_127) {
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

FUNCODEDEF(fun_function_data_refs_setter_128) {
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

FUNCODEDEF(fun_129) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_self_recursiveQ_130) {
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

FUNCODEDEF(fun_function_self_recursiveQ_setter_131) {
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

FUNCODEDEF(fun_132) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_source_133) {
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

FUNCODEDEF(fun_function_source_setter_134) {
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

FUNCODEDEF(fun_135) {
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

FUNCODEDEF(fun_empty_137) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_138) {
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

FUNCODEDEF(fun_function_free_setter_139) {
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

FUNCODEDEF(fun_140) {
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

FUNCODEDEF(fun_function_kind_141) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_192));
}

FUNCODEDEF(fun_function_kind_142) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_194));
}

FUNCODEDEF(fun_function_kind_143) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_196));
}

FUNCODEDEF(fun_alternative_condition_144) {
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

FUNCODEDEF(fun_alternative_condition_setter_145) {
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

FUNCODEDEF(fun_alternative_consequent_146) {
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

FUNCODEDEF(fun_alternative_consequent_setter_147) {
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

FUNCODEDEF(fun_alternative_alternant_148) {
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

FUNCODEDEF(fun_alternative_alternant_setter_149) {
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

FUNCODEDEF(fun_empty_151) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_152) {
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

FUNCODEDEF(fun_constant_value_setter_153) {
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

FUNCODEDEF(fun_constant_index_154) {
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

FUNCODEDEF(fun_constant_index_setter_155) {
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

FUNCODEDEF(fun_application_arguments_156) {
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

FUNCODEDEF(fun_application_arguments_setter_157) {
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

FUNCODEDEF(fun_application_tailQ_158) {
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

FUNCODEDEF(fun_application_tailQ_setter_159) {
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

FUNCODEDEF(fun_160) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_function_161) {
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

FUNCODEDEF(fun_application_function_setter_162) {
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

FUNCODEDEF(fun_application_knownQ_163) {
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

FUNCODEDEF(fun_application_knownQ_setter_164) {
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

FUNCODEDEF(fun_165) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_next_methods_166) {
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

FUNCODEDEF(fun_application_next_methods_setter_167) {
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

FUNCODEDEF(fun_application_binding_168) {
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

FUNCODEDEF(fun_application_binding_setter_169) {
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

FUNCODEDEF(fun_fix_let_bindings_170) {
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

FUNCODEDEF(fun_fix_let_bindings_setter_171) {
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

FUNCODEDEF(fun_fix_let_types_172) {
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

FUNCODEDEF(fun_fix_let_types_setter_173) {
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

FUNCODEDEF(fun_fix_let_arguments_174) {
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

FUNCODEDEF(fun_fix_let_arguments_setter_175) {
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

FUNCODEDEF(fun_fix_let_body_176) {
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

FUNCODEDEF(fun_fix_let_body_setter_177) {
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

FUNCODEDEF(fun_empty_179) {
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

FUNCODEDEF(fun_empty_181) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDarguments_empty));
}

FUNCODEDEF(fun_locals_bindings_182) {
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

FUNCODEDEF(fun_locals_bindings_setter_183) {
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

FUNCODEDEF(fun_locals_functions_184) {
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

FUNCODEDEF(fun_locals_functions_setter_185) {
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

FUNCODEDEF(fun_locals_body_186) {
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

FUNCODEDEF(fun_locals_body_setter_187) {
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

FUNCODEDEF(fun_bind_exit_main_fun_188) {
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

FUNCODEDEF(fun_bind_exit_main_fun_setter_189) {
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

FUNCODEDEF(fun_unwind_protect_protected_thunk_190) {
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

FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_191) {
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

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_192) {
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

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_193) {
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

FUNCODEDEF(fun_monitor_type_194) {
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

FUNCODEDEF(fun_monitor_type_setter_195) {
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

FUNCODEDEF(fun_monitor_info_196) {
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

FUNCODEDEF(fun_monitor_info_setter_197) {
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

FUNCODEDEF(fun_monitor_test_198) {
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

FUNCODEDEF(fun_monitor_test_setter_199) {
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

FUNCODEDEF(fun_monitor_handler_200) {
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

FUNCODEDEF(fun_monitor_handler_setter_201) {
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

FUNCODEDEF(fun_monitor_main_thunk_202) {
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

FUNCODEDEF(fun_monitor_main_thunk_setter_203) {
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

FUNCODEDEF(fun_environment_next_204) {
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

FUNCODEDEF(fun_environment_next_setter_205) {
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

FUNCODEDEF(fun_206) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_207) {
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

FUNCODEDEF(fun_environment_bindings_setter_208) {
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

FUNCODEDEF(fun_environment_module_209) {
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

FUNCODEDEF(fun_environment_module_setter_210) {
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

FUNCODEDEF(fun_environment_module_loader_211) {
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

FUNCODEDEF(fun_environment_module_loader_setter_212) {
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

FUNCODEDEF(fun_environment_uses_modules_213) {
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

FUNCODEDEF(fun_environment_uses_modules_setter_214) {
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

FUNCODEDEF(fun_215) {
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

FUNCODEDEF(fun_environment_allows_foreign_namesQ_216) {
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

FUNCODEDEF(fun_environment_allows_foreign_namesQ_setter_217) {
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

FUNCODEDEF(fun_218) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_219) {
  P binding_;
  P tmpF1673;
  P tmpF1672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_41));
  tmpF1672 = T2;
  if (tmpF1672 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
    tmpF1673 = T6;
    if (tmpF1673 != YPfalse) {
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

FUNCODEDEF(fun_220) {
  P return_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNFAB(fun_219,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_221) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_220,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_222) {
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

FUNCODEDEF(fun_objectify_list_223) {
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

FUNCODEDEF(fun_objectify_list_224) {
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

FUNCODEDEF(fun_objectify_list_225) {
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

FUNCODEDEF(fun_objectify_226) {
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

FUNCODEDEF(fun_objectify_227) {
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

FUNCODEDEF(fun_objectify_228) {
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

FUNCODEDEF(fun_objectify_229) {
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

FUNCODEDEF(fun_objectify_230) {
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

FUNCODEDEF(fun_objectify_quotation_231) {
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

FUNCODEDEF(fun_objectify_quotation_232) {
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

FUNCODEDEF(fun_objectify_quotation_233) {
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

FUNCODEDEF(fun_objectify_raw_234) {
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

FUNCODEDEF(fun_objectify_boundQ_235) {
  P e_,r_,tailQ_;
  P refF1674;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  refF1674 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),refF1674);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_236) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF1679;
  P astF1678;
  P target_envF1677;
  P syntax_envF1676;
  P modF1675;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF1675 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF1675);
  syntax_envF1676 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF1675);
  target_envF1677 = T5;
  T7 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF1676,tailQ_);
  astF1678 = T7;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF1678);
  tmpF1679 = rtQ_;
  if (tmpF1679 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF1676,target_envF1677);
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

FUNCODEDEF(fun_objectify_alternative_237) {
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

FUNCODEDEF(fun_loop_238) {
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

FUNCODEDEF(fun_sequentialize_239) {
  P eT_;
  P loopF1680;
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
      T8 = FUNSHELL(1,fun_loop_238,1);
      loopF1680 = T8;
      FUNINIT(loopF1680, 1,loopF1680);
      T9 = CALL1(0,loopF1680,eT_);
      T7 = T9;
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_240) {
  P eT_;
  P eF1681;
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
    eF1681 = T3;
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF1681);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF1681);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF1681);
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
      T21 = CALL1(1,VARREF(Ylst),eF1681);
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

FUNCODEDEF(fun_loop_241) {
  P res_,eT_;
  P headF1683;
  P tailQF1682;
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
    tailQF1682 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(YevalSastYobjectify),T9,FREEREF(1),tailQF1682);
    headF1683 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF1683,res_);
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

FUNCODEDEF(fun_objectify_sequential_242) {
  P eT_,r_,tailQ_;
  P astsF1685;
  P loopF1684;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_241,3);
  loopF1684 = T2;
  FUNINIT(loopF1684, 3,tailQ_,r_,loopF1684);
  T4 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF1684,Ynil,T4);
  T1 = T3;
  astsF1685 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),astsF1685);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_243) {
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

FUNCODEDEF(fun_objectify_application_244) {
  P ff_,eT_,r_,tailQ_;
  P eeTF1686;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_243,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF1686 = T1;
  T4 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF1686,r_,tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_245) {
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

FUNCODEDEF(fun_objectify_application_246) {
  P ff_,eT_,r_,tailQ_;
  P fvfF1688;
  P eeTF1687;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_245,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF1687 = T1;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF1688 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF1688,VARREF(YevalSastYapplication_arguments),eeTF1687,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_247) {
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

FUNCODEDEF(fun_objectify_application_248) {
  P ff_,eT_,r_,tailQ_;
  P eeTF1689;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_247,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF1689 = T1;
  T4 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF1689,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_249) {
  P f_,eT_,r_,tailQ_;
  P bF1691;
  P vTF1690;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF1690 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF1691 = T3;
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
      T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
      T14 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
      T15 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
      T12 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),T13,VARREF(YevalSastYfix_let_types),T14,VARREF(YevalSastYfix_let_arguments),eT_,VARREF(YevalSastYfix_let_body),T15);
      T7 = T12;
    } else {
      T16 = CALL3(1,VARREF(YevalSastYobjectify_error),LITREF(lit_306),f_,eT_);
      T7 = T16;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_250) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_309),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_310),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pack_args_251) {
  P eT_,vT_,tT_;
  P lst_typeF1693;
  P varF1692;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
loop:
  T1 = CALL1(1,VARREF(Yhead),vT_);
  varF1692 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF1692);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_158),FREEREF(0),YPfalse);
    lst_typeF1693 = T5;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF1692);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF1693,varF1692);
    CALL2(1,VARREF(Yhead_setter),lst_typeF1693,tT_);
    T8 = CALL1(0,FREEREF(1),eT_);
    T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,FREEREF(0),YPfalse);
    T9 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T6 = CALL2(1,VARREF(YevalSastYarguments),T7,T9);
    T4 = T6;
    T2 = T4;
  } else {
    T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T11 != YPfalse) {
      T12 = CALL3(1,VARREF(YevalSastYobjectify_error),LITREF(lit_314),FREEREF(2),eT_);
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

FUNCODEDEF(fun_process_nary_closed_application_252) {
  P f_,eT_,r_,tailQ_;
  P oF1697;
  P vTF1696;
  P pack_argsF1695;
  P pack_nary_argsF1694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_250,1);
  pack_nary_argsF1694 = T1;
  T2 = FUNSHELL(1,fun_pack_args_251,4);
  pack_argsF1695 = T2;
  FUNINIT(pack_nary_argsF1694, 1,pack_nary_argsF1694);
  FUNINIT(pack_argsF1695, 4,r_,pack_nary_argsF1694,f_,pack_argsF1695);
  T4 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF1696 = T4;
  T7 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T8 = CALL3(0,pack_argsF1695,eT_,vTF1696,T9);
  T10 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF1696,VARREF(YevalSastYfix_let_types),T7,VARREF(YevalSastYfix_let_arguments),T8,VARREF(YevalSastYfix_let_body),T10);
  oF1697 = T6;
  T5 = oF1697;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_convert2arguments_253) {
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

FUNCODEDEF(fun_objectify_assignment_254) {
  P binding_,e_,r_,tailQ_;
  P opF1698;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF1698 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF1698);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF1698);
    T6 = CALL3(1,VARREF(YevalSastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(YevalSastYobjectify_error),LITREF(lit_317),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_255) {
  P binding_,e_,r_,tailQ_;
  P valF1700;
  P refF1699;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF1699 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF1700 = T3;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF1699,valF1700);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_256) {
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

FUNCODEDEF(fun_objectify_assignment_using_257) {
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

FUNCODEDEF(fun_objectify_assignment_using_258) {
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

FUNCODEDEF(fun_objectify_assignment_using_259) {
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

FUNCODEDEF(fun_objectify_assignment_using_260) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_321),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF1701;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_324));
  tmpF1701 = T2;
  if (tmpF1701 != YPfalse) {
    T4 = tmpF1701;
  } else {
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_325));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_324));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_41));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T12 = CALL3(1,VARREF(Yerror),LITREF(lit_326),T13,new_kind_);
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

FUNCODEDEF(fun_ast_define_binding_262) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF1709;
  P bindingF1708;
  P modF1707;
  P foreignQF1706;
  P tmpF1705;
  P modF1704;
  P grF1703;
  P existing_bindingF1702;
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
  existing_bindingF1702 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF1703 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module),grF1703);
  modF1704 = T5;
  if (existing_bindingF1702 != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF1702,modF1704);
    tmpF1705 = T11;
    if (tmpF1705 != YPfalse) {
      T12 = tmpF1705;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF1706 = T9;
    T13 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF1702);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF1702);
      if (foreignQF1706 != YPfalse) {
        T15 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF1702);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF1706 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYmodule_name),modF1704);
        T19 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF1702);
        T17 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_331),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF1702,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF1702,kind_);
    T8 = existing_bindingF1702;
    T7 = T8;
  } else {
    T21 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF1707 = T21;
    T23 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF1707);
    bindingF1708 = T23;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF1708,grF1703);
    T22 = bindingF1708;
    T20 = T22;
    T7 = T20;
  }
  bindingF1709 = T7;
  T6 = bindingF1709;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_263) {
  P type_,kind_,var_,e_,r_;
  P defnF1712;
  P bindingF1711;
  P nameF1710;
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
  nameF1710 = T1;
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF1710,YPfalse,kind_);
  bindingF1711 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T5 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF1711,VARREF(YevalSastYassignment_form),T6);
  defnF1712 = T5;
  T4 = defnF1712;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_variable_definition_264) {
  P var_,e_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_41),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_dynamic_definition_265) {
  P var_,e_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_337),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_266) {
  P x_,r_,tailQ_;
  P expF1713;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_343));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_344));
  } else {
  }
  T3 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T3);
  expF1713 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_345));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF1713);
    T4 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_346));
  } else {
  }
  T1 = expF1713;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF1717;
  P envF1716;
  P tmpF1715;
  P expandF1714;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_266,1);
  expandF1714 = T1;
  FUNINIT(expandF1714, 1,expander_);
  tmpF1715 = env_or_false_;
  if (tmpF1715 != YPfalse) {
    T4 = tmpF1715;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF1716 = T3;
  T7 = CALL4(1,VARREF(YevalSastYast_define_binding),envF1716,name_,YPfalse,LITREF(lit_347));
  bindingF1717 = T7;
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),expandF1714,bindingF1717);
  T6 = bindingF1717;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_268) {
  P name_,e_,r_,rtQ_;
  P bindingF1723;
  P modnameF1722;
  P expanderF1721;
  P ast_expanderF1720;
  P syntax_envF1719;
  P sep_expanderF1718;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_macro_function),e_);
  sep_expanderF1718 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF1719 = T3;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF1718,syntax_envF1719,YPfalse);
  ast_expanderF1720 = T5;
  T7 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF1720);
  expanderF1721 = T7;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF1722 = T9;
  T13 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T12 = CALL4(1,VARREF(YPPmacro),modnameF1722,name_,expanderF1721,T13);
  bindingF1723 = T12;
  T15 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF1719,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF1723,syntax_envF1719);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF1718,r_,YPfalse);
    T18 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF1723,VARREF(YevalSastYassignment_form),T19);
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

FUNCODEDEF(fun_objectify_function_definition_269) {
  P name_,e_,r_;
  P defnF1726;
  P fF1725;
  P bindingF1724;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_41));
  bindingF1724 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF1725 = T3;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF1724,fF1725);
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T4,fF1725);
  T6 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF1724,VARREF(YevalSastYassignment_form),fF1725);
  defnF1726 = T6;
  T5 = defnF1726;
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

FUNCODEDEF(fun_objectify_primitive_definition_271) {
  P name_,sig_,body_,r_;
  P defnF1732;
  P formF1731;
  P bodyF1730;
  P new_rF1729;
  P signatureF1728;
  P bindingF1727;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_354));
  bindingF1727 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF1728 = T3;
  T6 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF1728);
  T5 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T6);
  new_rF1729 = T5;
  T8 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF1729,YPtrue);
  bodyF1730 = T8;
  T11 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF1727,VARREF(YevalSastYfunction_debug_name),T11,VARREF(YevalSastYfunction_signature),signatureF1728,VARREF(YevalSastYfunction_body),bodyF1730);
  formF1731 = T10;
  T13 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF1727,VARREF(YevalSastYassignment_form),formF1731);
  defnF1732 = T13;
  T12 = defnF1732;
  T9 = T12;
  T7 = T9;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_generic_definition_272) {
  P name_,sig_,r_;
  P defnF1736;
  P formF1735;
  P signatureF1734;
  P bindingF1733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_41));
  bindingF1733 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF1734 = T3;
  T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF1733,VARREF(YevalSastYfunction_debug_name),T6,VARREF(YevalSastYfunction_signature),signatureF1734);
  formF1735 = T5;
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF1733,VARREF(YevalSastYassignment_form),formF1735);
  defnF1736 = T8;
  T7 = defnF1736;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_273) {
  P name_,e_,r_;
  P defnF1742;
  P formF1741;
  P callF1740;
  P metF1739;
  P genF1738;
  P bindingF1737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_41));
  bindingF1737 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_358),name_);
  T3 = CALL4(1,VARREF(Ylst),LITREF(lit_357),T4,name_,YPfalse);
  genF1738 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF1739 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_359),genF1738,metF1739);
  callF1740 = T8;
  T10 = CALL3(1,VARREF(YevalSastYobjectify),callF1740,r_,YPfalse);
  formF1741 = T10;
  T12 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF1737,VARREF(YevalSastYassignment_form),formF1741);
  defnF1742 = T12;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF1739);
  T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T13,metF1739);
  T11 = defnF1742;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_274) {
  P tmpF1743;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF1743 = DYNREF(YevalSastYTrecord_sourceQT);
  if (tmpF1743 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_12),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_361),FREEREF(0),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_275) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_276) {
  P x_1430F1744;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1430F1744 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_274,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_275,1,x_1430F1744);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_277) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_278) {
  P sig_,body_,r_;
  P x_1429F1745;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1429F1745 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_276,3,sig_,body_,r_);
  T3 = FUNFAB(fun_277,1,x_1429F1745);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_279) {
  P bF1748;
  P new_rF1747;
  P signatureF1746;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF1746 = T1;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF1746);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF1747 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF1747,YPtrue);
  bF1748 = T6;
  T7 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF1746,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bF1748,FREEREF(3));
  T8 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T8,FREEREF(3));
  T5 = FREEREF(3);
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_280) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_281) {
  P sig_,body_,r_,tailQ_;
  P x_1431F1750;
  P methodF1749;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG));
  methodF1749 = T1;
  x_1431F1750 = VARREF(YevalSastYTcurrent_dependentT);
  VARSET(YevalSastYTcurrent_dependentT,methodF1749);
  T4 = FUNFAB(fun_279,4,sig_,r_,body_,methodF1749);
  T5 = FUNFAB(fun_280,1,x_1431F1750);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_282) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF1762;
  P nameF1761;
  P typeF1760;
  P stypeF1759;
  P dottedQF1758;
  P stypeF1757;
  P snameF1756;
  P paramF1755;
  P arityF1754;
  P valueF1753;
  P tmpF1752;
  P sexpr_valueF1751;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
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
    sexpr_valueF1751 = T3;
    tmpF1752 = sexpr_valueF1751;
    if (tmpF1752 != YPfalse) {
      T7 = tmpF1752;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF1753 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF1754 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T15 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T17 = CALL3(1,VARREF(YevalSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T18 = CALL3(1,VARREF(YevalSastYobjectify),arityF1754,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T14,VARREF(YevalSastYsignature_names),T15,VARREF(YevalSastYsignature_specs),T16,VARREF(YevalSastYsignature_naryQ),T17,VARREF(YevalSastYsignature_arity),T18,VARREF(YevalSastYsignature_value),valueF1753);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T20 = CALL1(1,VARREF(Yhead),params_);
    paramF1755 = T20;
    T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF1755);
    snameF1756 = T22;
    T24 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF1755);
    stypeF1757 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF1757,VARREF(YevalSastYDsexpr_optionals_tag));
    dottedQF1758 = T26;
    if (dottedQF1758 != YPfalse) {
      T28 = VARREF(YevalSastYDsexpr_optionals_type_name);
    } else {
      T28 = stypeF1757;
    }
    stypeF1759 = T28;
    T30 = CALL3(1,VARREF(YevalSastYobjectify),stypeF1759,FREEREF(1),YPfalse);
    typeF1760 = T30;
    T32 = CALL2(1,VARREF(YevalSastYobjectify_quotation),snameF1756,FREEREF(1));
    nameF1761 = T32;
    T34 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF1756,VARREF(YevalSastYbinding_type),typeF1760,VARREF(YevalSastYbinding_dottedQ),dottedQF1758);
    bindingF1762 = T34;
    T36 = CALL1(1,VARREF(Ytail),params_);
    T37 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF1762,bindings_);
    T38 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),nameF1761,VARREF(Ytail),names_);
    T39 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF1760,VARREF(Ytail),types_);
    a1 = T36;
    a2 = dottedQF1758;
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

FUNCODEDEF(fun_objectify_signature_283) {
  P sig_,r_;
  P colF1764;
  P sexpr_paramsF1763;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF1763 = T1;
  T3 = FUNSHELL(1,fun_col_282,3);
  colF1764 = T3;
  FUNINIT(colF1764, 3,sig_,r_,colF1764);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T4 = CALL5(0,colF1764,sexpr_paramsF1763,YPfalse,Ynil,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_284) {
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

FUNCODEDEF(fun_loop_285) {
  P i_,r_;
  P findF1765;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(YevalSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_284,5);
    findF1765 = T3;
    FUNINIT(findF1765, 5,i_,r_,FREEREF(0),FREEREF(1),findF1765);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF1765,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_376),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_286) {
  P binding_,r_;
  P loopF1766;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_285,2);
  loopF1766 = T1;
  FUNINIT(loopF1766, 2,loopF1766,binding_);
  T2 = CALL2(0,loopF1766,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_287) {
  P n_,b_,r_;
  P jF1769;
  P iF1768;
  P tup29F1767;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup29F1767 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F1767,YPint((P)0));
  iF1768 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F1767,YPint((P)1));
  jF1769 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF1768,VARREF(YevalSastYreference_frame_offset),jF1769);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_288) {
  P b_;
  P x_1433F1771;
  P x_1432F1770;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1432F1770 = T1;
  x_1433F1771 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1433F1771,x_1432F1770,LITREF(lit_41));
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1433F1771,x_1432F1770,LITREF(lit_354));
    if (T6 != YPfalse) {
      T5 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1433F1771,x_1432F1770,LITREF(lit_324));
      if (T8 != YPfalse) {
        T7 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T10 = CALL2(1,x_1433F1771,x_1432F1770,LITREF(lit_337));
        if (T10 != YPfalse) {
          T9 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T12 = CALL2(1,x_1433F1771,x_1432F1770,LITREF(lit_347));
          if (T12 != YPfalse) {
            T11 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T14 = CALL2(1,x_1433F1771,x_1432F1770,LITREF(lit_325));
            if (T14 != YPfalse) {
              T13 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T16 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
              T15 = CALL2(1,VARREF(Yerror),LITREF(lit_380),T16);
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

FUNCODEDEF(fun_objectify_binding_289) {
  P n_,b_,r_;
  P LrefGF1772;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF1772 = T1;
  T2 = CALL3(1,VARREF(Ynew),LrefGF1772,VARREF(YevalSastYreference_binding),b_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_290) {
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

FUNCODEDEF(fun_default_type_291) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_382),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_292) {
  P name_,r_;
  P bF1775;
  P tmpF1774;
  P grF1773;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF1773 = T1;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF1773);
  tmpF1774 = T4;
  if (tmpF1774 != YPfalse) {
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
    T9 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),YPtrue,VARREF(YevalSastYbinding_kind),LITREF(lit_41),VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_module),T10);
    bF1775 = T9;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF1775,grF1773);
    T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF1775);
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

FUNCODEDEF(fun_objectify_foreign_reference_294) {
  P name_,r_;
  P bindingF1784;
  P modF1783;
  P loaderF1782;
  P grF1781;
  P tmpF1780;
  P varnameF1779;
  P modnameF1778;
  P breakF1777;
  P namestrF1776;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF1776 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF1776,YPchr((P)58));
  breakF1777 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF1776,YPint((P)0),breakF1777);
  modnameF1778 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF1777);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF1776);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF1776,T8,T9);
  varnameF1779 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF1778);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF1780 = T12;
  if (tmpF1780 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF1779);
    T15 = CALL2(1,VARREF(YgooSmagYG),T16,YPint((P)0));
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T17 = CALL2(1,VARREF(Yerror),LITREF(lit_386),name_);
  } else {
  }
  T19 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF1781 = T19;
  T21 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF1781);
  loaderF1782 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF1778);
  T23 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF1782,T24);
  modF1783 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF1779);
  T28 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF1783);
  T26 = CALL2(1,VARREF(YevalSastYfind_binding),T27,T28);
  bindingF1784 = T26;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF1784,grF1781);
  T29 = CALL1(1,VARREF(Ynot),bindingF1784);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(Yerror),LITREF(lit_387),varnameF1779,modnameF1778);
  } else {
  }
  T31 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF1784,r_);
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

FUNCODEDEF(fun_objectify_symbol_295) {
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

FUNCODEDEF(fun_ftype_296) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_390),r_,YPfalse);
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

FUNCODEDEF(fun_empty_298) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_empty));
}

FUNCODEDEF(fun_299) {
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

FUNCODEDEF(fun_300) {
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

FUNCODEDEF(fun_objectify_locals_301) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P functionsF1788;
  P function_formsF1787;
  P new_rF1786;
  P bindingsF1785;
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
  T2 = FUNFAB(fun_299,1,r_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,names_);
  bindingsF1785 = T1;
  T4 = CALL2(1,VARREF(YevalSastYr_extendT),r_,bindingsF1785);
  new_rF1786 = T4;
  T6 = CALL3(1,VARREF(YgooScolsSseqYmap2),VARREF(YevalSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF1787 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSastYobjectify),new_rF1786,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF1787);
  functionsF1788 = T8;
  T10 = FUNFAB(fun_300,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T10,functionsF1788,bindingsF1785);
  T12 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),functionsF1788);
  T13 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF1786,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),bindingsF1785,VARREF(YevalSastYlocals_functions),T12,VARREF(YevalSastYlocals_body),T13);
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_302) {
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

FUNCODEDEF(fun_objectify_unwind_protect_303) {
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

FUNCODEDEF(fun_objectify_monitor_304) {
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

FUNCODEDEF(fun_305) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_306) {
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

FUNCODEDEF(fun_307) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_408),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_308) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_407),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_305;
  T4 = FUNFAB(fun_306,1,exit_);
  T5 = FUNFAB(fun_307,1,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_309) {
  P name_;
  P bindingF1789;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF1789 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF1789,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_308,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF1789);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_310) {
  P names_,r_,tailQ_;
  P moduleF1791;
  P envF1790;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF1790 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF1791 = T3;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF1791);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF1790,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_405));
  } else {
  }
  T8 = FUNFAB(fun_309,2,envF1790,moduleF1791);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF1793;
  P existingF1792;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,env_);
  existingF1792 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1792,YPfalse);
  tmpF1793 = T5;
  if (tmpF1793 != YPfalse) {
    T6 = tmpF1793;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1792,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T8 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_411),T9,T10);
  } else {
  }
  CALL2(1,VARREF(YevalSastYinsert_globalX),b_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_312) {
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

FUNCODEDEF(fun_objectify_useSexport_module_313) {
  P name_,r_,tailQ_;
  P used_moduleF1797;
  P loaderF1796;
  P moduleF1795;
  P envF1794;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF1794 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF1795 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF1794);
  loaderF1796 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF1796,name_);
  used_moduleF1797 = T7;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF1794);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,used_moduleF1797);
  T9 = FUNFAB(fun_312,2,envF1794,moduleF1795);
  T10 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF1797);
  CALL2(1,VARREF(YgooSmacrosYdo),T9,T10);
  T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_314) {
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

FUNCODEDEF(fun_objectify_use_module_315) {
  P name_,r_,tailQ_;
  P used_moduleF1800;
  P loaderF1799;
  P envF1798;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF1798 = T1;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T2 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),T3,LITREF(lit_414));
  if (T2 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYenvironment_module),envF1798);
    T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),T6);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
    T8 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF1798);
    loaderF1799 = T8;
    T10 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF1799,name_);
    used_moduleF1800 = T10;
    T11 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF1798);
    CALL2(1,VARREF(YgooScolsSseqxYpushX),T11,used_moduleF1800);
    T13 = FUNFAB(fun_314,1,envF1798);
    T14 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF1800);
    T12 = CALL2(1,VARREF(YgooSmacrosYdo),T13,T14);
    T9 = T12;
    T7 = T9;
  }
  T15 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T0 = T15;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_316) {
  P pat_,var_,fail_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_418),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_317) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_419));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_318) {
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
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_420),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yerror),LITREF(lit_421),pat_);
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

FUNCODEDEF(fun_expand_bind_listT_319) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_419));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_320) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
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

FUNCODEDEF(fun_expand_bind_element_321) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_424));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_309));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_322) {
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
    T8 = CALL1(1,VARREF(YgooStypesY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_425));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,Ynil);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T14,Ynil);
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
      T26 = CALL1(1,VARREF(YgooStypesY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,Ynil);
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_309));
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
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_426));
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
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
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

FUNCODEDEF(fun_expand_pattern_323) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_357));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_428));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_429));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_324) {
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

FUNCODEDEF(fun_expand_syntax_if_325) {
  P x_;
  P epatF1808;
  P failF1807;
  P varF1806;
  P elseF1805;
  P thenF1804;
  P valueF1803;
  P varsF1802;
  P patF1801;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF1801 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF1801);
  varsF1802 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF1803 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF1804 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF1805 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF1806 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF1807 = T13;
  T15 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF1801,varF1806,failF1807);
  epatF1808 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_431));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_432));
  T26 = CALL1(1,VARREF(Ylst),failF1807);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_4));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_433));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_363));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T33,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T40 = CALL1(1,VARREF(Ylst),elseF1805);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T37,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T48 = CALL1(1,VARREF(Ylst),varF1806);
  T49 = CALL1(1,VARREF(Ylst),valueF1803);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T55 = fun_324;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF1802);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF1808);
  T57 = CALL1(1,VARREF(Ylst),thenF1804);
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

FUNCODEDEF(fun_r_extendT_326) {
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

FUNCODEDEF(fun_insert_globalX_327) {
  P binding_,r_;
  P rF1809;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF1809 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF1809);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_328) {
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

FUNCODEDEF(fun_insert_globalsX_329) {
  P bindings_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNFAB(fun_328,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_330) {
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

FUNCODEDEF(fun_find_static_global_environment_331) {
  P r_;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_332) {
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

FUNCODEDEF(fun_find_environment_module_333) {
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

FUNCODEDEF(fun_loop_334) {
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

FUNCODEDEF(fun_find_binding_335) {
  P name_,r_;
  P loopF1810;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_334,3);
  loopF1810 = T1;
  FUNINIT(loopF1810, 3,name_,r_,loopF1810);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF1810,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_336) {
  P name_,r_;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_337) {
  P name_,r_;
  P tmpF1811;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF1811 = T1;
  if (tmpF1811 != YPfalse) {
    T3 = tmpF1811;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
    T4 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_338) {
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

FUNCODEDEF(fun_register_magic_binding_339) {
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

FUNCODEDEF(fun_magic_bindings_340) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1437_341) {
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

FUNCODEDEF(fun_342) {
  P return_;
  P sexpr_nameF1824;
  P special_nameF1823;
  P x_1436F1822;
  P x_1436F1821;
  P x_1436F1820;
  P x_1436F1819;
  P x_1436F1818;
  P x_1436F1817;
  P bodyF1816;
  P paramsF1815;
  P nameF1814;
  P x_1436F1813;
  P x_1437F1812;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1437_341,1);
  x_1437F1812 = T1;
  FUNINIT(x_1437F1812, 1,return_);
  x_1436F1813 = FREEREF(0);
  nameF1814 = YPfalse;
  nameF1814 = BOXFAB(nameF1814);
  paramsF1815 = YPfalse;
  paramsF1815 = BOXFAB(paramsF1815);
  bodyF1816 = YPfalse;
  bodyF1816 = BOXFAB(bodyF1816);
  T9 = CALL2(1,VARREF(YisaQ),x_1436F1813,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1436F1813,LITREF(lit_445),x_1437F1812);
    x_1436F1817 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1436F1817,x_1437F1812);
    BOXVAL(nameF1814) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1436F1817);
    x_1436F1818 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1436F1818,x_1437F1812);
    x_1436F1819 = T16;
    BOXVAL(paramsF1815) = x_1436F1819;
    x_1436F1820 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1436F1820,x_1437F1812);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1436F1818);
    x_1436F1821 = T19;
    BOXVAL(bodyF1816) = x_1436F1821;
    x_1436F1822 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1436F1822,x_1437F1812);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1437F1812,LITREF(lit_7),x_1436F1813);
  }
  T25 = BOXVAL(nameF1814);
  T24 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_446),T25);
  special_nameF1823 = T24;
  T28 = BOXVAL(nameF1814);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_447),T28,LITREF(lit_448));
  sexpr_nameF1824 = T27;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T34 = CALL1(1,VARREF(Ylst),special_nameF1823);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_309));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_325));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),sexpr_nameF1824);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T47 = CALL1(1,VARREF(Ylst),YPfalse);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_449));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_450));
  T54 = BOXVAL(paramsF1815);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(bodyF1816);
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T57 = CALL1(1,VARREF(Ylst),YPfalse);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),13,T37,T38,T39,T40,T44,T45,T46,T47,T48,T49,T56,T57,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_442));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_309));
  T65 = BOXVAL(nameF1814);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T66 = CALL1(1,VARREF(Ylst),special_nameF1823);
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

FUNCODEDEF(fun_343) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_342,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_344) {
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

FUNCODEDEF(fun_345) {
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

FUNCODEDEF(fun_346) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_raw),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_347) {
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

FUNCODEDEF(fun_348) {
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

FUNCODEDEF(fun_349) {
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

FUNCODEDEF(fun_350) {
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

FUNCODEDEF(fun_351) {
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

FUNCODEDEF(fun_352) {
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

FUNCODEDEF(fun_353) {
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

FUNCODEDEF(fun_354) {
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

FUNCODEDEF(fun_355) {
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

FUNCODEDEF(fun_356) {
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

FUNCODEDEF(fun_357) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_boundQ),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_358) {
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

FUNCODEDEF(fun_359) {
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

FUNCODEDEF(fun_360) {
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

FUNCODEDEF(fun_361) {
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

FUNCODEDEF(fun_362) {
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

FUNCODEDEF(fun_363) {
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

FUNCODEDEF(fun_364) {
  P x_,r_,tailQ_;
  P bodyF1830;
  P handlerF1829;
  P testF1828;
  P infoF1827;
  P typeF1826;
  P tup30F1825;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup30F1825 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F1825,YPint((P)0));
  typeF1826 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F1825,YPint((P)1));
  infoF1827 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F1825,YPint((P)2));
  testF1828 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F1825,YPint((P)3));
  handlerF1829 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F1825,YPint((P)4));
  bodyF1830 = T11;
  T12 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF1826,infoF1827,testF1828,handlerF1829,bodyF1830,r_,tailQ_);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_365) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_309),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_310),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_366) {
  P x_,r_,tailQ_;
  P nameF1831;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF1831 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_470));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_309));
  T8 = CALL1(1,VARREF(Ylst),nameF1831);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(YevalSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,Ynil);
  T2 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_41),nameF1831,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_367) {
  P x_,r_,tailQ_;
  P typeF1836;
  P setter_nameF1835;
  P ownerF1834;
  P varF1833;
  P nameF1832;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF1832 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF1833 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF1834 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF1832);
  setter_nameF1835 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF1836 = T9;
  T13 = CALL2(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF1832,ownerF1834);
  T14 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF1832,ownerF1834,typeF1836);
  T18 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T18 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),varF1833);
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_382));
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
    T21 = CALL1(1,VARREF(Ylst),T22);
    T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,Ynil);
    T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T25 = CALL1(1,VARREF(Ylst),T26);
    T19 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T20,T25);
    T17 = T19;
  } else {
    T17 = LITREF(lit_473);
  }
  T16 = CALL5(1,VARREF(Ylst),ownerF1834,nameF1832,setter_nameF1835,typeF1836,T17);
  T15 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_472),T16);
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

FUNCODEDEF(fun_368) {
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

FUNCODEDEF(fun_369) {
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

FUNCODEDEF(fun_370) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_354));
    T3 = CALL3(1,VARREF(YevalSastYobjectify),YPfalse,r_,tailQ_);
    T0 = T3;
  } else {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),x_);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_body),x_);
    T4 = CALL4(1,VARREF(YevalSastYobjectify_primitive_definition),T5,T6,T7,r_);
    T0 = T4;
  }
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
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_expand_backquote),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_macro_expand_372) {
  P x_,r_,tailQ_;
  P resF1839;
  P macF1838;
  P astF1837;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,tailQ_);
  astF1837 = T1;
  T4 = CALL2(1,VARREF(YisaQ),astF1837,VARREF(YevalSastYLmacro_referenceG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),astF1837);
    macF1838 = T6;
    T9 = CALL1(1,VARREF(YevalSastYbinding_handler),macF1838);
    T8 = CALL3(1,T9,x_,r_,tailQ_);
    resF1839 = T8;
    T7 = resF1839;
    T5 = T7;
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
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
  T2 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T1 = CALL3(1,VARREF(YevalSastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_374) {
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

FUNCODEDEF(fun_375) {
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

FUNCODEDEF(fun_376) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_377) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_useSexport_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_378) {
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

FUNCODEDEF(fun_transaction_implemented_bindings_setter_379) {
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

FUNCODEDEF(fun_380) {
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

FUNCODEDEF(fun_transaction_dependents_381) {
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

FUNCODEDEF(fun_transaction_dependents_setter_382) {
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

FUNCODEDEF(fun_383) {
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_496));
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_499));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_emptyQ) {
  P t_;
  P tmpF1840;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF1840 = T1;
  if (tmpF1840 != YPfalse) {
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

FUNCODEDEF(fun_387) {
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

FUNCODEDEF(fun_388) {
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
  P t2_dependentsF1844;
  P t1_dependentsF1843;
  P t2_bindingsF1842;
  P t1_bindingsF1841;
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
        t1_bindingsF1841 = T6;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF1842 = T8;
        T10 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF1843 = T10;
        T12 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF1844 = T12;
        T13 = FUNFAB(fun_387,1,t1_bindingsF1841);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF1842);
        T14 = FUNFAB(fun_388,1,t1_dependentsF1843);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF1844);
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

FUNCODEDEF(fun_390) {
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

FUNCODEDEF(fun_391) {
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
  T0 = fun_390;
  T1 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_391;
  T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_393) {
  P valueF1845;
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF1845 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF1845;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_394) {
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
  P savedF1847;
  P successF1846;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF1846 = YPfalse;
  successF1846 = BOXFAB(successF1846);
  savedF1847 = VARREF(YevalSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_393,2,thunk_,successF1846);
  T5 = FUNFAB(fun_394,3,successF1846,module_,savedF1847);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1441_396) {
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

FUNCODEDEF(fun_397) {
  P return_;
  P x_1440F1856;
  P x_1440F1855;
  P x_1440F1854;
  P x_1440F1853;
  P x_1440F1852;
  P bodyF1851;
  P moduleF1850;
  P x_1440F1849;
  P x_1441F1848;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1441_396,1);
  x_1441F1848 = T1;
  FUNINIT(x_1441F1848, 1,return_);
  x_1440F1849 = FREEREF(0);
  moduleF1850 = YPfalse;
  moduleF1850 = BOXFAB(moduleF1850);
  bodyF1851 = YPfalse;
  bodyF1851 = BOXFAB(bodyF1851);
  T7 = CALL2(1,VARREF(YisaQ),x_1440F1849,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1440F1849,LITREF(lit_512),x_1441F1848);
    x_1440F1852 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1440F1852,x_1441F1848);
    x_1440F1853 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1440F1853,x_1441F1848);
    BOXVAL(moduleF1850) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1440F1853);
    x_1440F1854 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1440F1854,x_1441F1848);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1440F1852);
    x_1440F1855 = T16;
    BOXVAL(bodyF1851) = x_1440F1855;
    x_1440F1856 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1440F1856,x_1441F1848);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1441F1848,LITREF(lit_7),x_1440F1849);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_508));
  T23 = BOXVAL(moduleF1850);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_450));
  T27 = CALL1(1,VARREF(Ylst),Ynil);
  T28 = BOXVAL(bodyF1851);
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

FUNCODEDEF(fun_398) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_397,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_399) {
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
  T2 = FUNFAB(fun_399,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_401) {
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

FUNCODEDEF(fun_module_loader_modules_setter_402) {
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

FUNCODEDEF(fun_403) {
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

FUNCODEDEF(fun_module_loader_stack_404) {
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

FUNCODEDEF(fun_module_loader_stack_setter_405) {
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

FUNCODEDEF(fun_406) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_407) {
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

FUNCODEDEF(fun_module_name_setter_408) {
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

FUNCODEDEF(fun_module_mangled_name_409) {
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

FUNCODEDEF(fun_module_mangled_name_setter_410) {
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

FUNCODEDEF(fun_411) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_mangled_string_name_412) {
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

FUNCODEDEF(fun_module_mangled_string_name_setter_413) {
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

FUNCODEDEF(fun_414) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_target_environment_415) {
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

FUNCODEDEF(fun_module_target_environment_setter_416) {
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

FUNCODEDEF(fun_module_syntax_environment_417) {
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

FUNCODEDEF(fun_module_syntax_environment_setter_418) {
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

FUNCODEDEF(fun_Pmodule_exports_419) {
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

FUNCODEDEF(fun_Pmodule_exports_setter_420) {
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

FUNCODEDEF(fun_421) {
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

FUNCODEDEF(fun_module_data_processedQ_422) {
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

FUNCODEDEF(fun_module_data_processedQ_setter_423) {
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

FUNCODEDEF(fun_424) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_425) {
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

FUNCODEDEF(fun_module_runtime_data_setter_426) {
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

FUNCODEDEF(fun_427) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_428) {
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

FUNCODEDEF(fun_module_transaction_setter_429) {
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

FUNCODEDEF(fun_430) {
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

FUNCODEDEF(fun_module_uses_c_files_431) {
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

FUNCODEDEF(fun_module_uses_c_files_setter_432) {
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

FUNCODEDEF(fun_433) {
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

FUNCODEDEF(fun_module_exports_434) {
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

FUNCODEDEF(fun_436) {
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
  T1 = FUNFAB(fun_436,1,f_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_438) {
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
  P tmpF1857;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF1857 = T1;
  if (tmpF1857 != YPfalse) {
    T3 = tmpF1857;
  } else {
    T4 = CALL2(1,VARREF(YevalSastYload_and_register_module),loader_,name_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_441) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_442) {
  P x_1445F1861;
  P x_1444F1860;
  P tup31F1859;
  P x_1443F1858;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  x_1443F1858 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1443F1858);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup31F1859 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F1859,YPint((P)0));
  x_1444F1860 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F1859,YPint((P)1));
  x_1445F1861 = T7;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_1444F1860,x_1443F1858);
  T6 = x_1445F1861;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF1866;
  P x_1442F1865;
  P indentF1864;
  P depthF1863;
  P stackF1862;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF1862 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF1862);
  depthF1863 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_552),depthF1863);
  indentF1864 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF1862,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF1862);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_553),T8,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_554),indentF1864,name_);
  x_1442F1865 = loader_;
  T12 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1442F1865);
  T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,name_);
  T10 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T11,x_1442F1865);
  T14 = FUNFAB(fun_441,2,loader_,name_);
  T15 = FUNFAB(fun_442,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF1866 = T13;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF1866);
  CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_555),indentF1864);
  T9 = modF1866;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF1869;
  P existingF1868;
  P exportsF1867;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF1867 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF1867,name_,YPfalse);
  existingF1868 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1868,YPfalse);
  tmpF1869 = T6;
  if (tmpF1869 != YPfalse) {
    T7 = tmpF1869;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1868,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL5(1,VARREF(Yerror),LITREF(lit_558),existingF1868,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF1867,name_);
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

FUNCODEDEF(fun_446) {
  P binding_;
  P tmpF1870;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_freeQ),binding_);
  tmpF1870 = T2;
  if (tmpF1870 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_561),T6,T7);
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
  T1 = FUNFAB(fun_446,1,mod_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_448) {
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

FUNCODEDEF(fun_449) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_448,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_user_450) {
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
    T4 = FUNFAB(fun_449,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_451) {
  P v_;
  P UF1871;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(v_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF1871 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1871,v_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F1874;
  P add_userF1873;
  P usersF1872;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF1872 = T1;
  T3 = FUNSHELL(0,fun_add_user_450,3);
  add_userF1873 = T3;
  FUNINIT(add_userF1873, 3,usersF1872,add_userF1873,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF1873,modnames_);
  T5 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F1874 = T5;
  packer_F1874 = BOXFAB(packer_F1874);
  T7 = FUNFAB(fun_451,1,packer_F1874);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,usersF1872);
  T9 = BOXVAL(packer_F1874);
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

FUNCODEDEF(fun_454) {
  P modname_;
  P modF1875;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF1875 = T1;
  T3 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF1875);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF1876;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF1876 = T1;
  T2 = FUNFAB(fun_454,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF1876);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF1877;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF1877 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF1877,YPchr((P)47));
  T3 = CALL2(1,VARREF(YgooScolsSseqYjoin),T4,VARREF(YgooSsystemYTpath_separatorT));
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_457) {
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
  P bootenvF1879;
  P bootmodF1878;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF1878 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF1878);
  bootenvF1879 = T3;
  T5 = FUNFAB(fun_457,2,bootenvF1879,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_570));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF1880;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T2);
  new_envF1880 = T1;
  T0 = new_envF1880;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_460) {
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
  P new_envF1882;
  P loaderF1881;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T2);
  loaderF1881 = T1;
  T4 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF1881,YPfalse);
  new_envF1882 = T4;
  T5 = FUNFAB(fun_460,2,excluded_,new_envF1882);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF1882;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_462) {
  P T0;
LINK_STACK();
loop:
  DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_463) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_464) {
  P x_1446F1883;
  P T0,T1,T2;
LINK_STACK();
loop:
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1446F1883 = DYNREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_462,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_463,1,x_1446F1883);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXVAL(FREEREF(3)) = YPtrue;
UNLINK_STACK();
  QRET(FREEREF(4));
}

FUNCODEDEF(fun_465) {
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

FUNCODEDEF(fun_load_module_466) {
  P loader_,name_;
  P fileF1889;
  P modpathF1888;
  P keepmodQF1887;
  P envF1886;
  P moduleF1885;
  P typeF1884;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF1884 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF1884,VARREF(YevalSastYmodule_name),name_);
  moduleF1885 = T3;
  T5 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF1885,loader_,YPfalse);
  envF1886 = T5;
  keepmodQF1887 = YPfalse;
  keepmodQF1887 = BOXFAB(keepmodQF1887);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF1888 = T9;
  T11 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF1888,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF1889 = T11;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF1885,envF1886,envF1886);
  T12 = CALL1(1,VARREF(Ynot),fileF1889);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_577),modpathF1888);
  } else {
  }
  T15 = FUNFAB(fun_464,5,envF1886,loader_,fileF1889,keepmodQF1887,moduleF1885);
  T16 = FUNFAB(fun_465,2,keepmodQF1887,moduleF1885);
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
  P moduleF1890;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF1890 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF1890);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF1890);
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
  P loaderF1891;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF1891 = T1;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF1891);
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
  P envF1895;
  P modF1894;
  P typeF1893;
  P loaderF1892;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF1892 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF1892);
  typeF1893 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF1893,VARREF(YevalSastYmodule_name),T6);
  modF1894 = T5;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF1894,loaderF1892,YPtrue);
  envF1895 = T8;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF1894);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF1894,envF1895,envF1895);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF1894);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF1892,modF1894);
  T7 = modF1894;
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
  P bindingF1897;
  P home_envF1896;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF1896 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,home_envF1896);
  bindingF1897 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF1897);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL4(1,VARREF(Yerror),LITREF(lit_590),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF1897,T10);
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
  P bindingF1898;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_324),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF1898 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF1898,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF1899;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_337),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF1899 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF1899,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF1900;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_354),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF1900 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF1900,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF1901;
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
  bindingF1901 = T1;
  if (bindingF1901 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T6,bindingF1901);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_598),name_,T8);
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

FUNCODEDEF(fun_482) {
  P binding_;
  P cloneF1902;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T2,YPfalse,LITREF(lit_325));
  cloneF1902 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T4,cloneF1902);
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
  T1 = FUNFAB(fun_482,1,env_);
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
  P bootenvF1904;
  P bootmodF1903;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF1903 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF1903);
  bootenvF1904 = T4;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF1904);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF1904);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_606));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF1908;
  P syntax_envF1907;
  P moduleF1906;
  P typeF1905;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF1905 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF1905,VARREF(YevalSastYmodule_name),name_);
  moduleF1906 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF1906);
  syntax_envF1907 = T5;
  T7 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF1906,loader_,YPfalse);
  target_envF1908 = T7;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF1906,syntax_envF1907,target_envF1908);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF1908);
  } else {
    T10 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF1908,loader_);
  }
  T6 = moduleF1906;
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

FUNCODEDEF(fun_loop_492) {
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
  P loopF1909;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_492,2);
  loopF1909 = T1;
  FUNINIT(loopF1909, 2,f_,loopF1909);
  T2 = CALL1(0,loopF1909,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_494) {
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
  P loopF1910;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_494,2);
  loopF1910 = T1;
  FUNINIT(loopF1910, 2,f_,loopF1910);
  T2 = CALL1(0,loopF1910,env_);
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(YevalSastYDgoo_boot_module_name,LITREF(lit_0));
  VARSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPsym((P)"exp");
  lit_2 = YPPsym((P)"return");
  lit_3 = YPPsym((P)"x-1418");
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
  fun_x_1418_0 = YPmet(FUNCODEREF(fun_x_1418_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-dependent"),T3);
  lit_13 = YPPsym((P)"objectify-error");
  lit_14 = YPPsym((P)"message");
  lit_15 = YPPsym((P)"arguments");
  T4 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_objectify_error_3 = YPmet(FUNCODEREF(fun_objectify_error_3),LITREF(lit_13),T4,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(YevalSastYobjectify_error);
  if (T7 != YPfalse) {
    T6 = VARREF(YevalSastYobjectify_error);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_objectify_error_3;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YevalSastYobjectify_error,T5);
  lit_16 = YPPsym((P)"bot");
  T9 = XCALL1(1,VARREF(Ylst),LITREF(lit_16));
  VARSET(YevalSastYast_LbotG,T9);
  lit_17 = YPPsym((P)"<program>");
  T11 = (P)YPpair(VARREF(YLanyG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_17),T11);
  VARSET(YevalSastYLprogramG,T10);
  lit_18 = YPPsym((P)"program-type");
  lit_19 = YPPsym((P)"_x");
  T12 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_4 = YPmet(FUNCODEREF(fun_program_type_4),LITREF(lit_18),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSastYprogram_type);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYprogram_type);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_program_type_4;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYprogram_type,T13);
  lit_20 = YPPsym((P)"program-type-setter");
  lit_21 = YPPsym((P)"_z");
  T17 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_5 = YPmet(FUNCODEREF(fun_program_type_setter_5),LITREF(lit_20),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalSastYprogram_type_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYprogram_type_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_program_type_setter_5;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYprogram_type_setter,T18);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_22 = YPPsym((P)"program-register");
  T22 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_6 = YPmet(FUNCODEREF(fun_program_register_6),LITREF(lit_22),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSastYprogram_register);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSastYprogram_register);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_program_register_6;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSastYprogram_register,T23);
  lit_23 = YPPsym((P)"program-register-setter");
  T27 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_7 = YPmet(FUNCODEREF(fun_program_register_setter_7),LITREF(lit_23),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSastYprogram_register_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYprogram_register_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_program_register_setter_7;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYprogram_register_setter,T28);
  T32 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T33 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T33);
  lit_24 = YPPsym((P)"<computed-program>");
  T35 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_24),T35);
  VARSET(YevalSastYLcomputed_programG,T34);
  T36 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLcomputed_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_9 = YPmet(FUNCODEREF(fun_program_register_9),LITREF(lit_22),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSastYprogram_register);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSastYprogram_register);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_program_register_9;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSastYprogram_register,T37);
  T41 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcomputed_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_10 = YPmet(FUNCODEREF(fun_program_register_setter_10),LITREF(lit_23),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSastYprogram_register_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSastYprogram_register_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_program_register_setter_10;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSastYprogram_register_setter,T42);
  T46 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T47 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLcomputed_programG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T47);
  lit_25 = YPPsym((P)"<passive-program>");
  T49 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T48 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_25),T49);
  VARSET(YevalSastYLpassive_programG,T48);
  VARSET(YevalSastYLbinding_nameG,VARREF(YLanyG));
  lit_26 = YPPsym((P)"<binding>");
  T51 = (P)YPpair(VARREF(YLanyG),Ynil);
  T50 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_26),T51);
  VARSET(YevalSastYLbindingG,T50);
  lit_27 = YPPsym((P)"binding-name");
  T52 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_12 = YPmet(FUNCODEREF(fun_binding_name_12),LITREF(lit_27),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSastYbinding_name);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSastYbinding_name);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_binding_name_12;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSastYbinding_name,T53);
  lit_28 = YPPsym((P)"binding-name-setter");
  T57 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_13 = YPmet(FUNCODEREF(fun_binding_name_setter_13),LITREF(lit_28),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSastYbinding_name_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSastYbinding_name_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_binding_name_setter_13;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSastYbinding_name_setter,T58);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_name),VARREF(YevalSastYbinding_name_setter),VARREF(YevalSastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_29 = YPPsym((P)"binding-mangled-name");
  T62 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_14 = YPmet(FUNCODEREF(fun_binding_mangled_name_14),LITREF(lit_29),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalSastYbinding_mangled_name);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalSastYbinding_mangled_name);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_binding_mangled_name_14;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSastYbinding_mangled_name,T63);
  lit_30 = YPPsym((P)"binding-mangled-name-setter");
  T68 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T67 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T68,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_15 = YPmet(FUNCODEREF(fun_binding_mangled_name_setter_15),LITREF(lit_30),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYbinding_mangled_name_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYbinding_mangled_name_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_binding_mangled_name_setter_15;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYbinding_mangled_name_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T75 = fun_16;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_mangled_name),VARREF(YevalSastYbinding_mangled_name_setter),T74,T75);
  lit_31 = YPPsym((P)"binding-type");
  T76 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_17 = YPmet(FUNCODEREF(fun_binding_type_17),LITREF(lit_31),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYbinding_type);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYbinding_type);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_binding_type_17;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYbinding_type,T77);
  lit_32 = YPPsym((P)"binding-type-setter");
  T81 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_18 = YPmet(FUNCODEREF(fun_binding_type_setter_18),LITREF(lit_32),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSastYbinding_type_setter);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYbinding_type_setter);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_binding_type_setter_18;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYbinding_type_setter,T82);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_type),VARREF(YevalSastYbinding_type_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_33 = YPPsym((P)"binding-inferred-type");
  T86 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_19 = YPmet(FUNCODEREF(fun_binding_inferred_type_19),LITREF(lit_33),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSastYbinding_inferred_type);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSastYbinding_inferred_type);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_binding_inferred_type_19;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSastYbinding_inferred_type,T87);
  lit_34 = YPPsym((P)"binding-inferred-type-setter");
  T91 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_20 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_20),LITREF(lit_34),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSastYbinding_inferred_type_setter);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSastYbinding_inferred_type_setter);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_binding_inferred_type_setter_20;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSastYbinding_inferred_type_setter,T92);
  T96 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T97 = fun_21;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_inferred_type),VARREF(YevalSastYbinding_inferred_type_setter),VARREF(YLanyG),T97);
  lit_35 = YPPsym((P)"<global-box>");
  T99 = (P)YPpair(VARREF(YLanyG),Ynil);
  T98 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T99);
  VARSET(YevalSastYLglobal_boxG,T98);
  lit_36 = YPPsym((P)"global-box-value");
  T100 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_22 = YPmet(FUNCODEREF(fun_global_box_value_22),LITREF(lit_36),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYglobal_box_value);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYglobal_box_value);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_global_box_value_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYglobal_box_value,T101);
  lit_37 = YPPsym((P)"global-box-value-setter");
  T105 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_23 = YPmet(FUNCODEREF(fun_global_box_value_setter_23),LITREF(lit_37),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYglobal_box_value_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYglobal_box_value_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_global_box_value_setter_23;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYglobal_box_value_setter,T106);
  T110 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T111 = fun_24;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_boxG),VARREF(YevalSastYglobal_box_value),VARREF(YevalSastYglobal_box_value_setter),VARREF(YLanyG),T111);
  lit_38 = YPPsym((P)"<module-binding>");
  T114 = (P)YPpair(VARREF(YevalSdependencyYLdependableG),Ynil);
  T113 = (P)YPpair(VARREF(YevalSastYLbindingG),T114);
  T112 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_38),T113);
  VARSET(YevalSastYLmodule_bindingG,T112);
  lit_39 = YPPsym((P)"binding-kind");
  T115 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_25 = YPmet(FUNCODEREF(fun_binding_kind_25),LITREF(lit_39),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSastYbinding_kind);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSastYbinding_kind);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_binding_kind_25;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSastYbinding_kind,T116);
  lit_40 = YPPsym((P)"binding-kind-setter");
  T120 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_26 = YPmet(FUNCODEREF(fun_binding_kind_setter_26),LITREF(lit_40),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSastYbinding_kind_setter);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSastYbinding_kind_setter);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_binding_kind_setter_26;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYbinding_kind_setter,T121);
  lit_41 = YPPsym((P)"global");
  T125 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T126 = fun_27;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),VARREF(YevalSastYbinding_kind_setter),VARREF(YLanyG),T126);
  lit_42 = YPPsym((P)"binding-module");
  T127 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_28 = YPmet(FUNCODEREF(fun_binding_module_28),LITREF(lit_42),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSastYbinding_module);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSastYbinding_module);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_binding_module_28;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSastYbinding_module,T128);
  lit_43 = YPPsym((P)"binding-module-setter");
  T132 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_29 = YPmet(FUNCODEREF(fun_binding_module_setter_29),LITREF(lit_43),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSastYbinding_module_setter);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSastYbinding_module_setter);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_binding_module_setter_29;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYbinding_module_setter,T133);
  T137 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T138 = fun_30;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_module),VARREF(YevalSastYbinding_module_setter),VARREF(YLanyG),T138);
  lit_44 = YPPsym((P)"binding-free?");
  T139 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_31 = YPmet(FUNCODEREF(fun_binding_freeQ_31),LITREF(lit_44),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYbinding_freeQ);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYbinding_freeQ);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_binding_freeQ_31;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYbinding_freeQ,T140);
  lit_45 = YPPsym((P)"binding-free?-setter");
  T144 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_32 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_32),LITREF(lit_45),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYbinding_freeQ_setter);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYbinding_freeQ_setter);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_binding_freeQ_setter_32;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYbinding_freeQ_setter,T145);
  T149 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T150 = fun_33;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),VARREF(YevalSastYbinding_freeQ_setter),VARREF(YLlogG),T150);
  lit_46 = YPPsym((P)"binding-info");
  T151 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_34 = YPmet(FUNCODEREF(fun_binding_info_34),LITREF(lit_46),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSastYbinding_info);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSastYbinding_info);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_binding_info_34;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSastYbinding_info,T152);
  lit_47 = YPPsym((P)"binding-info-setter");
  T156 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_35 = YPmet(FUNCODEREF(fun_binding_info_setter_35),LITREF(lit_47),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYbinding_info_setter);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYbinding_info_setter);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_binding_info_setter_35;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYbinding_info_setter,T157);
  T161 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T162 = fun_36;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_info),VARREF(YevalSastYbinding_info_setter),VARREF(YLanyG),T162);
  lit_48 = YPPsym((P)"binding-module-name");
  lit_49 = YPPsym((P)"b");
  T163 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_37 = YPmet(FUNCODEREF(fun_binding_module_name_37),LITREF(lit_48),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSastYbinding_module_name);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSastYbinding_module_name);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_binding_module_name_37;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSastYbinding_module_name,T164);
  T169 = VARSET(YevalSastYbinding_global_box,VARREF(YevalSastYbinding_info));
  T168 = T169;
  return T168;
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
  lit_50 = YPPsym((P)"maybe-log-dependency");
  lit_51 = YPPsym((P)"dependable");
  lit_52 = YPPsym((P)"dtype");
  T0 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPmet(FUNCODEREF(YevalSastYmaybe_log_dependency),LITREF(lit_50),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T1);
  lit_53 = YPPsym((P)"macro-expander");
  lit_54 = YPPsym((P)"macro-binding");
  T2 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPmet(FUNCODEREF(YevalSastYmacro_expander),LITREF(lit_53),T2,ENVNUL,PNUL,YPfalse);
  T3 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T3);
  lit_55 = YPPsym((P)"<local-binding>");
  T5 = (P)YPpair(VARREF(YevalSastYLbindingG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_55),T5);
  VARSET(YevalSastYLlocal_bindingG,T4);
  lit_56 = YPPsym((P)"binding-value");
  T6 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_40 = YPmet(FUNCODEREF(fun_binding_value_40),LITREF(lit_56),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YevalSastYbinding_value);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSastYbinding_value);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_binding_value_40;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSastYbinding_value,T7);
  lit_57 = YPPsym((P)"binding-value-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_41 = YPmet(FUNCODEREF(fun_binding_value_setter_41),LITREF(lit_57),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YevalSastYbinding_value_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(YevalSastYbinding_value_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_binding_value_setter_41;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSastYbinding_value_setter,T12);
  T16 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_42;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T17);
  lit_58 = YPPsym((P)"binding-mutable?");
  T18 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_43 = YPmet(FUNCODEREF(fun_binding_mutableQ_43),LITREF(lit_58),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YevalSastYbinding_mutableQ);
  if (T21 != YPfalse) {
    T20 = VARREF(YevalSastYbinding_mutableQ);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_binding_mutableQ_43;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YevalSastYbinding_mutableQ,T19);
  lit_59 = YPPsym((P)"binding-mutable?-setter");
  T23 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_44 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_44),LITREF(lit_59),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YevalSastYbinding_mutableQ_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YevalSastYbinding_mutableQ_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_binding_mutableQ_setter_44;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YevalSastYbinding_mutableQ_setter,T24);
  T28 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_45;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T29);
  lit_60 = YPPsym((P)"binding-dynamic-extent?");
  T30 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_46 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_46),LITREF(lit_60),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSastYbinding_dynamic_extentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYbinding_dynamic_extentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_binding_dynamic_extentQ_46;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYbinding_dynamic_extentQ,T31);
  lit_61 = YPPsym((P)"binding-dynamic-extent?-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_47 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_47),LITREF(lit_61),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSastYbinding_dynamic_extentQ_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSastYbinding_dynamic_extentQ_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_binding_dynamic_extentQ_setter_47;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T36);
  T40 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T41 = fun_48;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T41);
  lit_62 = YPPsym((P)"binding-dotted?");
  T42 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_49 = YPmet(FUNCODEREF(fun_binding_dottedQ_49),LITREF(lit_62),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YevalSastYbinding_dottedQ);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYbinding_dottedQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_binding_dottedQ_49;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYbinding_dottedQ,T43);
  lit_63 = YPPsym((P)"binding-dotted?-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_50 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_50),LITREF(lit_63),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YevalSastYbinding_dottedQ_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalSastYbinding_dottedQ_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_binding_dottedQ_setter_50;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalSastYbinding_dottedQ_setter,T48);
  T52 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T53 = fun_51;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T53);
  lit_64 = YPPsym((P)"binding-index");
  T54 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_52 = YPmet(FUNCODEREF(fun_binding_index_52),LITREF(lit_64),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYbinding_index);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYbinding_index);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_binding_index_52;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYbinding_index,T55);
  lit_65 = YPPsym((P)"binding-index-setter");
  T59 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_53 = YPmet(FUNCODEREF(fun_binding_index_setter_53),LITREF(lit_65),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YevalSastYbinding_index_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(YevalSastYbinding_index_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_binding_index_setter_53;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YevalSastYbinding_index_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_54;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T65);
  lit_66 = YPPsym((P)"<compile-time>");
  T67 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_66),T67);
  VARSET(YevalSastYLcompile_timeG,T66);
  lit_67 = YPPsym((P)"compile-time-program");
  T68 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_55 = YPmet(FUNCODEREF(fun_compile_time_program_55),LITREF(lit_67),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYcompile_time_program);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYcompile_time_program);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_compile_time_program_55;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYcompile_time_program,T69);
  lit_68 = YPPsym((P)"compile-time-program-setter");
  T73 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_56 = YPmet(FUNCODEREF(fun_compile_time_program_setter_56),LITREF(lit_68),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSastYcompile_time_program_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYcompile_time_program_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_compile_time_program_setter_56;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYcompile_time_program_setter,T74);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_69 = YPPsym((P)"<reference>");
  T79 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T78 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_69),T79);
  VARSET(YevalSastYLreferenceG,T78);
  lit_70 = YPPsym((P)"<real-reference>");
  T81 = (P)YPpair(VARREF(YevalSastYLreferenceG),Ynil);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_70),T81);
  VARSET(YevalSastYLreal_referenceG,T80);
  lit_71 = YPPsym((P)"reference-binding");
  T82 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_57 = YPmet(FUNCODEREF(fun_reference_binding_57),LITREF(lit_71),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYreference_binding);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYreference_binding);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_reference_binding_57;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYreference_binding,T83);
  lit_72 = YPPsym((P)"reference-binding-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_58 = YPmet(FUNCODEREF(fun_reference_binding_setter_58),LITREF(lit_72),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYreference_binding_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYreference_binding_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_reference_binding_setter_58;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYreference_binding_setter,T88);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_73 = YPPsym((P)"<local-reference>");
  T93 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_73),T93);
  VARSET(YevalSastYLlocal_referenceG,T92);
  lit_74 = YPPsym((P)"reference-called-function?");
  T94 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_59 = YPmet(FUNCODEREF(fun_reference_called_functionQ_59),LITREF(lit_74),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSastYreference_called_functionQ);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYreference_called_functionQ);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_reference_called_functionQ_59;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYreference_called_functionQ,T95);
  lit_75 = YPPsym((P)"reference-called-function?-setter");
  T99 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_60 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_60),LITREF(lit_75),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSastYreference_called_functionQ_setter);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSastYreference_called_functionQ_setter);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_reference_called_functionQ_setter_60;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSastYreference_called_functionQ_setter,T100);
  T104 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T105 = fun_61;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T105);
  lit_76 = YPPsym((P)"reference-frame-number");
  T106 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_62 = YPmet(FUNCODEREF(fun_reference_frame_number_62),LITREF(lit_76),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYreference_frame_number);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYreference_frame_number);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_reference_frame_number_62;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYreference_frame_number,T107);
  lit_77 = YPPsym((P)"reference-frame-number-setter");
  T111 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_63 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_63),LITREF(lit_77),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYreference_frame_number_setter);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYreference_frame_number_setter);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_reference_frame_number_setter_63;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYreference_frame_number_setter,T112);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"reference-frame-offset");
  T116 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_64 = YPmet(FUNCODEREF(fun_reference_frame_offset_64),LITREF(lit_78),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YevalSastYreference_frame_offset);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYreference_frame_offset);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_reference_frame_offset_64;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYreference_frame_offset,T117);
  lit_79 = YPPsym((P)"reference-frame-offset-setter");
  T121 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_65 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_65),LITREF(lit_79),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YevalSastYreference_frame_offset_setter);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSastYreference_frame_offset_setter);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_reference_frame_offset_setter_65;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYreference_frame_offset_setter,T122);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_80 = YPPsym((P)"<module-binding-reference>");
  T127 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T126 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_80),T127);
  VARSET(YevalSastYLmodule_binding_referenceG,T126);
  lit_81 = YPPsym((P)"<global-reference>");
  T129 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_81),T129);
  VARSET(YevalSastYLglobal_referenceG,T128);
  lit_82 = YPPsym((P)"<runtime-reference>");
  T131 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T130 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_82),T131);
  VARSET(YevalSastYLruntime_referenceG,T130);
  lit_83 = YPPsym((P)"<dynamic-reference>");
  T133 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T132 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_83),T133);
  VARSET(YevalSastYLdynamic_referenceG,T132);
  lit_84 = YPPsym((P)"<predefined-reference>");
  T135 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T134 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_84),T135);
  VARSET(YevalSastYLpredefined_referenceG,T134);
  lit_85 = YPPsym((P)"<static-module-binding-reference>");
  T137 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T136 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_85),T137);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T136);
  lit_86 = YPPsym((P)"<macro-reference>");
  T139 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T138 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_86),T139);
  VARSET(YevalSastYLmacro_referenceG,T138);
  lit_87 = YPPsym((P)"<magic-reference>");
  T141 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_87),T141);
  VARSET(YevalSastYLmagic_referenceG,T140);
  lit_88 = YPPsym((P)"<bound?>");
  T143 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T142 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_88),T143);
  VARSET(YevalSastYLboundQG,T142);
  lit_89 = YPPsym((P)"bound?-reference");
  T144 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_66 = YPmet(FUNCODEREF(fun_boundQ_reference_66),LITREF(lit_89),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYboundQ_reference);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYboundQ_reference);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_boundQ_reference_66;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYboundQ_reference,T145);
  lit_90 = YPPsym((P)"bound?-reference-setter");
  T149 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_67 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_67),LITREF(lit_90),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YevalSastYboundQ_reference_setter);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSastYboundQ_reference_setter);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_boundQ_reference_setter_67;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSastYboundQ_reference_setter,T150);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_91 = YPPsym((P)"<assignment>");
  T155 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_91),T155);
  VARSET(YevalSastYLassignmentG,T154);
  lit_92 = YPPsym((P)"assignment-form");
  T156 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_68 = YPmet(FUNCODEREF(fun_assignment_form_68),LITREF(lit_92),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYassignment_form);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYassignment_form);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_assignment_form_68;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYassignment_form,T157);
  lit_93 = YPPsym((P)"assignment-form-setter");
  T161 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_69 = YPmet(FUNCODEREF(fun_assignment_form_setter_69),LITREF(lit_93),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSastYassignment_form_setter);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYassignment_form_setter);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_assignment_form_setter_69;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYassignment_form_setter,T162);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_94 = YPPsym((P)"<local-assignment>");
  T167 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T166 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_94),T167);
  VARSET(YevalSastYLlocal_assignmentG,T166);
  lit_95 = YPPsym((P)"assignment-reference");
  T168 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_70 = YPmet(FUNCODEREF(fun_assignment_reference_70),LITREF(lit_95),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYassignment_reference);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYassignment_reference);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_assignment_reference_70;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYassignment_reference,T169);
  lit_96 = YPPsym((P)"assignment-reference-setter");
  T173 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_71 = YPmet(FUNCODEREF(fun_assignment_reference_setter_71),LITREF(lit_96),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSastYassignment_reference_setter);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSastYassignment_reference_setter);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_assignment_reference_setter_71;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSastYassignment_reference_setter,T174);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_97 = YPPsym((P)"<global-assignment>");
  T179 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T178 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_97),T179);
  VARSET(YevalSastYLglobal_assignmentG,T178);
  lit_98 = YPPsym((P)"assignment-binding");
  T182 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T181 = fun_assignment_binding_72 = YPmet(FUNCODEREF(fun_assignment_binding_72),LITREF(lit_98),T182,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalSastYassignment_binding);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSastYassignment_binding);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_assignment_binding_72;
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
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222;
DEFCREGS();
loop:
  lit_99 = YPPsym((P)"assignment-binding-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_73 = YPmet(FUNCODEREF(fun_assignment_binding_setter_73),LITREF(lit_99),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYassignment_binding_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYassignment_binding_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_assignment_binding_setter_73;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYassignment_binding_setter,T1);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_100 = YPPsym((P)"<runtime-assignment>");
  T6 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T5 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_100),T6);
  VARSET(YevalSastYLruntime_assignmentG,T5);
  lit_101 = YPPsym((P)"<dynamic-assignment>");
  T8 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_101),T8);
  VARSET(YevalSastYLdynamic_assignmentG,T7);
  lit_102 = YPPsym((P)"<definition>");
  T10 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T9 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_102),T10);
  VARSET(YevalSastYLdefinitionG,T9);
  lit_103 = YPPsym((P)"<variable-definition>");
  T12 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T11 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_103),T12);
  VARSET(YevalSastYLvariable_definitionG,T11);
  lit_104 = YPPsym((P)"<dynamic-definition>");
  T14 = (P)YPpair(VARREF(YevalSastYLvariable_definitionG),Ynil);
  T13 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_104),T14);
  VARSET(YevalSastYLdynamic_definitionG,T13);
  lit_105 = YPPsym((P)"<ast-generic-definition>");
  T16 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T15 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_105),T16);
  VARSET(YevalSastYLast_generic_definitionG,T15);
  lit_106 = YPPsym((P)"<ast-function-definition>");
  T18 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T17 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_106),T18);
  VARSET(YevalSastYLast_function_definitionG,T17);
  lit_107 = YPPsym((P)"<ast-method-definition>");
  T20 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T19 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_107),T20);
  VARSET(YevalSastYLast_method_definitionG,T19);
  lit_108 = YPPsym((P)"<ast-primitive-definition>");
  T22 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T21 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_108),T22);
  VARSET(YevalSastYLast_primitive_definitionG,T21);
  lit_109 = YPPsym((P)"<ast-macro-definition>");
  T24 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T23 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_109),T24);
  VARSET(YevalSastYLast_macro_definitionG,T23);
  lit_110 = YPPsym((P)"<ast-signature>");
  T26 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_110),T26);
  VARSET(YevalSastYLast_signatureG,T25);
  lit_111 = YPPsym((P)"signature-bindings");
  T27 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_74 = YPmet(FUNCODEREF(fun_signature_bindings_74),LITREF(lit_111),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSastYsignature_bindings);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYsignature_bindings);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_signature_bindings_74;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYsignature_bindings,T28);
  lit_112 = YPPsym((P)"signature-bindings-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_75 = YPmet(FUNCODEREF(fun_signature_bindings_setter_75),LITREF(lit_112),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSastYsignature_bindings_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSastYsignature_bindings_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_signature_bindings_setter_75;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSastYsignature_bindings_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_76;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T38);
  lit_113 = YPPsym((P)"signature-names");
  T39 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_77 = YPmet(FUNCODEREF(fun_signature_names_77),LITREF(lit_113),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYsignature_names);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYsignature_names);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_signature_names_77;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYsignature_names,T40);
  lit_114 = YPPsym((P)"signature-names-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_78 = YPmet(FUNCODEREF(fun_signature_names_setter_78),LITREF(lit_114),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYsignature_names_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYsignature_names_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_signature_names_setter_78;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYsignature_names_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_79;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T50);
  lit_115 = YPPsym((P)"signature-specs");
  T51 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_80 = YPmet(FUNCODEREF(fun_signature_specs_80),LITREF(lit_115),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYsignature_specs);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYsignature_specs);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_signature_specs_80;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYsignature_specs,T52);
  lit_116 = YPPsym((P)"signature-specs-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_81 = YPmet(FUNCODEREF(fun_signature_specs_setter_81),LITREF(lit_116),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYsignature_specs_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYsignature_specs_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_signature_specs_setter_81;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYsignature_specs_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_82;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T62);
  lit_117 = YPPsym((P)"signature-nary?");
  T63 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_83 = YPmet(FUNCODEREF(fun_signature_naryQ_83),LITREF(lit_117),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSastYsignature_naryQ);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYsignature_naryQ);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_signature_naryQ_83;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYsignature_naryQ,T64);
  lit_118 = YPPsym((P)"signature-nary?-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_84 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_84),LITREF(lit_118),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYsignature_naryQ_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYsignature_naryQ_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_signature_naryQ_setter_84;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYsignature_naryQ_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_85;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T74);
  lit_119 = YPPsym((P)"signature-arity");
  T75 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_86 = YPmet(FUNCODEREF(fun_signature_arity_86),LITREF(lit_119),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSastYsignature_arity);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYsignature_arity);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_signature_arity_86;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYsignature_arity,T76);
  lit_120 = YPPsym((P)"signature-arity-setter");
  T80 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_87 = YPmet(FUNCODEREF(fun_signature_arity_setter_87),LITREF(lit_120),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSastYsignature_arity_setter);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSastYsignature_arity_setter);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_signature_arity_setter_87;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSastYsignature_arity_setter,T81);
  T85 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T86 = fun_88;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T86);
  lit_121 = YPPsym((P)"signature-value");
  T87 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_89 = YPmet(FUNCODEREF(fun_signature_value_89),LITREF(lit_121),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYsignature_value);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYsignature_value);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_signature_value_89;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYsignature_value,T88);
  lit_122 = YPPsym((P)"signature-value-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_90 = YPmet(FUNCODEREF(fun_signature_value_setter_90),LITREF(lit_122),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSastYsignature_value_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYsignature_value_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_signature_value_setter_90;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYsignature_value_setter,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_91;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T98);
  lit_123 = YPPsym((P)"<ast-function>");
  T101 = (P)YPpair(VARREF(YevalSdependencyYLdependentG),Ynil);
  T100 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),T101);
  T99 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_123),T100);
  VARSET(YevalSastYLast_functionG,T99);
  lit_124 = YPPsym((P)"function-binding");
  T102 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_92 = YPmet(FUNCODEREF(fun_function_binding_92),LITREF(lit_124),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYfunction_binding);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYfunction_binding);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_function_binding_92;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYfunction_binding,T103);
  lit_125 = YPPsym((P)"function-binding-setter");
  T107 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_93 = YPmet(FUNCODEREF(fun_function_binding_setter_93),LITREF(lit_125),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSastYfunction_binding_setter);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYfunction_binding_setter);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_function_binding_setter_93;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYfunction_binding_setter,T108);
  T112 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T113 = fun_94;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T113);
  lit_126 = YPPsym((P)"function-debug-name");
  T114 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_95 = YPmet(FUNCODEREF(fun_function_debug_name_95),LITREF(lit_126),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSastYfunction_debug_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYfunction_debug_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_function_debug_name_95;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYfunction_debug_name,T115);
  lit_127 = YPPsym((P)"function-debug-name-setter");
  T119 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_96 = YPmet(FUNCODEREF(fun_function_debug_name_setter_96),LITREF(lit_127),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYfunction_debug_name_setter);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYfunction_debug_name_setter);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_function_debug_name_setter_96;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYfunction_debug_name_setter,T120);
  T124 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T125 = fun_97;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T125);
  lit_128 = YPPsym((P)"function-signature");
  T126 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_98 = YPmet(FUNCODEREF(fun_function_signature_98),LITREF(lit_128),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalSastYfunction_signature);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalSastYfunction_signature);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_function_signature_98;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalSastYfunction_signature,T127);
  lit_129 = YPPsym((P)"function-signature-setter");
  T131 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_99 = YPmet(FUNCODEREF(fun_function_signature_setter_99),LITREF(lit_129),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYfunction_signature_setter);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYfunction_signature_setter);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_function_signature_setter_99;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYfunction_signature_setter,T132);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_130 = YPPsym((P)"function-bindings");
  lit_131 = YPPsym((P)"x");
  T136 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPmet(FUNCODEREF(YevalSastYfunction_bindings),LITREF(lit_130),T136,ENVNUL,PNUL,YPfalse);
  T137 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T137);
  lit_132 = YPPsym((P)"function-specs");
  T138 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPmet(FUNCODEREF(YevalSastYfunction_specs),LITREF(lit_132),T138,ENVNUL,PNUL,YPfalse);
  T139 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T139);
  lit_133 = YPPsym((P)"function-nary?");
  T140 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPmet(FUNCODEREF(YevalSastYfunction_naryQ),LITREF(lit_133),T140,ENVNUL,PNUL,YPfalse);
  T141 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T141);
  lit_134 = YPPsym((P)"function-value");
  T142 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPmet(FUNCODEREF(YevalSastYfunction_value),LITREF(lit_134),T142,ENVNUL,PNUL,YPfalse);
  T143 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T143);
  lit_135 = YPPsym((P)"function-kind");
  lit_136 = YPsb((P)"FUN");
  T144 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_104 = YPmet(FUNCODEREF(fun_function_kind_104),LITREF(lit_135),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYfunction_kind);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYfunction_kind);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_function_kind_104;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYfunction_kind,T145);
  lit_137 = YPPsym((P)"function-display-name");
  lit_138 = YPPsym((P)"f");
  lit_139 = YPsb((P)"%s:%s");
  lit_140 = YPsb((P)"anonymous function");
  T149 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPmet(FUNCODEREF(YevalSastYfunction_display_name),LITREF(lit_137),T149,ENVNUL,PNUL,YPfalse);
  T150 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T150);
  lit_141 = YPPsym((P)"invalidate-dependent");
  lit_142 = YPPsym((P)"dependent");
  lit_143 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_144 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_145 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T151 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_51),LITREF(lit_52)),YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_106 = YPmet(FUNCODEREF(fun_invalidate_dependent_106),LITREF(lit_141),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSdependencyYinvalidate_dependent);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSdependencyYinvalidate_dependent);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_invalidate_dependent_106;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSdependencyYinvalidate_dependent,T152);
  lit_146 = YPPsym((P)"<programs>");
  T157 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T156 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_146),T157);
  VARSET(YevalSastYLprogramsG,T156);
  lit_147 = YPPsym((P)"as-lst");
  lit_148 = YPPsym((P)"e");
  lit_149 = YPPsym((P)"loop");
  lit_150 = YPPsym((P)"res");
  T159 = YPsig(YPPlist(2,LITREF(lit_150),LITREF(lit_148)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_107 = YPmet(FUNCODEREF(fun_loop_107),LITREF(lit_149),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_108 = YPmet(FUNCODEREF(fun_as_lst_108),LITREF(lit_147),T158,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSastYas_lst);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSastYas_lst);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_as_lst_108;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSastYas_lst,T160);
  lit_151 = YPPsym((P)"x-1424");
  lit_152 = YPPsym((P)"def-list");
  lit_153 = YPsb((P)"<");
  lit_154 = YPsb((P)">");
  lit_155 = YPsb((P)"$");
  lit_156 = YPsb((P)"-empty");
  lit_157 = YPPsym((P)"dc");
  lit_158 = YPPsym((P)"<lst>");
  lit_159 = YPPsym((P)"dv");
  lit_160 = YPPsym((P)"new");
  lit_161 = YPPsym((P)"df");
  lit_162 = YPPsym((P)"h");
  lit_163 = YPPsym((P)"t");
  lit_164 = YPPsym((P)"head");
  lit_165 = YPPsym((P)"tail");
  lit_166 = YPPsym((P)"dm");
  lit_167 = YPPsym((P)"empty");
  lit_168 = YPPsym((P)"t=");
  lit_169 = YPPsym((P)"=>");
  T166 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1424_109 = YPmet(FUNCODEREF(fun_x_1424_109),LITREF(lit_151),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_111;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-list"),T167);
  lit_170 = YPPsym((P)"x-1428");
  lit_171 = YPPsym((P)"def-programs");
  T170 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1428_112 = YPmet(FUNCODEREF(fun_x_1428_112),LITREF(lit_170),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T171 = fun_114;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T171);
  lit_172 = YPPsym((P)"<ast-embodied-function>");
  T173 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T172 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_172),T173);
  VARSET(YevalSastYLast_embodied_functionG,T172);
  lit_173 = YPPsym((P)"function-body");
  T174 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_115 = YPmet(FUNCODEREF(fun_function_body_115),LITREF(lit_173),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSastYfunction_body);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSastYfunction_body);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_function_body_115;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSastYfunction_body,T175);
  lit_174 = YPPsym((P)"function-body-setter");
  T179 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_116 = YPmet(FUNCODEREF(fun_function_body_setter_116),LITREF(lit_174),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSastYfunction_body_setter);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSastYfunction_body_setter);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_function_body_setter_116;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSastYfunction_body_setter,T180);
  T184 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T185 = fun_117;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T185);
  lit_175 = YPPsym((P)"function-index");
  T186 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_118 = YPmet(FUNCODEREF(fun_function_index_118),LITREF(lit_175),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSastYfunction_index);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSastYfunction_index);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_function_index_118;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSastYfunction_index,T187);
  lit_176 = YPPsym((P)"function-index-setter");
  T191 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_119 = YPmet(FUNCODEREF(fun_function_index_setter_119),LITREF(lit_176),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSastYfunction_index_setter);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSastYfunction_index_setter);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_function_index_setter_119;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSastYfunction_index_setter,T192);
  T196 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T196,ENVNUL,PNUL,YPfalse);
  T197 = fun_120;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T197);
  lit_177 = YPPsym((P)"function-temporaries");
  T198 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_121 = YPmet(FUNCODEREF(fun_function_temporaries_121),LITREF(lit_177),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSastYfunction_temporaries);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSastYfunction_temporaries);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_function_temporaries_121;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSastYfunction_temporaries,T199);
  lit_178 = YPPsym((P)"function-temporaries-setter");
  T203 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_122 = YPmet(FUNCODEREF(fun_function_temporaries_setter_122),LITREF(lit_178),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSastYfunction_temporaries_setter);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSastYfunction_temporaries_setter);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_function_temporaries_setter_122;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSastYfunction_temporaries_setter,T204);
  T208 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T208,ENVNUL,PNUL,YPfalse);
  T209 = fun_123;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T209);
  lit_179 = YPPsym((P)"function-registers");
  T210 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_124 = YPmet(FUNCODEREF(fun_function_registers_124),LITREF(lit_179),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YevalSastYfunction_registers);
  if (T213 != YPfalse) {
    T212 = VARREF(YevalSastYfunction_registers);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_function_registers_124;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YevalSastYfunction_registers,T211);
  lit_180 = YPPsym((P)"function-registers-setter");
  T217 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T216 = fun_function_registers_setter_125 = YPmet(FUNCODEREF(fun_function_registers_setter_125),LITREF(lit_180),T217,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSastYfunction_registers_setter);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSastYfunction_registers_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_function_registers_setter_125;
  T219 = XCALL2(1,VARREF(YPdefine_method),T220,T222);
  T218 = VARSET(YevalSastYfunction_registers_setter,T219);
  T215 = T218;
  return T215;
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
  P T208,T209,T210,T211,T212,T213,T214;
DEFCREGS();
loop:
  T0 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T1 = fun_126;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T1);
  lit_181 = YPPsym((P)"function-data-refs");
  T2 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_127 = YPmet(FUNCODEREF(fun_function_data_refs_127),LITREF(lit_181),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSastYfunction_data_refs);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSastYfunction_data_refs);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_function_data_refs_127;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSastYfunction_data_refs,T3);
  lit_182 = YPPsym((P)"function-data-refs-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_128 = YPmet(FUNCODEREF(fun_function_data_refs_setter_128),LITREF(lit_182),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYfunction_data_refs_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYfunction_data_refs_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_function_data_refs_setter_128;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYfunction_data_refs_setter,T8);
  T12 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T13 = fun_129;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_data_refs),VARREF(YevalSastYfunction_data_refs_setter),VARREF(YLanyG),T13);
  lit_183 = YPPsym((P)"function-self-recursive?");
  T14 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_130 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_130),LITREF(lit_183),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSastYfunction_self_recursiveQ);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSastYfunction_self_recursiveQ);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_function_self_recursiveQ_130;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSastYfunction_self_recursiveQ,T15);
  lit_184 = YPPsym((P)"function-self-recursive?-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_131 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_131),LITREF(lit_184),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSastYfunction_self_recursiveQ_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSastYfunction_self_recursiveQ_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_function_self_recursiveQ_setter_131;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSastYfunction_self_recursiveQ_setter,T20);
  T24 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T25 = fun_132;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_self_recursiveQ),VARREF(YevalSastYfunction_self_recursiveQ_setter),VARREF(YLanyG),T25);
  lit_185 = YPPsym((P)"function-source");
  T26 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_133 = YPmet(FUNCODEREF(fun_function_source_133),LITREF(lit_185),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSastYfunction_source);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSastYfunction_source);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_function_source_133;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSastYfunction_source,T27);
  lit_186 = YPPsym((P)"function-source-setter");
  T31 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_134 = YPmet(FUNCODEREF(fun_function_source_setter_134),LITREF(lit_186),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YevalSastYfunction_source_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YevalSastYfunction_source_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_function_source_setter_134;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YevalSastYfunction_source_setter,T32);
  T36 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T37 = fun_135;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T37);
  lit_187 = YPPsym((P)"<free-environment>");
  T40 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T39 = (P)YPpair(VARREF(YLlstG),T40);
  T38 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_187),T39);
  VARSET(YevalSastYLfree_environmentG,T38);
  T41 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T41);
  lit_188 = YPPsym((P)"free-environment");
  T42 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_188),T42,ENVNUL,PNUL,YPfalse);
  T43 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T43);
  T45 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T44 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,T45),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_137 = YPmet(FUNCODEREF(fun_empty_137),LITREF(lit_167),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooScolsScolYempty);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooScolsScolYempty);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_empty_137;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooScolsScolYempty,T46);
  lit_189 = YPPsym((P)"<ast-method>");
  T51 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T50 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_189),T51);
  VARSET(YevalSastYLast_methodG,T50);
  lit_190 = YPPsym((P)"function-free");
  T52 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_138 = YPmet(FUNCODEREF(fun_function_free_138),LITREF(lit_190),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSastYfunction_free);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSastYfunction_free);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_function_free_138;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSastYfunction_free,T53);
  lit_191 = YPPsym((P)"function-free-setter");
  T57 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_139 = YPmet(FUNCODEREF(fun_function_free_setter_139),LITREF(lit_191),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSastYfunction_free_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSastYfunction_free_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_function_free_setter_139;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSastYfunction_free_setter,T58);
  T62 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T63 = fun_140;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T63);
  lit_192 = YPsb((P)"MET");
  T64 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_141 = YPmet(FUNCODEREF(fun_function_kind_141),LITREF(lit_135),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSastYfunction_kind);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSastYfunction_kind);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_function_kind_141;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSastYfunction_kind,T65);
  lit_193 = YPPsym((P)"<ast-primitive>");
  T70 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T69 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_193),T70);
  VARSET(YevalSastYLast_primitiveG,T69);
  lit_194 = YPsb((P)"PRM");
  T71 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_142 = YPmet(FUNCODEREF(fun_function_kind_142),LITREF(lit_135),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSastYfunction_kind);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSastYfunction_kind);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_function_kind_142;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSastYfunction_kind,T72);
  lit_195 = YPPsym((P)"<ast-generic>");
  T77 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T76 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_195),T77);
  VARSET(YevalSastYLast_genericG,T76);
  lit_196 = YPsb((P)"GEN");
  T78 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_143 = YPmet(FUNCODEREF(fun_function_kind_143),LITREF(lit_135),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalSastYfunction_kind);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSastYfunction_kind);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_function_kind_143;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSastYfunction_kind,T79);
  lit_197 = YPPsym((P)"<alternative>");
  T84 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T83 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_197),T84);
  VARSET(YevalSastYLalternativeG,T83);
  lit_198 = YPPsym((P)"alternative-condition");
  T85 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_144 = YPmet(FUNCODEREF(fun_alternative_condition_144),LITREF(lit_198),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSastYalternative_condition);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSastYalternative_condition);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_alternative_condition_144;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSastYalternative_condition,T86);
  lit_199 = YPPsym((P)"alternative-condition-setter");
  T90 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_145 = YPmet(FUNCODEREF(fun_alternative_condition_setter_145),LITREF(lit_199),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSastYalternative_condition_setter);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYalternative_condition_setter);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_alternative_condition_setter_145;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYalternative_condition_setter,T91);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_200 = YPPsym((P)"alternative-consequent");
  T95 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_146 = YPmet(FUNCODEREF(fun_alternative_consequent_146),LITREF(lit_200),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYalternative_consequent);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYalternative_consequent);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_alternative_consequent_146;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYalternative_consequent,T96);
  lit_201 = YPPsym((P)"alternative-consequent-setter");
  T100 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_147 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_147),LITREF(lit_201),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYalternative_consequent_setter);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYalternative_consequent_setter);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_alternative_consequent_setter_147;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYalternative_consequent_setter,T101);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_202 = YPPsym((P)"alternative-alternant");
  T105 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_148 = YPmet(FUNCODEREF(fun_alternative_alternant_148),LITREF(lit_202),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYalternative_alternant);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYalternative_alternant);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_alternative_alternant_148;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYalternative_alternant,T106);
  lit_203 = YPPsym((P)"alternative-alternant-setter");
  T110 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_149 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_149),LITREF(lit_203),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSastYalternative_alternant_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSastYalternative_alternant_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_alternative_alternant_setter_149;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSastYalternative_alternant_setter,T111);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_204 = YPPsym((P)"<sequential>");
  T117 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T116 = (P)YPpair(VARREF(YLlstG),T117);
  T115 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_204),T116);
  VARSET(YevalSastYLsequentialG,T115);
  T118 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T118);
  lit_205 = YPPsym((P)"sequential");
  T119 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_205),T119,ENVNUL,PNUL,YPfalse);
  T120 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T120);
  T122 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T121 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,T122),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_151 = YPmet(FUNCODEREF(fun_empty_151),LITREF(lit_167),T121,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YgooScolsScolYempty);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooScolsScolYempty);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_empty_151;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooScolsScolYempty,T123);
  lit_206 = YPPsym((P)"<constant>");
  T128 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T127 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_206),T128);
  VARSET(YevalSastYLconstantG,T127);
  lit_207 = YPPsym((P)"constant-value");
  T129 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_152 = YPmet(FUNCODEREF(fun_constant_value_152),LITREF(lit_207),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSastYconstant_value);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYconstant_value);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_constant_value_152;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYconstant_value,T130);
  lit_208 = YPPsym((P)"constant-value-setter");
  T134 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_153 = YPmet(FUNCODEREF(fun_constant_value_setter_153),LITREF(lit_208),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSastYconstant_value_setter);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYconstant_value_setter);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_constant_value_setter_153;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYconstant_value_setter,T135);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_209 = YPPsym((P)"constant-index");
  T139 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_154 = YPmet(FUNCODEREF(fun_constant_index_154),LITREF(lit_209),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYconstant_index);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYconstant_index);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_constant_index_154;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYconstant_index,T140);
  lit_210 = YPPsym((P)"constant-index-setter");
  T144 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_155 = YPmet(FUNCODEREF(fun_constant_index_setter_155),LITREF(lit_210),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYconstant_index_setter);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYconstant_index_setter);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_constant_index_setter_155;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYconstant_index_setter,T145);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_211 = YPPsym((P)"<raw-constant>");
  T150 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T149 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_211),T150);
  VARSET(YevalSastYLraw_constantG,T149);
  lit_212 = YPPsym((P)"<immediate-constant>");
  T152 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T151 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_212),T152);
  VARSET(YevalSastYLimmediate_constantG,T151);
  lit_213 = YPPsym((P)"<application>");
  T154 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T153 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_213),T154);
  VARSET(YevalSastYLapplicationG,T153);
  lit_214 = YPPsym((P)"application-arguments");
  T155 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_156 = YPmet(FUNCODEREF(fun_application_arguments_156),LITREF(lit_214),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSastYapplication_arguments);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYapplication_arguments);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_application_arguments_156;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYapplication_arguments,T156);
  lit_215 = YPPsym((P)"application-arguments-setter");
  T160 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_157 = YPmet(FUNCODEREF(fun_application_arguments_setter_157),LITREF(lit_215),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYapplication_arguments_setter);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYapplication_arguments_setter);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_application_arguments_setter_157;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYapplication_arguments_setter,T161);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_216 = YPPsym((P)"application-tail?");
  T165 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_158 = YPmet(FUNCODEREF(fun_application_tailQ_158),LITREF(lit_216),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSastYapplication_tailQ);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYapplication_tailQ);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_application_tailQ_158;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYapplication_tailQ,T166);
  lit_217 = YPPsym((P)"application-tail?-setter");
  T170 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_159 = YPmet(FUNCODEREF(fun_application_tailQ_setter_159),LITREF(lit_217),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSastYapplication_tailQ_setter);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYapplication_tailQ_setter);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_application_tailQ_setter_159;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYapplication_tailQ_setter,T171);
  T175 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T176 = fun_160;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T176);
  lit_218 = YPPsym((P)"<regular-application>");
  T178 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T177 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_218),T178);
  VARSET(YevalSastYLregular_applicationG,T177);
  lit_219 = YPPsym((P)"application-function");
  T179 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_161 = YPmet(FUNCODEREF(fun_application_function_161),LITREF(lit_219),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSastYapplication_function);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSastYapplication_function);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_application_function_161;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSastYapplication_function,T180);
  lit_220 = YPPsym((P)"application-function-setter");
  T184 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_162 = YPmet(FUNCODEREF(fun_application_function_setter_162),LITREF(lit_220),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSastYapplication_function_setter);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSastYapplication_function_setter);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_application_function_setter_162;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSastYapplication_function_setter,T185);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_221 = YPPsym((P)"application-known?");
  T189 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_163 = YPmet(FUNCODEREF(fun_application_knownQ_163),LITREF(lit_221),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSastYapplication_knownQ);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSastYapplication_knownQ);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_application_knownQ_163;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSastYapplication_knownQ,T190);
  lit_222 = YPPsym((P)"application-known?-setter");
  T194 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_164 = YPmet(FUNCODEREF(fun_application_knownQ_setter_164),LITREF(lit_222),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalSastYapplication_knownQ_setter);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSastYapplication_knownQ_setter);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_application_knownQ_setter_164;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSastYapplication_knownQ_setter,T195);
  T199 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T200 = fun_165;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T200);
  lit_223 = YPPsym((P)"<method-application>");
  T202 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T201 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_223),T202);
  VARSET(YevalSastYLmethod_applicationG,T201);
  lit_224 = YPPsym((P)"application-next-methods");
  T203 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_166 = YPmet(FUNCODEREF(fun_application_next_methods_166),LITREF(lit_224),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSastYapplication_next_methods);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSastYapplication_next_methods);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_application_next_methods_166;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSastYapplication_next_methods,T204);
  lit_225 = YPPsym((P)"application-next-methods-setter");
  T208 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_167 = YPmet(FUNCODEREF(fun_application_next_methods_setter_167),LITREF(lit_225),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSastYapplication_next_methods_setter);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSastYapplication_next_methods_setter);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_application_next_methods_setter_167;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSastYapplication_next_methods_setter,T209);
  T214 = XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T213 = T214;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205;
DEFCREGS();
loop:
  lit_226 = YPPsym((P)"<predefined-application>");
  T1 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_226),T1);
  VARSET(YevalSastYLpredefined_applicationG,T0);
  lit_227 = YPPsym((P)"application-binding");
  T2 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_168 = YPmet(FUNCODEREF(fun_application_binding_168),LITREF(lit_227),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSastYapplication_binding);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSastYapplication_binding);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_application_binding_168;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSastYapplication_binding,T3);
  lit_228 = YPPsym((P)"application-binding-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_169 = YPmet(FUNCODEREF(fun_application_binding_setter_169),LITREF(lit_228),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYapplication_binding_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYapplication_binding_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_application_binding_setter_169;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYapplication_binding_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_229 = YPPsym((P)"<fix-let>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_229),T13);
  VARSET(YevalSastYLfix_letG,T12);
  lit_230 = YPPsym((P)"fix-let-bindings");
  T14 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_170 = YPmet(FUNCODEREF(fun_fix_let_bindings_170),LITREF(lit_230),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSastYfix_let_bindings);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSastYfix_let_bindings);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_fix_let_bindings_170;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSastYfix_let_bindings,T15);
  lit_231 = YPPsym((P)"fix-let-bindings-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_171 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_171),LITREF(lit_231),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSastYfix_let_bindings_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSastYfix_let_bindings_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_fix_let_bindings_setter_171;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSastYfix_let_bindings_setter,T20);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_232 = YPPsym((P)"fix-let-types");
  T24 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_172 = YPmet(FUNCODEREF(fun_fix_let_types_172),LITREF(lit_232),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSastYfix_let_types);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYfix_let_types);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_fix_let_types_172;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYfix_let_types,T25);
  lit_233 = YPPsym((P)"fix-let-types-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_173 = YPmet(FUNCODEREF(fun_fix_let_types_setter_173),LITREF(lit_233),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSastYfix_let_types_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSastYfix_let_types_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_fix_let_types_setter_173;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSastYfix_let_types_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_234 = YPPsym((P)"fix-let-arguments");
  T34 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_174 = YPmet(FUNCODEREF(fun_fix_let_arguments_174),LITREF(lit_234),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YevalSastYfix_let_arguments);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSastYfix_let_arguments);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_fix_let_arguments_174;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSastYfix_let_arguments,T35);
  lit_235 = YPPsym((P)"fix-let-arguments-setter");
  T39 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_175 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_175),LITREF(lit_235),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYfix_let_arguments_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYfix_let_arguments_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_fix_let_arguments_setter_175;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYfix_let_arguments_setter,T40);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_236 = YPPsym((P)"fix-let-body");
  T44 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_176 = YPmet(FUNCODEREF(fun_fix_let_body_176),LITREF(lit_236),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYfix_let_body);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYfix_let_body);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_fix_let_body_176;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYfix_let_body,T45);
  lit_237 = YPPsym((P)"fix-let-body-setter");
  T49 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_177 = YPmet(FUNCODEREF(fun_fix_let_body_setter_177),LITREF(lit_237),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YevalSastYfix_let_body_setter);
  if (T52 != YPfalse) {
    T51 = VARREF(YevalSastYfix_let_body_setter);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_fix_let_body_setter_177;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YevalSastYfix_let_body_setter,T50);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_238 = YPPsym((P)"<fab-list>");
  T56 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T55 = (P)YPpair(VARREF(YLlstG),T56);
  T54 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_238),T55);
  VARSET(YevalSastYLfab_listG,T54);
  T57 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T57);
  lit_239 = YPPsym((P)"fab-list");
  T58 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_239),T58,ENVNUL,PNUL,YPfalse);
  T59 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T59);
  T61 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T60 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,T61),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_179 = YPmet(FUNCODEREF(fun_empty_179),LITREF(lit_167),T60,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooScolsScolYempty);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooScolsScolYempty);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_empty_179;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooScolsScolYempty,T62);
  lit_240 = YPPsym((P)"<arguments>");
  T68 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T67 = (P)YPpair(VARREF(YLlstG),T68);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_240),T67);
  VARSET(YevalSastYLargumentsG,T66);
  T69 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T69);
  T70 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_15),T70,ENVNUL,PNUL,YPfalse);
  T71 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T71);
  T73 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T72 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,T73),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_181 = YPmet(FUNCODEREF(fun_empty_181),LITREF(lit_167),T72,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YgooScolsScolYempty);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooScolsScolYempty);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_empty_181;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YgooScolsScolYempty,T74);
  lit_241 = YPPsym((P)"<locals>");
  T79 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T78 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_241),T79);
  VARSET(YevalSastYLlocalsG,T78);
  lit_242 = YPPsym((P)"locals-bindings");
  T80 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_182 = YPmet(FUNCODEREF(fun_locals_bindings_182),LITREF(lit_242),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSastYlocals_bindings);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSastYlocals_bindings);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_locals_bindings_182;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSastYlocals_bindings,T81);
  lit_243 = YPPsym((P)"locals-bindings-setter");
  T85 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_183 = YPmet(FUNCODEREF(fun_locals_bindings_setter_183),LITREF(lit_243),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSastYlocals_bindings_setter);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSastYlocals_bindings_setter);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_locals_bindings_setter_183;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSastYlocals_bindings_setter,T86);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_244 = YPPsym((P)"locals-functions");
  T90 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_184 = YPmet(FUNCODEREF(fun_locals_functions_184),LITREF(lit_244),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSastYlocals_functions);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYlocals_functions);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_locals_functions_184;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYlocals_functions,T91);
  lit_245 = YPPsym((P)"locals-functions-setter");
  T95 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_185 = YPmet(FUNCODEREF(fun_locals_functions_setter_185),LITREF(lit_245),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYlocals_functions_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYlocals_functions_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_locals_functions_setter_185;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYlocals_functions_setter,T96);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_246 = YPPsym((P)"locals-body");
  T100 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_186 = YPmet(FUNCODEREF(fun_locals_body_186),LITREF(lit_246),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYlocals_body);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYlocals_body);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_locals_body_186;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYlocals_body,T101);
  lit_247 = YPPsym((P)"locals-body-setter");
  T105 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_187 = YPmet(FUNCODEREF(fun_locals_body_setter_187),LITREF(lit_247),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYlocals_body_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYlocals_body_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_locals_body_setter_187;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYlocals_body_setter,T106);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_248 = YPPsym((P)"<bind-exit>");
  T111 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T110 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_248),T111);
  VARSET(YevalSastYLbind_exitG,T110);
  lit_249 = YPPsym((P)"bind-exit-main-fun");
  T112 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_188 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_188),LITREF(lit_249),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSastYbind_exit_main_fun);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSastYbind_exit_main_fun);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_bind_exit_main_fun_188;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSastYbind_exit_main_fun,T113);
  lit_250 = YPPsym((P)"bind-exit-main-fun-setter");
  T117 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_189 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_189),LITREF(lit_250),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSastYbind_exit_main_fun_setter);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSastYbind_exit_main_fun_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_bind_exit_main_fun_setter_189;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSastYbind_exit_main_fun_setter,T118);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_251 = YPPsym((P)"<unwind-protect>");
  T123 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T122 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_251),T123);
  VARSET(YevalSastYLunwind_protectG,T122);
  lit_252 = YPPsym((P)"unwind-protect-protected-thunk");
  T124 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_190 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_190),LITREF(lit_252),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYunwind_protect_protected_thunk);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYunwind_protect_protected_thunk);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_unwind_protect_protected_thunk_190;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYunwind_protect_protected_thunk,T125);
  lit_253 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  T129 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_191 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_191),LITREF(lit_253),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSastYunwind_protect_protected_thunk_setter);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYunwind_protect_protected_thunk_setter);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_unwind_protect_protected_thunk_setter_191;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T130);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_254 = YPPsym((P)"unwind-protect-cleanup-thunk");
  T134 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_192 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_192),LITREF(lit_254),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYunwind_protect_cleanup_thunk);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_unwind_protect_cleanup_thunk_192;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T135);
  lit_255 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  T139 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_193 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_193),LITREF(lit_255),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk_setter);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYunwind_protect_cleanup_thunk_setter);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_unwind_protect_cleanup_thunk_setter_193;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T140);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_256 = YPPsym((P)"<monitor>");
  T145 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T144 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_256),T145);
  VARSET(YevalSastYLmonitorG,T144);
  lit_257 = YPPsym((P)"monitor-type");
  T146 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_194 = YPmet(FUNCODEREF(fun_monitor_type_194),LITREF(lit_257),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSastYmonitor_type);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSastYmonitor_type);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_monitor_type_194;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSastYmonitor_type,T147);
  lit_258 = YPPsym((P)"monitor-type-setter");
  T151 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_195 = YPmet(FUNCODEREF(fun_monitor_type_setter_195),LITREF(lit_258),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSastYmonitor_type_setter);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSastYmonitor_type_setter);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_monitor_type_setter_195;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSastYmonitor_type_setter,T152);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_259 = YPPsym((P)"monitor-info");
  T156 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_196 = YPmet(FUNCODEREF(fun_monitor_info_196),LITREF(lit_259),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYmonitor_info);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYmonitor_info);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_monitor_info_196;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYmonitor_info,T157);
  lit_260 = YPPsym((P)"monitor-info-setter");
  T161 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_197 = YPmet(FUNCODEREF(fun_monitor_info_setter_197),LITREF(lit_260),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSastYmonitor_info_setter);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYmonitor_info_setter);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_monitor_info_setter_197;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYmonitor_info_setter,T162);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_261 = YPPsym((P)"monitor-test");
  T166 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_198 = YPmet(FUNCODEREF(fun_monitor_test_198),LITREF(lit_261),T166,ENVNUL,PNUL,YPfalse);
  T169 = BOUNDP(YevalSastYmonitor_test);
  if (T169 != YPfalse) {
    T168 = VARREF(YevalSastYmonitor_test);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_monitor_test_198;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T170);
  VARSET(YevalSastYmonitor_test,T167);
  lit_262 = YPPsym((P)"monitor-test-setter");
  T171 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_199 = YPmet(FUNCODEREF(fun_monitor_test_setter_199),LITREF(lit_262),T171,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(YevalSastYmonitor_test_setter);
  if (T174 != YPfalse) {
    T173 = VARREF(YevalSastYmonitor_test_setter);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_monitor_test_setter_199;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YevalSastYmonitor_test_setter,T172);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_263 = YPPsym((P)"monitor-handler");
  T176 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_200 = YPmet(FUNCODEREF(fun_monitor_handler_200),LITREF(lit_263),T176,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalSastYmonitor_handler);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSastYmonitor_handler);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_monitor_handler_200;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSastYmonitor_handler,T177);
  lit_264 = YPPsym((P)"monitor-handler-setter");
  T181 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_201 = YPmet(FUNCODEREF(fun_monitor_handler_setter_201),LITREF(lit_264),T181,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSastYmonitor_handler_setter);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSastYmonitor_handler_setter);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_monitor_handler_setter_201;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSastYmonitor_handler_setter,T182);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_265 = YPPsym((P)"monitor-main-thunk");
  T186 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_202 = YPmet(FUNCODEREF(fun_monitor_main_thunk_202),LITREF(lit_265),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSastYmonitor_main_thunk);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSastYmonitor_main_thunk);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_monitor_main_thunk_202;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSastYmonitor_main_thunk,T187);
  lit_266 = YPPsym((P)"monitor-main-thunk-setter");
  T191 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_203 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_203),LITREF(lit_266),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSastYmonitor_main_thunk_setter);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSastYmonitor_main_thunk_setter);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_monitor_main_thunk_setter_203;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSastYmonitor_main_thunk_setter,T192);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_267 = YPPsym((P)"<static-environment>");
  T197 = (P)YPpair(VARREF(YLanyG),Ynil);
  T196 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_267),T197);
  VARSET(YevalSastYLstatic_environmentG,T196);
  lit_268 = YPPsym((P)"environment-next");
  T200 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T199 = fun_environment_next_204 = YPmet(FUNCODEREF(fun_environment_next_204),LITREF(lit_268),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSastYenvironment_next);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSastYenvironment_next);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_environment_next_204;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  T201 = VARSET(YevalSastYenvironment_next,T202);
  T198 = T201;
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
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282;
DEFCREGS();
loop:
  lit_269 = YPPsym((P)"environment-next-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_205 = YPmet(FUNCODEREF(fun_environment_next_setter_205),LITREF(lit_269),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYenvironment_next_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYenvironment_next_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_environment_next_setter_205;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYenvironment_next_setter,T1);
  T5 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T6 = fun_206;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T6);
  lit_270 = YPPsym((P)"environment-bindings");
  T7 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_207 = YPmet(FUNCODEREF(fun_environment_bindings_207),LITREF(lit_270),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYenvironment_bindings);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYenvironment_bindings);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_environment_bindings_207;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYenvironment_bindings,T8);
  lit_271 = YPPsym((P)"environment-bindings-setter");
  T12 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_208 = YPmet(FUNCODEREF(fun_environment_bindings_setter_208),LITREF(lit_271),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSastYenvironment_bindings_setter);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYenvironment_bindings_setter);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_environment_bindings_setter_208;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYenvironment_bindings_setter,T13);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_272 = YPPsym((P)"<static-global-environment>");
  T18 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T17 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_272),T18);
  VARSET(YevalSastYLstatic_global_environmentG,T17);
  lit_273 = YPPsym((P)"environment-module");
  T19 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_209 = YPmet(FUNCODEREF(fun_environment_module_209),LITREF(lit_273),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSastYenvironment_module);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSastYenvironment_module);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_environment_module_209;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSastYenvironment_module,T20);
  lit_274 = YPPsym((P)"environment-module-setter");
  T24 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_210 = YPmet(FUNCODEREF(fun_environment_module_setter_210),LITREF(lit_274),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSastYenvironment_module_setter);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYenvironment_module_setter);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_environment_module_setter_210;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYenvironment_module_setter,T25);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_275 = YPPsym((P)"environment-module-loader");
  T29 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_211 = YPmet(FUNCODEREF(fun_environment_module_loader_211),LITREF(lit_275),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSastYenvironment_module_loader);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSastYenvironment_module_loader);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_environment_module_loader_211;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSastYenvironment_module_loader,T30);
  lit_276 = YPPsym((P)"environment-module-loader-setter");
  T34 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_212 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_212),LITREF(lit_276),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YevalSastYenvironment_module_loader_setter);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSastYenvironment_module_loader_setter);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_environment_module_loader_setter_212;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSastYenvironment_module_loader_setter,T35);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_277 = YPPsym((P)"environment-uses-modules");
  T39 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_213 = YPmet(FUNCODEREF(fun_environment_uses_modules_213),LITREF(lit_277),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYenvironment_uses_modules);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYenvironment_uses_modules);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_environment_uses_modules_213;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYenvironment_uses_modules,T40);
  lit_278 = YPPsym((P)"environment-uses-modules-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_214 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_214),LITREF(lit_278),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYenvironment_uses_modules_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYenvironment_uses_modules_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_environment_uses_modules_setter_214;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYenvironment_uses_modules_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_215;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T50);
  lit_279 = YPPsym((P)"environment-allows-foreign-names?");
  T51 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_216 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_216),LITREF(lit_279),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYenvironment_allows_foreign_namesQ);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_environment_allows_foreign_namesQ_216;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T52);
  lit_280 = YPPsym((P)"environment-allows-foreign-names?-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_217 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_217),LITREF(lit_280),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_environment_allows_foreign_namesQ_setter_217;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_218;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T62);
  lit_281 = YPPsym((P)"<static-empty-environment>");
  T64 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T63 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_281),T64);
  VARSET(YevalSastYLstatic_empty_environmentG,T63);
  T65 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T65);
  lit_282 = YPPsym((P)"<static-local-environment>");
  T67 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_282),T67);
  VARSET(YevalSastYLstatic_local_environmentG,T66);
  lit_283 = YPPsym((P)"env-object-name");
  lit_284 = YPPsym((P)"binding");
  T70 = YPsig(YPPlist(1,LITREF(lit_284)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_221 = YPmet(FUNCODEREF(fun_env_object_name_221),LITREF(lit_283),T68,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSastYenv_object_name);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSastYenv_object_name);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_env_object_name_221;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSastYenv_object_name,T71);
  lit_285 = YPPsym((P)"objectify");
  lit_286 = YPPsym((P)"r");
  lit_287 = YPPsym((P)"tail?");
  T75 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_222 = YPmet(FUNCODEREF(fun_objectify_222),LITREF(lit_285),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSastYobjectify);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYobjectify);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_objectify_222;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYobjectify,T76);
  lit_288 = YPPsym((P)"objectify-list");
  T80 = YPsig(YPPlist(4,LITREF(lit_138),LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_223 = YPmet(FUNCODEREF(fun_objectify_list_223),LITREF(lit_288),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSastYobjectify_list);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSastYobjectify_list);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_objectify_list_223;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSastYobjectify_list,T81);
  T85 = YPsig(YPPlist(4,LITREF(lit_138),LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_224 = YPmet(FUNCODEREF(fun_objectify_list_224),LITREF(lit_288),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSastYobjectify_list);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSastYobjectify_list);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_objectify_list_224;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSastYobjectify_list,T86);
  T90 = YPsig(YPPlist(4,LITREF(lit_138),LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_225 = YPmet(FUNCODEREF(fun_objectify_list_225),LITREF(lit_288),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSastYobjectify_list);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYobjectify_list);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_objectify_list_225;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYobjectify_list,T91);
  T95 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_226 = YPmet(FUNCODEREF(fun_objectify_226),LITREF(lit_285),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYobjectify);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYobjectify);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_objectify_226;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYobjectify,T96);
  T100 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_227 = YPmet(FUNCODEREF(fun_objectify_227),LITREF(lit_285),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYobjectify);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYobjectify);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_objectify_227;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYobjectify,T101);
  T105 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_228 = YPmet(FUNCODEREF(fun_objectify_228),LITREF(lit_285),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYobjectify);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYobjectify);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_objectify_228;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYobjectify,T106);
  T111 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T110 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,T111,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_229 = YPmet(FUNCODEREF(fun_objectify_229),LITREF(lit_285),T110,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYobjectify);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYobjectify);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_objectify_229;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYobjectify,T112);
  T116 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_230 = YPmet(FUNCODEREF(fun_objectify_230),LITREF(lit_285),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YevalSastYobjectify);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYobjectify);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_objectify_230;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYobjectify,T117);
  lit_289 = YPPsym((P)"objectify-quotation");
  lit_290 = YPPsym((P)"value");
  T121 = YPsig(YPPlist(2,LITREF(lit_290),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_231 = YPmet(FUNCODEREF(fun_objectify_quotation_231),LITREF(lit_289),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YevalSastYobjectify_quotation);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_objectify_quotation_231;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYobjectify_quotation,T122);
  T126 = YPsig(YPPlist(2,LITREF(lit_290),LITREF(lit_286)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_232 = YPmet(FUNCODEREF(fun_objectify_quotation_232),LITREF(lit_289),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalSastYobjectify_quotation);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_objectify_quotation_232;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalSastYobjectify_quotation,T127);
  T131 = YPsig(YPPlist(2,LITREF(lit_290),LITREF(lit_286)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_233 = YPmet(FUNCODEREF(fun_objectify_quotation_233),LITREF(lit_289),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYobjectify_quotation);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_objectify_quotation_233;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYobjectify_quotation,T132);
  lit_291 = YPPsym((P)"objectify-raw");
  T136 = YPsig(YPPlist(2,LITREF(lit_290),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_234 = YPmet(FUNCODEREF(fun_objectify_raw_234),LITREF(lit_291),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSastYobjectify_raw);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSastYobjectify_raw);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_objectify_raw_234;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSastYobjectify_raw,T137);
  lit_292 = YPPsym((P)"objectify-bound?");
  T141 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_235 = YPmet(FUNCODEREF(fun_objectify_boundQ_235),LITREF(lit_292),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSastYobjectify_boundQ);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSastYobjectify_boundQ);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_objectify_boundQ_235;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSastYobjectify_boundQ,T142);
  lit_293 = YPPsym((P)"objectify-compile-time");
  lit_294 = YPPsym((P)"program");
  lit_295 = YPPsym((P)"rt?");
  T146 = YPsig(YPPlist(4,LITREF(lit_294),LITREF(lit_286),LITREF(lit_287),LITREF(lit_295)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_236 = YPmet(FUNCODEREF(fun_objectify_compile_time_236),LITREF(lit_293),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSastYobjectify_compile_time);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSastYobjectify_compile_time);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_objectify_compile_time_236;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSastYobjectify_compile_time,T147);
  lit_296 = YPPsym((P)"objectify-alternative");
  lit_297 = YPPsym((P)"c");
  lit_298 = YPPsym((P)"a");
  T151 = YPsig(YPPlist(5,LITREF(lit_163),LITREF(lit_297),LITREF(lit_298),LITREF(lit_286),LITREF(lit_287)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_237 = YPmet(FUNCODEREF(fun_objectify_alternative_237),LITREF(lit_296),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSastYobjectify_alternative);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSastYobjectify_alternative);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_objectify_alternative_237;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSastYobjectify_alternative,T152);
  lit_299 = YPPsym((P)"sequentialize");
  lit_300 = YPPsym((P)"e*");
  T157 = YPsig(YPPlist(1,LITREF(lit_300)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_238 = YPmet(FUNCODEREF(fun_loop_238),LITREF(lit_149),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_300)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_239 = YPmet(FUNCODEREF(fun_sequentialize_239),LITREF(lit_299),T156,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSastYsequentialize);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSastYsequentialize);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sequentialize_239;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSastYsequentialize,T158);
  lit_301 = YPPsym((P)"transform-defs");
  T162 = YPsig(YPPlist(1,LITREF(lit_300)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_240 = YPmet(FUNCODEREF(fun_transform_defs_240),LITREF(lit_301),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSastYtransform_defs);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSastYtransform_defs);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_transform_defs_240;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSastYtransform_defs,T163);
  lit_302 = YPPsym((P)"objectify-sequential");
  T168 = YPsig(YPPlist(2,LITREF(lit_150),LITREF(lit_300)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_241 = YPmet(FUNCODEREF(fun_loop_241),LITREF(lit_149),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(3,LITREF(lit_300),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_242 = YPmet(FUNCODEREF(fun_objectify_sequential_242),LITREF(lit_302),T167,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYobjectify_sequential);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYobjectify_sequential);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_objectify_sequential_242;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYobjectify_sequential,T169);
  lit_303 = YPPsym((P)"objectify-application");
  lit_304 = YPPsym((P)"ff");
  T174 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(4,LITREF(lit_304),LITREF(lit_300),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_244 = YPmet(FUNCODEREF(fun_objectify_application_244),LITREF(lit_303),T173,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSastYobjectify_application);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSastYobjectify_application);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_objectify_application_244;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSastYobjectify_application,T175);
  T180 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(4,LITREF(lit_304),LITREF(lit_300),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_246 = YPmet(FUNCODEREF(fun_objectify_application_246),LITREF(lit_303),T179,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSastYobjectify_application);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSastYobjectify_application);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_objectify_application_246;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSastYobjectify_application,T181);
  T186 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(4,LITREF(lit_304),LITREF(lit_300),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_248 = YPmet(FUNCODEREF(fun_objectify_application_248),LITREF(lit_303),T185,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSastYobjectify_application);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSastYobjectify_application);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_objectify_application_248;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSastYobjectify_application,T187);
  lit_305 = YPPsym((P)"process-closed-application");
  lit_306 = YPsb((P)"incorrect regular arity");
  T191 = YPsig(YPPlist(4,LITREF(lit_138),LITREF(lit_300),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_249 = YPmet(FUNCODEREF(fun_process_closed_application_249),LITREF(lit_305),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSastYprocess_closed_application);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSastYprocess_closed_application);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_process_closed_application_249;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSastYprocess_closed_application,T192);
  lit_307 = YPPsym((P)"process-nary-closed-application");
  lit_308 = YPPsym((P)"pack-nary-args");
  lit_309 = YPPsym((P)"quote");
  lit_310 = YPPsym((P)"%pair");
  lit_311 = YPPsym((P)"pack-args");
  lit_312 = YPPsym((P)"v*");
  lit_313 = YPPsym((P)"t*");
  lit_314 = YPsb((P)"incorrect dotted arity");
  T198 = YPsig(YPPlist(1,LITREF(lit_300)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_250 = YPmet(FUNCODEREF(fun_pack_nary_args_250),LITREF(lit_308),T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(3,LITREF(lit_300),LITREF(lit_312),LITREF(lit_313)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_251 = YPmet(FUNCODEREF(fun_pack_args_251),LITREF(lit_311),T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(4,LITREF(lit_138),LITREF(lit_300),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_252 = YPmet(FUNCODEREF(fun_process_nary_closed_application_252),LITREF(lit_307),T196,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSastYprocess_nary_closed_application);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSastYprocess_nary_closed_application);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_process_nary_closed_application_252;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSastYprocess_nary_closed_application,T199);
  lit_315 = YPPsym((P)"convert2arguments");
  T203 = YPsig(YPPlist(1,LITREF(lit_300)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_253 = YPmet(FUNCODEREF(fun_convert2arguments_253),LITREF(lit_315),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSastYconvert2arguments);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSastYconvert2arguments);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_convert2arguments_253;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSastYconvert2arguments,T204);
  lit_316 = YPPsym((P)"objectify-assignment");
  lit_317 = YPsb((P)"Unsupported Set!: %=");
  T208 = YPsig(YPPlist(4,LITREF(lit_284),LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_254 = YPmet(FUNCODEREF(fun_objectify_assignment_254),LITREF(lit_316),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSastYobjectify_assignment);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_objectify_assignment_254;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSastYobjectify_assignment,T209);
  T213 = YPsig(YPPlist(4,LITREF(lit_284),LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_255 = YPmet(FUNCODEREF(fun_objectify_assignment_255),LITREF(lit_316),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSastYobjectify_assignment);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_objectify_assignment_255;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSastYobjectify_assignment,T214);
  lit_318 = YPPsym((P)"objectify-assignment-using");
  lit_319 = YPPsym((P)"ref");
  lit_320 = YPPsym((P)"val");
  T218 = YPsig(YPPlist(2,LITREF(lit_319),LITREF(lit_320)),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_256 = YPmet(FUNCODEREF(fun_objectify_assignment_using_256),LITREF(lit_318),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_objectify_assignment_using_256;
  T219 = XCALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSastYobjectify_assignment_using,T219);
  T223 = YPsig(YPPlist(2,LITREF(lit_319),LITREF(lit_320)),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_257 = YPmet(FUNCODEREF(fun_objectify_assignment_using_257),LITREF(lit_318),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T226 != YPfalse) {
    T225 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_objectify_assignment_using_257;
  T224 = XCALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YevalSastYobjectify_assignment_using,T224);
  T228 = YPsig(YPPlist(2,LITREF(lit_319),LITREF(lit_320)),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_258 = YPmet(FUNCODEREF(fun_objectify_assignment_using_258),LITREF(lit_318),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T231 != YPfalse) {
    T230 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_objectify_assignment_using_258;
  T229 = XCALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YevalSastYobjectify_assignment_using,T229);
  T233 = YPsig(YPPlist(2,LITREF(lit_319),LITREF(lit_320)),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_259 = YPmet(FUNCODEREF(fun_objectify_assignment_using_259),LITREF(lit_318),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T236 != YPfalse) {
    T235 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_objectify_assignment_using_259;
  T234 = XCALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YevalSastYobjectify_assignment_using,T234);
  lit_321 = YPsb((P)"Unable to assign to static module binding %=");
  T238 = YPsig(YPPlist(2,LITREF(lit_319),LITREF(lit_320)),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_260 = YPmet(FUNCODEREF(fun_objectify_assignment_using_260),LITREF(lit_318),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T241 != YPfalse) {
    T240 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_objectify_assignment_using_260;
  T239 = XCALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YevalSastYobjectify_assignment_using,T239);
  lit_322 = YPPsym((P)"update-binding-kind");
  lit_323 = YPPsym((P)"new-kind");
  lit_324 = YPPsym((P)"runtime");
  lit_325 = YPPsym((P)"magic");
  lit_326 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T243 = YPsig(YPPlist(2,LITREF(lit_284),LITREF(lit_323)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_322),T243,ENVNUL,PNUL,YPfalse);
  T244 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T244);
  lit_327 = YPPsym((P)"ast-define-binding");
  lit_328 = YPPsym((P)"name");
  lit_329 = YPPsym((P)"defining-method?");
  lit_330 = YPPsym((P)"kind");
  lit_331 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T245 = YPsig(YPPlist(4,LITREF(lit_286),LITREF(lit_328),LITREF(lit_329),LITREF(lit_330)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_262 = YPmet(FUNCODEREF(fun_ast_define_binding_262),LITREF(lit_327),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YevalSastYast_define_binding);
  if (T248 != YPfalse) {
    T247 = VARREF(YevalSastYast_define_binding);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_ast_define_binding_262;
  T246 = XCALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YevalSastYast_define_binding,T246);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_332 = YPPsym((P)"objectify-definition");
  lit_333 = YPPsym((P)"type");
  lit_334 = YPPsym((P)"var");
  T250 = YPsig(YPPlist(5,LITREF(lit_333),LITREF(lit_330),LITREF(lit_334),LITREF(lit_148),LITREF(lit_286)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_263 = YPmet(FUNCODEREF(fun_objectify_definition_263),LITREF(lit_332),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YevalSastYobjectify_definition);
  if (T253 != YPfalse) {
    T252 = VARREF(YevalSastYobjectify_definition);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_objectify_definition_263;
  T251 = XCALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YevalSastYobjectify_definition,T251);
  lit_335 = YPPsym((P)"objectify-variable-definition");
  T255 = YPsig(YPPlist(3,LITREF(lit_334),LITREF(lit_148),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_264 = YPmet(FUNCODEREF(fun_objectify_variable_definition_264),LITREF(lit_335),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSastYobjectify_variable_definition);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSastYobjectify_variable_definition);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_objectify_variable_definition_264;
  T256 = XCALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSastYobjectify_variable_definition,T256);
  lit_336 = YPPsym((P)"objectify-dynamic-definition");
  lit_337 = YPPsym((P)"dynamic");
  T260 = YPsig(YPPlist(3,LITREF(lit_334),LITREF(lit_148),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_265 = YPmet(FUNCODEREF(fun_objectify_dynamic_definition_265),LITREF(lit_336),T260,ENVNUL,PNUL,YPfalse);
  T263 = BOUNDP(YevalSastYobjectify_dynamic_definition);
  if (T263 != YPfalse) {
    T262 = VARREF(YevalSastYobjectify_dynamic_definition);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_objectify_dynamic_definition_265;
  T261 = XCALL2(1,VARREF(YPdefine_method),T262,T264);
  VARSET(YevalSastYobjectify_dynamic_definition,T261);
  lit_338 = YPPsym((P)"%%macro");
  lit_339 = YPPsym((P)"modname");
  lit_340 = YPPsym((P)"expander");
  lit_341 = YPPsym((P)"env-or-false");
  lit_342 = YPPsym((P)"expand");
  lit_343 = YPsb((P)"MACRO ");
  lit_344 = YPsb((P)"\n");
  lit_345 = YPsb((P)"  => ");
  lit_346 = YPsb((P)"\n");
  lit_347 = YPPsym((P)"macro");
  T266 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_266 = YPmet(FUNCODEREF(fun_expand_266),LITREF(lit_342),T266,ENVNUL,PNUL,YPfalse);
  T265 = YPsig(YPPlist(4,LITREF(lit_339),LITREF(lit_328),LITREF(lit_340),LITREF(lit_341)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_338),T265,ENVNUL,PNUL,YPfalse);
  T267 = YPPmacro;
  VARSET(YPPmacro,T267);
  lit_348 = YPPsym((P)"objectify-syntax-definition");
  T268 = YPsig(YPPlist(4,LITREF(lit_328),LITREF(lit_148),LITREF(lit_286),LITREF(lit_295)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_268 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_268),LITREF(lit_348),T268,ENVNUL,PNUL,YPfalse);
  T271 = BOUNDP(YevalSastYobjectify_syntax_definition);
  if (T271 != YPfalse) {
    T270 = VARREF(YevalSastYobjectify_syntax_definition);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_objectify_syntax_definition_268;
  T269 = XCALL2(1,VARREF(YPdefine_method),T270,T272);
  VARSET(YevalSastYobjectify_syntax_definition,T269);
  lit_349 = YPPsym((P)"objectify-function-definition");
  T273 = YPsig(YPPlist(3,LITREF(lit_328),LITREF(lit_148),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_269 = YPmet(FUNCODEREF(fun_objectify_function_definition_269),LITREF(lit_349),T273,ENVNUL,PNUL,YPfalse);
  T276 = BOUNDP(YevalSastYobjectify_function_definition);
  if (T276 != YPfalse) {
    T275 = VARREF(YevalSastYobjectify_function_definition);
  } else {
    T275 = YPfalse;
  }
  T277 = fun_objectify_function_definition_269;
  T274 = XCALL2(1,VARREF(YPdefine_method),T275,T277);
  VARSET(YevalSastYobjectify_function_definition,T274);
  lit_350 = YPPsym((P)"module-binding");
  T280 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  T279 = YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_350),T280,ENVNUL,PNUL,YPfalse);
  T282 = YevalSastYmodule_binding;
  T281 = VARSET(YevalSastYmodule_binding,T282);
  T278 = T281;
  return T278;
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
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283;
DEFCREGS();
loop:
  lit_351 = YPPsym((P)"objectify-primitive-definition");
  lit_352 = YPPsym((P)"sig");
  lit_353 = YPPsym((P)"body");
  lit_354 = YPPsym((P)"predefined");
  T0 = YPsig(YPPlist(4,LITREF(lit_328),LITREF(lit_352),LITREF(lit_353),LITREF(lit_286)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_271 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_271),LITREF(lit_351),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYobjectify_primitive_definition);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYobjectify_primitive_definition);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_objectify_primitive_definition_271;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYobjectify_primitive_definition,T1);
  lit_355 = YPPsym((P)"objectify-generic-definition");
  T5 = YPsig(YPPlist(3,LITREF(lit_328),LITREF(lit_352),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_272 = YPmet(FUNCODEREF(fun_objectify_generic_definition_272),LITREF(lit_355),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYobjectify_generic_definition);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYobjectify_generic_definition);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_objectify_generic_definition_272;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYobjectify_generic_definition,T6);
  lit_356 = YPPsym((P)"objectify-method-definition");
  lit_357 = YPPsym((P)"if");
  lit_358 = YPPsym((P)"bound?");
  lit_359 = YPPsym((P)"%define-method");
  T10 = YPsig(YPPlist(3,LITREF(lit_328),LITREF(lit_148),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_273 = YPmet(FUNCODEREF(fun_objectify_method_definition_273),LITREF(lit_356),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSastYobjectify_method_definition);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYobjectify_method_definition);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_objectify_method_definition_273;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYobjectify_method_definition,T11);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_360 = YPPsym((P)"objectify-function-source");
  lit_361 = YPsb((P)"(fun %s %s)");
  T19 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(3,LITREF(lit_352),LITREF(lit_353),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_278 = YPmet(FUNCODEREF(fun_objectify_function_source_278),LITREF(lit_360),T15,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSastYobjectify_function_source);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSastYobjectify_function_source);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_objectify_function_source_278;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSastYobjectify_function_source,T20);
  lit_362 = YPPsym((P)"objectify-function");
  T26 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(4,LITREF(lit_352),LITREF(lit_353),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_281 = YPmet(FUNCODEREF(fun_objectify_function_281),LITREF(lit_362),T24,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSastYobjectify_function);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSastYobjectify_function);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_objectify_function_281;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSastYobjectify_function,T27);
  lit_363 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_363));
  lit_364 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_364));
  lit_365 = YPPsym((P)"objectify-signature");
  lit_366 = YPPsym((P)"col");
  lit_367 = YPPsym((P)"params");
  lit_368 = YPPsym((P)"nary?");
  lit_369 = YPPsym((P)"bindings");
  lit_370 = YPPsym((P)"names");
  lit_371 = YPPsym((P)"types");
  T32 = YPsig(YPPlist(5,LITREF(lit_367),LITREF(lit_368),LITREF(lit_369),LITREF(lit_370),LITREF(lit_371)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_282 = YPmet(FUNCODEREF(fun_col_282),LITREF(lit_366),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_352),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_283 = YPmet(FUNCODEREF(fun_objectify_signature_283),LITREF(lit_365),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSastYobjectify_signature);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSastYobjectify_signature);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_objectify_signature_283;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSastYobjectify_signature,T33);
  lit_372 = YPPsym((P)"compute-local-reference-offsets");
  lit_373 = YPPsym((P)"i");
  lit_374 = YPPsym((P)"find");
  lit_375 = YPPsym((P)"j");
  lit_376 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  T40 = YPsig(YPPlist(2,LITREF(lit_375),LITREF(lit_369)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_284 = YPmet(FUNCODEREF(fun_find_284),LITREF(lit_374),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(2,LITREF(lit_373),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_285 = YPmet(FUNCODEREF(fun_loop_285),LITREF(lit_149),T39,ENVNUL,PNUL,YPfalse);
  T38 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T37 = YPsig(YPPlist(2,LITREF(lit_284),LITREF(lit_286)),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),T38,Ynil);
  fun_compute_local_reference_offsets_286 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_286),LITREF(lit_372),T37,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSastYcompute_local_reference_offsets);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSastYcompute_local_reference_offsets);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_compute_local_reference_offsets_286;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSastYcompute_local_reference_offsets,T41);
  lit_377 = YPPsym((P)"objectify-binding");
  lit_378 = YPPsym((P)"n");
  T45 = YPsig(YPPlist(3,LITREF(lit_378),LITREF(lit_49),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_287 = YPmet(FUNCODEREF(fun_objectify_binding_287),LITREF(lit_377),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSastYobjectify_binding);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSastYobjectify_binding);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_objectify_binding_287;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSastYobjectify_binding,T46);
  lit_379 = YPPsym((P)"binding-reference-class");
  lit_380 = YPsb((P)"Unknown binding-kind %=");
  T50 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_288 = YPmet(FUNCODEREF(fun_binding_reference_class_288),LITREF(lit_379),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSastYbinding_reference_class);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSastYbinding_reference_class);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_binding_reference_class_288;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSastYbinding_reference_class,T51);
  T55 = YPsig(YPPlist(3,LITREF(lit_378),LITREF(lit_49),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_289 = YPmet(FUNCODEREF(fun_objectify_binding_289),LITREF(lit_377),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSastYobjectify_binding);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSastYobjectify_binding);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_objectify_binding_289;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSastYobjectify_binding,T56);
  T60 = YPsig(YPPlist(3,LITREF(lit_378),LITREF(lit_49),LITREF(lit_286)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_290 = YPmet(FUNCODEREF(fun_objectify_binding_290),LITREF(lit_377),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSastYobjectify_binding);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSastYobjectify_binding);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_objectify_binding_290;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSastYobjectify_binding,T61);
  lit_381 = YPPsym((P)"default-type");
  lit_382 = YPPsym((P)"<any>");
  T65 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_291 = YPmet(FUNCODEREF(fun_default_type_291),LITREF(lit_381),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSastYdefault_type);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSastYdefault_type);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_default_type_291;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSastYdefault_type,T66);
  lit_383 = YPPsym((P)"objectify-free-global-reference");
  T70 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_292 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_292),LITREF(lit_383),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSastYobjectify_free_global_reference);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSastYobjectify_free_global_reference);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_objectify_free_global_reference_292;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSastYobjectify_free_global_reference,T71);
  lit_384 = YPPsym((P)"foreign-name?");
  T75 = YPsig(YPPlist(1,LITREF(lit_328)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_384),T75,ENVNUL,PNUL,YPfalse);
  T76 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T76);
  lit_385 = YPPsym((P)"objectify-foreign-reference");
  lit_386 = YPsb((P)"Malformed foreign name %s.\n");
  lit_387 = YPsb((P)"No binding %s in %s.\n");
  T77 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_294 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_294),LITREF(lit_385),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSastYobjectify_foreign_reference);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSastYobjectify_foreign_reference);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_objectify_foreign_reference_294;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSastYobjectify_foreign_reference,T78);
  lit_388 = YPPsym((P)"objectify-symbol");
  T82 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_295 = YPmet(FUNCODEREF(fun_objectify_symbol_295),LITREF(lit_388),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYobjectify_symbol);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYobjectify_symbol);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_objectify_symbol_295;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYobjectify_symbol,T83);
  lit_389 = YPPsym((P)"ftype");
  lit_390 = YPPsym((P)"<fun>");
  T87 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_296 = YPmet(FUNCODEREF(fun_ftype_296),LITREF(lit_389),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYftype);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYftype);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_ftype_296;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYftype,T88);
  lit_391 = YPPsym((P)"<functions>");
  T94 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T93 = (P)YPpair(VARREF(YLlstG),T94);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_391),T93);
  VARSET(YevalSastYLfunctionsG,T92);
  T95 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T95);
  lit_392 = YPPsym((P)"functions");
  T96 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_392),T96,ENVNUL,PNUL,YPfalse);
  T97 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T97);
  T99 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T98 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,T99),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_298 = YPmet(FUNCODEREF(fun_empty_298),LITREF(lit_167),T98,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooScolsScolYempty);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooScolsScolYempty);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_empty_298;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooScolsScolYempty,T100);
  lit_393 = YPPsym((P)"objectify-locals");
  lit_394 = YPPsym((P)"sigs");
  lit_395 = YPPsym((P)"bodies");
  T106 = YPsig(YPPlist(1,LITREF(lit_378)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(2,LITREF(lit_138),LITREF(lit_49)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(6,LITREF(lit_370),LITREF(lit_394),LITREF(lit_395),LITREF(lit_353),LITREF(lit_286),LITREF(lit_287)),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_301 = YPmet(FUNCODEREF(fun_objectify_locals_301),LITREF(lit_393),T104,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYobjectify_locals);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYobjectify_locals);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_objectify_locals_301;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYobjectify_locals,T107);
  lit_396 = YPPsym((P)"objectify-bind-exit");
  T111 = YPsig(YPPlist(4,LITREF(lit_328),LITREF(lit_353),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_302 = YPmet(FUNCODEREF(fun_objectify_bind_exit_302),LITREF(lit_396),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYobjectify_bind_exit);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYobjectify_bind_exit);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_objectify_bind_exit_302;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYobjectify_bind_exit,T112);
  lit_397 = YPPsym((P)"objectify-unwind-protect");
  lit_398 = YPPsym((P)"protected-form");
  lit_399 = YPPsym((P)"cleanup-forms");
  T116 = YPsig(YPPlist(4,LITREF(lit_398),LITREF(lit_399),LITREF(lit_286),LITREF(lit_287)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_303 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_303),LITREF(lit_397),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YevalSastYobjectify_unwind_protect);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYobjectify_unwind_protect);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_objectify_unwind_protect_303;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYobjectify_unwind_protect,T117);
  lit_400 = YPPsym((P)"objectify-monitor");
  lit_401 = YPPsym((P)"info");
  lit_402 = YPPsym((P)"test");
  lit_403 = YPPsym((P)"handler");
  T121 = YPsig(YPPlist(7,LITREF(lit_333),LITREF(lit_401),LITREF(lit_402),LITREF(lit_403),LITREF(lit_353),LITREF(lit_286),LITREF(lit_287)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_304 = YPmet(FUNCODEREF(fun_objectify_monitor_304),LITREF(lit_400),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YevalSastYobjectify_monitor);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSastYobjectify_monitor);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_objectify_monitor_304;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYobjectify_monitor,T122);
  lit_404 = YPPsym((P)"objectify-export");
  lit_405 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_406 = YPPsym((P)"exit");
  lit_407 = YPsb((P)"Continue without exporting %s");
  lit_408 = YPsb((P)"Can't export undefined binding %s.\n");
  T131 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(2,LITREF(lit_297),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_406)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_328)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(3,LITREF(lit_370),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_310 = YPmet(FUNCODEREF(fun_objectify_export_310),LITREF(lit_404),T126,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYobjectify_export);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYobjectify_export);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_objectify_export_310;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYobjectify_export,T132);
  lit_409 = YPPsym((P)"import-global!");
  lit_410 = YPPsym((P)"env");
  lit_411 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T136 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_410)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_409),T136,ENVNUL,PNUL,YPfalse);
  T137 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T137);
  lit_412 = YPPsym((P)"objectify-use/export-module");
  T139 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(3,LITREF(lit_328),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_313 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_313),LITREF(lit_412),T138,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYobjectify_useSexport_module);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYobjectify_useSexport_module);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_objectify_useSexport_module_313;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYobjectify_useSexport_module,T140);
  lit_413 = YPPsym((P)"objectify-use-module");
  lit_414 = YPsb((P)".c");
  T145 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(3,LITREF(lit_328),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_315 = YPmet(FUNCODEREF(fun_objectify_use_module_315),LITREF(lit_413),T144,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSastYobjectify_use_module);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSastYobjectify_use_module);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_objectify_use_module_315;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSastYobjectify_use_module,T146);
  lit_415 = YPPsym((P)"expand-bind-list");
  lit_416 = YPPsym((P)"pat");
  lit_417 = YPPsym((P)"fail");
  lit_418 = YPsb((P)"Expected Pattern List %=\n");
  T150 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_316 = YPmet(FUNCODEREF(fun_expand_bind_list_316),LITREF(lit_415),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSastYexpand_bind_list);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_expand_bind_list_316;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSastYexpand_bind_list,T151);
  lit_419 = YPPsym((P)"match-empty-list");
  T156 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T155 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,T156,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_317 = YPmet(FUNCODEREF(fun_expand_bind_list_317),LITREF(lit_415),T155,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYexpand_bind_list);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_expand_bind_list_317;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYexpand_bind_list,T157);
  lit_420 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_421 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T161 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_318 = YPmet(FUNCODEREF(fun_expand_bind_list_318),LITREF(lit_415),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSastYexpand_bind_list);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_expand_bind_list_318;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYexpand_bind_list,T162);
  lit_422 = YPPsym((P)"expand-bind-list*");
  T167 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T166 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,T167,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_319 = YPmet(FUNCODEREF(fun_expand_bind_listT_319),LITREF(lit_422),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_expand_bind_listT_319;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSastYexpand_bind_listT,T168);
  T172 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_320 = YPmet(FUNCODEREF(fun_expand_bind_listT_320),LITREF(lit_422),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_expand_bind_listT_320;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSastYexpand_bind_listT,T173);
  lit_423 = YPPsym((P)"expand-bind-element");
  lit_424 = YPPsym((P)"match-atom");
  T177 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_321 = YPmet(FUNCODEREF(fun_expand_bind_element_321),LITREF(lit_423),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSastYexpand_bind_element);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_expand_bind_element_321;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSastYexpand_bind_element,T178);
  lit_425 = YPPsym((P)"match-unquote");
  lit_426 = YPPsym((P)"match-sublist");
  T182 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_322 = YPmet(FUNCODEREF(fun_expand_bind_element_322),LITREF(lit_423),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSastYexpand_bind_element);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_expand_bind_element_322;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSastYexpand_bind_element,T183);
  lit_427 = YPPsym((P)"expand-pattern");
  lit_428 = YPPsym((P)"isa?");
  lit_429 = YPsb((P)"Match Pattern Failure");
  T187 = YPsig(YPPlist(3,LITREF(lit_416),LITREF(lit_334),LITREF(lit_417)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_323 = YPmet(FUNCODEREF(fun_expand_pattern_323),LITREF(lit_427),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSastYexpand_pattern);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSastYexpand_pattern);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_expand_pattern_323;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSastYexpand_pattern,T188);
  lit_430 = YPPsym((P)"expand-syntax-if");
  lit_431 = YPPsym((P)"esc");
  lit_432 = YPPsym((P)"loc");
  lit_433 = YPPsym((P)"<str>");
  T193 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_324 = YPmet(FUNCODEREF(fun_324),YPfalse,T193,ENVNUL,PNUL,YPfalse);
  T192 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_325 = YPmet(FUNCODEREF(fun_expand_syntax_if_325),LITREF(lit_430),T192,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YevalSastYexpand_syntax_if);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSastYexpand_syntax_if);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_expand_syntax_if_325;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSastYexpand_syntax_if,T194);
  lit_434 = YPPsym((P)"r-extend*");
  T198 = YPsig(YPPlist(2,LITREF(lit_286),LITREF(lit_369)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_326 = YPmet(FUNCODEREF(fun_r_extendT_326),LITREF(lit_434),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSastYr_extendT);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSastYr_extendT);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_r_extendT_326;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSastYr_extendT,T199);
  lit_435 = YPPsym((P)"insert-global!");
  T203 = YPsig(YPPlist(2,LITREF(lit_284),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_327 = YPmet(FUNCODEREF(fun_insert_globalX_327),LITREF(lit_435),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSastYinsert_globalX);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSastYinsert_globalX);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_insert_globalX_327;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSastYinsert_globalX,T204);
  lit_436 = YPPsym((P)"insert-globals!");
  T209 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T209,ENVNUL,PNUL,YPfalse);
  T208 = YPsig(YPPlist(2,LITREF(lit_369),LITREF(lit_286)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_329 = YPmet(FUNCODEREF(fun_insert_globalsX_329),LITREF(lit_436),T208,ENVNUL,PNUL,YPfalse);
  T212 = BOUNDP(YevalSastYinsert_globalsX);
  if (T212 != YPfalse) {
    T211 = VARREF(YevalSastYinsert_globalsX);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_insert_globalsX_329;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T213);
  VARSET(YevalSastYinsert_globalsX,T210);
  lit_437 = YPPsym((P)"find-static-global-environment");
  T214 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_330 = YPmet(FUNCODEREF(fun_find_static_global_environment_330),LITREF(lit_437),T214,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_find_static_global_environment_330;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSastYfind_static_global_environment,T215);
  T219 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_331 = YPmet(FUNCODEREF(fun_find_static_global_environment_331),LITREF(lit_437),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_find_static_global_environment_331;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSastYfind_static_global_environment,T220);
  lit_438 = YPPsym((P)"find-syntax-environment");
  T224 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_332 = YPmet(FUNCODEREF(fun_find_syntax_environment_332),LITREF(lit_438),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSastYfind_syntax_environment);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSastYfind_syntax_environment);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_find_syntax_environment_332;
  T225 = XCALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSastYfind_syntax_environment,T225);
  lit_439 = YPPsym((P)"find-environment-module");
  T229 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_333 = YPmet(FUNCODEREF(fun_find_environment_module_333),LITREF(lit_439),T229,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YevalSastYfind_environment_module);
  if (T232 != YPfalse) {
    T231 = VARREF(YevalSastYfind_environment_module);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_find_environment_module_333;
  T230 = XCALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YevalSastYfind_environment_module,T230);
  lit_440 = YPPsym((P)"find-binding");
  T235 = YPsig(YPPlist(1,LITREF(lit_369)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_334 = YPmet(FUNCODEREF(fun_loop_334),LITREF(lit_149),T235,ENVNUL,PNUL,YPfalse);
  T234 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_335 = YPmet(FUNCODEREF(fun_find_binding_335),LITREF(lit_440),T234,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YevalSastYfind_binding);
  if (T238 != YPfalse) {
    T237 = VARREF(YevalSastYfind_binding);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_find_binding_335;
  T236 = XCALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YevalSastYfind_binding,T236);
  T240 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_336 = YPmet(FUNCODEREF(fun_find_binding_336),LITREF(lit_440),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YevalSastYfind_binding);
  if (T243 != YPfalse) {
    T242 = VARREF(YevalSastYfind_binding);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_find_binding_336;
  T241 = XCALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YevalSastYfind_binding,T241);
  T245 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_286)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_337 = YPmet(FUNCODEREF(fun_find_binding_337),LITREF(lit_440),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YevalSastYfind_binding);
  if (T248 != YPfalse) {
    T247 = VARREF(YevalSastYfind_binding);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_find_binding_337;
  T246 = XCALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YevalSastYfind_binding,T246);
  lit_441 = YPPsym((P)"frame-bindings");
  T250 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_338 = YPmet(FUNCODEREF(fun_frame_bindings_338),LITREF(lit_441),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YevalSastYframe_bindings);
  if (T253 != YPfalse) {
    T252 = VARREF(YevalSastYframe_bindings);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_frame_bindings_338;
  T251 = XCALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YevalSastYframe_bindings,T251);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_442 = YPPsym((P)"register-magic-binding");
  T255 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_290)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_339 = YPmet(FUNCODEREF(fun_register_magic_binding_339),LITREF(lit_442),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSastYregister_magic_binding);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSastYregister_magic_binding);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_register_magic_binding_339;
  T256 = XCALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSastYregister_magic_binding,T256);
  lit_443 = YPPsym((P)"magic-bindings");
  T260 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_340 = YPmet(FUNCODEREF(fun_magic_bindings_340),LITREF(lit_443),T260,ENVNUL,PNUL,YPfalse);
  T263 = BOUNDP(YevalSastYmagic_bindings);
  if (T263 != YPfalse) {
    T262 = VARREF(YevalSastYmagic_bindings);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_magic_bindings_340;
  T261 = XCALL2(1,VARREF(YPdefine_method),T262,T264);
  VARSET(YevalSastYmagic_bindings,T261);
  lit_444 = YPPsym((P)"x-1437");
  lit_445 = YPPsym((P)"define-magic-binding");
  lit_446 = YPsb((P)"special-");
  lit_447 = YPsb((P)"$sexpr-");
  lit_448 = YPsb((P)"-tag");
  lit_449 = YPPsym((P)"binding-handler");
  lit_450 = YPPsym((P)"fun");
  T267 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1437_341 = YPmet(FUNCODEREF(fun_x_1437_341),LITREF(lit_444),T267,ENVNUL,PNUL,YPfalse);
  T266 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_342 = YPmet(FUNCODEREF(fun_342),YPfalse,T266,ENVNUL,PNUL,YPfalse);
  T265 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_343 = YPmet(FUNCODEREF(fun_343),YPfalse,T265,ENVNUL,PNUL,YPfalse);
  T268 = fun_343;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T268);
  T269 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_344 = YPmet(FUNCODEREF(fun_344),YPfalse,T269,ENVNUL,PNUL,YPfalse);
  T271 = fun_344;
  T270 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T271,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T270);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_357),VARREF(YevalSastYspecial_if));
  T272 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_345 = YPmet(FUNCODEREF(fun_345),YPfalse,T272,ENVNUL,PNUL,YPfalse);
  T274 = fun_345;
  T273 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T274,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T273);
  lit_451 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_451),VARREF(YevalSastYspecial_begin));
  lit_452 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_452));
  T275 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T275,ENVNUL,PNUL,YPfalse);
  T277 = fun_346;
  T276 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T277,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T276);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_452),VARREF(YevalSastYspecial_Praw));
  T280 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T279 = fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T280,ENVNUL,PNUL,YPfalse);
  T283 = fun_347;
  T282 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T283,VARREF(YevalSastYbinding_freeQ),YPfalse);
  T281 = VARSET(YevalSastYspecial_quote,T282);
  T278 = T281;
  return T278;
}

P YevalSastY___main_7___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93;
DEFCREGS();
loop:
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_309),VARREF(YevalSastYspecial_quote));
  T0 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_348 = YPmet(FUNCODEREF(fun_348),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_348;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T1);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_10),VARREF(YevalSastYspecial_set));
  T3 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_349 = YPmet(FUNCODEREF(fun_349),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T5 = fun_349;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T4);
  lit_453 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_453),VARREF(YevalSastYspecial_define));
  lit_454 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_454));
  T6 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T8 = fun_350;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T8,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T7);
  lit_455 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_455),VARREF(YevalSastYspecial_define_dynamic));
  T9 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_351 = YPmet(FUNCODEREF(fun_351),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T11 = fun_351;
  T10 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T11,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T10);
  lit_456 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_456),VARREF(YevalSastYspecial_define_syntax));
  lit_457 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_457));
  T12 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T14 = fun_352;
  T13 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T14,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T13);
  lit_458 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_458),VARREF(YevalSastYspecial_define_static_syntax));
  T15 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_353 = YPmet(FUNCODEREF(fun_353),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T17 = fun_353;
  T16 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T17,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T16);
  lit_459 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_459),VARREF(YevalSastYspecial_define_method));
  T18 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T20 = fun_354;
  T19 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T20,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T19);
  lit_460 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_460),VARREF(YevalSastYspecial_define_generic));
  T21 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_355 = YPmet(FUNCODEREF(fun_355),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T23 = fun_355;
  T22 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T23,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T22);
  lit_461 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_461),VARREF(YevalSastYspecial_define_function));
  T24 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_356 = YPmet(FUNCODEREF(fun_356),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T26 = fun_356;
  T25 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T26,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T25);
  lit_462 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_462),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_358));
  T27 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_357 = YPmet(FUNCODEREF(fun_357),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T29 = fun_357;
  T28 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T29,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T28);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_358),VARREF(YevalSastYspecial_boundQ));
  T30 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_358 = YPmet(FUNCODEREF(fun_358),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T32 = fun_358;
  T31 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T32,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T31);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_8),VARREF(YevalSastYspecial_let));
  T33 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_359 = YPmet(FUNCODEREF(fun_359),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T35 = fun_359;
  T34 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T35,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T34);
  lit_463 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_463),VARREF(YevalSastYspecial_def));
  T36 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_360 = YPmet(FUNCODEREF(fun_360),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T38 = fun_360;
  T37 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T38,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T37);
  lit_464 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_464),VARREF(YevalSastYspecial_locals));
  T39 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T41 = fun_361;
  T40 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T41,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T40);
  lit_465 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_465),VARREF(YevalSastYspecial_iterate));
  T42 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_362 = YPmet(FUNCODEREF(fun_362),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T44 = fun_362;
  T43 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T44,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T43);
  lit_466 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_466),VARREF(YevalSastYspecial_bind_exit));
  T45 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_363 = YPmet(FUNCODEREF(fun_363),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T47 = fun_363;
  T46 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T47,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T46);
  lit_467 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_467),VARREF(YevalSastYspecial_unwind_protect));
  T48 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_364 = YPmet(FUNCODEREF(fun_364),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T50 = fun_364;
  T49 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T50,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T49);
  lit_468 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_468),VARREF(YevalSastYspecial_monitor));
  lit_469 = YPPsym((P)"pairize");
  T51 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_365 = YPmet(FUNCODEREF(fun_pairize_365),LITREF(lit_469),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYpairize);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYpairize);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_pairize_365;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYpairize,T52);
  lit_470 = YPPsym((P)"fab-class");
  T56 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T58 = fun_366;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T58,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T57);
  lit_471 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_471),VARREF(YevalSastYspecial_define_class));
  lit_472 = YPPsym((P)"%prop");
  lit_473 = YPPsym((P)"%prop-unbound-error");
  T59 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPmet(FUNCODEREF(fun_367),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T61 = fun_367;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T61,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T60);
  lit_474 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_474),VARREF(YevalSastYspecial_prop));
  lit_475 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_475));
  T62 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T64 = fun_368;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T64,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T63);
  lit_476 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_476),VARREF(YevalSastYspecial_compile_time));
  lit_477 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_477));
  T65 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_369 = YPmet(FUNCODEREF(fun_369),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T67 = fun_369;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T67,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T66);
  lit_478 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_478),VARREF(YevalSastYspecial_compile_time_also));
  lit_479 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_479));
  T68 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T70 = fun_370;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T70,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T69);
  lit_480 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_480),VARREF(YevalSastYspecial_define_primitive));
  T71 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T73 = fun_371;
  T72 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T73,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T72);
  lit_481 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_481),VARREF(YevalSastYspecial_quasiquote));
  lit_482 = YPPsym((P)"ast-macro-expand");
  T74 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_372 = YPmet(FUNCODEREF(fun_ast_macro_expand_372),LITREF(lit_482),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSastYast_macro_expand);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSastYast_macro_expand);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_ast_macro_expand_372;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSastYast_macro_expand,T75);
  T79 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T81 = fun_373;
  T80 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T81,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T80);
  lit_483 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_483),VARREF(YevalSastYspecial_macro_expand));
  T82 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T84 = fun_374;
  T83 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T84,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T83);
  lit_484 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_484),VARREF(YevalSastYspecial_syntax_if));
  lit_485 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_485));
  T85 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPmet(FUNCODEREF(fun_375),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T87 = fun_375;
  T86 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T87,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T86);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_485),VARREF(YevalSastYspecial_export));
  lit_486 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_486));
  T90 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T89 = fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T93 = fun_376;
  T92 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T93,VARREF(YevalSastYbinding_freeQ),YPfalse);
  T91 = VARSET(YevalSastYspecial_use_module,T92);
  T88 = T91;
  return T88;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213;
DEFCREGS();
loop:
  lit_487 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_487),VARREF(YevalSastYspecial_use_module));
  lit_488 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_488));
  T0 = YPsig(YPPlist(3,LITREF(lit_131),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_377;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_325),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T1);
  lit_489 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_489),VARREF(YevalSastYspecial_useSexport_module));
  lit_490 = YPPsym((P)"<transaction>");
  T4 = (P)YPpair(VARREF(YLanyG),Ynil);
  T3 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_490),T4);
  VARSET(YevalSastYLtransactionG,T3);
  lit_491 = YPPsym((P)"transaction-implemented-bindings");
  T5 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_378 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_378),LITREF(lit_491),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYtransaction_implemented_bindings);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYtransaction_implemented_bindings);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_transaction_implemented_bindings_378;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYtransaction_implemented_bindings,T6);
  lit_492 = YPPsym((P)"transaction-implemented-bindings-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_379 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_379),LITREF(lit_492),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSastYtransaction_implemented_bindings_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYtransaction_implemented_bindings_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_transaction_implemented_bindings_setter_379;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T11);
  T15 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T16 = fun_380;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T16);
  lit_493 = YPPsym((P)"transaction-dependents");
  T17 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_381 = YPmet(FUNCODEREF(fun_transaction_dependents_381),LITREF(lit_493),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalSastYtransaction_dependents);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYtransaction_dependents);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_transaction_dependents_381;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYtransaction_dependents,T18);
  lit_494 = YPPsym((P)"transaction-dependents-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_382 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_382),LITREF(lit_494),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSastYtransaction_dependents_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSastYtransaction_dependents_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_transaction_dependents_setter_382;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSastYtransaction_dependents_setter,T23);
  T27 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T28 = fun_383;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T28);
  VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  lit_495 = YPPsym((P)"transaction-register-implemented-binding");
  lit_496 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T29 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_495),T29,ENVNUL,PNUL,YPfalse);
  T30 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T30);
  lit_497 = YPPsym((P)"transaction-register-dependent");
  lit_498 = YPPsym((P)"d");
  lit_499 = YPsb((P)"Can't register dependent (no subtransaction)");
  T31 = YPsig(YPPlist(1,LITREF(lit_498)),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_497),T31,ENVNUL,PNUL,YPfalse);
  T32 = YevalSastYtransaction_register_dependent;
  VARSET(YevalSastYtransaction_register_dependent,T32);
  lit_500 = YPPsym((P)"transaction-empty?");
  T33 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_500),T33,ENVNUL,PNUL,YPfalse);
  T34 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T34);
  lit_501 = YPPsym((P)"merge-transactions!");
  lit_502 = YPPsym((P)"t1");
  lit_503 = YPPsym((P)"t2");
  lit_504 = YPPsym((P)"k");
  lit_505 = YPPsym((P)"v");
  T37 = YPsig(YPPlist(2,LITREF(lit_504),LITREF(lit_505)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(2,LITREF(lit_504),LITREF(lit_505)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_502),LITREF(lit_503)),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_501),T35,ENVNUL,PNUL,YPfalse);
  T38 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T38);
  lit_506 = YPPsym((P)"roll-back-transaction");
  lit_507 = YPPsym((P)"junk");
  T41 = YPsig(YPPlist(2,LITREF(lit_284),LITREF(lit_507)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(2,LITREF(lit_142),LITREF(lit_507)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_506),T39,ENVNUL,PNUL,YPfalse);
  T42 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T42);
  lit_508 = YPPsym((P)"call-with-subtransaction");
  lit_509 = YPPsym((P)"module");
  lit_510 = YPPsym((P)"thunk");
  T45 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_394 = YPmet(FUNCODEREF(fun_394),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_509),LITREF(lit_510)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_508),T43,ENVNUL,PNUL,YPfalse);
  T46 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T46);
  lit_511 = YPPsym((P)"x-1441");
  lit_512 = YPPsym((P)"with-subtransaction");
  T49 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1441_396 = YPmet(FUNCODEREF(fun_x_1441_396),LITREF(lit_511),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T50 = fun_398;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T50);
  lit_513 = YPPsym((P)"objectify-with-subtransaction");
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(3,LITREF(lit_148),LITREF(lit_286),LITREF(lit_287)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_513),T51,ENVNUL,PNUL,YPfalse);
  T53 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T53);
  lit_514 = YPPsym((P)"<module-loader>");
  T55 = (P)YPpair(VARREF(YLanyG),Ynil);
  T54 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_514),T55);
  VARSET(YevalSastYLmodule_loaderG,T54);
  lit_515 = YPPsym((P)"module-loader-modules");
  T56 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_401 = YPmet(FUNCODEREF(fun_module_loader_modules_401),LITREF(lit_515),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYmodule_loader_modules);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYmodule_loader_modules);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_module_loader_modules_401;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYmodule_loader_modules,T57);
  lit_516 = YPPsym((P)"module-loader-modules-setter");
  T61 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_402 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_402),LITREF(lit_516),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSastYmodule_loader_modules_setter);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSastYmodule_loader_modules_setter);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_module_loader_modules_setter_402;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSastYmodule_loader_modules_setter,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T67 = fun_403;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T67);
  lit_517 = YPPsym((P)"module-loader-stack");
  T68 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_404 = YPmet(FUNCODEREF(fun_module_loader_stack_404),LITREF(lit_517),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYmodule_loader_stack);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYmodule_loader_stack);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_module_loader_stack_404;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYmodule_loader_stack,T69);
  lit_518 = YPPsym((P)"module-loader-stack-setter");
  T73 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_405 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_405),LITREF(lit_518),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSastYmodule_loader_stack_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYmodule_loader_stack_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_module_loader_stack_setter_405;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYmodule_loader_stack_setter,T74);
  T78 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_406 = YPmet(FUNCODEREF(fun_406),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T79 = fun_406;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T79);
  lit_519 = YPPsym((P)"<module>");
  T81 = (P)YPpair(VARREF(YLanyG),Ynil);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_519),T81);
  VARSET(YevalSastYLmoduleG,T80);
  lit_520 = YPPsym((P)"module-name");
  T82 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_407 = YPmet(FUNCODEREF(fun_module_name_407),LITREF(lit_520),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYmodule_name);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYmodule_name);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_module_name_407;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYmodule_name,T83);
  lit_521 = YPPsym((P)"module-name-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLsymG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_408 = YPmet(FUNCODEREF(fun_module_name_setter_408),LITREF(lit_521),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYmodule_name_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYmodule_name_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_module_name_setter_408;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYmodule_name_setter,T88);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),VARREF(YevalSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_522 = YPPsym((P)"module-mangled-name");
  T92 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_409 = YPmet(FUNCODEREF(fun_module_mangled_name_409),LITREF(lit_522),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSastYmodule_mangled_name);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYmodule_mangled_name);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_module_mangled_name_409;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYmodule_mangled_name,T93);
  lit_523 = YPPsym((P)"module-mangled-name-setter");
  T98 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T97 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T98,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_410 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_410),LITREF(lit_523),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YevalSastYmodule_mangled_name_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(YevalSastYmodule_mangled_name_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_module_mangled_name_setter_410;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YevalSastYmodule_mangled_name_setter,T99);
  T103 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_411 = YPmet(FUNCODEREF(fun_411),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T104 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T105 = fun_411;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T104,T105);
  lit_524 = YPPsym((P)"module-mangled-string-name");
  T106 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_412 = YPmet(FUNCODEREF(fun_module_mangled_string_name_412),LITREF(lit_524),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYmodule_mangled_string_name);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYmodule_mangled_string_name);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_module_mangled_string_name_412;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYmodule_mangled_string_name,T107);
  lit_525 = YPPsym((P)"module-mangled-string-name-setter");
  T112 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T111 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T112,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_413 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_413),LITREF(lit_525),T111,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSastYmodule_mangled_string_name_setter);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSastYmodule_mangled_string_name_setter);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_module_mangled_string_name_setter_413;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T113);
  T117 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_414 = YPmet(FUNCODEREF(fun_414),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T118 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T119 = fun_414;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T118,T119);
  lit_526 = YPPsym((P)"module-target-environment");
  T120 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_415 = YPmet(FUNCODEREF(fun_module_target_environment_415),LITREF(lit_526),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSastYmodule_target_environment);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSastYmodule_target_environment);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_module_target_environment_415;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYmodule_target_environment,T121);
  lit_527 = YPPsym((P)"module-target-environment-setter");
  T125 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_416 = YPmet(FUNCODEREF(fun_module_target_environment_setter_416),LITREF(lit_527),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YevalSastYmodule_target_environment_setter);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSastYmodule_target_environment_setter);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_module_target_environment_setter_416;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSastYmodule_target_environment_setter,T126);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_528 = YPPsym((P)"module-syntax-environment");
  T130 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_417 = YPmet(FUNCODEREF(fun_module_syntax_environment_417),LITREF(lit_528),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSastYmodule_syntax_environment);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSastYmodule_syntax_environment);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_module_syntax_environment_417;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSastYmodule_syntax_environment,T131);
  lit_529 = YPPsym((P)"module-syntax-environment-setter");
  T135 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_418 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_418),LITREF(lit_529),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YevalSastYmodule_syntax_environment_setter);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSastYmodule_syntax_environment_setter);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_module_syntax_environment_setter_418;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSastYmodule_syntax_environment_setter,T136);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_530 = YPPsym((P)"%module-exports");
  T140 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_419 = YPmet(FUNCODEREF(fun_Pmodule_exports_419),LITREF(lit_530),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSastYPmodule_exports);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSastYPmodule_exports);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_Pmodule_exports_419;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSastYPmodule_exports,T141);
  lit_531 = YPPsym((P)"%module-exports-setter");
  T145 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_420 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_420),LITREF(lit_531),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSastYPmodule_exports_setter);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSastYPmodule_exports_setter);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_Pmodule_exports_setter_420;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSastYPmodule_exports_setter,T146);
  T150 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_421 = YPmet(FUNCODEREF(fun_421),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T151 = fun_421;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),VARREF(YevalSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T151);
  lit_532 = YPPsym((P)"module-data-processed?");
  T152 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_422 = YPmet(FUNCODEREF(fun_module_data_processedQ_422),LITREF(lit_532),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSastYmodule_data_processedQ);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSastYmodule_data_processedQ);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_module_data_processedQ_422;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSastYmodule_data_processedQ,T153);
  lit_533 = YPPsym((P)"module-data-processed?-setter");
  T157 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_423 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_423),LITREF(lit_533),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSastYmodule_data_processedQ_setter);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSastYmodule_data_processedQ_setter);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_module_data_processedQ_setter_423;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSastYmodule_data_processedQ_setter,T158);
  T162 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T163 = fun_424;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T163);
  lit_534 = YPPsym((P)"module-runtime-data");
  T164 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_425 = YPmet(FUNCODEREF(fun_module_runtime_data_425),LITREF(lit_534),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSastYmodule_runtime_data);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSastYmodule_runtime_data);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_module_runtime_data_425;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSastYmodule_runtime_data,T165);
  lit_535 = YPPsym((P)"module-runtime-data-setter");
  T169 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_426 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_426),LITREF(lit_535),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSastYmodule_runtime_data_setter);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSastYmodule_runtime_data_setter);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_module_runtime_data_setter_426;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSastYmodule_runtime_data_setter,T170);
  T174 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_427 = YPmet(FUNCODEREF(fun_427),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T175 = fun_427;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T175);
  lit_536 = YPPsym((P)"module-transaction");
  T176 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_428 = YPmet(FUNCODEREF(fun_module_transaction_428),LITREF(lit_536),T176,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalSastYmodule_transaction);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSastYmodule_transaction);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_module_transaction_428;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSastYmodule_transaction,T177);
  lit_537 = YPPsym((P)"module-transaction-setter");
  T181 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_429 = YPmet(FUNCODEREF(fun_module_transaction_setter_429),LITREF(lit_537),T181,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSastYmodule_transaction_setter);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSastYmodule_transaction_setter);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_module_transaction_setter_429;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSastYmodule_transaction_setter,T182);
  T186 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_430 = YPmet(FUNCODEREF(fun_430),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T187 = fun_430;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T187);
  lit_538 = YPPsym((P)"module-uses-c-files");
  T188 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_431 = YPmet(FUNCODEREF(fun_module_uses_c_files_431),LITREF(lit_538),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YevalSastYmodule_uses_c_files);
  if (T191 != YPfalse) {
    T190 = VARREF(YevalSastYmodule_uses_c_files);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_module_uses_c_files_431;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YevalSastYmodule_uses_c_files,T189);
  lit_539 = YPPsym((P)"module-uses-c-files-setter");
  T193 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_setter_432 = YPmet(FUNCODEREF(fun_module_uses_c_files_setter_432),LITREF(lit_539),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YevalSastYmodule_uses_c_files_setter);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSastYmodule_uses_c_files_setter);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_module_uses_c_files_setter_432;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSastYmodule_uses_c_files_setter,T194);
  T198 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_433 = YPmet(FUNCODEREF(fun_433),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T199 = fun_433;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_files),VARREF(YevalSastYmodule_uses_c_files_setter),VARREF(YgooScolsSvecYLvecG),T199);
  VARSET(YevalSastYmodule_exports_setter,VARREF(YevalSastYPmodule_exports_setter));
  lit_540 = YPPsym((P)"module-exports");
  T200 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_434 = YPmet(FUNCODEREF(fun_module_exports_434),LITREF(lit_540),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YevalSastYmodule_exports);
  if (T203 != YPfalse) {
    T202 = VARREF(YevalSastYmodule_exports);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_module_exports_434;
  T201 = XCALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YevalSastYmodule_exports,T201);
  lit_541 = YPPsym((P)"set-module-environments");
  lit_542 = YPPsym((P)"mod");
  lit_543 = YPPsym((P)"syntax-env");
  lit_544 = YPPsym((P)"target-env");
  T205 = YPsig(YPPlist(3,LITREF(lit_542),LITREF(lit_543),LITREF(lit_544)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_541),T205,ENVNUL,PNUL,YPfalse);
  T206 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T206);
  lit_545 = YPPsym((P)"do-module-loader-modules");
  lit_546 = YPPsym((P)"loader");
  T211 = YPsig(YPPlist(1,LITREF(lit_542)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T210 = fun_436 = YPmet(FUNCODEREF(fun_436),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T209 = YPsig(YPPlist(2,LITREF(lit_138),LITREF(lit_546)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T208 = YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_545),T209,ENVNUL,PNUL,YPfalse);
  T213 = YevalSastYdo_module_loader_modules;
  T212 = VARSET(YevalSastYdo_module_loader_modules,T213);
  T207 = T212;
  return T207;
}

P YevalSastY___main_9___() {
  P tmpF1913;
  P tmpF1912;
  P tmpF1911;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115;
DEFCREGS();
loop:
  lit_547 = YPPsym((P)"module-loader-module-type");
  T0 = YPsig(YPPlist(1,LITREF(lit_546)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_438 = YPmet(FUNCODEREF(fun_module_loader_module_type_438),LITREF(lit_547),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_module_loader_module_type_438;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYmodule_loader_module_type,T1);
  lit_548 = YPPsym((P)"register-module!");
  lit_549 = YPPsym((P)"module-loader");
  T5 = YPsig(YPPlist(2,LITREF(lit_549),LITREF(lit_542)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_548),T5,ENVNUL,PNUL,YPfalse);
  T6 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T6);
  lit_550 = YPPsym((P)"probe-module");
  T7 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_328)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_550),T7,ENVNUL,PNUL,YPfalse);
  T8 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T8);
  lit_551 = YPPsym((P)"load-and-register-module");
  lit_552 = YPsb((P)"  ");
  lit_553 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_554 = YPsb((P)"%s[Loading module %s...\n");
  lit_555 = YPsb((P)"%s]\n");
  T11 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_441 = YPmet(FUNCODEREF(fun_441),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_442 = YPmet(FUNCODEREF(fun_442),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_328)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_551),T9,ENVNUL,PNUL,YPfalse);
  T12 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T12);
  lit_556 = YPPsym((P)"load-module");
  T14 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_328)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T13 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_556),T14,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T13);
  lit_557 = YPPsym((P)"export-binding!");
  lit_558 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T16 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T15 = YPsig(YPPlist(3,LITREF(lit_509),LITREF(lit_328),LITREF(lit_284)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T16,Ynil);
  YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_557),T15,ENVNUL,PNUL,YPfalse);
  T17 = YevalSastYexport_bindingX;
  VARSET(YevalSastYexport_bindingX,T17);
  lit_559 = YPPsym((P)"binding-native-to?");
  T18 = YPsig(YPPlist(2,LITREF(lit_284),LITREF(lit_509)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_559),T18,ENVNUL,PNUL,YPfalse);
  T19 = YevalSastYbinding_native_toQ;
  VARSET(YevalSastYbinding_native_toQ,T19);
  lit_560 = YPPsym((P)"report-undefined-global-bindings");
  lit_561 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T21 = YPsig(YPPlist(1,LITREF(lit_284)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_446 = YPmet(FUNCODEREF(fun_446),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_542)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_560),T20,ENVNUL,PNUL,YPfalse);
  T22 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T22);
  lit_562 = YPPsym((P)"compute-transitive-users");
  lit_563 = YPPsym((P)"modnames");
  lit_564 = YPPsym((P)"add-user");
  lit_565 = YPPsym((P)"uses-mod");
  T27 = YPsig(YPPlist(1,LITREF(lit_565)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_448 = YPmet(FUNCODEREF(fun_448),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_542)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_449 = YPmet(FUNCODEREF(fun_449),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(1,LITREF(lit_339)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_450 = YPmet(FUNCODEREF(fun_add_user_450),LITREF(lit_564),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,LITREF(lit_505)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_451 = YPmet(FUNCODEREF(fun_451),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_563)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_562),T23,ENVNUL,PNUL,YPfalse);
  T28 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T28);
  lit_566 = YPPsym((P)"remove-module-internal!");
  T29 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_542)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_566),T29,ENVNUL,PNUL,YPfalse);
  T30 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T30);
  lit_567 = YPPsym((P)"remove-modules-by-name!");
  T33 = YPsig(YPPlist(1,LITREF(lit_339)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_454 = YPmet(FUNCODEREF(fun_454),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_563)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T32,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_567),T31,ENVNUL,PNUL,YPfalse);
  T34 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T34);
  lit_568 = YPPsym((P)"module-name-to-relpath");
  T35 = YPsig(YPPlist(1,LITREF(lit_328)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_568),T35,ENVNUL,PNUL,YPfalse);
  T36 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T36);
  lit_569 = YPPsym((P)"install-initial-bindings");
  lit_570 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T38 = YPsig(YPPlist(1,LITREF(lit_328)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_457 = YPmet(FUNCODEREF(fun_457),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(2,LITREF(lit_410),LITREF(lit_546)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_569),T37,ENVNUL,PNUL,YPfalse);
  T39 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T39);
  lit_571 = YPPsym((P)"fab-static-global-environment");
  lit_572 = YPPsym((P)"allow-foreign-names?");
  T40 = YPsig(YPPlist(3,LITREF(lit_509),LITREF(lit_549),LITREF(lit_572)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_571),T40,ENVNUL,PNUL,YPfalse);
  T41 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T41);
  lit_573 = YPPsym((P)"fab-subset-environment");
  lit_574 = YPPsym((P)"src-module");
  lit_575 = YPPsym((P)"excluded");
  T43 = YPsig(YPPlist(2,LITREF(lit_328),LITREF(lit_284)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_460 = YPmet(FUNCODEREF(fun_460),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(3,LITREF(lit_509),LITREF(lit_574),LITREF(lit_575)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_573),T42,ENVNUL,PNUL,YPfalse);
  T44 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T44);
  lit_576 = YPPsym((P)"<runtime-module-loader>");
  T46 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T45 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_576),T46);
  VARSET(YevalSastYLruntime_module_loaderG,T45);
  DYNDEFSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_577 = YPsb((P)"Unable to find module %s");
  T51 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_462 = YPmet(FUNCODEREF(fun_462),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_463 = YPmet(FUNCODEREF(fun_463),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_464 = YPmet(FUNCODEREF(fun_464),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_465 = YPmet(FUNCODEREF(fun_465),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_328)),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_466 = YPmet(FUNCODEREF(fun_load_module_466),LITREF(lit_556),T47,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYload_module);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYload_module);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_load_module_466;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYload_module,T52);
  T56 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T56);
  lit_578 = YPPsym((P)"runtime-module-loader");
  T57 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_578),T57,ENVNUL,PNUL,YPfalse);
  T58 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T58);
  lit_579 = YPPsym((P)"runtime-module");
  T59 = YPsig(YPPlist(1,LITREF(lit_339)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_579),T59,ENVNUL,PNUL,YPfalse);
  T60 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T60);
  lit_580 = YPPsym((P)"runtime-environment");
  T61 = YPsig(YPPlist(1,LITREF(lit_339)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_580),T61,ENVNUL,PNUL,YPfalse);
  T62 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T62);
  lit_581 = YPPsym((P)"runtime-core-environment");
  T63 = YPsig(YPPlist(1,LITREF(lit_339)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_581),T63,ENVNUL,PNUL,YPfalse);
  T64 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T64);
  lit_582 = YPPsym((P)"unchecked-runtime-environment");
  T65 = YPsig(YPPlist(1,LITREF(lit_339)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_582),T65,ENVNUL,PNUL,YPfalse);
  T66 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T66);
  lit_583 = YPPsym((P)"reloader-do-create-module");
  lit_584 = YPPsym((P)"data");
  T67 = YPsig(YPPlist(2,LITREF(lit_339),LITREF(lit_584)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_583),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T68);
  lit_585 = YPPsym((P)"reloader-do-use-module");
  lit_586 = YPPsym((P)"uses");
  T69 = YPsig(YPPlist(2,LITREF(lit_542),LITREF(lit_586)),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_585),T69,ENVNUL,PNUL,YPfalse);
  T70 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T70);
  lit_587 = YPPsym((P)"reloader-do-import");
  lit_588 = YPPsym((P)"from-mod");
  lit_589 = YPPsym((P)"original-name");
  lit_590 = YPsb((P)"Can't find %s from %s for %s\n");
  T71 = YPsig(YPPlist(4,LITREF(lit_542),LITREF(lit_328),LITREF(lit_588),LITREF(lit_589)),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_587),T71,ENVNUL,PNUL,YPfalse);
  T72 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T72);
  lit_591 = YPPsym((P)"process-module-data");
  T73 = YPsig(YPPlist(1,LITREF(lit_509)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_591),T73,ENVNUL,PNUL,YPfalse);
  T74 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T74);
  lit_592 = YPPsym((P)"ensure-module-data");
  T75 = YPsig(YPPlist(1,LITREF(lit_509)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_592),T75,ENVNUL,PNUL,YPfalse);
  T76 = YevalSastYensure_module_data;
  VARSET(YevalSastYensure_module_data,T76);
  lit_593 = YPPsym((P)"reloader-do-runtime-binding");
  T77 = YPsig(YPPlist(3,LITREF(lit_542),LITREF(lit_328),LITREF(lit_432)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_593),T77,ENVNUL,PNUL,YPfalse);
  T78 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T78);
  lit_594 = YPPsym((P)"reloader-do-dynamic-binding");
  T79 = YPsig(YPPlist(3,LITREF(lit_542),LITREF(lit_328),LITREF(lit_432)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_dynamic_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_dynamic_binding),LITREF(lit_594),T79,ENVNUL,PNUL,YPfalse);
  T80 = YevalSastYreloader_do_dynamic_binding;
  VARSET(YevalSastYreloader_do_dynamic_binding,T80);
  lit_595 = YPPsym((P)"reloader-do-other-binding");
  T81 = YPsig(YPPlist(2,LITREF(lit_542),LITREF(lit_328)),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_595),T81,ENVNUL,PNUL,YPfalse);
  T82 = YevalSastYreloader_do_other_binding;
  VARSET(YevalSastYreloader_do_other_binding,T82);
  lit_596 = YPPsym((P)"reloader-do-export");
  lit_597 = YPPsym((P)"as-name");
  lit_598 = YPsb((P)"Can't find %s in %s\n");
  T83 = YPsig(YPPlist(3,LITREF(lit_542),LITREF(lit_328),LITREF(lit_597)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_596),T83,ENVNUL,PNUL,YPfalse);
  T84 = YevalSastYreloader_do_export;
  VARSET(YevalSastYreloader_do_export,T84);
  lit_599 = YPPsym((P)"reload-modules");
  T85 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_599),T85,ENVNUL,PNUL,YPfalse);
  T86 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T86);
  lit_600 = YPPsym((P)"install-magic-bindings");
  T88 = YPsig(YPPlist(1,LITREF(lit_284)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_482 = YPmet(FUNCODEREF(fun_482),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_600),T87,ENVNUL,PNUL,YPfalse);
  T89 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T89);
  lit_601 = YPPsym((P)"reload-macros");
  T90 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_601),T90,ENVNUL,PNUL,YPfalse);
  T91 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T91);
  lit_602 = YPPsym((P)"install-interpreter-hacks");
  T92 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_602),T92,ENVNUL,PNUL,YPfalse);
  T93 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T93);
  lit_603 = YPPsym((P)"init-runtime");
  T94 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_603),T94,ENVNUL,PNUL,YPfalse);
  T95 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T95);
  lit_604 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_604));
  lit_605 = YPPsym((P)"fab-syntax-environment");
  lit_606 = YPPsym((P)"goo");
  T96 = YPsig(YPPlist(1,LITREF(lit_509)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_605),T96,ENVNUL,PNUL,YPfalse);
  T97 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T97);
  lit_607 = YPPsym((P)"fab-g2c-module");
  T98 = YPsig(YPPlist(2,LITREF(lit_546),LITREF(lit_328)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_607),T98,ENVNUL,PNUL,YPfalse);
  T99 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T99);
  lit_608 = YPPsym((P)"init-g2c-boot-environment");
  T100 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_608),T100,ENVNUL,PNUL,YPfalse);
  T101 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T101);
  lit_609 = YPPsym((P)"init-g2c-regular-environment");
  T102 = YPsig(YPPlist(2,LITREF(lit_410),LITREF(lit_546)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_609),T102,ENVNUL,PNUL,YPfalse);
  T103 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T103);
  lit_610 = YPPsym((P)"init-ast");
  T104 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_610),T104,ENVNUL,PNUL,YPfalse);
  T105 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T105);
  lit_611 = YPPsym((P)"do-static-global-bindings");
  T107 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_492 = YPmet(FUNCODEREF(fun_loop_492),LITREF(lit_149),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_138),LITREF(lit_410)),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_611),T106,ENVNUL,PNUL,YPfalse);
  T108 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T108);
  lit_612 = YPPsym((P)"do-named-static-global-bindings");
  T110 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_494 = YPmet(FUNCODEREF(fun_loop_494),LITREF(lit_149),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_138),LITREF(lit_410)),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_612),T109,ENVNUL,PNUL,YPfalse);
  T111 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T111);
  tmpF1911 = YPfalse;
  if (tmpF1911 != YPfalse) {
    T112 = VARREF(YevalSastYast_evaluate);
  } else {
    T112 = YPfalse;
  }
  tmpF1912 = YPfalse;
  if (tmpF1912 != YPfalse) {
    T113 = VARREF(YevalSastYinit_environment_for_eval);
  } else {
    T113 = YPfalse;
  }
  tmpF1913 = YPfalse;
  if (tmpF1913 != YPfalse) {
    T114 = VARREF(YevalSastYload_in);
  } else {
    T114 = YPfalse;
  }
  T115 = YPfalse;
  return T115;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSrange;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSpacker},
  {&module_info_gooSruntime},
  {&module_info_gooSioSwrite},
  {&module_info_evalSsyntax},
  {&module_info_gooScolsSstr},
  {&module_info_gooSsystem},
  {&module_info_gooSioSwrite},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {&module_info_evalSdependency},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {">", &module_info_gooSmag, ">"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"/", &module_info_gooSmath, "/"},
  {"~=", &module_info_gooSmath, "~="},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"read", &module_info_gooSruntime, "read"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"@<", &module_info_gooSboot, "@<"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"$expansion-parse-dependency", &module_info_evalSdependency, "$expansion-parse-dependency"},
  {"<dependent>", &module_info_evalSdependency, "<dependent>"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<=", &module_info_gooSmag, "<="},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"$empty-dependency", &module_info_evalSdependency, "$empty-dependency"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"invalidate-dependent", &module_info_evalSdependency, "invalidate-dependent"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"round", &module_info_gooSmath, "round"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dependency-empty?", &module_info_evalSdependency, "dependency-empty?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"def", &module_info_gooSboot, "def"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<dependable>", &module_info_evalSdependency, "<dependable>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"*", &module_info_gooSmath, "*"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"any?", &module_info_gooStypes, "any?"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"for", &module_info_gooSmacros, "for"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"log", &module_info_gooSmath, "log"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"quote", &module_info_gooSboot, "quote"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"nul", &module_info_gooSboot, "nul"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"df", &module_info_gooSboot, "df"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"t=", &module_info_gooStypes, "t="},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"find-dependency", &module_info_evalSdependency, "find-dependency"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"time", &module_info_gooSsystem, "time"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"dependency-and", &module_info_evalSdependency, "dependency-and"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"%put", &module_info_gooSboot, "%put"},
  {"in", &module_info_gooSioSport, "in"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"mod", &module_info_gooSmath, "mod"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"detach-dependent", &module_info_evalSdependency, "detach-dependent"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"logn", &module_info_gooSmath, "logn"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"$optimizaton-dependencies", &module_info_evalSdependency, "$optimizaton-dependencies"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"lst", &module_info_gooSboot, "lst"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"try", &module_info_gooSboot, "try"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"1+", &module_info_gooSmath, "1+"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"~==", &module_info_gooSmath, "~=="},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"as", &module_info_gooStypes, "as"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"$value-optimization-dependency", &module_info_evalSdependency, "$value-optimization-dependency"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"put", &module_info_gooSioSport, "put"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"use", &module_info_gooSboot, "use"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"dependency-includes-any?", &module_info_evalSdependency, "dependency-includes-any?"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"&", &module_info_gooSmath, "&"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"$parse-dependencies", &module_info_evalSdependency, "$parse-dependencies"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"map", &module_info_gooSmacros, "map"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"cos", &module_info_gooSmath, "cos"},
  {"$all-dependency-types", &module_info_evalSdependency, "$all-dependency-types"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"op", &module_info_gooSmacros, "op"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"atan", &module_info_gooSmath, "atan"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%su", &module_info_gooSboot, "%su"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"round/", &module_info_gooSmath, "round/"},
  {"close", &module_info_gooSioSport, "close"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"dependency-or", &module_info_evalSdependency, "dependency-or"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<dependency-type>", &module_info_evalSdependency, "<dependency-type>"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"$name-parse-dependency", &module_info_evalSdependency, "$name-parse-dependency"},
  {"out", &module_info_gooSioSport, "out"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"nil", &module_info_gooSboot, "nil"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"open", &module_info_gooSioSport, "open"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"min", &module_info_gooSmag, "min"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"log-dependency", &module_info_evalSdependency, "log-dependency"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"^", &module_info_gooSmath, "^"},
  {"invalidate-dependents", &module_info_evalSdependency, "invalidate-dependents"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"@+", &module_info_gooSboot, "@+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"match", &module_info_gooSmacros, "match"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"dependency-includes-all?", &module_info_evalSdependency, "dependency-includes-all?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun", &module_info_gooSboot, "fun"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"+", &module_info_gooSmath, "+"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"binding-mangled-name-setter", CVAR, &YevalSastYbinding_mangled_name_setter},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"install-initial-bindings", CVAR, &YevalSastYinstall_initial_bindings},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"<runtime-module-loader>", CVAR, &YevalSastYLruntime_module_loaderG},
  {"environment-next-setter", CVAR, &YevalSastYenvironment_next_setter},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"function-data-refs", CVAR, &YevalSastYfunction_data_refs},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"pairize", CVAR, &YevalSastYpairize},
  {"global-box-value", CVAR, &YevalSastYglobal_box_value},
  {"module-transaction-setter", CVAR, &YevalSastYmodule_transaction_setter},
  {"$empty-static-environment", CVAR, &YevalSastYDempty_static_environment},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"transaction-register-implemented-binding", CVAR, &YevalSastYtransaction_register_implemented_binding},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"runtime-module-loader", CVAR, &YevalSastYruntime_module_loader},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"load-and-register-module", CVAR, &YevalSastYload_and_register_module},
  {"do-module-loader-modules", CVAR, &YevalSastYdo_module_loader_modules},
  {"---main-7---", PVAR, NULL},
  {"transaction-register-dependent", CVAR, &YevalSastYtransaction_register_dependent},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"functions", CVAR, &YevalSastYfunctions},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"def-list", PVAR, NULL},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"environment-module", CVAR, &YevalSastYenvironment_module},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"call-with-subtransaction", CVAR, &YevalSastYcall_with_subtransaction},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"environment-uses-modules", CVAR, &YevalSastYenvironment_uses_modules},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"binding-type", CVAR, &YevalSastYbinding_type},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"*current-subtransaction*", CVAR, &YevalSastYTcurrent_subtransactionT},
  {"<module-loader>", CVAR, &YevalSastYLmodule_loaderG},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"reloader-do-runtime-binding", CVAR, &YevalSastYreloader_do_runtime_binding},
  {"<module>", CVAR, &YevalSastYLmoduleG},
  {"find-syntax-environment", CVAR, &YevalSastYfind_syntax_environment},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"module-target-environment-setter", CVAR, &YevalSastYmodule_target_environment_setter},
  {"binding-kind", CVAR, &YevalSastYbinding_kind},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"reloader-do-use-module", CVAR, &YevalSastYreloader_do_use_module},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"compute-transitive-users", CVAR, &YevalSastYcompute_transitive_users},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"runtime-module", CVAR, &YevalSastYruntime_module},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"binding-locative", CVAR, &YevalSastYbinding_locative},
  {"module-runtime-data-setter", CVAR, &YevalSastYmodule_runtime_data_setter},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"function-self-recursive?-setter", CVAR, &YevalSastYfunction_self_recursiveQ_setter},
  {"frame-bindings", CVAR, &YevalSastYframe_bindings},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"import-global!", CVAR, &YevalSastYimport_globalX},
  {"---main-3---", PVAR, NULL},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"module-data-processed?-setter", CVAR, &YevalSastYmodule_data_processedQ_setter},
  {"---main-6---", PVAR, NULL},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"<binding>", CVAR, &YevalSastYLbindingG},
  {"environment-next", CVAR, &YevalSastYenvironment_next},
  {"probe-module", CVAR, &YevalSastYprobe_module},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"$arguments-empty", CVAR, &YevalSastYDarguments_empty},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"reloader-do-dynamic-binding", CVAR, &YevalSastYreloader_do_dynamic_binding},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"module-syntax-environment-setter", CVAR, &YevalSastYmodule_syntax_environment_setter},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"environment-uses-modules-setter", CVAR, &YevalSastYenvironment_uses_modules_setter},
  {"module-transaction", CVAR, &YevalSastYmodule_transaction},
  {"environment-module-loader", CVAR, &YevalSastYenvironment_module_loader},
  {"binding-free?-setter", CVAR, &YevalSastYbinding_freeQ_setter},
  {"binding-info", CVAR, &YevalSastYbinding_info},
  {"binding-module-name", CVAR, &YevalSastYbinding_module_name},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"binding-inferred-type", CVAR, &YevalSastYbinding_inferred_type},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"---main-4---", PVAR, NULL},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"%module-exports-setter", CVAR, &YevalSastYPmodule_exports_setter},
  {"binding-mangled-name", CVAR, &YevalSastYbinding_mangled_name},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"binding-type-setter", CVAR, &YevalSastYbinding_type_setter},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"binding-inferred-type-setter", CVAR, &YevalSastYbinding_inferred_type_setter},
  {"reloader-do-import", CVAR, &YevalSastYreloader_do_import},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"module-mangled-string-name-setter", CVAR, &YevalSastYmodule_mangled_string_name_setter},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"*current-dependent*", CVAR, &YevalSastYTcurrent_dependentT},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"---main-9---", PVAR, NULL},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"report-undefined-global-bindings", CVAR, &YevalSastYreport_undefined_global_bindings},
  {"environment-bindings-setter", CVAR, &YevalSastYenvironment_bindings_setter},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"arguments", CVAR, &YevalSastYarguments},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"remove-modules-by-name!", CVAR, &YevalSastYremove_modules_by_nameX},
  {"roll-back-transaction", CVAR, &YevalSastYroll_back_transaction},
  {"transaction-implemented-bindings-setter", CVAR, &YevalSastYtransaction_implemented_bindings_setter},
  {"<module-binding>", CVAR, &YevalSastYLmodule_bindingG},
  {"$sequential-empty", CVAR, &YevalSastYDsequential_empty},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"binding-info-setter", CVAR, &YevalSastYbinding_info_setter},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"ast-<bot>", CVAR, &YevalSastYast_LbotG},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"process-module-data", CVAR, &YevalSastYprocess_module_data},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"load-in", CVAR, &YevalSastYload_in},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"<global-box>", CVAR, &YevalSastYLglobal_boxG},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"binding-locative-setter", CVAR, &YevalSastYbinding_locative_setter},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"binding-global-box", CVAR, &YevalSastYbinding_global_box},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"fab-subset-environment", CVAR, &YevalSastYfab_subset_environment},
  {"module-data-processed?", CVAR, &YevalSastYmodule_data_processedQ},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"environment-allows-foreign-names?", CVAR, &YevalSastYenvironment_allows_foreign_namesQ},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"objectify-error", CVAR, &YevalSastYobjectify_error},
  {"module-loader-modules-setter", CVAR, &YevalSastYmodule_loader_modules_setter},
  {"---main-2---", PVAR, NULL},
  {"$fab-list-empty", CVAR, &YevalSastYDfab_list_empty},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"module-mangled-name", CVAR, &YevalSastYmodule_mangled_name},
  {"$free-environment-empty", CVAR, &YevalSastYDfree_environment_empty},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"module-mangled-name-setter", CVAR, &YevalSastYmodule_mangled_name_setter},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"environment-module-loader-setter", CVAR, &YevalSastYenvironment_module_loader_setter},
  {"binding-native-to?", CVAR, &YevalSastYbinding_native_toQ},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"define-magic-binding", PVAR, NULL},
  {"register-module!", CVAR, &YevalSastYregister_moduleX},
  {"$functions-empty", CVAR, &YevalSastYDfunctions_empty},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"binding-global-box-setter", CVAR, &YevalSastYbinding_global_box_setter},
  {"---main-0---", PVAR, NULL},
  {"---main-5---", PVAR, NULL},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"environment-bindings", CVAR, &YevalSastYenvironment_bindings},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"unchecked-runtime-environment", CVAR, &YevalSastYunchecked_runtime_environment},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"reloader-do-export", CVAR, &YevalSastYreloader_do_export},
  {"with-subtransaction", PVAR, NULL},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"export-binding!", CVAR, &YevalSastYexport_bindingX},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"insert-globals!", CVAR, &YevalSastYinsert_globalsX},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"do-named-static-global-bindings", CVAR, &YevalSastYdo_named_static_global_bindings},
  {"*runtime-module-loader*", CVAR, &YevalSastYTruntime_module_loaderT},
  {"transaction-dependents-setter", CVAR, &YevalSastYtransaction_dependents_setter},
  {"module-uses-c-files", CVAR, &YevalSastYmodule_uses_c_files},
  {"module-uses-c-files-setter", CVAR, &YevalSastYmodule_uses_c_files_setter},
  {"module-exports", CVAR, &YevalSastYmodule_exports},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"binding-name-setter", CVAR, &YevalSastYbinding_name_setter},
  {"module-syntax-environment", CVAR, &YevalSastYmodule_syntax_environment},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"module-runtime-data", CVAR, &YevalSastYmodule_runtime_data},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"module-mangled-string-name", CVAR, &YevalSastYmodule_mangled_string_name},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"binding-handler-setter", CVAR, &YevalSastYbinding_handler_setter},
  {"module-exports-setter", CVAR, &YevalSastYmodule_exports_setter},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"merge-transactions!", CVAR, &YevalSastYmerge_transactionsX},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"---main-1---", PVAR, NULL},
  {"function-self-recursive?", CVAR, &YevalSastYfunction_self_recursiveQ},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"remove-module-internal!", CVAR, &YevalSastYremove_module_internalX},
  {"$goo-boot-module-name", CVAR, &YevalSastYDgoo_boot_module_name},
  {"<transaction>", CVAR, &YevalSastYLtransactionG},
  {"transaction-implemented-bindings", CVAR, &YevalSastYtransaction_implemented_bindings},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"<static-local-environment>", CVAR, &YevalSastYLstatic_local_environmentG},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"module-loader-modules", CVAR, &YevalSastYmodule_loader_modules},
  {"find-environment-module", CVAR, &YevalSastYfind_environment_module},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"find-binding", CVAR, &YevalSastYfind_binding},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"binding-handler", CVAR, &YevalSastYbinding_handler},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"module-loader-stack-setter", CVAR, &YevalSastYmodule_loader_stack_setter},
  {"---main-8---", PVAR, NULL},
  {"runtime-core-environment", CVAR, &YevalSastYruntime_core_environment},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"*now-rt-env*", DVAR, &YevalSastYTnow_rt_envT},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"reloader-do-other-binding", CVAR, &YevalSastYreloader_do_other_binding},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"reloader-do-create-module", CVAR, &YevalSastYreloader_do_create_module},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"module-name", CVAR, &YevalSastYmodule_name},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"module-loader-module-type", CVAR, &YevalSastYmodule_loader_module_type},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"fab-static-global-environment", CVAR, &YevalSastYfab_static_global_environment},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"module-name-setter", CVAR, &YevalSastYmodule_name_setter},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"def-programs", PVAR, NULL},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"set-module-environments", CVAR, &YevalSastYset_module_environments},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"function-data-refs-setter", CVAR, &YevalSastYfunction_data_refs_setter},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"global-box-value-setter", CVAR, &YevalSastYglobal_box_value_setter},
  {"<static-global-environment>", CVAR, &YevalSastYLstatic_global_environmentG},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"transaction-empty?", CVAR, &YevalSastYtransaction_emptyQ},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"binding-module-setter", CVAR, &YevalSastYbinding_module_setter},
  {"<static-empty-environment>", CVAR, &YevalSastYLstatic_empty_environmentG},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"do-static-global-bindings", CVAR, &YevalSastYdo_static_global_bindings},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"<static-environment>", CVAR, &YevalSastYLstatic_environmentG},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"ftype", CVAR, &YevalSastYftype},
  {"module-name-to-relpath", CVAR, &YevalSastYmodule_name_to_relpath},
  {"transaction-dependents", CVAR, &YevalSastYtransaction_dependents},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"environment-module-setter", CVAR, &YevalSastYenvironment_module_setter},
  {"runtime-environment", CVAR, &YevalSastYruntime_environment},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"binding-name", CVAR, &YevalSastYbinding_name},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"binding-module", CVAR, &YevalSastYbinding_module},
  {"<binding-name>", CVAR, &YevalSastYLbinding_nameG},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"load-module", CVAR, &YevalSastYload_module},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"binding-free?", CVAR, &YevalSastYbinding_freeQ},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"ensure-module-data", CVAR, &YevalSastYensure_module_data},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"binding-kind-setter", CVAR, &YevalSastYbinding_kind_setter},
  {"module-target-environment", CVAR, &YevalSastYmodule_target_environment},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"find-static-global-environment", CVAR, &YevalSastYfind_static_global_environment},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"reload-modules", CVAR, &YevalSastYreload_modules},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"module-loader-stack", CVAR, &YevalSastYmodule_loader_stack},
  {"with-dependent", PVAR, NULL},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"sequential", CVAR, &YevalSastYsequential},
  {"%module-exports", CVAR, &YevalSastYPmodule_exports},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"insert-global!", CVAR, &YevalSastYinsert_globalX},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"env-object-name", CVAR, &YevalSastYenv_object_name},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"binding-mangled-name-setter", "binding-mangled-name-setter"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"signature-specs", "signature-specs"},
  {"signature-names", "signature-names"},
  {"function-binding", "function-binding"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"function-data-refs", "function-data-refs"},
  {"constant-index", "constant-index"},
  {"global-box-value", "global-box-value"},
  {"<fab-list>", "<fab-list>"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"<free-environment>", "<free-environment>"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"<assignment>", "<assignment>"},
  {"application-binding", "application-binding"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"<arguments>", "<arguments>"},
  {"as-lst", "as-lst"},
  {"environment-module", "environment-module"},
  {"function-signature", "function-signature"},
  {"fix-let-body", "fix-let-body"},
  {"assignment-form", "assignment-form"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"fix-let-types", "fix-let-types"},
  {"<raw-constant>", "<raw-constant>"},
  {"<ast-method>", "<ast-method>"},
  {"binding-type", "binding-type"},
  {"<module-loader>", "<module-loader>"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"<module>", "<module>"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"binding-kind", "binding-kind"},
  {"function-temporaries", "function-temporaries"},
  {"def-list", "def-list"},
  {"<reference>", "<reference>"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"<global-assignment>", "<global-assignment>"},
  {"binding-locative", "binding-locative"},
  {"<local-assignment>", "<local-assignment>"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"function-value", "function-value"},
  {"<computed-program>", "<computed-program>"},
  {"<global-reference>", "<global-reference>"},
  {"<dynamic-assignment>", "<dynamic-assignment>"},
  {"reference-binding", "reference-binding"},
  {"binding-mangled-name", "binding-mangled-name"},
  {"<binding>", "<binding>"},
  {"<compile-time>", "<compile-time>"},
  {"probe-module", "probe-module"},
  {"<locals>", "<locals>"},
  {"<ast-generic>", "<ast-generic>"},
  {"module-mangled-name", "module-mangled-name"},
  {"binding-mutable?", "binding-mutable?"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"objectify-quotation", "objectify-quotation"},
  {"binding-info-setter", "binding-info-setter"},
  {"application-known?-setter", "application-known?-setter"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"sequentialize", "sequentialize"},
  {"locals-bindings", "locals-bindings"},
  {"<global-box>", "<global-box>"},
  {"locals-body", "locals-body"},
  {"module-mangled-string-name-setter", "module-mangled-string-name-setter"},
  {"function-index-setter", "function-index-setter"},
  {"program-type-setter", "program-type-setter"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"<macro-reference>", "<macro-reference>"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"function-nary?", "function-nary?"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"<module-binding>", "<module-binding>"},
  {"module-target-environment", "module-target-environment"},
  {"<ast-function>", "<ast-function>"},
  {"binding-module-name", "binding-module-name"},
  {"<bind-exit>", "<bind-exit>"},
  {"locals-functions", "locals-functions"},
  {"signature-value-setter", "signature-value-setter"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"load-in", "load-in"},
  {"binding-locative-setter", "binding-locative-setter"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"function-registers-setter", "function-registers-setter"},
  {"free-environment", "free-environment"},
  {"binding-global-box", "binding-global-box"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"<programs>", "<programs>"},
  {"set-module-environments", "set-module-environments"},
  {"module-mangled-name-setter", "module-mangled-name-setter"},
  {"<dynamic-definition>", "<dynamic-definition>"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"module-binding", "module-binding"},
  {"binding-native-to?", "binding-native-to?"},
  {"application-known?", "application-known?"},
  {"<alternative>", "<alternative>"},
  {"function-source-setter", "function-source-setter"},
  {"locals-body-setter", "locals-body-setter"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"ast-evaluate", "ast-evaluate"},
  {"reference-frame-number", "reference-frame-number"},
  {"function-signature-setter", "function-signature-setter"},
  {"module-mangled-string-name", "module-mangled-string-name"},
  {"alternative-condition", "alternative-condition"},
  {"function-index", "function-index"},
  {"program-type", "program-type"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"ast-define-binding", "ast-define-binding"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"environment-bindings", "environment-bindings"},
  {"function-free-setter", "function-free-setter"},
  {"reference-called-function?", "reference-called-function?"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"binding-index-setter", "binding-index-setter"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"module-uses-c-files", "module-uses-c-files"},
  {"module-exports", "module-exports"},
  {"application-function", "application-function"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"binding-info", "binding-info"},
  {"function-bindings", "function-bindings"},
  {"<magic-reference>", "<magic-reference>"},
  {"signature-value", "signature-value"},
  {"<sequential>", "<sequential>"},
  {"alternative-consequent", "alternative-consequent"},
  {"find-binding", "find-binding"},
  {"function-registers", "function-registers"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"alternative-alternant", "alternative-alternant"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"function-body-setter", "function-body-setter"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"compile-time-program", "compile-time-program"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"program-register-setter", "program-register-setter"},
  {"find-environment-module", "find-environment-module"},
  {"<application>", "<application>"},
  {"binding-value-setter", "binding-value-setter"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"<definition>", "<definition>"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"assignment-binding", "assignment-binding"},
  {"<dynamic-reference>", "<dynamic-reference>"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"<constant>", "<constant>"},
  {"objectify-signature", "objectify-signature"},
  {"<local-binding>", "<local-binding>"},
  {"<monitor>", "<monitor>"},
  {"module-name", "module-name"},
  {"function-source", "function-source"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"signature-names-setter", "signature-names-setter"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"def-programs", "def-programs"},
  {"application-arguments", "application-arguments"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"constant-index-setter", "constant-index-setter"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"function-free", "function-free"},
  {"monitor-info", "monitor-info"},
  {"signature-arity", "signature-arity"},
  {"constant-value", "constant-value"},
  {"binding-index", "binding-index"},
  {"monitor-type", "monitor-type"},
  {"runtime-environment", "runtime-environment"},
  {"binding-name", "binding-name"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"<regular-application>", "<regular-application>"},
  {"application-tail?", "application-tail?"},
  {"<static-module-binding-reference>", "<static-module-binding-reference>"},
  {"binding-type-setter", "binding-type-setter"},
  {"monitor-handler", "monitor-handler"},
  {"load-module", "load-module"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"<bound?>", "<bound?>"},
  {"<ast-signature>", "<ast-signature>"},
  {"<predefined-application>", "<predefined-application>"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"<real-reference>", "<real-reference>"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"function-body", "function-body"},
  {"<local-reference>", "<local-reference>"},
  {"init-ast", "init-ast"},
  {"monitor-test", "monitor-test"},
  {"function-debug-name", "function-debug-name"},
  {"binding-dotted?", "binding-dotted?"},
  {"program-register", "program-register"},
  {"binding-value", "binding-value"},
  {"<passive-program>", "<passive-program>"},
  {"signature-bindings", "signature-bindings"},
  {"<fix-let>", "<fix-let>"},
  {"%%macro", "%%macro"},
  {"signature-nary?", "signature-nary?"},
  {"bound?-reference", "bound?-reference"},
  {"<program>", "<program>"},
  {"env-object-name", "env-object-name"},
  {"binding-module", "binding-module"},
  {"assignment-reference", "assignment-reference"},
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

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_evalSsyntax (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);
extern void load_module_evalSdependency (void);

/* EXPRESSION: */

extern void load_module_evalSast (void);

void load_module_evalSast (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSpacker();
  load_module_gooSruntime();
  load_module_gooSioSwrite();
  load_module_evalSsyntax();
  load_module_gooScolsSstr();
  load_module_gooSsystem();
  load_module_gooSioSwrite();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();
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

}

/* END OF GENERATED CODE. */
