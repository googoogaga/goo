/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSastYmodule_name_setter,"eval/ast","module-name-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
DEF(YevalSastYbinding_prop_setter,"eval/ast","binding-prop-setter");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSastYmodule_uses_c_libraries_setter,"eval/ast","module-uses-c-libraries-setter");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YPprop,"goo/boot","%prop");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
DEF(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(YgooSmathYK,"goo/math","|");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSastYftype,"eval/ast","ftype");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSastYobjectify,"eval/ast","objectify");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSastYmodule_exports_setter,"eval/ast","module-exports-setter");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
DEF(YevalSastYbinding_prop,"eval/ast","binding-prop");
DEF(YevalSastYmodule_uses_c_files_setter,"eval/ast","module-uses-c-files-setter");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
DEF(YevalSastYarguments,"eval/ast","arguments");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSastYmodule_uses_c_includes_setter,"eval/ast","module-uses-c-includes-setter");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
DYNDEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
DEF(YevalSastYimport_and_mangle_globalX,"eval/ast","import-and-mangle-global!");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSastYfunctions,"eval/ast","functions");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
DEF(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
DEF(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(YevalSastYreloader_do_dynamic_binding,"eval/ast","reloader-do-dynamic-binding");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSastYsequential,"eval/ast","sequential");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
DEF(YevalSastYPmodule_exports_setter,"eval/ast","%module-exports-setter");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
DEF(YevalSastYobjectify_error,"eval/ast","objectify-error");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YevalSastYinsert_and_mangle_globalX,"eval/ast","insert-and-mangle-global!");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_146);
DEFLIT(lit_285);
DEFLIT(lit_36);
DEFLIT(lit_54);
DEFLIT(lit_86);
DEFLIT(lit_369);
DEFLIT(lit_306);
DEFLIT(lit_642);
DEFLIT(lit_34);
DEFLIT(lit_152);
DEFLIT(lit_458);
DEFLIT(lit_314);
DEFLIT(lit_210);
DEFLIT(lit_100);
DEFLIT(lit_295);
DEFLIT(lit_320);
DEFLIT(lit_316);
DEFLIT(lit_305);
DEFLIT(lit_142);
DEFLIT(lit_248);
DEFLIT(lit_399);
DEFLIT(lit_595);
DEFLIT(lit_507);
DEFLIT(lit_145);
DEFLIT(lit_193);
DEFLIT(lit_258);
DEFLIT(lit_303);
DEFLIT(lit_335);
DEFLIT(lit_549);
DEFLIT(lit_462);
DEFLIT(lit_400);
DEFLIT(lit_377);
DEFLIT(lit_633);
DEFLIT(lit_84);
DEFLIT(lit_503);
DEFLIT(lit_566);
DEFLIT(lit_579);
DEFLIT(lit_310);
DEFLIT(lit_406);
DEFLIT(lit_83);
DEFLIT(lit_229);
DEFLIT(lit_430);
DEFLIT(lit_164);
DEFLIT(lit_292);
DEFLIT(lit_262);
DEFLIT(lit_77);
DEFLIT(lit_477);
DEFLIT(lit_80);
DEFLIT(lit_559);
DEFLIT(lit_81);
DEFLIT(lit_102);
DEFLIT(lit_219);
DEFLIT(lit_72);
DEFLIT(lit_396);
DEFLIT(lit_568);
DEFLIT(lit_94);
DEFLIT(lit_65);
DEFLIT(lit_362);
DEFLIT(lit_635);
DEFLIT(lit_235);
DEFLIT(lit_31);
DEFLIT(lit_51);
DEFLIT(lit_181);
DEFLIT(lit_386);
DEFLIT(lit_526);
DEFLIT(lit_392);
DEFLIT(lit_188);
DEFLIT(lit_233);
DEFLIT(lit_413);
DEFLIT(lit_625);
DEFLIT(lit_223);
DEFLIT(lit_288);
DEFLIT(lit_79);
DEFLIT(lit_499);
DEFLIT(lit_50);
DEFLIT(lit_144);
DEFLIT(lit_629);
DEFLIT(lit_175);
DEFLIT(lit_23);
DEFLIT(lit_368);
DEFLIT(lit_347);
DEFLIT(lit_39);
DEFLIT(lit_348);
DEFLIT(lit_601);
DEFLIT(lit_627);
DEFLIT(lit_162);
DEFLIT(lit_245);
DEFLIT(lit_41);
DEFLIT(lit_97);
DEFLIT(lit_43);
DEFLIT(lit_432);
DEFLIT(lit_338);
DEFLIT(lit_444);
DEFLIT(lit_33);
DEFLIT(lit_49);
DEFLIT(lit_402);
DEFLIT(lit_631);
DEFLIT(lit_498);
DEFLIT(lit_364);
DEFLIT(lit_522);
DEFLIT(lit_259);
DEFLIT(lit_277);
DEFLIT(lit_109);
DEFLIT(lit_99);
DEFLIT(lit_375);
DEFLIT(lit_281);
DEFLIT(lit_199);
DEFLIT(lit_211);
DEFLIT(lit_540);
DEFLIT(lit_388);
DEFLIT(lit_127);
DEFLIT(lit_88);
DEFLIT(lit_584);
DEFLIT(lit_512);
DEFLIT(lit_416);
DEFLIT(lit_545);
DEFLIT(lit_598);
DEFLIT(lit_648);
DEFLIT(lit_137);
DEFLIT(lit_565);
DEFLIT(lit_220);
DEFLIT(lit_12);
DEFLIT(lit_606);
DEFLIT(lit_380);
DEFLIT(lit_423);
DEFLIT(lit_529);
DEFLIT(lit_452);
DEFLIT(lit_227);
DEFLIT(lit_202);
DEFLIT(lit_236);
DEFLIT(lit_247);
DEFLIT(lit_480);
DEFLIT(lit_532);
DEFLIT(lit_29);
DEFLIT(lit_384);
DEFLIT(lit_307);
DEFLIT(lit_1);
DEFLIT(lit_70);
DEFLIT(lit_213);
DEFLIT(lit_460);
DEFLIT(lit_354);
DEFLIT(lit_171);
DEFLIT(lit_124);
DEFLIT(lit_14);
DEFLIT(lit_408);
DEFLIT(lit_482);
DEFLIT(lit_53);
DEFLIT(lit_294);
DEFLIT(lit_296);
DEFLIT(lit_112);
DEFLIT(lit_225);
DEFLIT(lit_361);
DEFLIT(lit_343);
DEFLIT(lit_363);
DEFLIT(lit_446);
DEFLIT(lit_290);
DEFLIT(lit_250);
DEFLIT(lit_106);
DEFLIT(lit_533);
DEFLIT(lit_180);
DEFLIT(lit_647);
DEFLIT(lit_168);
DEFLIT(lit_524);
DEFLIT(lit_154);
DEFLIT(lit_329);
DEFLIT(lit_359);
DEFLIT(lit_26);
DEFLIT(lit_150);
DEFLIT(lit_104);
DEFLIT(lit_243);
DEFLIT(lit_163);
DEFLIT(lit_125);
DEFLIT(lit_614);
DEFLIT(lit_597);
DEFLIT(lit_169);
DEFLIT(lit_466);
DEFLIT(lit_297);
DEFLIT(lit_67);
DEFLIT(lit_96);
DEFLIT(lit_159);
DEFLIT(lit_161);
DEFLIT(lit_454);
DEFLIT(lit_440);
DEFLIT(lit_583);
DEFLIT(lit_218);
DEFLIT(lit_265);
DEFLIT(lit_184);
DEFLIT(lit_636);
DEFLIT(lit_9);
DEFLIT(lit_600);
DEFLIT(lit_596);
DEFLIT(lit_553);
DEFLIT(lit_495);
DEFLIT(lit_261);
DEFLIT(lit_201);
DEFLIT(lit_232);
DEFLIT(lit_397);
DEFLIT(lit_521);
DEFLIT(lit_558);
DEFLIT(lit_283);
DEFLIT(lit_450);
DEFLIT(lit_371);
DEFLIT(lit_68);
DEFLIT(lit_436);
DEFLIT(lit_116);
DEFLIT(lit_575);
DEFLIT(lit_607);
DEFLIT(lit_136);
DEFLIT(lit_231);
DEFLIT(lit_350);
DEFLIT(lit_187);
DEFLIT(lit_352);
DEFLIT(lit_552);
DEFLIT(lit_488);
DEFLIT(lit_344);
DEFLIT(lit_222);
DEFLIT(lit_147);
DEFLIT(lit_38);
DEFLIT(lit_78);
DEFLIT(lit_582);
DEFLIT(lit_468);
DEFLIT(lit_122);
DEFLIT(lit_493);
DEFLIT(lit_238);
DEFLIT(lit_623);
DEFLIT(lit_360);
DEFLIT(lit_192);
DEFLIT(lit_6);
DEFLIT(lit_394);
DEFLIT(lit_373);
DEFLIT(lit_328);
DEFLIT(lit_358);
DEFLIT(lit_630);
DEFLIT(lit_215);
DEFLIT(lit_613);
DEFLIT(lit_196);
DEFLIT(lit_470);
DEFLIT(lit_523);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_118);
DEFLIT(lit_511);
DEFLIT(lit_653);
DEFLIT(lit_484);
DEFLIT(lit_637);
DEFLIT(lit_59);
DEFLIT(lit_284);
DEFLIT(lit_323);
DEFLIT(lit_437);
DEFLIT(lit_74);
DEFLIT(lit_539);
DEFLIT(lit_615);
DEFLIT(lit_252);
DEFLIT(lit_621);
DEFLIT(lit_624);
DEFLIT(lit_632);
DEFLIT(lit_35);
DEFLIT(lit_17);
DEFLIT(lit_198);
DEFLIT(lit_589);
DEFLIT(lit_605);
DEFLIT(lit_299);
DEFLIT(lit_428);
DEFLIT(lit_491);
DEFLIT(lit_76);
DEFLIT(lit_120);
DEFLIT(lit_640);
DEFLIT(lit_319);
DEFLIT(lit_483);
DEFLIT(lit_548);
DEFLIT(lit_263);
DEFLIT(lit_581);
DEFLIT(lit_69);
DEFLIT(lit_577);
DEFLIT(lit_528);
DEFLIT(lit_435);
DEFLIT(lit_374);
DEFLIT(lit_608);
DEFLIT(lit_453);
DEFLIT(lit_113);
DEFLIT(lit_89);
DEFLIT(lit_224);
DEFLIT(lit_505);
DEFLIT(lit_190);
DEFLIT(lit_200);
DEFLIT(lit_240);
DEFLIT(lit_63);
DEFLIT(lit_267);
DEFLIT(lit_61);
DEFLIT(lit_496);
DEFLIT(lit_570);
DEFLIT(lit_421);
DEFLIT(lit_572);
DEFLIT(lit_331);
DEFLIT(lit_57);
DEFLIT(lit_123);
DEFLIT(lit_501);
DEFLIT(lit_562);
DEFLIT(lit_217);
DEFLIT(lit_244);
DEFLIT(lit_554);
DEFLIT(lit_651);
DEFLIT(lit_556);
DEFLIT(lit_135);
DEFLIT(lit_560);
DEFLIT(lit_561);
DEFLIT(lit_547);
DEFLIT(lit_516);
DEFLIT(lit_327);
DEFLIT(lit_357);
DEFLIT(lit_249);
DEFLIT(lit_308);
DEFLIT(lit_427);
DEFLIT(lit_179);
DEFLIT(lit_425);
DEFLIT(lit_535);
DEFLIT(lit_205);
DEFLIT(lit_541);
DEFLIT(lit_415);
DEFLIT(lit_151);
DEFLIT(lit_242);
DEFLIT(lit_622);
DEFLIT(lit_510);
DEFLIT(lit_538);
DEFLIT(lit_141);
DEFLIT(lit_383);
DEFLIT(lit_417);
DEFLIT(lit_508);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_518);
DEFLIT(lit_66);
DEFLIT(lit_341);
DEFLIT(lit_644);
DEFLIT(lit_342);
DEFLIT(lit_489);
DEFLIT(lit_494);
DEFLIT(lit_429);
DEFLIT(lit_166);
DEFLIT(lit_21);
DEFLIT(lit_490);
DEFLIT(lit_443);
DEFLIT(lit_542);
DEFLIT(lit_366);
DEFLIT(lit_264);
DEFLIT(lit_183);
DEFLIT(lit_469);
DEFLIT(lit_471);
DEFLIT(lit_474);
DEFLIT(lit_438);
DEFLIT(lit_433);
DEFLIT(lit_269);
DEFLIT(lit_434);
DEFLIT(lit_445);
DEFLIT(lit_382);
DEFLIT(lit_85);
DEFLIT(lit_639);
DEFLIT(lit_412);
DEFLIT(lit_246);
DEFLIT(lit_143);
DEFLIT(lit_555);
DEFLIT(lit_431);
DEFLIT(lit_195);
DEFLIT(lit_463);
DEFLIT(lit_115);
DEFLIT(lit_407);
DEFLIT(lit_487);
DEFLIT(lit_289);
DEFLIT(lit_578);
DEFLIT(lit_158);
DEFLIT(lit_230);
DEFLIT(lit_420);
DEFLIT(lit_576);
DEFLIT(lit_467);
DEFLIT(lit_273);
DEFLIT(lit_275);
DEFLIT(lit_492);
DEFLIT(lit_148);
DEFLIT(lit_367);
DEFLIT(lit_0);
DEFLIT(lit_379);
DEFLIT(lit_448);
DEFLIT(lit_333);
DEFLIT(lit_326);
DEFLIT(lit_121);
DEFLIT(lit_325);
DEFLIT(lit_356);
DEFLIT(lit_646);
DEFLIT(lit_346);
DEFLIT(lit_353);
DEFLIT(lit_411);
DEFLIT(lit_278);
DEFLIT(lit_92);
DEFLIT(lit_157);
DEFLIT(lit_56);
DEFLIT(lit_178);
DEFLIT(lit_652);
DEFLIT(lit_28);
DEFLIT(lit_426);
DEFLIT(lit_271);
DEFLIT(lit_71);
DEFLIT(lit_590);
DEFLIT(lit_131);
DEFLIT(lit_479);
DEFLIT(lit_134);
DEFLIT(lit_322);
DEFLIT(lit_456);
DEFLIT(lit_119);
DEFLIT(lit_506);
DEFLIT(lit_46);
DEFLIT(lit_117);
DEFLIT(lit_465);
DEFLIT(lit_291);
DEFLIT(lit_309);
DEFLIT(lit_617);
DEFLIT(lit_313);
DEFLIT(lit_58);
DEFLIT(lit_156);
DEFLIT(lit_424);
DEFLIT(lit_478);
DEFLIT(lit_73);
DEFLIT(lit_251);
DEFLIT(lit_24);
DEFLIT(lit_514);
DEFLIT(lit_298);
DEFLIT(lit_64);
DEFLIT(lit_546);
DEFLIT(lit_381);
DEFLIT(lit_376);
DEFLIT(lit_419);
DEFLIT(lit_287);
DEFLIT(lit_45);
DEFLIT(lit_628);
DEFLIT(lit_318);
DEFLIT(lit_155);
DEFLIT(lit_257);
DEFLIT(lit_476);
DEFLIT(lit_370);
DEFLIT(lit_337);
DEFLIT(lit_391);
DEFLIT(lit_186);
DEFLIT(lit_638);
DEFLIT(lit_279);
DEFLIT(lit_304);
DEFLIT(lit_16);
DEFLIT(lit_103);
DEFLIT(lit_497);
DEFLIT(lit_189);
DEFLIT(lit_87);
DEFLIT(lit_312);
DEFLIT(lit_62);
DEFLIT(lit_266);
DEFLIT(lit_149);
DEFLIT(lit_60);
DEFLIT(lit_129);
DEFLIT(lit_11);
DEFLIT(lit_138);
DEFLIT(lit_260);
DEFLIT(lit_387);
DEFLIT(lit_324);
DEFLIT(lit_355);
DEFLIT(lit_543);
DEFLIT(lit_351);
DEFLIT(lit_300);
DEFLIT(lit_55);
DEFLIT(lit_274);
DEFLIT(lit_500);
DEFLIT(lit_197);
DEFLIT(lit_254);
DEFLIT(lit_19);
DEFLIT(lit_536);
DEFLIT(lit_509);
DEFLIT(lit_439);
DEFLIT(lit_401);
DEFLIT(lit_395);
DEFLIT(lit_160);
DEFLIT(lit_504);
DEFLIT(lit_517);
DEFLIT(lit_527);
DEFLIT(lit_75);
DEFLIT(lit_90);
DEFLIT(lit_253);
DEFLIT(lit_389);
DEFLIT(lit_132);
DEFLIT(lit_301);
DEFLIT(lit_459);
DEFLIT(lit_340);
DEFLIT(lit_451);
DEFLIT(lit_282);
DEFLIT(lit_457);
DEFLIT(lit_385);
DEFLIT(lit_464);
DEFLIT(lit_330);
DEFLIT(lit_8);
DEFLIT(lit_616);
DEFLIT(lit_585);
DEFLIT(lit_618);
DEFLIT(lit_20);
DEFLIT(lit_239);
DEFLIT(lit_241);
DEFLIT(lit_403);
DEFLIT(lit_140);
DEFLIT(lit_22);
DEFLIT(lit_587);
DEFLIT(lit_209);
DEFLIT(lit_534);
DEFLIT(lit_475);
DEFLIT(lit_515);
DEFLIT(lit_485);
DEFLIT(lit_486);
DEFLIT(lit_473);
DEFLIT(lit_286);
DEFLIT(lit_37);
DEFLIT(lit_649);
DEFLIT(lit_5);
DEFLIT(lit_268);
DEFLIT(lit_167);
DEFLIT(lit_591);
DEFLIT(lit_620);
DEFLIT(lit_602);
DEFLIT(lit_101);
DEFLIT(lit_404);
DEFLIT(lit_255);
DEFLIT(lit_393);
DEFLIT(lit_194);
DEFLIT(lit_311);
DEFLIT(lit_3);
DEFLIT(lit_610);
DEFLIT(lit_599);
DEFLIT(lit_611);
DEFLIT(lit_10);
DEFLIT(lit_449);
DEFLIT(lit_405);
DEFLIT(lit_4);
DEFLIT(lit_272);
DEFLIT(lit_212);
DEFLIT(lit_214);
DEFLIT(lit_349);
DEFLIT(lit_216);
DEFLIT(lit_571);
DEFLIT(lit_593);
DEFLIT(lit_455);
DEFLIT(lit_612);
DEFLIT(lit_378);
DEFLIT(lit_332);
DEFLIT(lit_398);
DEFLIT(lit_442);
DEFLIT(lit_574);
DEFLIT(lit_207);
DEFLIT(lit_567);
DEFLIT(lit_91);
DEFLIT(lit_177);
DEFLIT(lit_203);
DEFLIT(lit_27);
DEFLIT(lit_293);
DEFLIT(lit_270);
DEFLIT(lit_130);
DEFLIT(lit_365);
DEFLIT(lit_339);
DEFLIT(lit_604);
DEFLIT(lit_472);
DEFLIT(lit_409);
DEFLIT(lit_594);
DEFLIT(lit_569);
DEFLIT(lit_95);
DEFLIT(lit_315);
DEFLIT(lit_7);
DEFLIT(lit_643);
DEFLIT(lit_153);
DEFLIT(lit_32);
DEFLIT(lit_182);
DEFLIT(lit_334);
DEFLIT(lit_550);
DEFLIT(lit_650);
DEFLIT(lit_551);
DEFLIT(lit_105);
DEFLIT(lit_206);
DEFLIT(lit_52);
DEFLIT(lit_390);
DEFLIT(lit_176);
DEFLIT(lit_191);
DEFLIT(lit_609);
DEFLIT(lit_44);
DEFLIT(lit_40);
DEFLIT(lit_461);
DEFLIT(lit_619);
DEFLIT(lit_133);
DEFLIT(lit_234);
DEFLIT(lit_256);
DEFLIT(lit_447);
DEFLIT(lit_422);
DEFLIT(lit_98);
DEFLIT(lit_173);
DEFLIT(lit_185);
DEFLIT(lit_372);
DEFLIT(lit_531);
DEFLIT(lit_537);
DEFLIT(lit_544);
DEFLIT(lit_563);
DEFLIT(lit_520);
DEFLIT(lit_170);
DEFLIT(lit_634);
DEFLIT(lit_321);
DEFLIT(lit_580);
DEFLIT(lit_302);
DEFLIT(lit_317);
DEFLIT(lit_13);
DEFLIT(lit_128);
DEFLIT(lit_280);
DEFLIT(lit_82);
DEFLIT(lit_172);
DEFLIT(lit_25);
DEFLIT(lit_441);
DEFLIT(lit_557);
DEFLIT(lit_626);
DEFLIT(lit_111);
DEFLIT(lit_641);
DEFLIT(lit_174);
DEFLIT(lit_336);
DEFLIT(lit_126);
DEFLIT(lit_645);
DEFLIT(lit_586);
DEFLIT(lit_165);
DEFLIT(lit_204);
DEFLIT(lit_592);
DEFLIT(lit_139);
DEFLIT(lit_603);
DEFLIT(lit_221);
DEFLIT(lit_410);
DEFLIT(lit_530);
DEFLIT(lit_588);
DEFLIT(lit_418);
DEFLIT(lit_228);
DEFLIT(lit_42);
DEFLIT(lit_114);
DEFLIT(lit_237);
DEFLIT(lit_481);
DEFLIT(lit_345);
DEFLIT(lit_564);
DEFLIT(lit_513);
DEFLIT(lit_110);
DEFLIT(lit_30);
DEFLIT(lit_525);
DEFLIT(lit_276);
DEFLIT(lit_502);
DEFLIT(lit_18);
DEFLIT(lit_93);
DEFLIT(lit_519);
DEFLIT(lit_107);
DEFLIT(lit_108);
DEFLIT(lit_208);
DEFLIT(lit_573);
DEFLIT(lit_414);
DEFLIT(lit_226);

/* FUNCTIONS: */

LOCFOR(fun_x_1431_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_objectify_error_3);
LOCFOR(fun_program_type_4);
LOCFOR(fun_program_type_setter_5);
LOCFOR(fun_program_register_6);
LOCFOR(fun_program_register_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_binding_name_9);
LOCFOR(fun_binding_name_setter_10);
LOCFOR(fun_binding_mangled_name_11);
LOCFOR(fun_binding_mangled_name_setter_12);
LOCFOR(fun_13);
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
LOCFOR(fun_binding_module_25);
LOCFOR(fun_binding_module_setter_26);
LOCFOR(fun_27);
LOCFOR(fun_binding_freeQ_28);
LOCFOR(fun_binding_freeQ_setter_29);
LOCFOR(fun_30);
LOCFOR(fun_binding_info_31);
LOCFOR(fun_binding_info_setter_32);
LOCFOR(fun_33);
LOCFOR(fun_binding_prop_34);
LOCFOR(fun_binding_prop_setter_35);
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
LOCFOR(fun_x_1437_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1441_112);
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
LOCFOR(fun_function_frame_len_136);
LOCFOR(fun_function_frame_len_setter_137);
LOCFOR(fun_138);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_empty_140);
LOCFOR(fun_function_free_141);
LOCFOR(fun_function_free_setter_142);
LOCFOR(fun_143);
LOCFOR(fun_function_kind_144);
LOCFOR(fun_function_adjectives_145);
LOCFOR(fun_function_adjectives_setter_146);
LOCFOR(fun_147);
LOCFOR(fun_function_kind_148);
LOCFOR(fun_function_kind_149);
LOCFOR(fun_alternative_condition_150);
LOCFOR(fun_alternative_condition_setter_151);
LOCFOR(fun_alternative_consequent_152);
LOCFOR(fun_alternative_consequent_setter_153);
LOCFOR(fun_alternative_alternant_154);
LOCFOR(fun_alternative_alternant_setter_155);
FUNFOR(YevalSastYsequential);
LOCFOR(fun_empty_157);
LOCFOR(fun_constant_value_158);
LOCFOR(fun_constant_value_setter_159);
LOCFOR(fun_constant_index_160);
LOCFOR(fun_constant_index_setter_161);
LOCFOR(fun_application_arguments_162);
LOCFOR(fun_application_arguments_setter_163);
LOCFOR(fun_application_tailQ_164);
LOCFOR(fun_application_tailQ_setter_165);
LOCFOR(fun_166);
LOCFOR(fun_application_function_167);
LOCFOR(fun_application_function_setter_168);
LOCFOR(fun_application_knownQ_169);
LOCFOR(fun_application_knownQ_setter_170);
LOCFOR(fun_171);
LOCFOR(fun_application_next_methods_172);
LOCFOR(fun_application_next_methods_setter_173);
LOCFOR(fun_application_binding_174);
LOCFOR(fun_application_binding_setter_175);
LOCFOR(fun_fix_let_bindings_176);
LOCFOR(fun_fix_let_bindings_setter_177);
LOCFOR(fun_fix_let_types_178);
LOCFOR(fun_fix_let_types_setter_179);
LOCFOR(fun_fix_let_arguments_180);
LOCFOR(fun_fix_let_arguments_setter_181);
LOCFOR(fun_fix_let_body_182);
LOCFOR(fun_fix_let_body_setter_183);
FUNFOR(YevalSastYfab_list);
LOCFOR(fun_empty_185);
FUNFOR(YevalSastYarguments);
LOCFOR(fun_empty_187);
LOCFOR(fun_locals_bindings_188);
LOCFOR(fun_locals_bindings_setter_189);
LOCFOR(fun_locals_functions_190);
LOCFOR(fun_locals_functions_setter_191);
LOCFOR(fun_locals_body_192);
LOCFOR(fun_locals_body_setter_193);
LOCFOR(fun_bind_exit_main_fun_194);
LOCFOR(fun_bind_exit_main_fun_setter_195);
LOCFOR(fun_unwind_protect_protected_thunk_196);
LOCFOR(fun_unwind_protect_protected_thunk_setter_197);
LOCFOR(fun_unwind_protect_cleanup_thunk_198);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_199);
LOCFOR(fun_monitor_type_200);
LOCFOR(fun_monitor_type_setter_201);
LOCFOR(fun_monitor_info_202);
LOCFOR(fun_monitor_info_setter_203);
LOCFOR(fun_monitor_test_204);
LOCFOR(fun_monitor_test_setter_205);
LOCFOR(fun_monitor_handler_206);
LOCFOR(fun_monitor_handler_setter_207);
LOCFOR(fun_monitor_main_thunk_208);
LOCFOR(fun_monitor_main_thunk_setter_209);
LOCFOR(fun_x_1443_210);
LOCFOR(fun_ast_walkX_211);
LOCFOR(fun_x_1445_212);
LOCFOR(fun_ast_walk_213);
LOCFOR(fun_ast_copy_214);
LOCFOR(fun_ast_copy_215);
LOCFOR(fun_environment_next_216);
LOCFOR(fun_environment_next_setter_217);
LOCFOR(fun_218);
LOCFOR(fun_environment_bindings_219);
LOCFOR(fun_environment_bindings_setter_220);
LOCFOR(fun_environment_module_221);
LOCFOR(fun_environment_module_setter_222);
LOCFOR(fun_environment_module_loader_223);
LOCFOR(fun_environment_module_loader_setter_224);
LOCFOR(fun_environment_uses_modules_225);
LOCFOR(fun_environment_uses_modules_setter_226);
LOCFOR(fun_227);
LOCFOR(fun_environment_allows_foreign_namesQ_228);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_229);
LOCFOR(fun_230);
LOCFOR(fun_231);
LOCFOR(fun_232);
LOCFOR(fun_env_object_name_233);
LOCFOR(fun_objectify_234);
LOCFOR(fun_objectify_list_235);
LOCFOR(fun_objectify_list_236);
LOCFOR(fun_objectify_list_237);
LOCFOR(fun_objectify_238);
LOCFOR(fun_objectify_239);
LOCFOR(fun_objectify_240);
LOCFOR(fun_objectify_241);
LOCFOR(fun_objectify_242);
LOCFOR(fun_objectify_quotation_243);
LOCFOR(fun_objectify_quotation_244);
LOCFOR(fun_objectify_quotation_245);
LOCFOR(fun_objectify_raw_246);
LOCFOR(fun_objectify_boundQ_247);
LOCFOR(fun_objectify_compile_time_248);
LOCFOR(fun_objectify_alternative_249);
LOCFOR(fun_loop_250);
LOCFOR(fun_sequentialize_251);
LOCFOR(fun_transform_defs_252);
LOCFOR(fun_loop_253);
LOCFOR(fun_objectify_sequential_254);
LOCFOR(fun_255);
LOCFOR(fun_objectify_application_256);
LOCFOR(fun_257);
LOCFOR(fun_objectify_application_258);
LOCFOR(fun_259);
LOCFOR(fun_objectify_application_260);
LOCFOR(fun_process_closed_application_261);
LOCFOR(fun_pack_nary_args_262);
LOCFOR(fun_pack_args_263);
LOCFOR(fun_process_nary_closed_application_264);
LOCFOR(fun_convert2arguments_265);
LOCFOR(fun_objectify_assignment_266);
LOCFOR(fun_objectify_assignment_267);
LOCFOR(fun_objectify_assignment_using_268);
LOCFOR(fun_objectify_assignment_using_269);
LOCFOR(fun_objectify_assignment_using_270);
LOCFOR(fun_objectify_assignment_using_271);
LOCFOR(fun_objectify_assignment_using_272);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_274);
LOCFOR(fun_objectify_definition_275);
LOCFOR(fun_objectify_variable_definition_276);
LOCFOR(fun_objectify_dynamic_definition_277);
LOCFOR(fun_expand_278);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_280);
LOCFOR(fun_objectify_function_definition_281);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_283);
LOCFOR(fun_objectify_generic_definition_284);
LOCFOR(fun_objectify_method_definition_285);
LOCFOR(fun_286);
LOCFOR(fun_287);
LOCFOR(fun_288);
LOCFOR(fun_289);
LOCFOR(fun_objectify_function_source_290);
LOCFOR(fun_291);
LOCFOR(fun_292);
LOCFOR(fun_objectify_function_293);
LOCFOR(fun_col_294);
LOCFOR(fun_objectify_signature_295);
LOCFOR(fun_find_296);
LOCFOR(fun_loop_297);
LOCFOR(fun_compute_local_reference_offsets_298);
LOCFOR(fun_objectify_binding_299);
LOCFOR(fun_binding_reference_class_300);
LOCFOR(fun_objectify_binding_301);
LOCFOR(fun_objectify_binding_302);
LOCFOR(fun_default_type_303);
LOCFOR(fun_objectify_free_global_reference_304);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_306);
LOCFOR(fun_objectify_symbol_307);
LOCFOR(fun_ftype_308);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_empty_310);
LOCFOR(fun_311);
LOCFOR(fun_312);
LOCFOR(fun_objectify_locals_313);
LOCFOR(fun_objectify_bind_exit_314);
LOCFOR(fun_objectify_unwind_protect_315);
LOCFOR(fun_objectify_monitor_316);
LOCFOR(fun_317);
LOCFOR(fun_318);
LOCFOR(fun_319);
LOCFOR(fun_320);
LOCFOR(fun_321);
LOCFOR(fun_objectify_export_322);
FUNFOR(YevalSastYimport_globalX);
LOCFOR(fun_324);
LOCFOR(fun_objectify_useSexport_module_325);
LOCFOR(fun_326);
LOCFOR(fun_objectify_use_include_327);
LOCFOR(fun_328);
LOCFOR(fun_objectify_use_library_329);
LOCFOR(fun_330);
LOCFOR(fun_use_mod_331);
LOCFOR(fun_use_c_mod_332);
LOCFOR(fun_objectify_use_module_333);
LOCFOR(fun_insert_and_mangle_globalX_334);
FUNFOR(YevalSastYimport_and_mangle_globalX);
LOCFOR(fun_336);
LOCFOR(fun_objectify_use_mangle_module_337);
LOCFOR(fun_expand_bind_list_338);
LOCFOR(fun_expand_bind_list_339);
LOCFOR(fun_expand_bind_list_340);
LOCFOR(fun_expand_bind_listT_341);
LOCFOR(fun_expand_bind_listT_342);
LOCFOR(fun_expand_bind_element_343);
LOCFOR(fun_expand_bind_element_344);
LOCFOR(fun_expand_pattern_345);
LOCFOR(fun_346);
LOCFOR(fun_expand_syntax_if_347);
LOCFOR(fun_r_extendT_348);
LOCFOR(fun_insert_globalX_349);
LOCFOR(fun_350);
LOCFOR(fun_insert_globalsX_351);
LOCFOR(fun_find_static_global_environment_352);
LOCFOR(fun_find_static_global_environment_353);
LOCFOR(fun_find_syntax_environment_354);
LOCFOR(fun_find_environment_module_355);
LOCFOR(fun_loop_356);
LOCFOR(fun_find_binding_357);
LOCFOR(fun_find_binding_358);
LOCFOR(fun_find_binding_359);
LOCFOR(fun_frame_bindings_360);
LOCFOR(fun_register_magic_binding_361);
LOCFOR(fun_magic_bindings_362);
LOCFOR(fun_x_1456_363);
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
LOCFOR(fun_378);
LOCFOR(fun_379);
LOCFOR(fun_380);
LOCFOR(fun_381);
LOCFOR(fun_382);
LOCFOR(fun_383);
LOCFOR(fun_384);
LOCFOR(fun_385);
LOCFOR(fun_386);
LOCFOR(fun_pairize_387);
LOCFOR(fun_388);
LOCFOR(fun_389);
LOCFOR(fun_390);
LOCFOR(fun_391);
LOCFOR(fun_392);
LOCFOR(fun_393);
LOCFOR(fun_ast_macro_expand_394);
LOCFOR(fun_395);
LOCFOR(fun_396);
LOCFOR(fun_397);
LOCFOR(fun_398);
LOCFOR(fun_399);
LOCFOR(fun_400);
LOCFOR(fun_401);
LOCFOR(fun_402);
LOCFOR(fun_transaction_implemented_bindings_403);
LOCFOR(fun_transaction_implemented_bindings_setter_404);
LOCFOR(fun_405);
LOCFOR(fun_transaction_dependents_406);
LOCFOR(fun_transaction_dependents_setter_407);
LOCFOR(fun_408);
FUNFOR(YevalSastYtransaction_register_implemented_binding);
FUNFOR(YevalSastYtransaction_register_dependent);
FUNFOR(YevalSastYtransaction_emptyQ);
LOCFOR(fun_412);
LOCFOR(fun_413);
FUNFOR(YevalSastYmerge_transactionsX);
LOCFOR(fun_415);
LOCFOR(fun_416);
FUNFOR(YevalSastYroll_back_transaction);
LOCFOR(fun_418);
LOCFOR(fun_419);
FUNFOR(YevalSastYcall_with_subtransaction);
LOCFOR(fun_x_1460_421);
LOCFOR(fun_422);
LOCFOR(fun_423);
LOCFOR(fun_424);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_426);
LOCFOR(fun_module_loader_modules_setter_427);
LOCFOR(fun_428);
LOCFOR(fun_module_loader_stack_429);
LOCFOR(fun_module_loader_stack_setter_430);
LOCFOR(fun_431);
LOCFOR(fun_module_name_432);
LOCFOR(fun_module_name_setter_433);
LOCFOR(fun_module_mangled_name_434);
LOCFOR(fun_module_mangled_name_setter_435);
LOCFOR(fun_436);
LOCFOR(fun_module_mangled_string_name_437);
LOCFOR(fun_module_mangled_string_name_setter_438);
LOCFOR(fun_439);
LOCFOR(fun_module_target_environment_440);
LOCFOR(fun_module_target_environment_setter_441);
LOCFOR(fun_module_syntax_environment_442);
LOCFOR(fun_module_syntax_environment_setter_443);
LOCFOR(fun_Pmodule_exports_444);
LOCFOR(fun_Pmodule_exports_setter_445);
LOCFOR(fun_446);
LOCFOR(fun_module_data_processedQ_447);
LOCFOR(fun_module_data_processedQ_setter_448);
LOCFOR(fun_449);
LOCFOR(fun_module_runtime_data_450);
LOCFOR(fun_module_runtime_data_setter_451);
LOCFOR(fun_452);
LOCFOR(fun_module_transaction_453);
LOCFOR(fun_module_transaction_setter_454);
LOCFOR(fun_455);
LOCFOR(fun_module_uses_c_files_456);
LOCFOR(fun_module_uses_c_files_setter_457);
LOCFOR(fun_458);
LOCFOR(fun_module_uses_c_includes_459);
LOCFOR(fun_module_uses_c_includes_setter_460);
LOCFOR(fun_461);
LOCFOR(fun_module_uses_c_libraries_462);
LOCFOR(fun_module_uses_c_libraries_setter_463);
LOCFOR(fun_464);
LOCFOR(fun_module_exports_465);
FUNFOR(YevalSastYset_module_environments);
LOCFOR(fun_467);
FUNFOR(YevalSastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_469);
FUNFOR(YevalSastYregister_moduleX);
FUNFOR(YevalSastYprobe_module);
LOCFOR(fun_472);
LOCFOR(fun_473);
FUNFOR(YevalSastYload_and_register_module);
FUNFOR(YevalSastYexport_bindingX);
FUNFOR(YevalSastYbinding_native_toQ);
LOCFOR(fun_477);
FUNFOR(YevalSastYreport_undefined_global_bindings);
LOCFOR(fun_479);
LOCFOR(fun_480);
LOCFOR(fun_add_user_481);
LOCFOR(fun_482);
FUNFOR(YevalSastYcompute_transitive_users);
FUNFOR(YevalSastYremove_module_internalX);
LOCFOR(fun_485);
FUNFOR(YevalSastYremove_modules_by_nameX);
FUNFOR(YevalSastYmodule_name_to_relpath);
LOCFOR(fun_488);
FUNFOR(YevalSastYinstall_initial_bindings);
FUNFOR(YevalSastYfab_static_global_environment);
LOCFOR(fun_491);
FUNFOR(YevalSastYfab_subset_environment);
LOCFOR(fun_493);
LOCFOR(fun_494);
LOCFOR(fun_495);
LOCFOR(fun_496);
LOCFOR(fun_load_module_497);
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
LOCFOR(fun_513);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_loop_523);
FUNFOR(YevalSastYdo_static_global_bindings);
LOCFOR(fun_loop_525);
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
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_6));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P return_;
  P saved_dependentF2418;
  P x_1430F2417;
  P x_1430F2416;
  P x_1430F2415;
  P bodyF2414;
  P dependentF2413;
  P x_1430F2412;
  P x_1431F2411;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1431_0,1);
  x_1431F2411 = T1;
  FUNINIT(x_1431F2411, 1,return_);
  x_1430F2412 = FREEREF(0);
  dependentF2413 = YPfalse;
  dependentF2413 = BOXFAB(dependentF2413);
  bodyF2414 = YPfalse;
  bodyF2414 = BOXFAB(bodyF2414);
  T7 = CALL2(1,VARREF(YisaQ),x_1430F2412,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1430F2412,LITREF(lit_6),x_1431F2411);
    x_1430F2415 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1430F2415,x_1431F2411);
    BOXVAL(dependentF2413) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1430F2415);
    x_1430F2416 = T12;
    BOXVAL(bodyF2414) = x_1430F2416;
    x_1430F2417 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1430F2417,x_1431F2411);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1431F2411,LITREF(lit_7),x_1430F2412);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF2418 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T24 = CALL1(1,VARREF(Ylst),saved_dependentF2418);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T31 = BOXVAL(dependentF2413);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T38 = BOXVAL(bodyF2414);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),saved_dependentF2418);
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

FUNCODEDEF(fun_binding_name_9) {
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

FUNCODEDEF(fun_binding_name_setter_10) {
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

FUNCODEDEF(fun_binding_mangled_name_11) {
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

FUNCODEDEF(fun_binding_mangled_name_setter_12) {
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

FUNCODEDEF(fun_13) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_type_14) {
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

FUNCODEDEF(fun_binding_type_setter_15) {
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

FUNCODEDEF(fun_binding_inferred_type_16) {
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

FUNCODEDEF(fun_binding_inferred_type_setter_17) {
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

FUNCODEDEF(fun_18) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYast_LbotG));
}

FUNCODEDEF(fun_global_box_value_19) {
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

FUNCODEDEF(fun_global_box_value_setter_20) {
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

FUNCODEDEF(fun_21) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_kind));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_kind));
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
  QRET(LITREF(lit_41));
}

FUNCODEDEF(fun_binding_module_25) {
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

FUNCODEDEF(fun_binding_module_setter_26) {
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

FUNCODEDEF(fun_27) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_freeQ_28) {
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

FUNCODEDEF(fun_binding_freeQ_setter_29) {
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

FUNCODEDEF(fun_30) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_info_31) {
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

FUNCODEDEF(fun_binding_info_setter_32) {
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

FUNCODEDEF(fun_33) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_prop_34) {
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

FUNCODEDEF(fun_binding_prop_setter_35) {
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
  P modF2419;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF2419 = T1;
  if (modF2419 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),modF2419);
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
  QRET(LITREF(lit_138));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1433F2422;
  P x_1432F2421;
  P bF2420;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF2420 = T1;
  x_1432F2421 = bF2420;
  x_1433F2422 = VARREF(YisaQ);
  T5 = CALL2(1,x_1433F2422,x_1432F2421,VARREF(YLsymG));
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF2420);
    T4 = T6;
  } else {
    T8 = CALL2(1,x_1433F2422,x_1432F2421,VARREF(YevalSastYLmodule_bindingG));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF2420);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),bF2420);
      T9 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_141),T10,T11);
      T7 = T9;
    } else {
      T7 = LITREF(lit_142);
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
  P nameF2423;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF2423 = T1;
  T3 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_145),nameF2423);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_146),nameF2423);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_147),nameF2423);
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
  P loopF2424;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_107,1);
  loopF2424 = T1;
  FUNINIT(loopF2424, 1,loopF2424);
  T2 = CALL2(0,loopF2424,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1437_109) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_154));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P return_;
  P DemptyF2435;
  P classF2434;
  P x_1436F2433;
  P x_1436F2432;
  P x_1436F2431;
  P x_1436F2430;
  P x_1436F2429;
  P supersF2428;
  P nameF2427;
  P x_1436F2426;
  P x_1437F2425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1437_109,1);
  x_1437F2425 = T1;
  FUNINIT(x_1437F2425, 1,return_);
  x_1436F2426 = FREEREF(0);
  nameF2427 = YPfalse;
  nameF2427 = BOXFAB(nameF2427);
  supersF2428 = YPfalse;
  supersF2428 = BOXFAB(supersF2428);
  T7 = CALL2(1,VARREF(YisaQ),x_1436F2426,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1436F2426,LITREF(lit_154),x_1437F2425);
    x_1436F2429 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1436F2429,x_1437F2425);
    BOXVAL(nameF2427) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1436F2429);
    x_1436F2430 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1436F2430,x_1437F2425);
    x_1436F2431 = T14;
    BOXVAL(supersF2428) = x_1436F2431;
    x_1436F2432 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1436F2432,x_1437F2425);
    T15 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1436F2430);
    x_1436F2433 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1436F2433,x_1437F2425);
    T13 = T18;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1437F2425,LITREF(lit_7),x_1436F2426);
  }
  T22 = BOXVAL(nameF2427);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_155),T22,LITREF(lit_156));
  classF2434 = T21;
  T25 = BOXVAL(nameF2427);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_157),T25,LITREF(lit_158));
  DemptyF2435 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T31 = CALL1(1,VARREF(Ylst),classF2434);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T35 = BOXVAL(supersF2428);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T39 = CALL1(1,VARREF(Ylst),DemptyF2435);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T43 = CALL1(1,VARREF(Ylst),classF2434);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T48 = BOXVAL(nameF2427);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
  T50 = CALL3(1,VARREF(YgooSmacrosYcat),T51,T52,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T56 = CALL1(1,VARREF(Ylst),classF2434);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_166));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
  T54 = CALLN(1,VARREF(YgooSmacrosYcat),7,T55,T56,T57,T58,T59,T60,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T45 = CALL5(1,VARREF(YgooSmacrosYcat),T46,T47,T49,T53,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_169));
  T69 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_170));
  T73 = CALL1(1,VARREF(Ylst),classF2434);
  T71 = CALL3(1,VARREF(YgooSmacrosYcat),T72,T73,Ynil);
  T70 = CALL1(1,VARREF(Ylst),T71);
  T68 = CALL3(1,VARREF(YgooSmacrosYcat),T69,T70,Ynil);
  T67 = CALL1(1,VARREF(Ylst),T68);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
  T75 = CALL1(1,VARREF(Ylst),classF2434);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T74,T75,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T76 = CALL1(1,VARREF(Ylst),DemptyF2435);
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

FUNCODEDEF(fun_x_1441_112) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_173));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  P return_;
  P x_1440F2440;
  P x_1440F2439;
  P nameF2438;
  P x_1440F2437;
  P x_1441F2436;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1441_112,1);
  x_1441F2436 = T1;
  FUNINIT(x_1441F2436, 1,return_);
  x_1440F2437 = FREEREF(0);
  nameF2438 = YPfalse;
  nameF2438 = BOXFAB(nameF2438);
  T5 = CALL2(1,VARREF(YisaQ),x_1440F2437,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1440F2437,LITREF(lit_173),x_1441F2436);
    x_1440F2439 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1440F2439,x_1441F2436);
    BOXVAL(nameF2438) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1440F2439);
    x_1440F2440 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1440F2440,x_1441F2436);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1441F2436,LITREF(lit_7),x_1440F2437);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T16 = BOXVAL(nameF2438);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
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
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
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

FUNCODEDEF(fun_function_frame_len_136) {
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

FUNCODEDEF(fun_function_frame_len_setter_137) {
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

FUNCODEDEF(fun_138) {
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

FUNCODEDEF(fun_empty_140) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_141) {
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

FUNCODEDEF(fun_function_free_setter_142) {
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

FUNCODEDEF(fun_143) {
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

FUNCODEDEF(fun_function_kind_144) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_196));
}

FUNCODEDEF(fun_function_adjectives_145) {
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

FUNCODEDEF(fun_function_adjectives_setter_146) {
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

FUNCODEDEF(fun_147) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_kind_148) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_200));
}

FUNCODEDEF(fun_function_kind_149) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_202));
}

FUNCODEDEF(fun_alternative_condition_150) {
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

FUNCODEDEF(fun_alternative_condition_setter_151) {
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

FUNCODEDEF(fun_alternative_consequent_152) {
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

FUNCODEDEF(fun_alternative_consequent_setter_153) {
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

FUNCODEDEF(fun_alternative_alternant_154) {
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

FUNCODEDEF(fun_alternative_alternant_setter_155) {
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

FUNCODEDEF(fun_empty_157) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_158) {
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

FUNCODEDEF(fun_constant_value_setter_159) {
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

FUNCODEDEF(fun_constant_index_160) {
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

FUNCODEDEF(fun_constant_index_setter_161) {
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

FUNCODEDEF(fun_application_arguments_162) {
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

FUNCODEDEF(fun_application_arguments_setter_163) {
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

FUNCODEDEF(fun_application_tailQ_164) {
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

FUNCODEDEF(fun_application_tailQ_setter_165) {
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

FUNCODEDEF(fun_166) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_function_167) {
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

FUNCODEDEF(fun_application_function_setter_168) {
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

FUNCODEDEF(fun_application_knownQ_169) {
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

FUNCODEDEF(fun_application_knownQ_setter_170) {
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

FUNCODEDEF(fun_171) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_next_methods_172) {
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

FUNCODEDEF(fun_application_next_methods_setter_173) {
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

FUNCODEDEF(fun_application_binding_174) {
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

FUNCODEDEF(fun_application_binding_setter_175) {
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

FUNCODEDEF(fun_fix_let_bindings_176) {
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

FUNCODEDEF(fun_fix_let_bindings_setter_177) {
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

FUNCODEDEF(fun_fix_let_types_178) {
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

FUNCODEDEF(fun_fix_let_types_setter_179) {
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

FUNCODEDEF(fun_fix_let_arguments_180) {
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

FUNCODEDEF(fun_fix_let_arguments_setter_181) {
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

FUNCODEDEF(fun_fix_let_body_182) {
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

FUNCODEDEF(fun_fix_let_body_setter_183) {
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

FUNCODEDEF(fun_empty_185) {
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

FUNCODEDEF(fun_empty_187) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDarguments_empty));
}

FUNCODEDEF(fun_locals_bindings_188) {
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

FUNCODEDEF(fun_locals_bindings_setter_189) {
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

FUNCODEDEF(fun_locals_functions_190) {
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

FUNCODEDEF(fun_locals_functions_setter_191) {
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

FUNCODEDEF(fun_locals_body_192) {
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

FUNCODEDEF(fun_locals_body_setter_193) {
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

FUNCODEDEF(fun_bind_exit_main_fun_194) {
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

FUNCODEDEF(fun_bind_exit_main_fun_setter_195) {
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

FUNCODEDEF(fun_unwind_protect_protected_thunk_196) {
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

FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_197) {
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

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_198) {
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

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_199) {
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

FUNCODEDEF(fun_monitor_type_200) {
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

FUNCODEDEF(fun_monitor_type_setter_201) {
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

FUNCODEDEF(fun_monitor_info_202) {
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

FUNCODEDEF(fun_monitor_info_setter_203) {
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

FUNCODEDEF(fun_monitor_test_204) {
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

FUNCODEDEF(fun_monitor_test_setter_205) {
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

FUNCODEDEF(fun_monitor_handler_206) {
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

FUNCODEDEF(fun_monitor_handler_setter_207) {
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

FUNCODEDEF(fun_monitor_main_thunk_208) {
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

FUNCODEDEF(fun_monitor_main_thunk_setter_209) {
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

FUNCODEDEF(fun_x_1443_210) {
  P x_1442_;
  P xF2444;
  P setterF2443;
  P getterF2442;
  P propF2441;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(x_1442_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1442_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1442_);
    propF2441 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2441);
    getterF2442 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF2441);
    setterF2443 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2442,VARREF(YevalSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2442);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF2442,FREEREF(0));
        xF2444 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF2444,VARREF(YevalSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2444,FREEREF(2));
          T17 = CALL2(1,setterF2443,T18,FREEREF(0));
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
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1442_);
    a1 = T20;
    x_1442_ = a1;
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

FUNCODEDEF(fun_ast_walkX_211) {
  P g_,o_,args_;
  P x_1443F2445;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1443_210,4);
  x_1443F2445 = T0;
  FUNINIT(x_1443F2445, 4,o_,g_,args_,x_1443F2445);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1443F2445,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1445_212) {
  P x_1444_;
  P xF2448;
  P getterF2447;
  P propF2446;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(x_1444_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1444_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1444_);
    propF2446 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2446);
    getterF2447 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2447,VARREF(YevalSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2447);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF2447,FREEREF(0));
        xF2448 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF2448,VARREF(YevalSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2448,FREEREF(2));
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
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1444_);
    a1 = T17;
    x_1444_ = a1;
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

FUNCODEDEF(fun_ast_walk_213) {
  P g_,o_,args_;
  P x_1445F2449;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1445_212,4);
  x_1445F2449 = T0;
  FUNINIT(x_1445F2449, 4,o_,g_,args_,x_1445F2449);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1445F2449,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_copy_214) {
  P x_;
  P copyF2450;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yclone),x_);
  copyF2450 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF2450);
  T2 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF2450);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_copy_215) {
  P x_;
  P next_metsF2451;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T3 = (P)YPnext_methods();
    next_metsF2451 = T3;
    if (next_metsF2451 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),next_metsF2451);
      T7 = CALL1(1,VARREF(Ytail),next_metsF2451);
      T5 = CALL4(1,VARREF(YgooSmacrosYnapp),T6,T7,x_,Ynil);
      T4 = T5;
    } else {
      T8 = CALL1(1,VARREF(Yerror),LITREF(lit_283));
      T4 = T8;
    }
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_216) {
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

FUNCODEDEF(fun_environment_next_setter_217) {
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

FUNCODEDEF(fun_218) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_219) {
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

FUNCODEDEF(fun_environment_bindings_setter_220) {
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

FUNCODEDEF(fun_environment_module_221) {
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

FUNCODEDEF(fun_environment_module_setter_222) {
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

FUNCODEDEF(fun_environment_module_loader_223) {
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

FUNCODEDEF(fun_environment_module_loader_setter_224) {
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

FUNCODEDEF(fun_environment_uses_modules_225) {
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

FUNCODEDEF(fun_environment_uses_modules_setter_226) {
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

FUNCODEDEF(fun_227) {
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

FUNCODEDEF(fun_environment_allows_foreign_namesQ_228) {
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

FUNCODEDEF(fun_environment_allows_foreign_namesQ_setter_229) {
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

FUNCODEDEF(fun_230) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_231) {
  P binding_;
  P tmpF2453;
  P tmpF2452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_41));
  tmpF2452 = T2;
  if (tmpF2452 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
    tmpF2453 = T6;
    if (tmpF2453 != YPfalse) {
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

FUNCODEDEF(fun_232) {
  P return_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNFAB(fun_231,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_233) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_232,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_234) {
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

FUNCODEDEF(fun_objectify_list_235) {
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

FUNCODEDEF(fun_objectify_list_236) {
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

FUNCODEDEF(fun_objectify_list_237) {
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

FUNCODEDEF(fun_objectify_238) {
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

FUNCODEDEF(fun_objectify_239) {
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

FUNCODEDEF(fun_objectify_quotation_243) {
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

FUNCODEDEF(fun_objectify_quotation_244) {
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

FUNCODEDEF(fun_objectify_raw_246) {
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

FUNCODEDEF(fun_objectify_boundQ_247) {
  P e_,r_,tailQ_;
  P refF2454;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  refF2454 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),refF2454);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_248) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF2459;
  P astF2458;
  P target_envF2457;
  P syntax_envF2456;
  P modF2455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF2455 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF2455);
  syntax_envF2456 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2455);
  target_envF2457 = T5;
  T7 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF2456,tailQ_);
  astF2458 = T7;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF2458);
  tmpF2459 = rtQ_;
  if (tmpF2459 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2456,target_envF2457);
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

FUNCODEDEF(fun_objectify_alternative_249) {
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

FUNCODEDEF(fun_loop_250) {
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

FUNCODEDEF(fun_sequentialize_251) {
  P eT_;
  P loopF2460;
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
      T8 = FUNSHELL(1,fun_loop_250,1);
      loopF2460 = T8;
      FUNINIT(loopF2460, 1,loopF2460);
      T9 = CALL1(0,loopF2460,eT_);
      T7 = T9;
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_252) {
  P eT_;
  P eF2461;
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
    eF2461 = T3;
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF2461);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF2461);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF2461);
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
      T21 = CALL1(1,VARREF(Ylst),eF2461);
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

FUNCODEDEF(fun_loop_253) {
  P res_,eT_;
  P headF2463;
  P tailQF2462;
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
    tailQF2462 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(YevalSastYobjectify),T9,FREEREF(1),tailQF2462);
    headF2463 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF2463,res_);
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

FUNCODEDEF(fun_objectify_sequential_254) {
  P eT_,r_,tailQ_;
  P astsF2465;
  P loopF2464;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_253,3);
  loopF2464 = T2;
  FUNINIT(loopF2464, 3,tailQ_,r_,loopF2464);
  T4 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF2464,Ynil,T4);
  T1 = T3;
  astsF2465 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),astsF2465);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_255) {
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

FUNCODEDEF(fun_objectify_application_256) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2466;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_255,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2466 = T1;
  T4 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF2466,r_,tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_257) {
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

FUNCODEDEF(fun_objectify_application_258) {
  P ff_,eT_,r_,tailQ_;
  P primF2469;
  P fvfF2468;
  P eeTF2467;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_257,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2467 = T1;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF2468 = T5;
  T7 = CALL1(1,VARREF(YevalSastYbinding_prop),fvfF2468);
  primF2469 = T7;
  if (primF2469 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSastYast_copy),primF2469);
    T9 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T10,eeTF2467,r_,tailQ_);
    T8 = T9;
  } else {
    T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF2468,VARREF(YevalSastYapplication_arguments),eeTF2467,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T8 = T11;
  }
  T6 = T8;
  T4 = T6;
  T0 = T4;
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
  P eeTF2470;
  P T0,T1,T2,T3,T4,T5,T6;
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
  eeTF2470 = T1;
  T4 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF2470,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_261) {
  P f_,eT_,r_,tailQ_;
  P bF2472;
  P vTF2471;
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
  vTF2471 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF2472 = T3;
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
      T18 = CALL3(1,VARREF(YevalSastYobjectify_error),LITREF(lit_323),f_,eT_);
      T7 = T18;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_262) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_326),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_327),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pack_args_263) {
  P eT_,vT_,tT_;
  P lst_typeF2474;
  P varF2473;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
loop:
  T1 = CALL1(1,VARREF(Yhead),vT_);
  varF2473 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF2473);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_160),FREEREF(0),YPfalse);
    lst_typeF2474 = T5;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF2473);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF2474,varF2473);
    CALL2(1,VARREF(Yhead_setter),lst_typeF2474,tT_);
    T8 = CALL1(0,FREEREF(1),eT_);
    T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,FREEREF(0),YPfalse);
    T9 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T6 = CALL2(1,VARREF(YevalSastYarguments),T7,T9);
    T4 = T6;
    T2 = T4;
  } else {
    T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T11 != YPfalse) {
      T12 = CALL3(1,VARREF(YevalSastYobjectify_error),LITREF(lit_331),FREEREF(2),eT_);
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

FUNCODEDEF(fun_process_nary_closed_application_264) {
  P f_,eT_,r_,tailQ_;
  P oF2478;
  P vTF2477;
  P pack_argsF2476;
  P pack_nary_argsF2475;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_262,1);
  pack_nary_argsF2475 = T1;
  T2 = FUNSHELL(1,fun_pack_args_263,4);
  pack_argsF2476 = T2;
  FUNINIT(pack_nary_argsF2475, 1,pack_nary_argsF2475);
  FUNINIT(pack_argsF2476, 4,r_,pack_nary_argsF2475,f_,pack_argsF2476);
  T4 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2477 = T4;
  T7 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T8 = CALL3(0,pack_argsF2476,eT_,vTF2477,T9);
  T10 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF2477,VARREF(YevalSastYfix_let_types),T7,VARREF(YevalSastYfix_let_arguments),T8,VARREF(YevalSastYfix_let_body),T10);
  oF2478 = T6;
  T5 = oF2478;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_convert2arguments_265) {
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

FUNCODEDEF(fun_objectify_assignment_266) {
  P binding_,e_,r_,tailQ_;
  P opF2479;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF2479 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF2479);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF2479);
    T6 = CALL3(1,VARREF(YevalSastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(YevalSastYobjectify_error),LITREF(lit_334),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_267) {
  P binding_,e_,r_,tailQ_;
  P valF2481;
  P refF2480;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF2480 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF2481 = T3;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF2480,valF2481);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_268) {
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

FUNCODEDEF(fun_objectify_assignment_using_269) {
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

FUNCODEDEF(fun_objectify_assignment_using_270) {
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

FUNCODEDEF(fun_objectify_assignment_using_271) {
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

FUNCODEDEF(fun_objectify_assignment_using_272) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_338),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF2482;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_341));
  tmpF2482 = T2;
  if (tmpF2482 != YPfalse) {
    T4 = tmpF2482;
  } else {
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_342));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_341));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_41));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T12 = CALL3(1,VARREF(Yerror),LITREF(lit_343),T13,new_kind_);
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

FUNCODEDEF(fun_ast_define_binding_274) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF2490;
  P bindingF2489;
  P modF2488;
  P foreignQF2487;
  P tmpF2486;
  P modF2485;
  P grF2484;
  P existing_bindingF2483;
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
  existing_bindingF2483 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2484 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module),grF2484);
  modF2485 = T5;
  if (existing_bindingF2483 != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF2483,modF2485);
    tmpF2486 = T11;
    if (tmpF2486 != YPfalse) {
      T12 = tmpF2486;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF2487 = T9;
    T13 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF2483);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF2483);
      if (foreignQF2487 != YPfalse) {
        T15 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF2483);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF2487 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYmodule_name),modF2485);
        T19 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF2483);
        T17 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_348),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF2483,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF2483,kind_);
    T8 = existing_bindingF2483;
    T7 = T8;
  } else {
    T21 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF2488 = T21;
    T23 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF2488);
    bindingF2489 = T23;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2489,grF2484);
    T22 = bindingF2489;
    T20 = T22;
    T7 = T20;
  }
  bindingF2490 = T7;
  T6 = bindingF2490;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_275) {
  P type_,kind_,var_,e_,r_;
  P defnF2493;
  P bindingF2492;
  P nameF2491;
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
  nameF2491 = T1;
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF2491,YPfalse,kind_);
  bindingF2492 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T5 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF2492,VARREF(YevalSastYassignment_form),T6);
  defnF2493 = T5;
  T4 = defnF2493;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_variable_definition_276) {
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

FUNCODEDEF(fun_objectify_dynamic_definition_277) {
  P var_,e_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_354),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_278) {
  P x_,r_,tailQ_;
  P expF2494;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_360));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_361));
  } else {
  }
  T3 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T3);
  expF2494 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_362));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF2494);
    T4 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_363));
  } else {
  }
  T1 = expF2494;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF2498;
  P envF2497;
  P tmpF2496;
  P expandF2495;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_278,1);
  expandF2495 = T1;
  FUNINIT(expandF2495, 1,expander_);
  tmpF2496 = env_or_false_;
  if (tmpF2496 != YPfalse) {
    T4 = tmpF2496;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF2497 = T3;
  T7 = CALL4(1,VARREF(YevalSastYast_define_binding),envF2497,name_,YPfalse,LITREF(lit_364));
  bindingF2498 = T7;
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),expandF2495,bindingF2498);
  T6 = bindingF2498;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_280) {
  P name_,e_,r_,rtQ_;
  P bindingF2504;
  P modnameF2503;
  P expanderF2502;
  P ast_expanderF2501;
  P syntax_envF2500;
  P sep_expanderF2499;
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
  sep_expanderF2499 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF2500 = T3;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2499,syntax_envF2500,YPfalse);
  ast_expanderF2501 = T5;
  T7 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF2501);
  expanderF2502 = T7;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF2503 = T9;
  T13 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T12 = CALL4(1,VARREF(YPPmacro),modnameF2503,name_,expanderF2502,T13);
  bindingF2504 = T12;
  T15 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2500,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2504,syntax_envF2500);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2499,r_,YPfalse);
    T18 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF2504,VARREF(YevalSastYassignment_form),T19);
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

FUNCODEDEF(fun_objectify_function_definition_281) {
  P name_,e_,r_;
  P defnF2507;
  P fF2506;
  P bindingF2505;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_41));
  bindingF2505 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF2506 = T3;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF2505,fF2506);
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T4,fF2506);
  T6 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF2505,VARREF(YevalSastYassignment_form),fF2506);
  defnF2507 = T6;
  T5 = defnF2507;
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

FUNCODEDEF(fun_objectify_primitive_definition_283) {
  P name_,mods_,sig_,body_,r_;
  P defnF2513;
  P formF2512;
  P bodyF2511;
  P new_rF2510;
  P signatureF2509;
  P bindingF2508;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_372));
  bindingF2508 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2509 = T3;
  T6 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2509);
  T5 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T6);
  new_rF2510 = T5;
  T8 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2510,YPtrue);
  bodyF2511 = T8;
  T11 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2508,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T11,VARREF(YevalSastYfunction_signature),signatureF2509,VARREF(YevalSastYfunction_body),bodyF2511);
  formF2512 = T10;
  T12 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_373));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YevalSastYbinding_prop_setter),formF2512,bindingF2508);
  } else {
  }
  T15 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF2508,VARREF(YevalSastYassignment_form),formF2512);
  defnF2513 = T15;
  T14 = defnF2513;
  T9 = T14;
  T7 = T9;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_generic_definition_284) {
  P name_,sig_,r_;
  P defnF2517;
  P formF2516;
  P signatureF2515;
  P bindingF2514;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_41));
  bindingF2514 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2515 = T3;
  T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF2514,VARREF(YevalSastYfunction_debug_name),T6,VARREF(YevalSastYfunction_signature),signatureF2515);
  formF2516 = T5;
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF2514,VARREF(YevalSastYassignment_form),formF2516);
  defnF2517 = T8;
  T7 = defnF2517;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_285) {
  P name_,e_,r_;
  P defnF2523;
  P formF2522;
  P callF2521;
  P metF2520;
  P genF2519;
  P bindingF2518;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_41));
  bindingF2518 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_377),name_);
  T3 = CALL4(1,VARREF(Ylst),LITREF(lit_376),T4,name_,YPfalse);
  genF2519 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF2520 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_378),genF2519,metF2520);
  callF2521 = T8;
  T10 = CALL3(1,VARREF(YevalSastYobjectify),callF2521,r_,YPfalse);
  formF2522 = T10;
  T12 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF2518,VARREF(YevalSastYassignment_form),formF2522);
  defnF2523 = T12;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF2520);
  T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T13,metF2520);
  T11 = defnF2523;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_286) {
  P tmpF2524;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF2524 = DYNREF(YevalSastYTrecord_sourceQT);
  if (tmpF2524 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_12),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_380),FREEREF(0),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_287) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_288) {
  P x_1447F2525;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1447F2525 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_286,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_287,1,x_1447F2525);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_289) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_290) {
  P sig_,body_,r_;
  P x_1446F2526;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1446F2526 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_288,3,sig_,body_,r_);
  T3 = FUNFAB(fun_289,1,x_1446F2526);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_291) {
  P bF2529;
  P new_rF2528;
  P signatureF2527;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF2527 = T1;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2527);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF2528 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF2528,YPtrue);
  bF2529 = T6;
  T7 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF2527,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bF2529,FREEREF(3));
  T8 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T8,FREEREF(3));
  T5 = FREEREF(3);
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_292) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_293) {
  P sig_,body_,r_,tailQ_;
  P x_1448F2531;
  P methodF2530;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG));
  methodF2530 = T1;
  x_1448F2531 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,methodF2530);
  T4 = FUNFAB(fun_291,4,sig_,r_,body_,methodF2530);
  T5 = FUNFAB(fun_292,1,x_1448F2531);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_294) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF2543;
  P nameF2542;
  P typeF2541;
  P stypeF2540;
  P dottedQF2539;
  P stypeF2538;
  P snameF2537;
  P paramF2536;
  P arityF2535;
  P valueF2534;
  P tmpF2533;
  P sexpr_valueF2532;
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
    sexpr_valueF2532 = T3;
    tmpF2533 = sexpr_valueF2532;
    if (tmpF2533 != YPfalse) {
      T7 = tmpF2533;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF2534 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF2535 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T15 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T17 = CALL3(1,VARREF(YevalSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T18 = CALL3(1,VARREF(YevalSastYobjectify),arityF2535,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T14,VARREF(YevalSastYsignature_names),T15,VARREF(YevalSastYsignature_specs),T16,VARREF(YevalSastYsignature_naryQ),T17,VARREF(YevalSastYsignature_arity),T18,VARREF(YevalSastYsignature_value),valueF2534);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T20 = CALL1(1,VARREF(Yhead),params_);
    paramF2536 = T20;
    T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF2536);
    snameF2537 = T22;
    T24 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF2536);
    stypeF2538 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF2538,VARREF(YevalSastYDsexpr_optionals_tag));
    dottedQF2539 = T26;
    if (dottedQF2539 != YPfalse) {
      T28 = VARREF(YevalSastYDsexpr_optionals_type_name);
    } else {
      T28 = stypeF2538;
    }
    stypeF2540 = T28;
    T30 = CALL3(1,VARREF(YevalSastYobjectify),stypeF2540,FREEREF(1),YPfalse);
    typeF2541 = T30;
    T32 = CALL2(1,VARREF(YevalSastYobjectify_quotation),snameF2537,FREEREF(1));
    nameF2542 = T32;
    T34 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF2537,VARREF(YevalSastYbinding_type),typeF2541,VARREF(YevalSastYbinding_dottedQ),dottedQF2539);
    bindingF2543 = T34;
    T36 = CALL1(1,VARREF(Ytail),params_);
    T37 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF2543,bindings_);
    T38 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),nameF2542,VARREF(Ytail),names_);
    T39 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF2541,VARREF(Ytail),types_);
    a1 = T36;
    a2 = dottedQF2539;
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

FUNCODEDEF(fun_objectify_signature_295) {
  P sig_,r_;
  P colF2545;
  P sexpr_paramsF2544;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF2544 = T1;
  T3 = FUNSHELL(1,fun_col_294,3);
  colF2545 = T3;
  FUNINIT(colF2545, 3,sig_,r_,colF2545);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T4 = CALL5(0,colF2545,sexpr_paramsF2544,YPfalse,Ynil,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_296) {
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

FUNCODEDEF(fun_loop_297) {
  P i_,r_;
  P findF2546;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(YevalSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_296,5);
    findF2546 = T3;
    FUNINIT(findF2546, 5,i_,r_,FREEREF(0),FREEREF(1),findF2546);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF2546,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_395),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_298) {
  P binding_,r_;
  P loopF2547;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_297,2);
  loopF2547 = T1;
  FUNINIT(loopF2547, 2,loopF2547,binding_);
  T2 = CALL2(0,loopF2547,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_299) {
  P n_,b_,r_;
  P jF2550;
  P iF2549;
  P tup29F2548;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup29F2548 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2548,YPint((P)0));
  iF2549 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2548,YPint((P)1));
  jF2550 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF2549,VARREF(YevalSastYreference_frame_offset),jF2550);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_300) {
  P b_;
  P x_1450F2552;
  P x_1449F2551;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1449F2551 = T1;
  x_1450F2552 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1450F2552,x_1449F2551,LITREF(lit_41));
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1450F2552,x_1449F2551,LITREF(lit_372));
    if (T6 != YPfalse) {
      T5 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1450F2552,x_1449F2551,LITREF(lit_341));
      if (T8 != YPfalse) {
        T7 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T10 = CALL2(1,x_1450F2552,x_1449F2551,LITREF(lit_354));
        if (T10 != YPfalse) {
          T9 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T12 = CALL2(1,x_1450F2552,x_1449F2551,LITREF(lit_364));
          if (T12 != YPfalse) {
            T11 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T14 = CALL2(1,x_1450F2552,x_1449F2551,LITREF(lit_342));
            if (T14 != YPfalse) {
              T13 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T16 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
              T15 = CALL2(1,VARREF(Yerror),LITREF(lit_399),T16);
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

FUNCODEDEF(fun_objectify_binding_301) {
  P n_,b_,r_;
  P LrefGF2553;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF2553 = T1;
  T2 = CALL3(1,VARREF(Ynew),LrefGF2553,VARREF(YevalSastYreference_binding),b_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_302) {
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

FUNCODEDEF(fun_default_type_303) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_401),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_304) {
  P name_,r_;
  P bF2556;
  P tmpF2555;
  P grF2554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2554 = T1;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF2554);
  tmpF2555 = T4;
  if (tmpF2555 != YPfalse) {
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
    bF2556 = T9;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF2556,grF2554);
    T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF2556);
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

FUNCODEDEF(fun_objectify_foreign_reference_306) {
  P name_,r_;
  P bindingF2565;
  P modF2564;
  P loaderF2563;
  P grF2562;
  P tmpF2561;
  P varnameF2560;
  P modnameF2559;
  P breakF2558;
  P namestrF2557;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF2557 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF2557,YPchr((P)58));
  breakF2558 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2557,YPint((P)0),breakF2558);
  modnameF2559 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF2558);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF2557);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2557,T8,T9);
  varnameF2560 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF2559);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF2561 = T12;
  if (tmpF2561 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF2560);
    T15 = CALL2(1,VARREF(YgooSmagYG),T16,YPint((P)0));
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T17 = CALL2(1,VARREF(Yerror),LITREF(lit_405),name_);
  } else {
  }
  T19 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2562 = T19;
  T21 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF2562);
  loaderF2563 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF2559);
  T23 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2563,T24);
  modF2564 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF2560);
  T28 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2564);
  T26 = CALL2(1,VARREF(YevalSastYfind_binding),T27,T28);
  bindingF2565 = T26;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2565,grF2562);
  T29 = CALL1(1,VARREF(Ynot),bindingF2565);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(Yerror),LITREF(lit_406),varnameF2560,modnameF2559);
  } else {
  }
  T31 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF2565,r_);
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

FUNCODEDEF(fun_objectify_symbol_307) {
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

FUNCODEDEF(fun_ftype_308) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_409),r_,YPfalse);
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

FUNCODEDEF(fun_empty_310) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_empty));
}

FUNCODEDEF(fun_311) {
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

FUNCODEDEF(fun_312) {
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

FUNCODEDEF(fun_objectify_locals_313) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P functionsF2569;
  P function_formsF2568;
  P new_rF2567;
  P bindingsF2566;
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
  T2 = FUNFAB(fun_311,1,r_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,names_);
  bindingsF2566 = T1;
  T4 = CALL2(1,VARREF(YevalSastYr_extendT),r_,bindingsF2566);
  new_rF2567 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYmap2),VARREF(YevalSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF2568 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSastYobjectify),new_rF2567,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF2568);
  functionsF2569 = T8;
  T10 = FUNFAB(fun_312,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T10,functionsF2569,bindingsF2566);
  T12 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),functionsF2569);
  T13 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2567,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),bindingsF2566,VARREF(YevalSastYlocals_functions),T12,VARREF(YevalSastYlocals_body),T13);
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_314) {
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

FUNCODEDEF(fun_objectify_unwind_protect_315) {
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

FUNCODEDEF(fun_objectify_monitor_316) {
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

FUNCODEDEF(fun_317) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_318) {
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

FUNCODEDEF(fun_319) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_427),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_320) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_426),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_317;
  T4 = FUNFAB(fun_318,1,exit_);
  T5 = FUNFAB(fun_319,1,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_321) {
  P name_;
  P bindingF2570;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF2570 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2570,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_320,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF2570);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_322) {
  P names_,r_,tailQ_;
  P moduleF2572;
  P envF2571;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2571 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2572 = T3;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2572);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF2571,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_424));
  } else {
  }
  T8 = FUNFAB(fun_321,2,envF2571,moduleF2572);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF2574;
  P existingF2573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,env_);
  existingF2573 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2573,YPfalse);
  tmpF2574 = T5;
  if (tmpF2574 != YPfalse) {
    T6 = tmpF2574;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2573,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T8 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_430),T9,T10);
  } else {
  }
  CALL2(1,VARREF(YevalSastYinsert_globalX),b_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_324) {
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

FUNCODEDEF(fun_objectify_useSexport_module_325) {
  P name_,r_,tailQ_;
  P used_moduleF2578;
  P loaderF2577;
  P moduleF2576;
  P envF2575;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2575 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2576 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2575);
  loaderF2577 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2577,name_);
  used_moduleF2578 = T7;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2575);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,used_moduleF2578);
  T9 = FUNFAB(fun_324,2,envF2575,moduleF2576);
  T10 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2578);
  CALL2(1,VARREF(YgooSmacrosYdo),T9,T10);
  T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_326) {
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

FUNCODEDEF(fun_objectify_use_include_327) {
  P name_,r_,tailQ_;
  P modF2580;
  P envF2579;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2579 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2579);
  modF2580 = T3;
  T6 = FUNFAB(fun_326,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2580);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2580);
    T8 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T9,name_);
  } else {
  }
  T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_328) {
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

FUNCODEDEF(fun_objectify_use_library_329) {
  P name_,r_,tailQ_;
  P modF2582;
  P envF2581;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2581 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2581);
  modF2582 = T3;
  T6 = FUNFAB(fun_328,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2582);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2582);
    T8 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T9,name_);
  } else {
  }
  T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_330) {
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

FUNCODEDEF(fun_use_mod_331) {
  P name_;
  P used_moduleF2584;
  P loaderF2583;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),FREEREF(0));
  loaderF2583 = T1;
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2583,name_);
  used_moduleF2584 = T3;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T4,used_moduleF2584);
  T5 = FUNFAB(fun_330,1,FREEREF(0));
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2584);
  CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
  T2 = used_moduleF2584;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_use_c_mod_332) {
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

FUNCODEDEF(fun_objectify_use_module_333) {
  P name_,r_,tailQ_;
  P swig_modF2591;
  P x_1452F2590;
  P x_1451F2589;
  P use_c_modF2588;
  P use_modF2587;
  P modF2586;
  P envF2585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2585 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2585);
  modF2586 = T3;
  T4 = FUNSHELL(1,fun_use_mod_331,1);
  use_modF2587 = T4;
  T5 = fun_use_c_mod_332;
  use_c_modF2588 = T5;
  FUNINIT(use_modF2587, 1,envF2585);
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1451F2589 = T7;
  x_1452F2590 = VARREF(YgooScolsSseqYsuffixQ);
  T10 = CALL2(1,x_1452F2590,x_1451F2589,LITREF(lit_438));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T11 = CALL2(0,use_c_modF2588,modF2586,T12);
    T9 = T11;
  } else {
    T14 = CALL2(1,x_1452F2590,x_1451F2589,LITREF(lit_439));
    if (T14 != YPfalse) {
      T20 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T19 = CALL2(1,VARREF(YgooScolsSseqYsplit),T20,YPchr((P)46));
      T18 = CALL1(1,VARREF(YgooSmacrosY1st),T19);
      T17 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T18);
      T16 = CALL1(0,use_modF2587,T17);
      swig_modF2591 = T16;
      T22 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_440));
      T21 = CALL2(0,use_c_modF2588,swig_modF2591,T22);
      T15 = T21;
      T13 = T15;
    } else {
      T23 = CALL1(0,use_modF2587,name_);
      T13 = T23;
    }
    T9 = T13;
  }
  T8 = T9;
  T6 = T8;
  T24 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_and_mangle_globalX_334) {
  P binding_,mangle_prefix_,r_;
  P rF2592;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2592 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2592);
  T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T5);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF2594;
  P existingF2593;
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
  existingF2593 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2593,YPfalse);
  tmpF2594 = T6;
  if (tmpF2594 != YPfalse) {
    T7 = tmpF2594;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2593,b_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T11);
    T12 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T9 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_444),T10,T12);
  } else {
  }
  CALL3(1,VARREF(YevalSastYinsert_and_mangle_globalX),b_,mangle_prefix_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_336) {
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

FUNCODEDEF(fun_objectify_use_mangle_module_337) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF2599;
  P used_moduleF2598;
  P loaderF2597;
  P moduleF2596;
  P envF2595;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2595 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2596 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2595);
  loaderF2597 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2597,name_);
  used_moduleF2598 = T7;
  T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF2599 = T9;
  T10 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2595);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T10,used_moduleF2598);
  T11 = FUNFAB(fun_336,2,str_manglerF2599,envF2595);
  T12 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2598);
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

FUNCODEDEF(fun_expand_bind_list_338) {
  P pat_,var_,fail_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_450),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_339) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_451));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_340) {
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
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_452),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yerror),LITREF(lit_453),pat_);
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

FUNCODEDEF(fun_expand_bind_listT_341) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_451));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_342) {
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

FUNCODEDEF(fun_expand_bind_element_343) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_456));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_326));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_344) {
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
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_457));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,Ynil);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
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
      T26 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,Ynil);
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_326));
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
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_458));
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
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
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

FUNCODEDEF(fun_expand_pattern_345) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_376));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_460));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_461));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_346) {
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

FUNCODEDEF(fun_expand_syntax_if_347) {
  P x_;
  P epatF2607;
  P failF2606;
  P varF2605;
  P elseF2604;
  P thenF2603;
  P valueF2602;
  P varsF2601;
  P patF2600;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF2600 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF2600);
  varsF2601 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF2602 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF2603 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF2604 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2605 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF2606 = T13;
  T15 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF2600,varF2605,failF2606);
  epatF2607 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_463));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_464));
  T26 = CALL1(1,VARREF(Ylst),failF2606);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_4));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_465));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_382));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T33,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T40 = CALL1(1,VARREF(Ylst),elseF2604);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T37,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T48 = CALL1(1,VARREF(Ylst),varF2605);
  T49 = CALL1(1,VARREF(Ylst),valueF2602);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T55 = fun_346;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF2601);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF2607);
  T57 = CALL1(1,VARREF(Ylst),thenF2603);
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

FUNCODEDEF(fun_r_extendT_348) {
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

FUNCODEDEF(fun_insert_globalX_349) {
  P binding_,r_;
  P rF2608;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2608 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2608);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_350) {
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

FUNCODEDEF(fun_insert_globalsX_351) {
  P bindings_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNFAB(fun_350,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_352) {
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

FUNCODEDEF(fun_find_static_global_environment_353) {
  P r_;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_354) {
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

FUNCODEDEF(fun_find_environment_module_355) {
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

FUNCODEDEF(fun_loop_356) {
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

FUNCODEDEF(fun_find_binding_357) {
  P name_,r_;
  P loopF2609;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_356,3);
  loopF2609 = T1;
  FUNINIT(loopF2609, 3,name_,r_,loopF2609);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF2609,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_358) {
  P name_,r_;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_359) {
  P name_,r_;
  P tmpF2610;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2610 = T1;
  if (tmpF2610 != YPfalse) {
    T3 = tmpF2610;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
    T4 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_360) {
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

FUNCODEDEF(fun_register_magic_binding_361) {
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

FUNCODEDEF(fun_magic_bindings_362) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1456_363) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_477));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_364) {
  P return_;
  P sexpr_nameF2623;
  P special_nameF2622;
  P x_1455F2621;
  P x_1455F2620;
  P x_1455F2619;
  P x_1455F2618;
  P x_1455F2617;
  P x_1455F2616;
  P bodyF2615;
  P paramsF2614;
  P nameF2613;
  P x_1455F2612;
  P x_1456F2611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1456_363,1);
  x_1456F2611 = T1;
  FUNINIT(x_1456F2611, 1,return_);
  x_1455F2612 = FREEREF(0);
  nameF2613 = YPfalse;
  nameF2613 = BOXFAB(nameF2613);
  paramsF2614 = YPfalse;
  paramsF2614 = BOXFAB(paramsF2614);
  bodyF2615 = YPfalse;
  bodyF2615 = BOXFAB(bodyF2615);
  T9 = CALL2(1,VARREF(YisaQ),x_1455F2612,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1455F2612,LITREF(lit_477),x_1456F2611);
    x_1455F2616 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1455F2616,x_1456F2611);
    BOXVAL(nameF2613) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1455F2616);
    x_1455F2617 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1455F2617,x_1456F2611);
    x_1455F2618 = T16;
    BOXVAL(paramsF2614) = x_1455F2618;
    x_1455F2619 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1455F2619,x_1456F2611);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1455F2617);
    x_1455F2620 = T19;
    BOXVAL(bodyF2615) = x_1455F2620;
    x_1455F2621 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1455F2621,x_1456F2611);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1456F2611,LITREF(lit_7),x_1455F2612);
  }
  T25 = BOXVAL(nameF2613);
  T24 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_478),T25);
  special_nameF2622 = T24;
  T28 = BOXVAL(nameF2613);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_479),T28,LITREF(lit_480));
  sexpr_nameF2623 = T27;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T34 = CALL1(1,VARREF(Ylst),special_nameF2622);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_326));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_342));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),sexpr_nameF2623);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T47 = CALL1(1,VARREF(Ylst),YPfalse);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_481));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_482));
  T54 = BOXVAL(paramsF2614);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(bodyF2615);
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T57 = CALL1(1,VARREF(Ylst),YPfalse);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),13,T37,T38,T39,T40,T44,T45,T46,T47,T48,T49,T56,T57,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_474));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_326));
  T65 = BOXVAL(nameF2613);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T66 = CALL1(1,VARREF(Ylst),special_nameF2622);
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

FUNCODEDEF(fun_365) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_364,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_366) {
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

FUNCODEDEF(fun_367) {
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

FUNCODEDEF(fun_368) {
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

FUNCODEDEF(fun_369) {
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

FUNCODEDEF(fun_370) {
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

FUNCODEDEF(fun_371) {
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_dynamic_definition),T1,T2,r_);
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
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPtrue);
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
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPfalse);
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
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_method_definition),T1,T2,r_);
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
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_generic_definition),T1,T2,r_);
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
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_function_definition),T1,T2,r_);
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
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_function),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_379) {
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

FUNCODEDEF(fun_380) {
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

FUNCODEDEF(fun_381) {
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

FUNCODEDEF(fun_382) {
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

FUNCODEDEF(fun_383) {
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

FUNCODEDEF(fun_384) {
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

FUNCODEDEF(fun_385) {
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

FUNCODEDEF(fun_386) {
  P x_,r_,tailQ_;
  P bodyF2629;
  P handlerF2628;
  P testF2627;
  P infoF2626;
  P typeF2625;
  P tup30F2624;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup30F2624 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2624,YPint((P)0));
  typeF2625 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2624,YPint((P)1));
  infoF2626 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2624,YPint((P)2));
  testF2627 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2624,YPint((P)3));
  handlerF2628 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2624,YPint((P)4));
  bodyF2629 = T11;
  T12 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF2625,infoF2626,testF2627,handlerF2628,bodyF2629,r_,tailQ_);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_387) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_326),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_327),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_388) {
  P x_,r_,tailQ_;
  P nameF2630;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF2630 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_502));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_326));
  T8 = CALL1(1,VARREF(Ylst),nameF2630);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(YevalSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,Ynil);
  T2 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_41),nameF2630,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_389) {
  P x_,r_,tailQ_;
  P typeF2635;
  P setter_nameF2634;
  P ownerF2633;
  P varF2632;
  P nameF2631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF2631 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF2632 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF2633 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF2631);
  setter_nameF2634 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF2635 = T9;
  T13 = CALL2(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF2631,ownerF2633);
  T14 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF2631,ownerF2633,typeF2635);
  T18 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T18 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),varF2632);
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_401));
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
    T21 = CALL1(1,VARREF(Ylst),T22);
    T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,Ynil);
    T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T25 = CALL1(1,VARREF(Ylst),T26);
    T19 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T20,T25);
    T17 = T19;
  } else {
    T17 = LITREF(lit_505);
  }
  T16 = CALL5(1,VARREF(Ylst),ownerF2633,nameF2631,setter_nameF2634,typeF2635,T17);
  T15 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_504),T16);
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

FUNCODEDEF(fun_390) {
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
  T0 = CALL4(1,VARREF(YevalSastYobjectify_compile_time),T1,r_,tailQ_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_392) {
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
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_372));
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

FUNCODEDEF(fun_393) {
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

FUNCODEDEF(fun_ast_macro_expand_394) {
  P x_,r_,tailQ_;
  P resF2638;
  P macF2637;
  P astF2636;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,tailQ_);
  astF2636 = T1;
  T4 = CALL2(1,VARREF(YisaQ),astF2636,VARREF(YevalSastYLmacro_referenceG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),astF2636);
    macF2637 = T6;
    T9 = CALL1(1,VARREF(YevalSastYbinding_handler),macF2637);
    T8 = CALL3(1,T9,x_,r_,tailQ_);
    resF2638 = T8;
    T7 = resF2638;
    T5 = T7;
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
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
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T1 = CALL3(1,VARREF(YevalSastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_396) {
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

FUNCODEDEF(fun_397) {
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

FUNCODEDEF(fun_398) {
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_mangle_module),T1,r_,tailQ_);
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_include),T1,r_,tailQ_);
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_library),T1,r_,tailQ_);
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_useSexport_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_403) {
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

FUNCODEDEF(fun_transaction_implemented_bindings_setter_404) {
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

FUNCODEDEF(fun_405) {
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

FUNCODEDEF(fun_transaction_dependents_406) {
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

FUNCODEDEF(fun_transaction_dependents_setter_407) {
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

FUNCODEDEF(fun_408) {
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_534));
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_537));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_emptyQ) {
  P t_;
  P tmpF2639;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF2639 = T1;
  if (tmpF2639 != YPfalse) {
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

FUNCODEDEF(fun_412) {
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

FUNCODEDEF(YevalSastYmerge_transactionsX) {
  P t1_,t2_;
  P t2_dependentsF2643;
  P t1_dependentsF2642;
  P t2_bindingsF2641;
  P t1_bindingsF2640;
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
        t1_bindingsF2640 = T6;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF2641 = T8;
        T10 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF2642 = T10;
        T12 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF2643 = T12;
        T13 = FUNFAB(fun_412,1,t1_bindingsF2640);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF2641);
        T14 = FUNFAB(fun_413,1,t1_dependentsF2642);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF2643);
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

FUNCODEDEF(fun_415) {
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

FUNCODEDEF(fun_416) {
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
  T0 = fun_415;
  T1 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_416;
  T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_418) {
  P valueF2644;
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF2644 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF2644;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_419) {
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
  P savedF2646;
  P successF2645;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF2645 = YPfalse;
  successF2645 = BOXFAB(successF2645);
  savedF2646 = VARREF(YevalSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_418,2,thunk_,successF2645);
  T5 = FUNFAB(fun_419,3,successF2645,module_,savedF2646);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1460_421) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_550));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_422) {
  P return_;
  P x_1459F2655;
  P x_1459F2654;
  P x_1459F2653;
  P x_1459F2652;
  P x_1459F2651;
  P bodyF2650;
  P moduleF2649;
  P x_1459F2648;
  P x_1460F2647;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1460_421,1);
  x_1460F2647 = T1;
  FUNINIT(x_1460F2647, 1,return_);
  x_1459F2648 = FREEREF(0);
  moduleF2649 = YPfalse;
  moduleF2649 = BOXFAB(moduleF2649);
  bodyF2650 = YPfalse;
  bodyF2650 = BOXFAB(bodyF2650);
  T7 = CALL2(1,VARREF(YisaQ),x_1459F2648,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1459F2648,LITREF(lit_550),x_1460F2647);
    x_1459F2651 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1459F2651,x_1460F2647);
    x_1459F2652 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1459F2652,x_1460F2647);
    BOXVAL(moduleF2649) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1459F2652);
    x_1459F2653 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1459F2653,x_1460F2647);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1459F2651);
    x_1459F2654 = T16;
    BOXVAL(bodyF2650) = x_1459F2654;
    x_1459F2655 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1459F2655,x_1460F2647);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1460F2647,LITREF(lit_7),x_1459F2648);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_546));
  T23 = BOXVAL(moduleF2649);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_482));
  T27 = CALL1(1,VARREF(Ylst),Ynil);
  T28 = BOXVAL(bodyF2650);
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

FUNCODEDEF(fun_423) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_422,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_424) {
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
  T2 = FUNFAB(fun_424,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_426) {
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

FUNCODEDEF(fun_module_loader_modules_setter_427) {
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

FUNCODEDEF(fun_428) {
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

FUNCODEDEF(fun_module_loader_stack_429) {
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

FUNCODEDEF(fun_module_loader_stack_setter_430) {
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

FUNCODEDEF(fun_431) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_432) {
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

FUNCODEDEF(fun_module_name_setter_433) {
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

FUNCODEDEF(fun_module_mangled_name_434) {
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

FUNCODEDEF(fun_module_mangled_name_setter_435) {
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

FUNCODEDEF(fun_436) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_mangled_string_name_437) {
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

FUNCODEDEF(fun_module_mangled_string_name_setter_438) {
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

FUNCODEDEF(fun_439) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_target_environment_440) {
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

FUNCODEDEF(fun_module_target_environment_setter_441) {
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

FUNCODEDEF(fun_module_syntax_environment_442) {
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

FUNCODEDEF(fun_module_syntax_environment_setter_443) {
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

FUNCODEDEF(fun_Pmodule_exports_444) {
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

FUNCODEDEF(fun_Pmodule_exports_setter_445) {
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

FUNCODEDEF(fun_446) {
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

FUNCODEDEF(fun_module_data_processedQ_447) {
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

FUNCODEDEF(fun_module_data_processedQ_setter_448) {
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

FUNCODEDEF(fun_449) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_450) {
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

FUNCODEDEF(fun_module_runtime_data_setter_451) {
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

FUNCODEDEF(fun_452) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_453) {
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

FUNCODEDEF(fun_module_transaction_setter_454) {
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

FUNCODEDEF(fun_455) {
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

FUNCODEDEF(fun_module_uses_c_files_456) {
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

FUNCODEDEF(fun_module_uses_c_files_setter_457) {
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

FUNCODEDEF(fun_458) {
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

FUNCODEDEF(fun_module_uses_c_includes_459) {
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

FUNCODEDEF(fun_module_uses_c_includes_setter_460) {
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

FUNCODEDEF(fun_461) {
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

FUNCODEDEF(fun_module_uses_c_libraries_462) {
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

FUNCODEDEF(fun_module_uses_c_libraries_setter_463) {
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

FUNCODEDEF(fun_464) {
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

FUNCODEDEF(fun_module_exports_465) {
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

FUNCODEDEF(fun_467) {
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
  T1 = FUNFAB(fun_467,1,f_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_469) {
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
  P tmpF2656;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2656 = T1;
  if (tmpF2656 != YPfalse) {
    T3 = tmpF2656;
  } else {
    T4 = CALL2(1,VARREF(YevalSastYload_and_register_module),loader_,name_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_472) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_473) {
  P x_1464F2660;
  P x_1463F2659;
  P tup31F2658;
  P x_1462F2657;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  x_1462F2657 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1462F2657);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup31F2658 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2658,YPint((P)0));
  x_1463F2659 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2658,YPint((P)1));
  x_1464F2660 = T7;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_1463F2659,x_1462F2657);
  T6 = x_1464F2660;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF2665;
  P x_1461F2664;
  P indentF2663;
  P depthF2662;
  P stackF2661;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF2661 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF2661);
  depthF2662 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_593),depthF2662);
  indentF2663 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF2661,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF2661);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_594),T8,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_595),indentF2663,name_);
  x_1461F2664 = loader_;
  T12 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1461F2664);
  T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,name_);
  T10 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T11,x_1461F2664);
  T14 = FUNFAB(fun_472,2,loader_,name_);
  T15 = FUNFAB(fun_473,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF2665 = T13;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF2665);
  CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_596),indentF2663);
  T9 = modF2665;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF2668;
  P existingF2667;
  P exportsF2666;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF2666 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF2666,name_,YPfalse);
  existingF2667 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2667,YPfalse);
  tmpF2668 = T6;
  if (tmpF2668 != YPfalse) {
    T7 = tmpF2668;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2667,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL5(1,VARREF(Yerror),LITREF(lit_599),existingF2667,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF2666,name_);
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

FUNCODEDEF(fun_477) {
  P binding_;
  P tmpF2669;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_freeQ),binding_);
  tmpF2669 = T2;
  if (tmpF2669 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_602),T6,T7);
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
  T1 = FUNFAB(fun_477,1,mod_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_479) {
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

FUNCODEDEF(fun_480) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_479,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_user_481) {
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
    T4 = FUNFAB(fun_480,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_482) {
  P v_;
  P UF2670;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(v_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF2670 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2670,v_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F2673;
  P add_userF2672;
  P usersF2671;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF2671 = T1;
  T3 = FUNSHELL(0,fun_add_user_481,3);
  add_userF2672 = T3;
  FUNINIT(add_userF2672, 3,usersF2671,add_userF2672,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF2672,modnames_);
  T5 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2673 = T5;
  packer_F2673 = BOXFAB(packer_F2673);
  T7 = FUNFAB(fun_482,1,packer_F2673);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,usersF2671);
  T9 = BOXVAL(packer_F2673);
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

FUNCODEDEF(fun_485) {
  P modname_;
  P modF2674;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF2674 = T1;
  T3 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF2674);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF2675;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF2675 = T1;
  T2 = FUNFAB(fun_485,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF2675);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF2676;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF2676 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF2676,YPchr((P)47));
  T3 = CALL2(1,VARREF(YgooScolsSseqYjoin),T4,VARREF(YgooSsystemYTpath_separatorT));
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_488) {
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
  P bootenvF2678;
  P bootmodF2677;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2677 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2677);
  bootenvF2678 = T3;
  T5 = FUNFAB(fun_488,2,bootenvF2678,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_611));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF2679;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T2);
  new_envF2679 = T1;
  T0 = new_envF2679;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_491) {
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
  P new_envF2681;
  P loaderF2680;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T2);
  loaderF2680 = T1;
  T4 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF2680,YPfalse);
  new_envF2681 = T4;
  T5 = FUNFAB(fun_491,2,excluded_,new_envF2681);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF2681;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_493) {
  P T0;
LINK_STACK();
loop:
  DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_494) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_495) {
  P x_1465F2682;
  P T0,T1,T2;
LINK_STACK();
loop:
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1465F2682 = DYNREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_493,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_494,1,x_1465F2682);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXVAL(FREEREF(3)) = YPtrue;
UNLINK_STACK();
  QRET(FREEREF(4));
}

FUNCODEDEF(fun_496) {
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

FUNCODEDEF(fun_load_module_497) {
  P loader_,name_;
  P fileF2688;
  P modpathF2687;
  P keepmodQF2686;
  P envF2685;
  P moduleF2684;
  P typeF2683;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2683 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2683,VARREF(YevalSastYmodule_name),name_);
  moduleF2684 = T3;
  T5 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2684,loader_,YPfalse);
  envF2685 = T5;
  keepmodQF2686 = YPfalse;
  keepmodQF2686 = BOXFAB(keepmodQF2686);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF2687 = T9;
  T11 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF2687,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF2688 = T11;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2684,envF2685,envF2685);
  T12 = CALL1(1,VARREF(Ynot),fileF2688);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_618),modpathF2687);
  } else {
  }
  T15 = FUNFAB(fun_495,5,envF2685,loader_,fileF2688,keepmodQF2686,moduleF2684);
  T16 = FUNFAB(fun_496,2,keepmodQF2686,moduleF2684);
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
  P moduleF2689;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF2689 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF2689);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2689);
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
  P loaderF2690;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2690 = T1;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF2690);
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
  P envF2694;
  P modF2693;
  P typeF2692;
  P loaderF2691;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2691 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF2691);
  typeF2692 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF2692,VARREF(YevalSastYmodule_name),T6);
  modF2693 = T5;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF2693,loaderF2691,YPtrue);
  envF2694 = T8;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF2693);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF2693,envF2694,envF2694);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF2693);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF2691,modF2693);
  T7 = modF2693;
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
  P bindingF2696;
  P home_envF2695;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF2695 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,home_envF2695);
  bindingF2696 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF2696);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL4(1,VARREF(Yerror),LITREF(lit_631),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2696,T10);
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
  P bindingF2697;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_341),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2697 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2697,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF2698;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_354),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2698 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2698,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF2699;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_372),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF2699 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2699,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF2700;
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
  bindingF2700 = T1;
  if (bindingF2700 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T6,bindingF2700);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_639),name_,T8);
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

FUNCODEDEF(fun_513) {
  P binding_;
  P cloneF2701;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T2,YPfalse,LITREF(lit_342));
  cloneF2701 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T4,cloneF2701);
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
  T1 = FUNFAB(fun_513,1,env_);
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
  P bootenvF2703;
  P bootmodF2702;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2702 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2702);
  bootenvF2703 = T4;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF2703);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF2703);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_647));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF2707;
  P syntax_envF2706;
  P moduleF2705;
  P typeF2704;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2704 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2704,VARREF(YevalSastYmodule_name),name_);
  moduleF2705 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF2705);
  syntax_envF2706 = T5;
  T7 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2705,loader_,YPfalse);
  target_envF2707 = T7;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2705,syntax_envF2706,target_envF2707);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF2707);
  } else {
    T10 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF2707,loader_);
  }
  T6 = moduleF2705;
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

FUNCODEDEF(fun_loop_523) {
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
  P loopF2708;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_523,2);
  loopF2708 = T1;
  FUNINIT(loopF2708, 2,f_,loopF2708);
  T2 = CALL1(0,loopF2708,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_525) {
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
  P loopF2709;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_525,2);
  loopF2709 = T1;
  FUNINIT(loopF2709, 2,f_,loopF2709);
  T2 = CALL1(0,loopF2709,env_);
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
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPsym((P)"exp");
  lit_2 = YPPsym((P)"return");
  lit_3 = YPPsym((P)"x-1431");
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
  fun_x_1431_0 = YPmet(FUNCODEREF(fun_x_1431_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
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
  lit_25 = YPPsym((P)"<passive-program>");
  T37 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T36 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_25),T37);
  VARSET(YevalSastYLpassive_programG,T36);
  VARSET(YevalSastYLbinding_nameG,VARREF(YLanyG));
  lit_26 = YPPsym((P)"<binding>");
  T39 = (P)YPpair(VARREF(YLanyG),Ynil);
  T38 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_26),T39);
  VARSET(YevalSastYLbindingG,T38);
  lit_27 = YPPsym((P)"binding-name");
  T40 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_9 = YPmet(FUNCODEREF(fun_binding_name_9),LITREF(lit_27),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSastYbinding_name);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSastYbinding_name);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_binding_name_9;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSastYbinding_name,T41);
  lit_28 = YPPsym((P)"binding-name-setter");
  T45 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_10 = YPmet(FUNCODEREF(fun_binding_name_setter_10),LITREF(lit_28),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSastYbinding_name_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSastYbinding_name_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_binding_name_setter_10;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSastYbinding_name_setter,T46);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_name),VARREF(YevalSastYbinding_name_setter),VARREF(YevalSastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_29 = YPPsym((P)"binding-mangled-name");
  T50 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_11 = YPmet(FUNCODEREF(fun_binding_mangled_name_11),LITREF(lit_29),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSastYbinding_mangled_name);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSastYbinding_mangled_name);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_binding_mangled_name_11;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSastYbinding_mangled_name,T51);
  lit_30 = YPPsym((P)"binding-mangled-name-setter");
  T56 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T55 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T56,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_12 = YPmet(FUNCODEREF(fun_binding_mangled_name_setter_12),LITREF(lit_30),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYbinding_mangled_name_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYbinding_mangled_name_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_binding_mangled_name_setter_12;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYbinding_mangled_name_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T63 = fun_13;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_mangled_name),VARREF(YevalSastYbinding_mangled_name_setter),T62,T63);
  lit_31 = YPPsym((P)"binding-type");
  T64 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_14 = YPmet(FUNCODEREF(fun_binding_type_14),LITREF(lit_31),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSastYbinding_type);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSastYbinding_type);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_binding_type_14;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSastYbinding_type,T65);
  lit_32 = YPPsym((P)"binding-type-setter");
  T69 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_15 = YPmet(FUNCODEREF(fun_binding_type_setter_15),LITREF(lit_32),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSastYbinding_type_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSastYbinding_type_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_binding_type_setter_15;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSastYbinding_type_setter,T70);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_type),VARREF(YevalSastYbinding_type_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_33 = YPPsym((P)"binding-inferred-type");
  T74 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_16 = YPmet(FUNCODEREF(fun_binding_inferred_type_16),LITREF(lit_33),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSastYbinding_inferred_type);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSastYbinding_inferred_type);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_binding_inferred_type_16;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSastYbinding_inferred_type,T75);
  lit_34 = YPPsym((P)"binding-inferred-type-setter");
  T79 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_17 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_17),LITREF(lit_34),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSastYbinding_inferred_type_setter);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSastYbinding_inferred_type_setter);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_binding_inferred_type_setter_17;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSastYbinding_inferred_type_setter,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T85 = fun_18;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_inferred_type),VARREF(YevalSastYbinding_inferred_type_setter),VARREF(YLanyG),T85);
  lit_35 = YPPsym((P)"<global-box>");
  T87 = (P)YPpair(VARREF(YLanyG),Ynil);
  T86 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T87);
  VARSET(YevalSastYLglobal_boxG,T86);
  lit_36 = YPPsym((P)"global-box-value");
  T88 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_19 = YPmet(FUNCODEREF(fun_global_box_value_19),LITREF(lit_36),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YevalSastYglobal_box_value);
  if (T91 != YPfalse) {
    T90 = VARREF(YevalSastYglobal_box_value);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_global_box_value_19;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YevalSastYglobal_box_value,T89);
  lit_37 = YPPsym((P)"global-box-value-setter");
  T93 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_20 = YPmet(FUNCODEREF(fun_global_box_value_setter_20),LITREF(lit_37),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YevalSastYglobal_box_value_setter);
  if (T96 != YPfalse) {
    T95 = VARREF(YevalSastYglobal_box_value_setter);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_global_box_value_setter_20;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YevalSastYglobal_box_value_setter,T94);
  T98 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T99 = fun_21;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_boxG),VARREF(YevalSastYglobal_box_value),VARREF(YevalSastYglobal_box_value_setter),VARREF(YLanyG),T99);
  lit_38 = YPPsym((P)"<module-binding>");
  T102 = (P)YPpair(VARREF(YevalSdependencyYLdependableG),Ynil);
  T101 = (P)YPpair(VARREF(YevalSastYLbindingG),T102);
  T100 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_38),T101);
  VARSET(YevalSastYLmodule_bindingG,T100);
  lit_39 = YPPsym((P)"binding-kind");
  T103 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_22 = YPmet(FUNCODEREF(fun_binding_kind_22),LITREF(lit_39),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YevalSastYbinding_kind);
  if (T106 != YPfalse) {
    T105 = VARREF(YevalSastYbinding_kind);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_binding_kind_22;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YevalSastYbinding_kind,T104);
  lit_40 = YPPsym((P)"binding-kind-setter");
  T108 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_23 = YPmet(FUNCODEREF(fun_binding_kind_setter_23),LITREF(lit_40),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSastYbinding_kind_setter);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSastYbinding_kind_setter);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_binding_kind_setter_23;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSastYbinding_kind_setter,T109);
  lit_41 = YPPsym((P)"global");
  T113 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T114 = fun_24;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),VARREF(YevalSastYbinding_kind_setter),VARREF(YLanyG),T114);
  lit_42 = YPPsym((P)"binding-module");
  T115 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_25 = YPmet(FUNCODEREF(fun_binding_module_25),LITREF(lit_42),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSastYbinding_module);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSastYbinding_module);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_binding_module_25;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSastYbinding_module,T116);
  lit_43 = YPPsym((P)"binding-module-setter");
  T120 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_26 = YPmet(FUNCODEREF(fun_binding_module_setter_26),LITREF(lit_43),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSastYbinding_module_setter);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSastYbinding_module_setter);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_binding_module_setter_26;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYbinding_module_setter,T121);
  T125 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T126 = fun_27;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_module),VARREF(YevalSastYbinding_module_setter),VARREF(YLanyG),T126);
  lit_44 = YPPsym((P)"binding-free?");
  T127 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_28 = YPmet(FUNCODEREF(fun_binding_freeQ_28),LITREF(lit_44),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSastYbinding_freeQ);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSastYbinding_freeQ);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_binding_freeQ_28;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSastYbinding_freeQ,T128);
  lit_45 = YPPsym((P)"binding-free?-setter");
  T132 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_29 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_29),LITREF(lit_45),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSastYbinding_freeQ_setter);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSastYbinding_freeQ_setter);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_binding_freeQ_setter_29;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYbinding_freeQ_setter,T133);
  T137 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T138 = fun_30;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),VARREF(YevalSastYbinding_freeQ_setter),VARREF(YLlogG),T138);
  lit_46 = YPPsym((P)"binding-info");
  T139 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_31 = YPmet(FUNCODEREF(fun_binding_info_31),LITREF(lit_46),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYbinding_info);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYbinding_info);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_binding_info_31;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYbinding_info,T140);
  lit_47 = YPPsym((P)"binding-info-setter");
  T144 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_32 = YPmet(FUNCODEREF(fun_binding_info_setter_32),LITREF(lit_47),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYbinding_info_setter);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYbinding_info_setter);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_binding_info_setter_32;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYbinding_info_setter,T145);
  T149 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T150 = fun_33;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_info),VARREF(YevalSastYbinding_info_setter),VARREF(YLanyG),T150);
  lit_48 = YPPsym((P)"binding-prop");
  T151 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_prop_34 = YPmet(FUNCODEREF(fun_binding_prop_34),LITREF(lit_48),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSastYbinding_prop);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSastYbinding_prop);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_binding_prop_34;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSastYbinding_prop,T152);
  lit_49 = YPPsym((P)"binding-prop-setter");
  T156 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_prop_setter_35 = YPmet(FUNCODEREF(fun_binding_prop_setter_35),LITREF(lit_49),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYbinding_prop_setter);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYbinding_prop_setter);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_binding_prop_setter_35;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYbinding_prop_setter,T157);
  T161 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T162 = fun_36;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_prop),VARREF(YevalSastYbinding_prop_setter),VARREF(YLanyG),T162);
  lit_50 = YPPsym((P)"binding-module-name");
  lit_51 = YPPsym((P)"b");
  T163 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_37 = YPmet(FUNCODEREF(fun_binding_module_name_37),LITREF(lit_50),T163,ENVNUL,PNUL,YPfalse);
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
  lit_52 = YPPsym((P)"maybe-log-dependency");
  lit_53 = YPPsym((P)"dependable");
  lit_54 = YPPsym((P)"dtype");
  T0 = YPsig(YPPlist(2,LITREF(lit_53),LITREF(lit_54)),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPmet(FUNCODEREF(YevalSastYmaybe_log_dependency),LITREF(lit_52),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T1);
  lit_55 = YPPsym((P)"macro-expander");
  lit_56 = YPPsym((P)"macro-binding");
  T2 = YPsig(YPPlist(1,LITREF(lit_56)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPmet(FUNCODEREF(YevalSastYmacro_expander),LITREF(lit_55),T2,ENVNUL,PNUL,YPfalse);
  T3 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T3);
  lit_57 = YPPsym((P)"<local-binding>");
  T5 = (P)YPpair(VARREF(YevalSastYLbindingG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_57),T5);
  VARSET(YevalSastYLlocal_bindingG,T4);
  lit_58 = YPPsym((P)"binding-value");
  T6 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_40 = YPmet(FUNCODEREF(fun_binding_value_40),LITREF(lit_58),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YevalSastYbinding_value);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSastYbinding_value);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_binding_value_40;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSastYbinding_value,T7);
  lit_59 = YPPsym((P)"binding-value-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_41 = YPmet(FUNCODEREF(fun_binding_value_setter_41),LITREF(lit_59),T11,ENVNUL,PNUL,YPfalse);
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
  lit_60 = YPPsym((P)"binding-mutable?");
  T18 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_43 = YPmet(FUNCODEREF(fun_binding_mutableQ_43),LITREF(lit_60),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YevalSastYbinding_mutableQ);
  if (T21 != YPfalse) {
    T20 = VARREF(YevalSastYbinding_mutableQ);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_binding_mutableQ_43;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YevalSastYbinding_mutableQ,T19);
  lit_61 = YPPsym((P)"binding-mutable?-setter");
  T23 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_44 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_44),LITREF(lit_61),T23,ENVNUL,PNUL,YPfalse);
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
  lit_62 = YPPsym((P)"binding-dynamic-extent?");
  T30 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_46 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_46),LITREF(lit_62),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSastYbinding_dynamic_extentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYbinding_dynamic_extentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_binding_dynamic_extentQ_46;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYbinding_dynamic_extentQ,T31);
  lit_63 = YPPsym((P)"binding-dynamic-extent?-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_47 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_47),LITREF(lit_63),T35,ENVNUL,PNUL,YPfalse);
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
  lit_64 = YPPsym((P)"binding-dotted?");
  T42 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_49 = YPmet(FUNCODEREF(fun_binding_dottedQ_49),LITREF(lit_64),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YevalSastYbinding_dottedQ);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYbinding_dottedQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_binding_dottedQ_49;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYbinding_dottedQ,T43);
  lit_65 = YPPsym((P)"binding-dotted?-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_50 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_50),LITREF(lit_65),T47,ENVNUL,PNUL,YPfalse);
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
  lit_66 = YPPsym((P)"binding-index");
  T54 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_52 = YPmet(FUNCODEREF(fun_binding_index_52),LITREF(lit_66),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYbinding_index);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYbinding_index);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_binding_index_52;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYbinding_index,T55);
  lit_67 = YPPsym((P)"binding-index-setter");
  T59 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_53 = YPmet(FUNCODEREF(fun_binding_index_setter_53),LITREF(lit_67),T59,ENVNUL,PNUL,YPfalse);
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
  lit_68 = YPPsym((P)"<compile-time>");
  T67 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_68),T67);
  VARSET(YevalSastYLcompile_timeG,T66);
  lit_69 = YPPsym((P)"compile-time-program");
  T68 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_55 = YPmet(FUNCODEREF(fun_compile_time_program_55),LITREF(lit_69),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYcompile_time_program);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYcompile_time_program);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_compile_time_program_55;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYcompile_time_program,T69);
  lit_70 = YPPsym((P)"compile-time-program-setter");
  T73 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_56 = YPmet(FUNCODEREF(fun_compile_time_program_setter_56),LITREF(lit_70),T73,ENVNUL,PNUL,YPfalse);
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
  lit_71 = YPPsym((P)"<reference>");
  T79 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T78 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_71),T79);
  VARSET(YevalSastYLreferenceG,T78);
  lit_72 = YPPsym((P)"<real-reference>");
  T81 = (P)YPpair(VARREF(YevalSastYLreferenceG),Ynil);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_72),T81);
  VARSET(YevalSastYLreal_referenceG,T80);
  lit_73 = YPPsym((P)"reference-binding");
  T82 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_57 = YPmet(FUNCODEREF(fun_reference_binding_57),LITREF(lit_73),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYreference_binding);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYreference_binding);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_reference_binding_57;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYreference_binding,T83);
  lit_74 = YPPsym((P)"reference-binding-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_58 = YPmet(FUNCODEREF(fun_reference_binding_setter_58),LITREF(lit_74),T87,ENVNUL,PNUL,YPfalse);
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
  lit_75 = YPPsym((P)"<local-reference>");
  T93 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_75),T93);
  VARSET(YevalSastYLlocal_referenceG,T92);
  lit_76 = YPPsym((P)"reference-called-function?");
  T94 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_59 = YPmet(FUNCODEREF(fun_reference_called_functionQ_59),LITREF(lit_76),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSastYreference_called_functionQ);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYreference_called_functionQ);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_reference_called_functionQ_59;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYreference_called_functionQ,T95);
  lit_77 = YPPsym((P)"reference-called-function?-setter");
  T99 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_60 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_60),LITREF(lit_77),T99,ENVNUL,PNUL,YPfalse);
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
  lit_78 = YPPsym((P)"reference-frame-number");
  T106 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_62 = YPmet(FUNCODEREF(fun_reference_frame_number_62),LITREF(lit_78),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYreference_frame_number);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYreference_frame_number);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_reference_frame_number_62;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYreference_frame_number,T107);
  lit_79 = YPPsym((P)"reference-frame-number-setter");
  T111 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_63 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_63),LITREF(lit_79),T111,ENVNUL,PNUL,YPfalse);
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
  lit_80 = YPPsym((P)"reference-frame-offset");
  T116 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_64 = YPmet(FUNCODEREF(fun_reference_frame_offset_64),LITREF(lit_80),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YevalSastYreference_frame_offset);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYreference_frame_offset);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_reference_frame_offset_64;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYreference_frame_offset,T117);
  lit_81 = YPPsym((P)"reference-frame-offset-setter");
  T121 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_65 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_65),LITREF(lit_81),T121,ENVNUL,PNUL,YPfalse);
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
  lit_82 = YPPsym((P)"<module-binding-reference>");
  T127 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T126 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_82),T127);
  VARSET(YevalSastYLmodule_binding_referenceG,T126);
  lit_83 = YPPsym((P)"<global-reference>");
  T129 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_83),T129);
  VARSET(YevalSastYLglobal_referenceG,T128);
  lit_84 = YPPsym((P)"<runtime-reference>");
  T131 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T130 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_84),T131);
  VARSET(YevalSastYLruntime_referenceG,T130);
  lit_85 = YPPsym((P)"<dynamic-reference>");
  T133 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T132 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_85),T133);
  VARSET(YevalSastYLdynamic_referenceG,T132);
  lit_86 = YPPsym((P)"<predefined-reference>");
  T135 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T134 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_86),T135);
  VARSET(YevalSastYLpredefined_referenceG,T134);
  lit_87 = YPPsym((P)"<static-module-binding-reference>");
  T137 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T136 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_87),T137);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T136);
  lit_88 = YPPsym((P)"<macro-reference>");
  T139 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T138 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_88),T139);
  VARSET(YevalSastYLmacro_referenceG,T138);
  lit_89 = YPPsym((P)"<magic-reference>");
  T141 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_89),T141);
  VARSET(YevalSastYLmagic_referenceG,T140);
  lit_90 = YPPsym((P)"<bound?>");
  T143 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T142 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_90),T143);
  VARSET(YevalSastYLboundQG,T142);
  lit_91 = YPPsym((P)"bound?-reference");
  T144 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_66 = YPmet(FUNCODEREF(fun_boundQ_reference_66),LITREF(lit_91),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYboundQ_reference);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYboundQ_reference);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_boundQ_reference_66;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYboundQ_reference,T145);
  lit_92 = YPPsym((P)"bound?-reference-setter");
  T149 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_67 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_67),LITREF(lit_92),T149,ENVNUL,PNUL,YPfalse);
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
  lit_93 = YPPsym((P)"<assignment>");
  T155 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_93),T155);
  VARSET(YevalSastYLassignmentG,T154);
  lit_94 = YPPsym((P)"assignment-form");
  T156 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_68 = YPmet(FUNCODEREF(fun_assignment_form_68),LITREF(lit_94),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYassignment_form);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYassignment_form);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_assignment_form_68;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYassignment_form,T157);
  lit_95 = YPPsym((P)"assignment-form-setter");
  T161 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_69 = YPmet(FUNCODEREF(fun_assignment_form_setter_69),LITREF(lit_95),T161,ENVNUL,PNUL,YPfalse);
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
  lit_96 = YPPsym((P)"<local-assignment>");
  T167 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T166 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_96),T167);
  VARSET(YevalSastYLlocal_assignmentG,T166);
  lit_97 = YPPsym((P)"assignment-reference");
  T168 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_70 = YPmet(FUNCODEREF(fun_assignment_reference_70),LITREF(lit_97),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYassignment_reference);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYassignment_reference);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_assignment_reference_70;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYassignment_reference,T169);
  lit_98 = YPPsym((P)"assignment-reference-setter");
  T173 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_71 = YPmet(FUNCODEREF(fun_assignment_reference_setter_71),LITREF(lit_98),T173,ENVNUL,PNUL,YPfalse);
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
  lit_99 = YPPsym((P)"<global-assignment>");
  T179 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T178 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_99),T179);
  VARSET(YevalSastYLglobal_assignmentG,T178);
  lit_100 = YPPsym((P)"assignment-binding");
  T182 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T181 = fun_assignment_binding_72 = YPmet(FUNCODEREF(fun_assignment_binding_72),LITREF(lit_100),T182,ENVNUL,PNUL,YPfalse);
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
  lit_101 = YPPsym((P)"assignment-binding-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_73 = YPmet(FUNCODEREF(fun_assignment_binding_setter_73),LITREF(lit_101),T0,ENVNUL,PNUL,YPfalse);
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
  lit_102 = YPPsym((P)"<runtime-assignment>");
  T6 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T5 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_102),T6);
  VARSET(YevalSastYLruntime_assignmentG,T5);
  lit_103 = YPPsym((P)"<dynamic-assignment>");
  T8 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_103),T8);
  VARSET(YevalSastYLdynamic_assignmentG,T7);
  lit_104 = YPPsym((P)"<definition>");
  T10 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T9 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_104),T10);
  VARSET(YevalSastYLdefinitionG,T9);
  lit_105 = YPPsym((P)"<variable-definition>");
  T12 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T11 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_105),T12);
  VARSET(YevalSastYLvariable_definitionG,T11);
  lit_106 = YPPsym((P)"<dynamic-definition>");
  T14 = (P)YPpair(VARREF(YevalSastYLvariable_definitionG),Ynil);
  T13 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_106),T14);
  VARSET(YevalSastYLdynamic_definitionG,T13);
  lit_107 = YPPsym((P)"<ast-generic-definition>");
  T16 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T15 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_107),T16);
  VARSET(YevalSastYLast_generic_definitionG,T15);
  lit_108 = YPPsym((P)"<ast-function-definition>");
  T18 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T17 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_108),T18);
  VARSET(YevalSastYLast_function_definitionG,T17);
  lit_109 = YPPsym((P)"<ast-method-definition>");
  T20 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T19 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_109),T20);
  VARSET(YevalSastYLast_method_definitionG,T19);
  lit_110 = YPPsym((P)"<ast-primitive-definition>");
  T22 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T21 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_110),T22);
  VARSET(YevalSastYLast_primitive_definitionG,T21);
  lit_111 = YPPsym((P)"<ast-macro-definition>");
  T24 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T23 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_111),T24);
  VARSET(YevalSastYLast_macro_definitionG,T23);
  lit_112 = YPPsym((P)"<ast-signature>");
  T26 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_112),T26);
  VARSET(YevalSastYLast_signatureG,T25);
  lit_113 = YPPsym((P)"signature-bindings");
  T27 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_74 = YPmet(FUNCODEREF(fun_signature_bindings_74),LITREF(lit_113),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSastYsignature_bindings);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYsignature_bindings);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_signature_bindings_74;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYsignature_bindings,T28);
  lit_114 = YPPsym((P)"signature-bindings-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_75 = YPmet(FUNCODEREF(fun_signature_bindings_setter_75),LITREF(lit_114),T32,ENVNUL,PNUL,YPfalse);
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
  lit_115 = YPPsym((P)"signature-names");
  T39 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_77 = YPmet(FUNCODEREF(fun_signature_names_77),LITREF(lit_115),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYsignature_names);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYsignature_names);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_signature_names_77;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYsignature_names,T40);
  lit_116 = YPPsym((P)"signature-names-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_78 = YPmet(FUNCODEREF(fun_signature_names_setter_78),LITREF(lit_116),T44,ENVNUL,PNUL,YPfalse);
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
  lit_117 = YPPsym((P)"signature-specs");
  T51 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_80 = YPmet(FUNCODEREF(fun_signature_specs_80),LITREF(lit_117),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYsignature_specs);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYsignature_specs);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_signature_specs_80;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYsignature_specs,T52);
  lit_118 = YPPsym((P)"signature-specs-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_81 = YPmet(FUNCODEREF(fun_signature_specs_setter_81),LITREF(lit_118),T56,ENVNUL,PNUL,YPfalse);
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
  lit_119 = YPPsym((P)"signature-nary?");
  T63 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_83 = YPmet(FUNCODEREF(fun_signature_naryQ_83),LITREF(lit_119),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSastYsignature_naryQ);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYsignature_naryQ);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_signature_naryQ_83;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYsignature_naryQ,T64);
  lit_120 = YPPsym((P)"signature-nary?-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_84 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_84),LITREF(lit_120),T68,ENVNUL,PNUL,YPfalse);
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
  lit_121 = YPPsym((P)"signature-arity");
  T75 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_86 = YPmet(FUNCODEREF(fun_signature_arity_86),LITREF(lit_121),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSastYsignature_arity);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYsignature_arity);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_signature_arity_86;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYsignature_arity,T76);
  lit_122 = YPPsym((P)"signature-arity-setter");
  T80 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_87 = YPmet(FUNCODEREF(fun_signature_arity_setter_87),LITREF(lit_122),T80,ENVNUL,PNUL,YPfalse);
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
  lit_123 = YPPsym((P)"signature-value");
  T87 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_89 = YPmet(FUNCODEREF(fun_signature_value_89),LITREF(lit_123),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYsignature_value);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYsignature_value);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_signature_value_89;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYsignature_value,T88);
  lit_124 = YPPsym((P)"signature-value-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_90 = YPmet(FUNCODEREF(fun_signature_value_setter_90),LITREF(lit_124),T92,ENVNUL,PNUL,YPfalse);
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
  lit_125 = YPPsym((P)"<ast-function>");
  T101 = (P)YPpair(VARREF(YevalSdependencyYLdependentG),Ynil);
  T100 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),T101);
  T99 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_125),T100);
  VARSET(YevalSastYLast_functionG,T99);
  lit_126 = YPPsym((P)"function-binding");
  T102 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_92 = YPmet(FUNCODEREF(fun_function_binding_92),LITREF(lit_126),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYfunction_binding);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYfunction_binding);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_function_binding_92;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYfunction_binding,T103);
  lit_127 = YPPsym((P)"function-binding-setter");
  T107 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_93 = YPmet(FUNCODEREF(fun_function_binding_setter_93),LITREF(lit_127),T107,ENVNUL,PNUL,YPfalse);
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
  lit_128 = YPPsym((P)"function-debug-name");
  T114 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_95 = YPmet(FUNCODEREF(fun_function_debug_name_95),LITREF(lit_128),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSastYfunction_debug_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYfunction_debug_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_function_debug_name_95;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYfunction_debug_name,T115);
  lit_129 = YPPsym((P)"function-debug-name-setter");
  T119 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_96 = YPmet(FUNCODEREF(fun_function_debug_name_setter_96),LITREF(lit_129),T119,ENVNUL,PNUL,YPfalse);
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
  lit_130 = YPPsym((P)"function-signature");
  T126 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_98 = YPmet(FUNCODEREF(fun_function_signature_98),LITREF(lit_130),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalSastYfunction_signature);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalSastYfunction_signature);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_function_signature_98;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalSastYfunction_signature,T127);
  lit_131 = YPPsym((P)"function-signature-setter");
  T131 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_99 = YPmet(FUNCODEREF(fun_function_signature_setter_99),LITREF(lit_131),T131,ENVNUL,PNUL,YPfalse);
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
  lit_132 = YPPsym((P)"function-bindings");
  lit_133 = YPPsym((P)"x");
  T136 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPmet(FUNCODEREF(YevalSastYfunction_bindings),LITREF(lit_132),T136,ENVNUL,PNUL,YPfalse);
  T137 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T137);
  lit_134 = YPPsym((P)"function-specs");
  T138 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPmet(FUNCODEREF(YevalSastYfunction_specs),LITREF(lit_134),T138,ENVNUL,PNUL,YPfalse);
  T139 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T139);
  lit_135 = YPPsym((P)"function-nary?");
  T140 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPmet(FUNCODEREF(YevalSastYfunction_naryQ),LITREF(lit_135),T140,ENVNUL,PNUL,YPfalse);
  T141 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T141);
  lit_136 = YPPsym((P)"function-value");
  T142 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPmet(FUNCODEREF(YevalSastYfunction_value),LITREF(lit_136),T142,ENVNUL,PNUL,YPfalse);
  T143 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T143);
  lit_137 = YPPsym((P)"function-kind");
  lit_138 = YPsb((P)"FUN");
  T144 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_104 = YPmet(FUNCODEREF(fun_function_kind_104),LITREF(lit_137),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYfunction_kind);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYfunction_kind);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_function_kind_104;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYfunction_kind,T145);
  lit_139 = YPPsym((P)"function-display-name");
  lit_140 = YPPsym((P)"f");
  lit_141 = YPsb((P)"%s:%s");
  lit_142 = YPsb((P)"anonymous function");
  T149 = YPsig(YPPlist(1,LITREF(lit_140)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPmet(FUNCODEREF(YevalSastYfunction_display_name),LITREF(lit_139),T149,ENVNUL,PNUL,YPfalse);
  T150 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T150);
  lit_143 = YPPsym((P)"invalidate-dependent");
  lit_144 = YPPsym((P)"dependent");
  lit_145 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_146 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_147 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T151 = YPsig(YPPlist(3,LITREF(lit_144),LITREF(lit_53),LITREF(lit_54)),YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_106 = YPmet(FUNCODEREF(fun_invalidate_dependent_106),LITREF(lit_143),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSdependencyYinvalidate_dependent);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSdependencyYinvalidate_dependent);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_invalidate_dependent_106;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSdependencyYinvalidate_dependent,T152);
  lit_148 = YPPsym((P)"<programs>");
  T157 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T156 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_148),T157);
  VARSET(YevalSastYLprogramsG,T156);
  lit_149 = YPPsym((P)"as-lst");
  lit_150 = YPPsym((P)"e");
  lit_151 = YPPsym((P)"loop");
  lit_152 = YPPsym((P)"res");
  T159 = YPsig(YPPlist(2,LITREF(lit_152),LITREF(lit_150)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_107 = YPmet(FUNCODEREF(fun_loop_107),LITREF(lit_151),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_108 = YPmet(FUNCODEREF(fun_as_lst_108),LITREF(lit_149),T158,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSastYas_lst);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSastYas_lst);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_as_lst_108;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSastYas_lst,T160);
  lit_153 = YPPsym((P)"x-1437");
  lit_154 = YPPsym((P)"def-list");
  lit_155 = YPsb((P)"<");
  lit_156 = YPsb((P)">");
  lit_157 = YPsb((P)"$");
  lit_158 = YPsb((P)"-empty");
  lit_159 = YPPsym((P)"dc");
  lit_160 = YPPsym((P)"<lst>");
  lit_161 = YPPsym((P)"dv");
  lit_162 = YPPsym((P)"new");
  lit_163 = YPPsym((P)"df");
  lit_164 = YPPsym((P)"h");
  lit_165 = YPPsym((P)"t");
  lit_166 = YPPsym((P)"head");
  lit_167 = YPPsym((P)"tail");
  lit_168 = YPPsym((P)"dm");
  lit_169 = YPPsym((P)"empty");
  lit_170 = YPPsym((P)"t=");
  lit_171 = YPPsym((P)"=>");
  T166 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1437_109 = YPmet(FUNCODEREF(fun_x_1437_109),LITREF(lit_153),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_111;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-list"),T167);
  lit_172 = YPPsym((P)"x-1441");
  lit_173 = YPPsym((P)"def-programs");
  T170 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1441_112 = YPmet(FUNCODEREF(fun_x_1441_112),LITREF(lit_172),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T171 = fun_114;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T171);
  lit_174 = YPPsym((P)"<ast-embodied-function>");
  T173 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T172 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_174),T173);
  VARSET(YevalSastYLast_embodied_functionG,T172);
  lit_175 = YPPsym((P)"function-body");
  T174 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_115 = YPmet(FUNCODEREF(fun_function_body_115),LITREF(lit_175),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSastYfunction_body);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSastYfunction_body);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_function_body_115;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSastYfunction_body,T175);
  lit_176 = YPPsym((P)"function-body-setter");
  T179 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_116 = YPmet(FUNCODEREF(fun_function_body_setter_116),LITREF(lit_176),T179,ENVNUL,PNUL,YPfalse);
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
  lit_177 = YPPsym((P)"function-index");
  T186 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_118 = YPmet(FUNCODEREF(fun_function_index_118),LITREF(lit_177),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSastYfunction_index);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSastYfunction_index);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_function_index_118;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSastYfunction_index,T187);
  lit_178 = YPPsym((P)"function-index-setter");
  T191 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_119 = YPmet(FUNCODEREF(fun_function_index_setter_119),LITREF(lit_178),T191,ENVNUL,PNUL,YPfalse);
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
  lit_179 = YPPsym((P)"function-temporaries");
  T198 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_121 = YPmet(FUNCODEREF(fun_function_temporaries_121),LITREF(lit_179),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSastYfunction_temporaries);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSastYfunction_temporaries);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_function_temporaries_121;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSastYfunction_temporaries,T199);
  lit_180 = YPPsym((P)"function-temporaries-setter");
  T203 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_122 = YPmet(FUNCODEREF(fun_function_temporaries_setter_122),LITREF(lit_180),T203,ENVNUL,PNUL,YPfalse);
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
  lit_181 = YPPsym((P)"function-registers");
  T210 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_124 = YPmet(FUNCODEREF(fun_function_registers_124),LITREF(lit_181),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YevalSastYfunction_registers);
  if (T213 != YPfalse) {
    T212 = VARREF(YevalSastYfunction_registers);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_function_registers_124;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YevalSastYfunction_registers,T211);
  lit_182 = YPPsym((P)"function-registers-setter");
  T217 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T216 = fun_function_registers_setter_125 = YPmet(FUNCODEREF(fun_function_registers_setter_125),LITREF(lit_182),T217,ENVNUL,PNUL,YPfalse);
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
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220;
DEFCREGS();
loop:
  T0 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T1 = fun_126;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T1);
  lit_183 = YPPsym((P)"function-data-refs");
  T2 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_127 = YPmet(FUNCODEREF(fun_function_data_refs_127),LITREF(lit_183),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSastYfunction_data_refs);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSastYfunction_data_refs);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_function_data_refs_127;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSastYfunction_data_refs,T3);
  lit_184 = YPPsym((P)"function-data-refs-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_128 = YPmet(FUNCODEREF(fun_function_data_refs_setter_128),LITREF(lit_184),T7,ENVNUL,PNUL,YPfalse);
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
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_data_refs),VARREF(YevalSastYfunction_data_refs_setter),VARREF(YgooScolsSvecYLvecG),T13);
  lit_185 = YPPsym((P)"function-self-recursive?");
  T14 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_130 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_130),LITREF(lit_185),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSastYfunction_self_recursiveQ);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSastYfunction_self_recursiveQ);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_function_self_recursiveQ_130;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSastYfunction_self_recursiveQ,T15);
  lit_186 = YPPsym((P)"function-self-recursive?-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_131 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_131),LITREF(lit_186),T19,ENVNUL,PNUL,YPfalse);
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
  lit_187 = YPPsym((P)"function-source");
  T26 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_133 = YPmet(FUNCODEREF(fun_function_source_133),LITREF(lit_187),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSastYfunction_source);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSastYfunction_source);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_function_source_133;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSastYfunction_source,T27);
  lit_188 = YPPsym((P)"function-source-setter");
  T31 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_134 = YPmet(FUNCODEREF(fun_function_source_setter_134),LITREF(lit_188),T31,ENVNUL,PNUL,YPfalse);
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
  lit_189 = YPPsym((P)"function-frame-len");
  T38 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_136 = YPmet(FUNCODEREF(fun_function_frame_len_136),LITREF(lit_189),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YevalSastYfunction_frame_len);
  if (T41 != YPfalse) {
    T40 = VARREF(YevalSastYfunction_frame_len);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_function_frame_len_136;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YevalSastYfunction_frame_len,T39);
  lit_190 = YPPsym((P)"function-frame-len-setter");
  T43 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_137 = YPmet(FUNCODEREF(fun_function_frame_len_setter_137),LITREF(lit_190),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSastYfunction_frame_len_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSastYfunction_frame_len_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_function_frame_len_setter_137;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSastYfunction_frame_len_setter,T44);
  T48 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T49 = fun_138;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T49);
  lit_191 = YPPsym((P)"<free-environment>");
  T52 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T51 = (P)YPpair(VARREF(YLlstG),T52);
  T50 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_191),T51);
  VARSET(YevalSastYLfree_environmentG,T50);
  T53 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T53);
  lit_192 = YPPsym((P)"free-environment");
  T54 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_165)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_192),T54,ENVNUL,PNUL,YPfalse);
  T55 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T55);
  T57 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T56 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,T57),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_140 = YPmet(FUNCODEREF(fun_empty_140),LITREF(lit_169),T56,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YgooScolsScolYempty);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooScolsScolYempty);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_empty_140;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooScolsScolYempty,T58);
  lit_193 = YPPsym((P)"<ast-method>");
  T63 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_193),T63);
  VARSET(YevalSastYLast_methodG,T62);
  lit_194 = YPPsym((P)"function-free");
  T64 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_141 = YPmet(FUNCODEREF(fun_function_free_141),LITREF(lit_194),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSastYfunction_free);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSastYfunction_free);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_function_free_141;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSastYfunction_free,T65);
  lit_195 = YPPsym((P)"function-free-setter");
  T69 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_142 = YPmet(FUNCODEREF(fun_function_free_setter_142),LITREF(lit_195),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSastYfunction_free_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSastYfunction_free_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_function_free_setter_142;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSastYfunction_free_setter,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_143;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T75);
  lit_196 = YPsb((P)"MET");
  T76 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_144 = YPmet(FUNCODEREF(fun_function_kind_144),LITREF(lit_137),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYfunction_kind);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYfunction_kind);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_function_kind_144;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYfunction_kind,T77);
  lit_197 = YPPsym((P)"<ast-primitive>");
  T82 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T81 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_197),T82);
  VARSET(YevalSastYLast_primitiveG,T81);
  lit_198 = YPPsym((P)"function-adjectives");
  T83 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_145 = YPmet(FUNCODEREF(fun_function_adjectives_145),LITREF(lit_198),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalSastYfunction_adjectives);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSastYfunction_adjectives);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_function_adjectives_145;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSastYfunction_adjectives,T84);
  lit_199 = YPPsym((P)"function-adjectives-setter");
  T88 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_146 = YPmet(FUNCODEREF(fun_function_adjectives_setter_146),LITREF(lit_199),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YevalSastYfunction_adjectives_setter);
  if (T91 != YPfalse) {
    T90 = VARREF(YevalSastYfunction_adjectives_setter);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_function_adjectives_setter_146;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YevalSastYfunction_adjectives_setter,T89);
  T93 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T94 = fun_147;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T94);
  lit_200 = YPsb((P)"PRM");
  T95 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_148 = YPmet(FUNCODEREF(fun_function_kind_148),LITREF(lit_137),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYfunction_kind);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYfunction_kind);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_function_kind_148;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYfunction_kind,T96);
  lit_201 = YPPsym((P)"<ast-generic>");
  T101 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T100 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_201),T101);
  VARSET(YevalSastYLast_genericG,T100);
  lit_202 = YPsb((P)"GEN");
  T102 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_149 = YPmet(FUNCODEREF(fun_function_kind_149),LITREF(lit_137),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYfunction_kind);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYfunction_kind);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_function_kind_149;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYfunction_kind,T103);
  lit_203 = YPPsym((P)"<alternative>");
  T108 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T107 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_203),T108);
  VARSET(YevalSastYLalternativeG,T107);
  lit_204 = YPPsym((P)"alternative-condition");
  T109 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_150 = YPmet(FUNCODEREF(fun_alternative_condition_150),LITREF(lit_204),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YevalSastYalternative_condition);
  if (T112 != YPfalse) {
    T111 = VARREF(YevalSastYalternative_condition);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_alternative_condition_150;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YevalSastYalternative_condition,T110);
  lit_205 = YPPsym((P)"alternative-condition-setter");
  T114 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_151 = YPmet(FUNCODEREF(fun_alternative_condition_setter_151),LITREF(lit_205),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSastYalternative_condition_setter);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYalternative_condition_setter);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_alternative_condition_setter_151;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYalternative_condition_setter,T115);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_206 = YPPsym((P)"alternative-consequent");
  T119 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_152 = YPmet(FUNCODEREF(fun_alternative_consequent_152),LITREF(lit_206),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYalternative_consequent);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYalternative_consequent);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_alternative_consequent_152;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYalternative_consequent,T120);
  lit_207 = YPPsym((P)"alternative-consequent-setter");
  T124 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_153 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_153),LITREF(lit_207),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYalternative_consequent_setter);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYalternative_consequent_setter);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_alternative_consequent_setter_153;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYalternative_consequent_setter,T125);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_208 = YPPsym((P)"alternative-alternant");
  T129 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_154 = YPmet(FUNCODEREF(fun_alternative_alternant_154),LITREF(lit_208),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSastYalternative_alternant);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYalternative_alternant);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_alternative_alternant_154;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYalternative_alternant,T130);
  lit_209 = YPPsym((P)"alternative-alternant-setter");
  T134 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_155 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_155),LITREF(lit_209),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSastYalternative_alternant_setter);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYalternative_alternant_setter);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_alternative_alternant_setter_155;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYalternative_alternant_setter,T135);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_210 = YPPsym((P)"<sequential>");
  T141 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T140 = (P)YPpair(VARREF(YLlstG),T141);
  T139 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_210),T140);
  VARSET(YevalSastYLsequentialG,T139);
  T142 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T142);
  lit_211 = YPPsym((P)"sequential");
  T143 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_165)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_211),T143,ENVNUL,PNUL,YPfalse);
  T144 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T144);
  T146 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T145 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,T146),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_157 = YPmet(FUNCODEREF(fun_empty_157),LITREF(lit_169),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YgooScolsScolYempty);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooScolsScolYempty);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_empty_157;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooScolsScolYempty,T147);
  lit_212 = YPPsym((P)"<constant>");
  T152 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T151 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_212),T152);
  VARSET(YevalSastYLconstantG,T151);
  lit_213 = YPPsym((P)"constant-value");
  T153 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_158 = YPmet(FUNCODEREF(fun_constant_value_158),LITREF(lit_213),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YevalSastYconstant_value);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSastYconstant_value);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_constant_value_158;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSastYconstant_value,T154);
  lit_214 = YPPsym((P)"constant-value-setter");
  T158 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_159 = YPmet(FUNCODEREF(fun_constant_value_setter_159),LITREF(lit_214),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YevalSastYconstant_value_setter);
  if (T161 != YPfalse) {
    T160 = VARREF(YevalSastYconstant_value_setter);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_constant_value_setter_159;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YevalSastYconstant_value_setter,T159);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_215 = YPPsym((P)"constant-index");
  T163 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_160 = YPmet(FUNCODEREF(fun_constant_index_160),LITREF(lit_215),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSastYconstant_index);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSastYconstant_index);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_constant_index_160;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSastYconstant_index,T164);
  lit_216 = YPPsym((P)"constant-index-setter");
  T168 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_161 = YPmet(FUNCODEREF(fun_constant_index_setter_161),LITREF(lit_216),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSastYconstant_index_setter);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYconstant_index_setter);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_constant_index_setter_161;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYconstant_index_setter,T169);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_217 = YPPsym((P)"<raw-constant>");
  T174 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T173 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_217),T174);
  VARSET(YevalSastYLraw_constantG,T173);
  lit_218 = YPPsym((P)"<immediate-constant>");
  T176 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T175 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_218),T176);
  VARSET(YevalSastYLimmediate_constantG,T175);
  lit_219 = YPPsym((P)"<application>");
  T178 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T177 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_219),T178);
  VARSET(YevalSastYLapplicationG,T177);
  lit_220 = YPPsym((P)"application-arguments");
  T179 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_162 = YPmet(FUNCODEREF(fun_application_arguments_162),LITREF(lit_220),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSastYapplication_arguments);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSastYapplication_arguments);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_application_arguments_162;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSastYapplication_arguments,T180);
  lit_221 = YPPsym((P)"application-arguments-setter");
  T184 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_163 = YPmet(FUNCODEREF(fun_application_arguments_setter_163),LITREF(lit_221),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSastYapplication_arguments_setter);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSastYapplication_arguments_setter);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_application_arguments_setter_163;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSastYapplication_arguments_setter,T185);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_222 = YPPsym((P)"application-tail?");
  T189 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_164 = YPmet(FUNCODEREF(fun_application_tailQ_164),LITREF(lit_222),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSastYapplication_tailQ);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSastYapplication_tailQ);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_application_tailQ_164;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSastYapplication_tailQ,T190);
  lit_223 = YPPsym((P)"application-tail?-setter");
  T194 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_165 = YPmet(FUNCODEREF(fun_application_tailQ_setter_165),LITREF(lit_223),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalSastYapplication_tailQ_setter);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSastYapplication_tailQ_setter);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_application_tailQ_setter_165;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSastYapplication_tailQ_setter,T195);
  T199 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T200 = fun_166;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T200);
  lit_224 = YPPsym((P)"<regular-application>");
  T202 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T201 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_224),T202);
  VARSET(YevalSastYLregular_applicationG,T201);
  lit_225 = YPPsym((P)"application-function");
  T203 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_167 = YPmet(FUNCODEREF(fun_application_function_167),LITREF(lit_225),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSastYapplication_function);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSastYapplication_function);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_application_function_167;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSastYapplication_function,T204);
  lit_226 = YPPsym((P)"application-function-setter");
  T208 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_168 = YPmet(FUNCODEREF(fun_application_function_setter_168),LITREF(lit_226),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSastYapplication_function_setter);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSastYapplication_function_setter);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_application_function_setter_168;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSastYapplication_function_setter,T209);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_227 = YPPsym((P)"application-known?");
  T215 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T214 = fun_application_knownQ_169 = YPmet(FUNCODEREF(fun_application_knownQ_169),LITREF(lit_227),T215,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YevalSastYapplication_knownQ);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSastYapplication_knownQ);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_application_knownQ_169;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T220);
  T216 = VARSET(YevalSastYapplication_knownQ,T217);
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204;
DEFCREGS();
loop:
  lit_228 = YPPsym((P)"application-known?-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_170 = YPmet(FUNCODEREF(fun_application_knownQ_setter_170),LITREF(lit_228),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYapplication_knownQ_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYapplication_knownQ_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_application_knownQ_setter_170;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYapplication_knownQ_setter,T1);
  T5 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T6 = fun_171;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T6);
  lit_229 = YPPsym((P)"<method-application>");
  T8 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_229),T8);
  VARSET(YevalSastYLmethod_applicationG,T7);
  lit_230 = YPPsym((P)"application-next-methods");
  T9 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_172 = YPmet(FUNCODEREF(fun_application_next_methods_172),LITREF(lit_230),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YevalSastYapplication_next_methods);
  if (T12 != YPfalse) {
    T11 = VARREF(YevalSastYapplication_next_methods);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_application_next_methods_172;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YevalSastYapplication_next_methods,T10);
  lit_231 = YPPsym((P)"application-next-methods-setter");
  T14 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_173 = YPmet(FUNCODEREF(fun_application_next_methods_setter_173),LITREF(lit_231),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSastYapplication_next_methods_setter);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSastYapplication_next_methods_setter);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_application_next_methods_setter_173;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSastYapplication_next_methods_setter,T15);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_232 = YPPsym((P)"<predefined-application>");
  T20 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T19 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_232),T20);
  VARSET(YevalSastYLpredefined_applicationG,T19);
  lit_233 = YPPsym((P)"application-binding");
  T21 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_174 = YPmet(FUNCODEREF(fun_application_binding_174),LITREF(lit_233),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YevalSastYapplication_binding);
  if (T24 != YPfalse) {
    T23 = VARREF(YevalSastYapplication_binding);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_application_binding_174;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YevalSastYapplication_binding,T22);
  lit_234 = YPPsym((P)"application-binding-setter");
  T26 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_175 = YPmet(FUNCODEREF(fun_application_binding_setter_175),LITREF(lit_234),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSastYapplication_binding_setter);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSastYapplication_binding_setter);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_application_binding_setter_175;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSastYapplication_binding_setter,T27);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_235 = YPPsym((P)"<fix-let>");
  T32 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T31 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_235),T32);
  VARSET(YevalSastYLfix_letG,T31);
  lit_236 = YPPsym((P)"fix-let-bindings");
  T33 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_176 = YPmet(FUNCODEREF(fun_fix_let_bindings_176),LITREF(lit_236),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSastYfix_let_bindings);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSastYfix_let_bindings);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_fix_let_bindings_176;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSastYfix_let_bindings,T34);
  lit_237 = YPPsym((P)"fix-let-bindings-setter");
  T38 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_177 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_177),LITREF(lit_237),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YevalSastYfix_let_bindings_setter);
  if (T41 != YPfalse) {
    T40 = VARREF(YevalSastYfix_let_bindings_setter);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_fix_let_bindings_setter_177;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YevalSastYfix_let_bindings_setter,T39);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_238 = YPPsym((P)"fix-let-types");
  T43 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_178 = YPmet(FUNCODEREF(fun_fix_let_types_178),LITREF(lit_238),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSastYfix_let_types);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSastYfix_let_types);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_fix_let_types_178;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSastYfix_let_types,T44);
  lit_239 = YPPsym((P)"fix-let-types-setter");
  T48 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_179 = YPmet(FUNCODEREF(fun_fix_let_types_setter_179),LITREF(lit_239),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YevalSastYfix_let_types_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalSastYfix_let_types_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_fix_let_types_setter_179;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalSastYfix_let_types_setter,T49);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_240 = YPPsym((P)"fix-let-arguments");
  T53 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_180 = YPmet(FUNCODEREF(fun_fix_let_arguments_180),LITREF(lit_240),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YevalSastYfix_let_arguments);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalSastYfix_let_arguments);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_fix_let_arguments_180;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalSastYfix_let_arguments,T54);
  lit_241 = YPPsym((P)"fix-let-arguments-setter");
  T58 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_181 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_181),LITREF(lit_241),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YevalSastYfix_let_arguments_setter);
  if (T61 != YPfalse) {
    T60 = VARREF(YevalSastYfix_let_arguments_setter);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_fix_let_arguments_setter_181;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YevalSastYfix_let_arguments_setter,T59);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_242 = YPPsym((P)"fix-let-body");
  T63 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_182 = YPmet(FUNCODEREF(fun_fix_let_body_182),LITREF(lit_242),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSastYfix_let_body);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYfix_let_body);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_fix_let_body_182;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYfix_let_body,T64);
  lit_243 = YPPsym((P)"fix-let-body-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_183 = YPmet(FUNCODEREF(fun_fix_let_body_setter_183),LITREF(lit_243),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYfix_let_body_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYfix_let_body_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_fix_let_body_setter_183;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYfix_let_body_setter,T69);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_244 = YPPsym((P)"<low-let>");
  T74 = (P)YPpair(VARREF(YevalSastYLfix_letG),Ynil);
  T73 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_244),T74);
  VARSET(YevalSastYLlow_letG,T73);
  lit_245 = YPPsym((P)"<fab-list>");
  T77 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T76 = (P)YPpair(VARREF(YLlstG),T77);
  T75 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_245),T76);
  VARSET(YevalSastYLfab_listG,T75);
  T78 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T78);
  lit_246 = YPPsym((P)"fab-list");
  T79 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_165)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_246),T79,ENVNUL,PNUL,YPfalse);
  T80 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T80);
  T82 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T81 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,T82),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_185 = YPmet(FUNCODEREF(fun_empty_185),LITREF(lit_169),T81,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YgooScolsScolYempty);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooScolsScolYempty);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_empty_185;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooScolsScolYempty,T83);
  lit_247 = YPPsym((P)"<arguments>");
  T89 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T88 = (P)YPpair(VARREF(YLlstG),T89);
  T87 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_247),T88);
  VARSET(YevalSastYLargumentsG,T87);
  T90 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T90);
  T91 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_165)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_15),T91,ENVNUL,PNUL,YPfalse);
  T92 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T92);
  T94 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T93 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,T94),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_187 = YPmet(FUNCODEREF(fun_empty_187),LITREF(lit_169),T93,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooScolsScolYempty);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooScolsScolYempty);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_empty_187;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooScolsScolYempty,T95);
  lit_248 = YPPsym((P)"<locals>");
  T100 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T99 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_248),T100);
  VARSET(YevalSastYLlocalsG,T99);
  lit_249 = YPPsym((P)"locals-bindings");
  T101 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_188 = YPmet(FUNCODEREF(fun_locals_bindings_188),LITREF(lit_249),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSastYlocals_bindings);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSastYlocals_bindings);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_locals_bindings_188;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSastYlocals_bindings,T102);
  lit_250 = YPPsym((P)"locals-bindings-setter");
  T106 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_189 = YPmet(FUNCODEREF(fun_locals_bindings_setter_189),LITREF(lit_250),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYlocals_bindings_setter);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYlocals_bindings_setter);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_locals_bindings_setter_189;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYlocals_bindings_setter,T107);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_251 = YPPsym((P)"locals-functions");
  T111 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_190 = YPmet(FUNCODEREF(fun_locals_functions_190),LITREF(lit_251),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYlocals_functions);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYlocals_functions);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_locals_functions_190;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYlocals_functions,T112);
  lit_252 = YPPsym((P)"locals-functions-setter");
  T116 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_191 = YPmet(FUNCODEREF(fun_locals_functions_setter_191),LITREF(lit_252),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YevalSastYlocals_functions_setter);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYlocals_functions_setter);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_locals_functions_setter_191;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYlocals_functions_setter,T117);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_253 = YPPsym((P)"locals-body");
  T121 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_192 = YPmet(FUNCODEREF(fun_locals_body_192),LITREF(lit_253),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YevalSastYlocals_body);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSastYlocals_body);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_locals_body_192;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYlocals_body,T122);
  lit_254 = YPPsym((P)"locals-body-setter");
  T126 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_193 = YPmet(FUNCODEREF(fun_locals_body_setter_193),LITREF(lit_254),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalSastYlocals_body_setter);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalSastYlocals_body_setter);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_locals_body_setter_193;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalSastYlocals_body_setter,T127);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_255 = YPPsym((P)"<bind-exit>");
  T132 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T131 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_255),T132);
  VARSET(YevalSastYLbind_exitG,T131);
  lit_256 = YPPsym((P)"bind-exit-main-fun");
  T133 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_194 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_194),LITREF(lit_256),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YevalSastYbind_exit_main_fun);
  if (T136 != YPfalse) {
    T135 = VARREF(YevalSastYbind_exit_main_fun);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_bind_exit_main_fun_194;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YevalSastYbind_exit_main_fun,T134);
  lit_257 = YPPsym((P)"bind-exit-main-fun-setter");
  T138 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_195 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_195),LITREF(lit_257),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YevalSastYbind_exit_main_fun_setter);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSastYbind_exit_main_fun_setter);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_bind_exit_main_fun_setter_195;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSastYbind_exit_main_fun_setter,T139);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_258 = YPPsym((P)"<unwind-protect>");
  T144 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T143 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_258),T144);
  VARSET(YevalSastYLunwind_protectG,T143);
  lit_259 = YPPsym((P)"unwind-protect-protected-thunk");
  T145 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_196 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_196),LITREF(lit_259),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSastYunwind_protect_protected_thunk);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSastYunwind_protect_protected_thunk);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_unwind_protect_protected_thunk_196;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSastYunwind_protect_protected_thunk,T146);
  lit_260 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  T150 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_197 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_197),LITREF(lit_260),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSastYunwind_protect_protected_thunk_setter);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSastYunwind_protect_protected_thunk_setter);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_unwind_protect_protected_thunk_setter_197;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T151);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_261 = YPPsym((P)"unwind-protect-cleanup-thunk");
  T155 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_198 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_198),LITREF(lit_261),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYunwind_protect_cleanup_thunk);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_unwind_protect_cleanup_thunk_198;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T156);
  lit_262 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  T160 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_199 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_199),LITREF(lit_262),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk_setter);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYunwind_protect_cleanup_thunk_setter);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_unwind_protect_cleanup_thunk_setter_199;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T161);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_263 = YPPsym((P)"<monitor>");
  T166 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T165 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_263),T166);
  VARSET(YevalSastYLmonitorG,T165);
  lit_264 = YPPsym((P)"monitor-type");
  T167 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_200 = YPmet(FUNCODEREF(fun_monitor_type_200),LITREF(lit_264),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSastYmonitor_type);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSastYmonitor_type);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_monitor_type_200;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSastYmonitor_type,T168);
  lit_265 = YPPsym((P)"monitor-type-setter");
  T172 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_201 = YPmet(FUNCODEREF(fun_monitor_type_setter_201),LITREF(lit_265),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSastYmonitor_type_setter);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSastYmonitor_type_setter);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_monitor_type_setter_201;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSastYmonitor_type_setter,T173);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_266 = YPPsym((P)"monitor-info");
  T177 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_202 = YPmet(FUNCODEREF(fun_monitor_info_202),LITREF(lit_266),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSastYmonitor_info);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSastYmonitor_info);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_monitor_info_202;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSastYmonitor_info,T178);
  lit_267 = YPPsym((P)"monitor-info-setter");
  T182 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_203 = YPmet(FUNCODEREF(fun_monitor_info_setter_203),LITREF(lit_267),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSastYmonitor_info_setter);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSastYmonitor_info_setter);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_monitor_info_setter_203;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSastYmonitor_info_setter,T183);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_268 = YPPsym((P)"monitor-test");
  T187 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_204 = YPmet(FUNCODEREF(fun_monitor_test_204),LITREF(lit_268),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSastYmonitor_test);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSastYmonitor_test);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_monitor_test_204;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSastYmonitor_test,T188);
  lit_269 = YPPsym((P)"monitor-test-setter");
  T192 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_205 = YPmet(FUNCODEREF(fun_monitor_test_setter_205),LITREF(lit_269),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSastYmonitor_test_setter);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSastYmonitor_test_setter);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_monitor_test_setter_205;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSastYmonitor_test_setter,T193);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_270 = YPPsym((P)"monitor-handler");
  T199 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T198 = fun_monitor_handler_206 = YPmet(FUNCODEREF(fun_monitor_handler_206),LITREF(lit_270),T199,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YevalSastYmonitor_handler);
  if (T203 != YPfalse) {
    T202 = VARREF(YevalSastYmonitor_handler);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_monitor_handler_206;
  T201 = XCALL2(1,VARREF(YPdefine_method),T202,T204);
  T200 = VARSET(YevalSastYmonitor_handler,T201);
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
  lit_271 = YPPsym((P)"monitor-handler-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_207 = YPmet(FUNCODEREF(fun_monitor_handler_setter_207),LITREF(lit_271),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYmonitor_handler_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYmonitor_handler_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_monitor_handler_setter_207;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYmonitor_handler_setter,T1);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_272 = YPPsym((P)"monitor-main-thunk");
  T5 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_208 = YPmet(FUNCODEREF(fun_monitor_main_thunk_208),LITREF(lit_272),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYmonitor_main_thunk);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYmonitor_main_thunk);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_monitor_main_thunk_208;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYmonitor_main_thunk,T6);
  lit_273 = YPPsym((P)"monitor-main-thunk-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_209 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_209),LITREF(lit_273),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSastYmonitor_main_thunk_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYmonitor_main_thunk_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_monitor_main_thunk_setter_209;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYmonitor_main_thunk_setter,T11);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_274 = YPPsym((P)"ast-walk!");
  lit_275 = YPPsym((P)"g");
  lit_276 = YPPsym((P)"o");
  lit_277 = YPPsym((P)"x-1443");
  lit_278 = YPPsym((P)"x-1442");
  T16 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1443_210 = YPmet(FUNCODEREF(fun_x_1443_210),LITREF(lit_277),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(3,LITREF(lit_275),LITREF(lit_276),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_211 = YPmet(FUNCODEREF(fun_ast_walkX_211),LITREF(lit_274),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSastYast_walkX);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSastYast_walkX);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_walkX_211;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSastYast_walkX,T17);
  lit_279 = YPPsym((P)"ast-walk");
  lit_280 = YPPsym((P)"x-1445");
  lit_281 = YPPsym((P)"x-1444");
  T22 = YPsig(YPPlist(1,LITREF(lit_281)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1445_212 = YPmet(FUNCODEREF(fun_x_1445_212),LITREF(lit_280),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(3,LITREF(lit_275),LITREF(lit_276),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_213 = YPmet(FUNCODEREF(fun_ast_walk_213),LITREF(lit_279),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSastYast_walk);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSastYast_walk);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_ast_walk_213;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSastYast_walk,T23);
  lit_282 = YPPsym((P)"ast-copy");
  T27 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_214 = YPmet(FUNCODEREF(fun_ast_copy_214),LITREF(lit_282),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSastYast_copy);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYast_copy);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_ast_copy_214;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYast_copy,T28);
  lit_283 = YPsb((P)"No next methods");
  T32 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_215 = YPmet(FUNCODEREF(fun_ast_copy_215),LITREF(lit_282),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSastYast_copy);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSastYast_copy);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_ast_copy_215;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSastYast_copy,T33);
  lit_284 = YPPsym((P)"<static-environment>");
  T38 = (P)YPpair(VARREF(YLanyG),Ynil);
  T37 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_284),T38);
  VARSET(YevalSastYLstatic_environmentG,T37);
  lit_285 = YPPsym((P)"environment-next");
  T39 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_216 = YPmet(FUNCODEREF(fun_environment_next_216),LITREF(lit_285),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYenvironment_next);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYenvironment_next);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_environment_next_216;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYenvironment_next,T40);
  lit_286 = YPPsym((P)"environment-next-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_217 = YPmet(FUNCODEREF(fun_environment_next_setter_217),LITREF(lit_286),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYenvironment_next_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYenvironment_next_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_environment_next_setter_217;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYenvironment_next_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_218;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T50);
  lit_287 = YPPsym((P)"environment-bindings");
  T51 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_219 = YPmet(FUNCODEREF(fun_environment_bindings_219),LITREF(lit_287),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYenvironment_bindings);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYenvironment_bindings);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_environment_bindings_219;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYenvironment_bindings,T52);
  lit_288 = YPPsym((P)"environment-bindings-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_220 = YPmet(FUNCODEREF(fun_environment_bindings_setter_220),LITREF(lit_288),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYenvironment_bindings_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYenvironment_bindings_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_environment_bindings_setter_220;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYenvironment_bindings_setter,T57);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_289 = YPPsym((P)"<static-global-environment>");
  T62 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T61 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_289),T62);
  VARSET(YevalSastYLstatic_global_environmentG,T61);
  lit_290 = YPPsym((P)"environment-module");
  T63 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_221 = YPmet(FUNCODEREF(fun_environment_module_221),LITREF(lit_290),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSastYenvironment_module);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYenvironment_module);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_environment_module_221;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYenvironment_module,T64);
  lit_291 = YPPsym((P)"environment-module-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_222 = YPmet(FUNCODEREF(fun_environment_module_setter_222),LITREF(lit_291),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYenvironment_module_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYenvironment_module_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_environment_module_setter_222;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYenvironment_module_setter,T69);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_292 = YPPsym((P)"environment-module-loader");
  T73 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_223 = YPmet(FUNCODEREF(fun_environment_module_loader_223),LITREF(lit_292),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSastYenvironment_module_loader);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYenvironment_module_loader);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_environment_module_loader_223;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYenvironment_module_loader,T74);
  lit_293 = YPPsym((P)"environment-module-loader-setter");
  T78 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_224 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_224),LITREF(lit_293),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalSastYenvironment_module_loader_setter);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSastYenvironment_module_loader_setter);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_environment_module_loader_setter_224;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSastYenvironment_module_loader_setter,T79);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_294 = YPPsym((P)"environment-uses-modules");
  T83 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_225 = YPmet(FUNCODEREF(fun_environment_uses_modules_225),LITREF(lit_294),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalSastYenvironment_uses_modules);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSastYenvironment_uses_modules);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_environment_uses_modules_225;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSastYenvironment_uses_modules,T84);
  lit_295 = YPPsym((P)"environment-uses-modules-setter");
  T88 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_226 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_226),LITREF(lit_295),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YevalSastYenvironment_uses_modules_setter);
  if (T91 != YPfalse) {
    T90 = VARREF(YevalSastYenvironment_uses_modules_setter);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_environment_uses_modules_setter_226;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YevalSastYenvironment_uses_modules_setter,T89);
  T93 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T94 = fun_227;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T94);
  lit_296 = YPPsym((P)"environment-allows-foreign-names?");
  T95 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_228 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_228),LITREF(lit_296),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYenvironment_allows_foreign_namesQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_environment_allows_foreign_namesQ_228;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T96);
  lit_297 = YPPsym((P)"environment-allows-foreign-names?-setter");
  T100 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_229 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_229),LITREF(lit_297),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ_setter);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_environment_allows_foreign_namesQ_setter_229;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T101);
  T105 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T106 = fun_230;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T106);
  lit_298 = YPPsym((P)"<static-empty-environment>");
  T108 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T107 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_298),T108);
  VARSET(YevalSastYLstatic_empty_environmentG,T107);
  T109 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T109);
  lit_299 = YPPsym((P)"<static-local-environment>");
  T111 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T110 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_299),T111);
  VARSET(YevalSastYLstatic_local_environmentG,T110);
  lit_300 = YPPsym((P)"env-object-name");
  lit_301 = YPPsym((P)"binding");
  T114 = YPsig(YPPlist(1,LITREF(lit_301)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_233 = YPmet(FUNCODEREF(fun_env_object_name_233),LITREF(lit_300),T112,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSastYenv_object_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYenv_object_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_env_object_name_233;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYenv_object_name,T115);
  lit_302 = YPPsym((P)"objectify");
  lit_303 = YPPsym((P)"r");
  lit_304 = YPPsym((P)"tail?");
  T119 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_234 = YPmet(FUNCODEREF(fun_objectify_234),LITREF(lit_302),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYobjectify);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYobjectify);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_objectify_234;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYobjectify,T120);
  lit_305 = YPPsym((P)"objectify-list");
  T124 = YPsig(YPPlist(4,LITREF(lit_140),LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_235 = YPmet(FUNCODEREF(fun_objectify_list_235),LITREF(lit_305),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYobjectify_list);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYobjectify_list);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_objectify_list_235;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYobjectify_list,T125);
  T129 = YPsig(YPPlist(4,LITREF(lit_140),LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_236 = YPmet(FUNCODEREF(fun_objectify_list_236),LITREF(lit_305),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSastYobjectify_list);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYobjectify_list);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_objectify_list_236;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYobjectify_list,T130);
  T134 = YPsig(YPPlist(4,LITREF(lit_140),LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_237 = YPmet(FUNCODEREF(fun_objectify_list_237),LITREF(lit_305),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSastYobjectify_list);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYobjectify_list);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_objectify_list_237;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYobjectify_list,T135);
  T139 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_238 = YPmet(FUNCODEREF(fun_objectify_238),LITREF(lit_302),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSastYobjectify);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYobjectify);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_objectify_238;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYobjectify,T140);
  T144 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_239 = YPmet(FUNCODEREF(fun_objectify_239),LITREF(lit_302),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYobjectify);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYobjectify);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_objectify_239;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYobjectify,T145);
  T149 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_240 = YPmet(FUNCODEREF(fun_objectify_240),LITREF(lit_302),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YevalSastYobjectify);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSastYobjectify);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_objectify_240;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSastYobjectify,T150);
  T155 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T154 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,T155,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_241 = YPmet(FUNCODEREF(fun_objectify_241),LITREF(lit_302),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSastYobjectify);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYobjectify);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_objectify_241;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYobjectify,T156);
  T160 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_242 = YPmet(FUNCODEREF(fun_objectify_242),LITREF(lit_302),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYobjectify);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYobjectify);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_objectify_242;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYobjectify,T161);
  lit_306 = YPPsym((P)"objectify-quotation");
  lit_307 = YPPsym((P)"value");
  T165 = YPsig(YPPlist(2,LITREF(lit_307),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_243 = YPmet(FUNCODEREF(fun_objectify_quotation_243),LITREF(lit_306),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSastYobjectify_quotation);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_objectify_quotation_243;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYobjectify_quotation,T166);
  T170 = YPsig(YPPlist(2,LITREF(lit_307),LITREF(lit_303)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_244 = YPmet(FUNCODEREF(fun_objectify_quotation_244),LITREF(lit_306),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSastYobjectify_quotation);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_objectify_quotation_244;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYobjectify_quotation,T171);
  T175 = YPsig(YPPlist(2,LITREF(lit_307),LITREF(lit_303)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_245 = YPmet(FUNCODEREF(fun_objectify_quotation_245),LITREF(lit_306),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSastYobjectify_quotation);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_objectify_quotation_245;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSastYobjectify_quotation,T176);
  lit_308 = YPPsym((P)"objectify-raw");
  T180 = YPsig(YPPlist(2,LITREF(lit_307),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_246 = YPmet(FUNCODEREF(fun_objectify_raw_246),LITREF(lit_308),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSastYobjectify_raw);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSastYobjectify_raw);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_objectify_raw_246;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSastYobjectify_raw,T181);
  lit_309 = YPPsym((P)"objectify-bound?");
  T185 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_247 = YPmet(FUNCODEREF(fun_objectify_boundQ_247),LITREF(lit_309),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSastYobjectify_boundQ);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSastYobjectify_boundQ);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_objectify_boundQ_247;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSastYobjectify_boundQ,T186);
  lit_310 = YPPsym((P)"objectify-compile-time");
  lit_311 = YPPsym((P)"program");
  lit_312 = YPPsym((P)"rt?");
  T190 = YPsig(YPPlist(4,LITREF(lit_311),LITREF(lit_303),LITREF(lit_304),LITREF(lit_312)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_248 = YPmet(FUNCODEREF(fun_objectify_compile_time_248),LITREF(lit_310),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YevalSastYobjectify_compile_time);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSastYobjectify_compile_time);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_objectify_compile_time_248;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSastYobjectify_compile_time,T191);
  lit_313 = YPPsym((P)"objectify-alternative");
  lit_314 = YPPsym((P)"c");
  lit_315 = YPPsym((P)"a");
  T195 = YPsig(YPPlist(5,LITREF(lit_165),LITREF(lit_314),LITREF(lit_315),LITREF(lit_303),LITREF(lit_304)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_249 = YPmet(FUNCODEREF(fun_objectify_alternative_249),LITREF(lit_313),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YevalSastYobjectify_alternative);
  if (T198 != YPfalse) {
    T197 = VARREF(YevalSastYobjectify_alternative);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_objectify_alternative_249;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YevalSastYobjectify_alternative,T196);
  lit_316 = YPPsym((P)"sequentialize");
  lit_317 = YPPsym((P)"e*");
  T201 = YPsig(YPPlist(1,LITREF(lit_317)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_250 = YPmet(FUNCODEREF(fun_loop_250),LITREF(lit_151),T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(1,LITREF(lit_317)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_251 = YPmet(FUNCODEREF(fun_sequentialize_251),LITREF(lit_316),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSastYsequentialize);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSastYsequentialize);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_sequentialize_251;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSastYsequentialize,T202);
  lit_318 = YPPsym((P)"transform-defs");
  T206 = YPsig(YPPlist(1,LITREF(lit_317)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_252 = YPmet(FUNCODEREF(fun_transform_defs_252),LITREF(lit_318),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSastYtransform_defs);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSastYtransform_defs);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_transform_defs_252;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSastYtransform_defs,T207);
  lit_319 = YPPsym((P)"objectify-sequential");
  T212 = YPsig(YPPlist(2,LITREF(lit_152),LITREF(lit_317)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_253 = YPmet(FUNCODEREF(fun_loop_253),LITREF(lit_151),T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(3,LITREF(lit_317),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_254 = YPmet(FUNCODEREF(fun_objectify_sequential_254),LITREF(lit_319),T211,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YevalSastYobjectify_sequential);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSastYobjectify_sequential);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_objectify_sequential_254;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSastYobjectify_sequential,T213);
  lit_320 = YPPsym((P)"objectify-application");
  lit_321 = YPPsym((P)"ff");
  T218 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T218,ENVNUL,PNUL,YPfalse);
  T217 = YPsig(YPPlist(4,LITREF(lit_321),LITREF(lit_317),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_256 = YPmet(FUNCODEREF(fun_objectify_application_256),LITREF(lit_320),T217,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSastYobjectify_application);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSastYobjectify_application);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_objectify_application_256;
  T219 = XCALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSastYobjectify_application,T219);
  T224 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T224,ENVNUL,PNUL,YPfalse);
  T223 = YPsig(YPPlist(4,LITREF(lit_321),LITREF(lit_317),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_258 = YPmet(FUNCODEREF(fun_objectify_application_258),LITREF(lit_320),T223,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSastYobjectify_application);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSastYobjectify_application);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_objectify_application_258;
  T225 = XCALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSastYobjectify_application,T225);
  T230 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(4,LITREF(lit_321),LITREF(lit_317),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_260 = YPmet(FUNCODEREF(fun_objectify_application_260),LITREF(lit_320),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSastYobjectify_application);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSastYobjectify_application);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_objectify_application_260;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSastYobjectify_application,T231);
  lit_322 = YPPsym((P)"process-closed-application");
  lit_323 = YPsb((P)"incorrect regular arity");
  T235 = YPsig(YPPlist(4,LITREF(lit_140),LITREF(lit_317),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_261 = YPmet(FUNCODEREF(fun_process_closed_application_261),LITREF(lit_322),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YevalSastYprocess_closed_application);
  if (T238 != YPfalse) {
    T237 = VARREF(YevalSastYprocess_closed_application);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_process_closed_application_261;
  T236 = XCALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YevalSastYprocess_closed_application,T236);
  lit_324 = YPPsym((P)"process-nary-closed-application");
  lit_325 = YPPsym((P)"pack-nary-args");
  lit_326 = YPPsym((P)"quote");
  lit_327 = YPPsym((P)"%pair");
  lit_328 = YPPsym((P)"pack-args");
  lit_329 = YPPsym((P)"v*");
  lit_330 = YPPsym((P)"t*");
  lit_331 = YPsb((P)"incorrect dotted arity");
  T242 = YPsig(YPPlist(1,LITREF(lit_317)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_262 = YPmet(FUNCODEREF(fun_pack_nary_args_262),LITREF(lit_325),T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(YPPlist(3,LITREF(lit_317),LITREF(lit_329),LITREF(lit_330)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_263 = YPmet(FUNCODEREF(fun_pack_args_263),LITREF(lit_328),T241,ENVNUL,PNUL,YPfalse);
  T240 = YPsig(YPPlist(4,LITREF(lit_140),LITREF(lit_317),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_264 = YPmet(FUNCODEREF(fun_process_nary_closed_application_264),LITREF(lit_324),T240,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YevalSastYprocess_nary_closed_application);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSastYprocess_nary_closed_application);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_process_nary_closed_application_264;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSastYprocess_nary_closed_application,T243);
  lit_332 = YPPsym((P)"convert2arguments");
  T247 = YPsig(YPPlist(1,LITREF(lit_317)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_265 = YPmet(FUNCODEREF(fun_convert2arguments_265),LITREF(lit_332),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YevalSastYconvert2arguments);
  if (T250 != YPfalse) {
    T249 = VARREF(YevalSastYconvert2arguments);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_convert2arguments_265;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YevalSastYconvert2arguments,T248);
  lit_333 = YPPsym((P)"objectify-assignment");
  lit_334 = YPsb((P)"Unsupported Set!: %=");
  T252 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_266 = YPmet(FUNCODEREF(fun_objectify_assignment_266),LITREF(lit_333),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YevalSastYobjectify_assignment);
  if (T255 != YPfalse) {
    T254 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_objectify_assignment_266;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YevalSastYobjectify_assignment,T253);
  T257 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_267 = YPmet(FUNCODEREF(fun_objectify_assignment_267),LITREF(lit_333),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YevalSastYobjectify_assignment);
  if (T260 != YPfalse) {
    T259 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_objectify_assignment_267;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YevalSastYobjectify_assignment,T258);
  lit_335 = YPPsym((P)"objectify-assignment-using");
  lit_336 = YPPsym((P)"ref");
  lit_337 = YPPsym((P)"val");
  T262 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_337)),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_268 = YPmet(FUNCODEREF(fun_objectify_assignment_using_268),LITREF(lit_335),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_objectify_assignment_using_268;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSastYobjectify_assignment_using,T263);
  T267 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_337)),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_269 = YPmet(FUNCODEREF(fun_objectify_assignment_using_269),LITREF(lit_335),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_objectify_assignment_using_269;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSastYobjectify_assignment_using,T268);
  T272 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_337)),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_270 = YPmet(FUNCODEREF(fun_objectify_assignment_using_270),LITREF(lit_335),T272,ENVNUL,PNUL,YPfalse);
  T275 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T275 != YPfalse) {
    T274 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_objectify_assignment_using_270;
  T273 = XCALL2(1,VARREF(YPdefine_method),T274,T276);
  VARSET(YevalSastYobjectify_assignment_using,T273);
  T279 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_337)),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  T278 = fun_objectify_assignment_using_271 = YPmet(FUNCODEREF(fun_objectify_assignment_using_271),LITREF(lit_335),T279,ENVNUL,PNUL,YPfalse);
  T283 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T283 != YPfalse) {
    T282 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T282 = YPfalse;
  }
  T284 = fun_objectify_assignment_using_271;
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
  P T304,T305;
DEFCREGS();
loop:
  lit_338 = YPsb((P)"Unable to assign to static module binding %=");
  T0 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_337)),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_272 = YPmet(FUNCODEREF(fun_objectify_assignment_using_272),LITREF(lit_335),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_objectify_assignment_using_272;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYobjectify_assignment_using,T1);
  lit_339 = YPPsym((P)"update-binding-kind");
  lit_340 = YPPsym((P)"new-kind");
  lit_341 = YPPsym((P)"runtime");
  lit_342 = YPPsym((P)"magic");
  lit_343 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T5 = YPsig(YPPlist(2,LITREF(lit_301),LITREF(lit_340)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_339),T5,ENVNUL,PNUL,YPfalse);
  T6 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T6);
  lit_344 = YPPsym((P)"ast-define-binding");
  lit_345 = YPPsym((P)"name");
  lit_346 = YPPsym((P)"defining-method?");
  lit_347 = YPPsym((P)"kind");
  lit_348 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T7 = YPsig(YPPlist(4,LITREF(lit_303),LITREF(lit_345),LITREF(lit_346),LITREF(lit_347)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_274 = YPmet(FUNCODEREF(fun_ast_define_binding_274),LITREF(lit_344),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYast_define_binding);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYast_define_binding);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_ast_define_binding_274;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYast_define_binding,T8);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_349 = YPPsym((P)"objectify-definition");
  lit_350 = YPPsym((P)"type");
  lit_351 = YPPsym((P)"var");
  T12 = YPsig(YPPlist(5,LITREF(lit_350),LITREF(lit_347),LITREF(lit_351),LITREF(lit_150),LITREF(lit_303)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_275 = YPmet(FUNCODEREF(fun_objectify_definition_275),LITREF(lit_349),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSastYobjectify_definition);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYobjectify_definition);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_objectify_definition_275;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYobjectify_definition,T13);
  lit_352 = YPPsym((P)"objectify-variable-definition");
  T17 = YPsig(YPPlist(3,LITREF(lit_351),LITREF(lit_150),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_276 = YPmet(FUNCODEREF(fun_objectify_variable_definition_276),LITREF(lit_352),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalSastYobjectify_variable_definition);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYobjectify_variable_definition);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_objectify_variable_definition_276;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYobjectify_variable_definition,T18);
  lit_353 = YPPsym((P)"objectify-dynamic-definition");
  lit_354 = YPPsym((P)"dynamic");
  T22 = YPsig(YPPlist(3,LITREF(lit_351),LITREF(lit_150),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_277 = YPmet(FUNCODEREF(fun_objectify_dynamic_definition_277),LITREF(lit_353),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSastYobjectify_dynamic_definition);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSastYobjectify_dynamic_definition);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_objectify_dynamic_definition_277;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSastYobjectify_dynamic_definition,T23);
  lit_355 = YPPsym((P)"%%macro");
  lit_356 = YPPsym((P)"modname");
  lit_357 = YPPsym((P)"expander");
  lit_358 = YPPsym((P)"env-or-false");
  lit_359 = YPPsym((P)"expand");
  lit_360 = YPsb((P)"MACRO ");
  lit_361 = YPsb((P)"\n");
  lit_362 = YPsb((P)"  => ");
  lit_363 = YPsb((P)"\n");
  lit_364 = YPPsym((P)"macro");
  T28 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_278 = YPmet(FUNCODEREF(fun_expand_278),LITREF(lit_359),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(4,LITREF(lit_356),LITREF(lit_345),LITREF(lit_357),LITREF(lit_358)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_355),T27,ENVNUL,PNUL,YPfalse);
  T29 = YPPmacro;
  VARSET(YPPmacro,T29);
  lit_365 = YPPsym((P)"objectify-syntax-definition");
  T30 = YPsig(YPPlist(4,LITREF(lit_345),LITREF(lit_150),LITREF(lit_303),LITREF(lit_312)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_280 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_280),LITREF(lit_365),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSastYobjectify_syntax_definition);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYobjectify_syntax_definition);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_objectify_syntax_definition_280;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYobjectify_syntax_definition,T31);
  lit_366 = YPPsym((P)"objectify-function-definition");
  T35 = YPsig(YPPlist(3,LITREF(lit_345),LITREF(lit_150),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_281 = YPmet(FUNCODEREF(fun_objectify_function_definition_281),LITREF(lit_366),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSastYobjectify_function_definition);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSastYobjectify_function_definition);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_objectify_function_definition_281;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSastYobjectify_function_definition,T36);
  lit_367 = YPPsym((P)"module-binding");
  T40 = YPsig(YPPlist(1,LITREF(lit_347)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_367),T40,ENVNUL,PNUL,YPfalse);
  T41 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T41);
  lit_368 = YPPsym((P)"objectify-primitive-definition");
  lit_369 = YPPsym((P)"mods");
  lit_370 = YPPsym((P)"sig");
  lit_371 = YPPsym((P)"body");
  lit_372 = YPPsym((P)"predefined");
  lit_373 = YPPsym((P)"inline");
  T42 = YPsig(YPPlist(5,LITREF(lit_345),LITREF(lit_369),LITREF(lit_370),LITREF(lit_371),LITREF(lit_303)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_283 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_283),LITREF(lit_368),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YevalSastYobjectify_primitive_definition);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYobjectify_primitive_definition);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_objectify_primitive_definition_283;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYobjectify_primitive_definition,T43);
  lit_374 = YPPsym((P)"objectify-generic-definition");
  T47 = YPsig(YPPlist(3,LITREF(lit_345),LITREF(lit_370),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_284 = YPmet(FUNCODEREF(fun_objectify_generic_definition_284),LITREF(lit_374),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YevalSastYobjectify_generic_definition);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalSastYobjectify_generic_definition);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_objectify_generic_definition_284;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalSastYobjectify_generic_definition,T48);
  lit_375 = YPPsym((P)"objectify-method-definition");
  lit_376 = YPPsym((P)"if");
  lit_377 = YPPsym((P)"bound?");
  lit_378 = YPPsym((P)"%define-method");
  T52 = YPsig(YPPlist(3,LITREF(lit_345),LITREF(lit_150),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_285 = YPmet(FUNCODEREF(fun_objectify_method_definition_285),LITREF(lit_375),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSastYobjectify_method_definition);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSastYobjectify_method_definition);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_objectify_method_definition_285;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSastYobjectify_method_definition,T53);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_379 = YPPsym((P)"objectify-function-source");
  lit_380 = YPsb((P)"(fun %s %s)");
  T61 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(3,LITREF(lit_370),LITREF(lit_371),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_290 = YPmet(FUNCODEREF(fun_objectify_function_source_290),LITREF(lit_379),T57,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSastYobjectify_function_source);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSastYobjectify_function_source);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_objectify_function_source_290;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSastYobjectify_function_source,T62);
  lit_381 = YPPsym((P)"objectify-function");
  T68 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(4,LITREF(lit_370),LITREF(lit_371),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_293 = YPmet(FUNCODEREF(fun_objectify_function_293),LITREF(lit_381),T66,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYobjectify_function);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYobjectify_function);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_objectify_function_293;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYobjectify_function,T69);
  lit_382 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_382));
  lit_383 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_383));
  lit_384 = YPPsym((P)"objectify-signature");
  lit_385 = YPPsym((P)"col");
  lit_386 = YPPsym((P)"params");
  lit_387 = YPPsym((P)"nary?");
  lit_388 = YPPsym((P)"bindings");
  lit_389 = YPPsym((P)"names");
  lit_390 = YPPsym((P)"types");
  T74 = YPsig(YPPlist(5,LITREF(lit_386),LITREF(lit_387),LITREF(lit_388),LITREF(lit_389),LITREF(lit_390)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_294 = YPmet(FUNCODEREF(fun_col_294),LITREF(lit_385),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(2,LITREF(lit_370),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_295 = YPmet(FUNCODEREF(fun_objectify_signature_295),LITREF(lit_384),T73,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSastYobjectify_signature);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSastYobjectify_signature);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_objectify_signature_295;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSastYobjectify_signature,T75);
  lit_391 = YPPsym((P)"compute-local-reference-offsets");
  lit_392 = YPPsym((P)"i");
  lit_393 = YPPsym((P)"find");
  lit_394 = YPPsym((P)"j");
  lit_395 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  T82 = YPsig(YPPlist(2,LITREF(lit_394),LITREF(lit_388)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_296 = YPmet(FUNCODEREF(fun_find_296),LITREF(lit_393),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(2,LITREF(lit_392),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_297 = YPmet(FUNCODEREF(fun_loop_297),LITREF(lit_151),T81,ENVNUL,PNUL,YPfalse);
  T80 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T79 = YPsig(YPPlist(2,LITREF(lit_301),LITREF(lit_303)),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),T80,Ynil);
  fun_compute_local_reference_offsets_298 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_298),LITREF(lit_391),T79,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSastYcompute_local_reference_offsets);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYcompute_local_reference_offsets);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_compute_local_reference_offsets_298;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYcompute_local_reference_offsets,T83);
  lit_396 = YPPsym((P)"objectify-binding");
  lit_397 = YPPsym((P)"n");
  T87 = YPsig(YPPlist(3,LITREF(lit_397),LITREF(lit_51),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_299 = YPmet(FUNCODEREF(fun_objectify_binding_299),LITREF(lit_396),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYobjectify_binding);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYobjectify_binding);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_objectify_binding_299;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYobjectify_binding,T88);
  lit_398 = YPPsym((P)"binding-reference-class");
  lit_399 = YPsb((P)"Unknown binding-kind %=");
  T92 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_300 = YPmet(FUNCODEREF(fun_binding_reference_class_300),LITREF(lit_398),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSastYbinding_reference_class);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYbinding_reference_class);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_binding_reference_class_300;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYbinding_reference_class,T93);
  T97 = YPsig(YPPlist(3,LITREF(lit_397),LITREF(lit_51),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_301 = YPmet(FUNCODEREF(fun_objectify_binding_301),LITREF(lit_396),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSastYobjectify_binding);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSastYobjectify_binding);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_objectify_binding_301;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSastYobjectify_binding,T98);
  T102 = YPsig(YPPlist(3,LITREF(lit_397),LITREF(lit_51),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_302 = YPmet(FUNCODEREF(fun_objectify_binding_302),LITREF(lit_396),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYobjectify_binding);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYobjectify_binding);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_objectify_binding_302;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYobjectify_binding,T103);
  lit_400 = YPPsym((P)"default-type");
  lit_401 = YPPsym((P)"<any>");
  T107 = YPsig(YPPlist(1,LITREF(lit_303)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_303 = YPmet(FUNCODEREF(fun_default_type_303),LITREF(lit_400),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSastYdefault_type);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYdefault_type);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_default_type_303;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYdefault_type,T108);
  lit_402 = YPPsym((P)"objectify-free-global-reference");
  T112 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_304 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_304),LITREF(lit_402),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSastYobjectify_free_global_reference);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSastYobjectify_free_global_reference);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_objectify_free_global_reference_304;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSastYobjectify_free_global_reference,T113);
  lit_403 = YPPsym((P)"foreign-name?");
  T117 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_403),T117,ENVNUL,PNUL,YPfalse);
  T118 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T118);
  lit_404 = YPPsym((P)"objectify-foreign-reference");
  lit_405 = YPsb((P)"Malformed foreign name %s.\n");
  lit_406 = YPsb((P)"No binding %s in %s.\n");
  T119 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_306 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_306),LITREF(lit_404),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYobjectify_foreign_reference);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYobjectify_foreign_reference);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_objectify_foreign_reference_306;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYobjectify_foreign_reference,T120);
  lit_407 = YPPsym((P)"objectify-symbol");
  T124 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_307 = YPmet(FUNCODEREF(fun_objectify_symbol_307),LITREF(lit_407),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYobjectify_symbol);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYobjectify_symbol);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_objectify_symbol_307;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYobjectify_symbol,T125);
  lit_408 = YPPsym((P)"ftype");
  lit_409 = YPPsym((P)"<fun>");
  T129 = YPsig(YPPlist(1,LITREF(lit_303)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_308 = YPmet(FUNCODEREF(fun_ftype_308),LITREF(lit_408),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSastYftype);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYftype);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_ftype_308;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYftype,T130);
  lit_410 = YPPsym((P)"<functions>");
  T136 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T135 = (P)YPpair(VARREF(YLlstG),T136);
  T134 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_410),T135);
  VARSET(YevalSastYLfunctionsG,T134);
  T137 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T137);
  lit_411 = YPPsym((P)"functions");
  T138 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_165)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_411),T138,ENVNUL,PNUL,YPfalse);
  T139 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T139);
  T141 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T140 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,T141),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_310 = YPmet(FUNCODEREF(fun_empty_310),LITREF(lit_169),T140,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YgooScolsScolYempty);
  if (T144 != YPfalse) {
    T143 = VARREF(YgooScolsScolYempty);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_empty_310;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YgooScolsScolYempty,T142);
  lit_412 = YPPsym((P)"objectify-locals");
  lit_413 = YPPsym((P)"sigs");
  lit_414 = YPPsym((P)"bodies");
  T148 = YPsig(YPPlist(1,LITREF(lit_397)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(2,LITREF(lit_140),LITREF(lit_51)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(6,LITREF(lit_389),LITREF(lit_413),LITREF(lit_414),LITREF(lit_371),LITREF(lit_303),LITREF(lit_304)),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_313 = YPmet(FUNCODEREF(fun_objectify_locals_313),LITREF(lit_412),T146,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YevalSastYobjectify_locals);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSastYobjectify_locals);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_objectify_locals_313;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSastYobjectify_locals,T149);
  lit_415 = YPPsym((P)"objectify-bind-exit");
  T153 = YPsig(YPPlist(4,LITREF(lit_345),LITREF(lit_371),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_314 = YPmet(FUNCODEREF(fun_objectify_bind_exit_314),LITREF(lit_415),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YevalSastYobjectify_bind_exit);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSastYobjectify_bind_exit);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_objectify_bind_exit_314;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSastYobjectify_bind_exit,T154);
  lit_416 = YPPsym((P)"objectify-unwind-protect");
  lit_417 = YPPsym((P)"protected-form");
  lit_418 = YPPsym((P)"cleanup-forms");
  T158 = YPsig(YPPlist(4,LITREF(lit_417),LITREF(lit_418),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_315 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_315),LITREF(lit_416),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YevalSastYobjectify_unwind_protect);
  if (T161 != YPfalse) {
    T160 = VARREF(YevalSastYobjectify_unwind_protect);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_objectify_unwind_protect_315;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YevalSastYobjectify_unwind_protect,T159);
  lit_419 = YPPsym((P)"objectify-monitor");
  lit_420 = YPPsym((P)"info");
  lit_421 = YPPsym((P)"test");
  lit_422 = YPPsym((P)"handler");
  T163 = YPsig(YPPlist(7,LITREF(lit_350),LITREF(lit_420),LITREF(lit_421),LITREF(lit_422),LITREF(lit_371),LITREF(lit_303),LITREF(lit_304)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_316 = YPmet(FUNCODEREF(fun_objectify_monitor_316),LITREF(lit_419),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSastYobjectify_monitor);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSastYobjectify_monitor);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_objectify_monitor_316;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSastYobjectify_monitor,T164);
  lit_423 = YPPsym((P)"objectify-export");
  lit_424 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_425 = YPPsym((P)"exit");
  lit_426 = YPsb((P)"Continue without exporting %s");
  lit_427 = YPsb((P)"Can't export undefined binding %s.\n");
  T173 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_314),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(1,LITREF(lit_425)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(3,LITREF(lit_389),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_322 = YPmet(FUNCODEREF(fun_objectify_export_322),LITREF(lit_423),T168,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSastYobjectify_export);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSastYobjectify_export);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_objectify_export_322;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSastYobjectify_export,T174);
  lit_428 = YPPsym((P)"import-global!");
  lit_429 = YPPsym((P)"env");
  lit_430 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T178 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_429)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_428),T178,ENVNUL,PNUL,YPfalse);
  T179 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T179);
  lit_431 = YPPsym((P)"objectify-use/export-module");
  T181 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_324 = YPmet(FUNCODEREF(fun_324),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(3,LITREF(lit_345),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_325 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_325),LITREF(lit_431),T180,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSastYobjectify_useSexport_module);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSastYobjectify_useSexport_module);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_objectify_useSexport_module_325;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSastYobjectify_useSexport_module,T182);
  lit_432 = YPPsym((P)"objectify-use-include");
  T187 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_326 = YPmet(FUNCODEREF(fun_326),YPfalse,T187,ENVNUL,PNUL,YPfalse);
  T186 = YPsig(YPPlist(3,LITREF(lit_345),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_327 = YPmet(FUNCODEREF(fun_objectify_use_include_327),LITREF(lit_432),T186,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSastYobjectify_use_include);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSastYobjectify_use_include);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_objectify_use_include_327;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSastYobjectify_use_include,T188);
  lit_433 = YPPsym((P)"objectify-use-library");
  T193 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T193,ENVNUL,PNUL,YPfalse);
  T192 = YPsig(YPPlist(3,LITREF(lit_345),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_329 = YPmet(FUNCODEREF(fun_objectify_use_library_329),LITREF(lit_433),T192,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YevalSastYobjectify_use_library);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSastYobjectify_use_library);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_objectify_use_library_329;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSastYobjectify_use_library,T194);
  lit_434 = YPPsym((P)"objectify-use-module");
  lit_435 = YPPsym((P)"use-mod");
  lit_436 = YPPsym((P)"use-c-mod");
  lit_437 = YPPsym((P)"mod");
  lit_438 = YPsb((P)".c");
  lit_439 = YPsb((P)".swig");
  lit_440 = YPsb((P)".c");
  T201 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_330 = YPmet(FUNCODEREF(fun_330),YPfalse,T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_331 = YPmet(FUNCODEREF(fun_use_mod_331),LITREF(lit_435),T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(2,LITREF(lit_437),LITREF(lit_345)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_332 = YPmet(FUNCODEREF(fun_use_c_mod_332),LITREF(lit_436),T199,ENVNUL,PNUL,YPfalse);
  T198 = YPsig(YPPlist(3,LITREF(lit_345),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_333 = YPmet(FUNCODEREF(fun_objectify_use_module_333),LITREF(lit_434),T198,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSastYobjectify_use_module);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSastYobjectify_use_module);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_objectify_use_module_333;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSastYobjectify_use_module,T202);
  lit_441 = YPPsym((P)"insert-and-mangle-global!");
  lit_442 = YPPsym((P)"mangle-prefix");
  T206 = YPsig(YPPlist(3,LITREF(lit_301),LITREF(lit_442),LITREF(lit_303)),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_334 = YPmet(FUNCODEREF(fun_insert_and_mangle_globalX_334),LITREF(lit_441),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSastYinsert_and_mangle_globalX);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSastYinsert_and_mangle_globalX);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_insert_and_mangle_globalX_334;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSastYinsert_and_mangle_globalX,T207);
  lit_443 = YPPsym((P)"import-and-mangle-global!");
  lit_444 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T211 = YPsig(YPPlist(3,LITREF(lit_51),LITREF(lit_442),LITREF(lit_429)),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYimport_and_mangle_globalX = YPmet(FUNCODEREF(YevalSastYimport_and_mangle_globalX),LITREF(lit_443),T211,ENVNUL,PNUL,YPfalse);
  T212 = YevalSastYimport_and_mangle_globalX;
  VARSET(YevalSastYimport_and_mangle_globalX,T212);
  lit_445 = YPPsym((P)"objectify-use-mangle-module");
  lit_446 = YPPsym((P)"mangler");
  T214 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_336 = YPmet(FUNCODEREF(fun_336),YPfalse,T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(4,LITREF(lit_345),LITREF(lit_446),LITREF(lit_303),LITREF(lit_304)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_337 = YPmet(FUNCODEREF(fun_objectify_use_mangle_module_337),LITREF(lit_445),T213,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSastYobjectify_use_mangle_module);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSastYobjectify_use_mangle_module);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_objectify_use_mangle_module_337;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSastYobjectify_use_mangle_module,T215);
  lit_447 = YPPsym((P)"expand-bind-list");
  lit_448 = YPPsym((P)"pat");
  lit_449 = YPPsym((P)"fail");
  lit_450 = YPsb((P)"Expected Pattern List %=\n");
  T219 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_338 = YPmet(FUNCODEREF(fun_expand_bind_list_338),LITREF(lit_447),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSastYexpand_bind_list);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_expand_bind_list_338;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSastYexpand_bind_list,T220);
  lit_451 = YPPsym((P)"match-empty-list");
  T225 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T224 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,T225,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_339 = YPmet(FUNCODEREF(fun_expand_bind_list_339),LITREF(lit_447),T224,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YevalSastYexpand_bind_list);
  if (T228 != YPfalse) {
    T227 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_expand_bind_list_339;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YevalSastYexpand_bind_list,T226);
  lit_452 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_453 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T230 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_340 = YPmet(FUNCODEREF(fun_expand_bind_list_340),LITREF(lit_447),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSastYexpand_bind_list);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_expand_bind_list_340;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSastYexpand_bind_list,T231);
  lit_454 = YPPsym((P)"expand-bind-list*");
  T236 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T235 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,T236,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_341 = YPmet(FUNCODEREF(fun_expand_bind_listT_341),LITREF(lit_454),T235,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_expand_bind_listT_341;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSastYexpand_bind_listT,T237);
  T241 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_342 = YPmet(FUNCODEREF(fun_expand_bind_listT_342),LITREF(lit_454),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_expand_bind_listT_342;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSastYexpand_bind_listT,T242);
  lit_455 = YPPsym((P)"expand-bind-element");
  lit_456 = YPPsym((P)"match-atom");
  T246 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_343 = YPmet(FUNCODEREF(fun_expand_bind_element_343),LITREF(lit_455),T246,ENVNUL,PNUL,YPfalse);
  T249 = BOUNDP(YevalSastYexpand_bind_element);
  if (T249 != YPfalse) {
    T248 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_expand_bind_element_343;
  T247 = XCALL2(1,VARREF(YPdefine_method),T248,T250);
  VARSET(YevalSastYexpand_bind_element,T247);
  lit_457 = YPPsym((P)"match-unquote");
  lit_458 = YPPsym((P)"match-sublist");
  T251 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_344 = YPmet(FUNCODEREF(fun_expand_bind_element_344),LITREF(lit_455),T251,ENVNUL,PNUL,YPfalse);
  T254 = BOUNDP(YevalSastYexpand_bind_element);
  if (T254 != YPfalse) {
    T253 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T253 = YPfalse;
  }
  T255 = fun_expand_bind_element_344;
  T252 = XCALL2(1,VARREF(YPdefine_method),T253,T255);
  VARSET(YevalSastYexpand_bind_element,T252);
  lit_459 = YPPsym((P)"expand-pattern");
  lit_460 = YPPsym((P)"isa?");
  lit_461 = YPsb((P)"Match Pattern Failure");
  T256 = YPsig(YPPlist(3,LITREF(lit_448),LITREF(lit_351),LITREF(lit_449)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_345 = YPmet(FUNCODEREF(fun_expand_pattern_345),LITREF(lit_459),T256,ENVNUL,PNUL,YPfalse);
  T259 = BOUNDP(YevalSastYexpand_pattern);
  if (T259 != YPfalse) {
    T258 = VARREF(YevalSastYexpand_pattern);
  } else {
    T258 = YPfalse;
  }
  T260 = fun_expand_pattern_345;
  T257 = XCALL2(1,VARREF(YPdefine_method),T258,T260);
  VARSET(YevalSastYexpand_pattern,T257);
  lit_462 = YPPsym((P)"expand-syntax-if");
  lit_463 = YPPsym((P)"esc");
  lit_464 = YPPsym((P)"loc");
  lit_465 = YPPsym((P)"<str>");
  T262 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T262,ENVNUL,PNUL,YPfalse);
  T261 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_347 = YPmet(FUNCODEREF(fun_expand_syntax_if_347),LITREF(lit_462),T261,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSastYexpand_syntax_if);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSastYexpand_syntax_if);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_expand_syntax_if_347;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSastYexpand_syntax_if,T263);
  lit_466 = YPPsym((P)"r-extend*");
  T267 = YPsig(YPPlist(2,LITREF(lit_303),LITREF(lit_388)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_348 = YPmet(FUNCODEREF(fun_r_extendT_348),LITREF(lit_466),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YevalSastYr_extendT);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSastYr_extendT);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_r_extendT_348;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSastYr_extendT,T268);
  lit_467 = YPPsym((P)"insert-global!");
  T272 = YPsig(YPPlist(2,LITREF(lit_301),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_349 = YPmet(FUNCODEREF(fun_insert_globalX_349),LITREF(lit_467),T272,ENVNUL,PNUL,YPfalse);
  T275 = BOUNDP(YevalSastYinsert_globalX);
  if (T275 != YPfalse) {
    T274 = VARREF(YevalSastYinsert_globalX);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_insert_globalX_349;
  T273 = XCALL2(1,VARREF(YPdefine_method),T274,T276);
  VARSET(YevalSastYinsert_globalX,T273);
  lit_468 = YPPsym((P)"insert-globals!");
  T278 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T278,ENVNUL,PNUL,YPfalse);
  T277 = YPsig(YPPlist(2,LITREF(lit_388),LITREF(lit_303)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_351 = YPmet(FUNCODEREF(fun_insert_globalsX_351),LITREF(lit_468),T277,ENVNUL,PNUL,YPfalse);
  T281 = BOUNDP(YevalSastYinsert_globalsX);
  if (T281 != YPfalse) {
    T280 = VARREF(YevalSastYinsert_globalsX);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_insert_globalsX_351;
  T279 = XCALL2(1,VARREF(YPdefine_method),T280,T282);
  VARSET(YevalSastYinsert_globalsX,T279);
  lit_469 = YPPsym((P)"find-static-global-environment");
  T283 = YPsig(YPPlist(1,LITREF(lit_303)),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_352 = YPmet(FUNCODEREF(fun_find_static_global_environment_352),LITREF(lit_469),T283,ENVNUL,PNUL,YPfalse);
  T286 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T286 != YPfalse) {
    T285 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T285 = YPfalse;
  }
  T287 = fun_find_static_global_environment_352;
  T284 = XCALL2(1,VARREF(YPdefine_method),T285,T287);
  VARSET(YevalSastYfind_static_global_environment,T284);
  T288 = YPsig(YPPlist(1,LITREF(lit_303)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_353 = YPmet(FUNCODEREF(fun_find_static_global_environment_353),LITREF(lit_469),T288,ENVNUL,PNUL,YPfalse);
  T291 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T291 != YPfalse) {
    T290 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T290 = YPfalse;
  }
  T292 = fun_find_static_global_environment_353;
  T289 = XCALL2(1,VARREF(YPdefine_method),T290,T292);
  VARSET(YevalSastYfind_static_global_environment,T289);
  lit_470 = YPPsym((P)"find-syntax-environment");
  T293 = YPsig(YPPlist(1,LITREF(lit_303)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_354 = YPmet(FUNCODEREF(fun_find_syntax_environment_354),LITREF(lit_470),T293,ENVNUL,PNUL,YPfalse);
  T296 = BOUNDP(YevalSastYfind_syntax_environment);
  if (T296 != YPfalse) {
    T295 = VARREF(YevalSastYfind_syntax_environment);
  } else {
    T295 = YPfalse;
  }
  T297 = fun_find_syntax_environment_354;
  T294 = XCALL2(1,VARREF(YPdefine_method),T295,T297);
  VARSET(YevalSastYfind_syntax_environment,T294);
  lit_471 = YPPsym((P)"find-environment-module");
  T300 = YPsig(YPPlist(1,LITREF(lit_303)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T299 = fun_find_environment_module_355 = YPmet(FUNCODEREF(fun_find_environment_module_355),LITREF(lit_471),T300,ENVNUL,PNUL,YPfalse);
  T304 = BOUNDP(YevalSastYfind_environment_module);
  if (T304 != YPfalse) {
    T303 = VARREF(YevalSastYfind_environment_module);
  } else {
    T303 = YPfalse;
  }
  T305 = fun_find_environment_module_355;
  T302 = XCALL2(1,VARREF(YPdefine_method),T303,T305);
  T301 = VARSET(YevalSastYfind_environment_module,T302);
  T298 = T301;
  return T298;
}

P YevalSastY___main_7___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117;
DEFCREGS();
loop:
  lit_472 = YPPsym((P)"find-binding");
  T1 = YPsig(YPPlist(1,LITREF(lit_388)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_356 = YPmet(FUNCODEREF(fun_loop_356),LITREF(lit_151),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_357 = YPmet(FUNCODEREF(fun_find_binding_357),LITREF(lit_472),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YevalSastYfind_binding);
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYfind_binding);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_find_binding_357;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YevalSastYfind_binding,T2);
  T6 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_358 = YPmet(FUNCODEREF(fun_find_binding_358),LITREF(lit_472),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YevalSastYfind_binding);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSastYfind_binding);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_find_binding_358;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSastYfind_binding,T7);
  T11 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_303)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_359 = YPmet(FUNCODEREF(fun_find_binding_359),LITREF(lit_472),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YevalSastYfind_binding);
  if (T14 != YPfalse) {
    T13 = VARREF(YevalSastYfind_binding);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_find_binding_359;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSastYfind_binding,T12);
  lit_473 = YPPsym((P)"frame-bindings");
  T16 = YPsig(YPPlist(1,LITREF(lit_429)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_360 = YPmet(FUNCODEREF(fun_frame_bindings_360),LITREF(lit_473),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSastYframe_bindings);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSastYframe_bindings);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_frame_bindings_360;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSastYframe_bindings,T17);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_474 = YPPsym((P)"register-magic-binding");
  T21 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_307)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_361 = YPmet(FUNCODEREF(fun_register_magic_binding_361),LITREF(lit_474),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YevalSastYregister_magic_binding);
  if (T24 != YPfalse) {
    T23 = VARREF(YevalSastYregister_magic_binding);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_register_magic_binding_361;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YevalSastYregister_magic_binding,T22);
  lit_475 = YPPsym((P)"magic-bindings");
  T26 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_362 = YPmet(FUNCODEREF(fun_magic_bindings_362),LITREF(lit_475),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSastYmagic_bindings);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSastYmagic_bindings);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_magic_bindings_362;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSastYmagic_bindings,T27);
  lit_476 = YPPsym((P)"x-1456");
  lit_477 = YPPsym((P)"define-magic-binding");
  lit_478 = YPsb((P)"special-");
  lit_479 = YPsb((P)"$sexpr-");
  lit_480 = YPsb((P)"-tag");
  lit_481 = YPPsym((P)"binding-handler");
  lit_482 = YPPsym((P)"fun");
  T33 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1456_363 = YPmet(FUNCODEREF(fun_x_1456_363),LITREF(lit_476),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_364 = YPmet(FUNCODEREF(fun_364),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T31,ENVNUL,PNUL,YPfalse);
  T34 = fun_365;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T34);
  T35 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T37 = fun_366;
  T36 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T37,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T36);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_376),VARREF(YevalSastYspecial_if));
  T38 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPmet(FUNCODEREF(fun_367),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T40 = fun_367;
  T39 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T40,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T39);
  lit_483 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_483),VARREF(YevalSastYspecial_begin));
  lit_484 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_484));
  T41 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T43 = fun_368;
  T42 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T43,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T42);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_484),VARREF(YevalSastYspecial_Praw));
  T44 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_369 = YPmet(FUNCODEREF(fun_369),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T46 = fun_369;
  T45 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T46,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T45);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_326),VARREF(YevalSastYspecial_quote));
  T47 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T49 = fun_370;
  T48 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T49,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T48);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_10),VARREF(YevalSastYspecial_set));
  T50 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T52 = fun_371;
  T51 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T52,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T51);
  lit_485 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_485),VARREF(YevalSastYspecial_define));
  lit_486 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_486));
  T53 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T55 = fun_372;
  T54 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T55,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T54);
  lit_487 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_487),VARREF(YevalSastYspecial_define_dynamic));
  T56 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T58 = fun_373;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T58,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T57);
  lit_488 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_488),VARREF(YevalSastYspecial_define_syntax));
  lit_489 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_489));
  T59 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T61 = fun_374;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T61,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T60);
  lit_490 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_490),VARREF(YevalSastYspecial_define_static_syntax));
  T62 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPmet(FUNCODEREF(fun_375),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T64 = fun_375;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T64,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T63);
  lit_491 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_491),VARREF(YevalSastYspecial_define_method));
  T65 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T67 = fun_376;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T67,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T66);
  lit_492 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_492),VARREF(YevalSastYspecial_define_generic));
  T68 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T70 = fun_377;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T70,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T69);
  lit_493 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_493),VARREF(YevalSastYspecial_define_function));
  T71 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_378 = YPmet(FUNCODEREF(fun_378),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T73 = fun_378;
  T72 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T73,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T72);
  lit_494 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_494),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_377));
  T74 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T76 = fun_379;
  T75 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T76,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T75);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_377),VARREF(YevalSastYspecial_boundQ));
  T77 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T79 = fun_380;
  T78 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T79,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T78);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_8),VARREF(YevalSastYspecial_let));
  T80 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T82 = fun_381;
  T81 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T82,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T81);
  lit_495 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_495),VARREF(YevalSastYspecial_def));
  T83 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T85 = fun_382;
  T84 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T85,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T84);
  lit_496 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_496),VARREF(YevalSastYspecial_locals));
  T86 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T88 = fun_383;
  T87 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T88,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T87);
  lit_497 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_497),VARREF(YevalSastYspecial_iterate));
  T89 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T91 = fun_384;
  T90 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T91,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T90);
  lit_498 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_498),VARREF(YevalSastYspecial_bind_exit));
  T92 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T94 = fun_385;
  T93 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T94,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T93);
  lit_499 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_499),VARREF(YevalSastYspecial_unwind_protect));
  T95 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T97 = fun_386;
  T96 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T97,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T96);
  lit_500 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_500),VARREF(YevalSastYspecial_monitor));
  lit_501 = YPPsym((P)"pairize");
  T98 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_387 = YPmet(FUNCODEREF(fun_pairize_387),LITREF(lit_501),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YevalSastYpairize);
  if (T101 != YPfalse) {
    T100 = VARREF(YevalSastYpairize);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_pairize_387;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YevalSastYpairize,T99);
  lit_502 = YPPsym((P)"fab-class");
  T103 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T105 = fun_388;
  T104 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T105,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T104);
  lit_503 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_503),VARREF(YevalSastYspecial_define_class));
  lit_504 = YPPsym((P)"%prop");
  lit_505 = YPPsym((P)"%prop-unbound-error");
  T106 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T108 = fun_389;
  T107 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T108,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T107);
  lit_506 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_506),VARREF(YevalSastYspecial_prop));
  lit_507 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_507));
  T109 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T111 = fun_390;
  T110 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T111,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T110);
  lit_508 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_508),VARREF(YevalSastYspecial_compile_time));
  lit_509 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_509));
  T114 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T113 = fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T117 = fun_391;
  T116 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T117,VARREF(YevalSastYbinding_freeQ),YPfalse);
  T115 = VARSET(YevalSastYspecial_compile_time_also,T116);
  T112 = T115;
  return T112;
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
DEFCREGS();
loop:
  lit_510 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_510),VARREF(YevalSastYspecial_compile_time_also));
  lit_511 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_511));
  T0 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_392;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T1);
  lit_512 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_512),VARREF(YevalSastYspecial_define_primitive));
  T3 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T5 = fun_393;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T4);
  lit_513 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_513),VARREF(YevalSastYspecial_quasiquote));
  lit_514 = YPPsym((P)"ast-macro-expand");
  T6 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_394 = YPmet(FUNCODEREF(fun_ast_macro_expand_394),LITREF(lit_514),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YevalSastYast_macro_expand);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSastYast_macro_expand);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_ast_macro_expand_394;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSastYast_macro_expand,T7);
  T11 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_395 = YPmet(FUNCODEREF(fun_395),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T13 = fun_395;
  T12 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T13,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T12);
  lit_515 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_515),VARREF(YevalSastYspecial_macro_expand));
  T14 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T16 = fun_396;
  T15 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T16,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T15);
  lit_516 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_516),VARREF(YevalSastYspecial_syntax_if));
  lit_517 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_517));
  T17 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T19 = fun_397;
  T18 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T19,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T18);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_517),VARREF(YevalSastYspecial_export));
  lit_518 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_518));
  T20 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T22 = fun_398;
  T21 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T22,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T21);
  lit_519 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_519),VARREF(YevalSastYspecial_use_module));
  lit_520 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_520));
  T23 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T25 = fun_399;
  T24 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T25,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T24);
  lit_521 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_521),VARREF(YevalSastYspecial_use_mangle_module));
  lit_522 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_522));
  T26 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T28 = fun_400;
  T27 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T28,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T27);
  lit_523 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_523),VARREF(YevalSastYspecial_use_include));
  lit_524 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_524));
  T29 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_401 = YPmet(FUNCODEREF(fun_401),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T31 = fun_401;
  T30 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T31,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T30);
  lit_525 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_525),VARREF(YevalSastYspecial_use_library));
  lit_526 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_526));
  T32 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T34 = fun_402;
  T33 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_342),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T34,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T33);
  lit_527 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_527),VARREF(YevalSastYspecial_useSexport_module));
  lit_528 = YPPsym((P)"<transaction>");
  T36 = (P)YPpair(VARREF(YLanyG),Ynil);
  T35 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_528),T36);
  VARSET(YevalSastYLtransactionG,T35);
  lit_529 = YPPsym((P)"transaction-implemented-bindings");
  T37 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_403 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_403),LITREF(lit_529),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSastYtransaction_implemented_bindings);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSastYtransaction_implemented_bindings);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_transaction_implemented_bindings_403;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSastYtransaction_implemented_bindings,T38);
  lit_530 = YPPsym((P)"transaction-implemented-bindings-setter");
  T42 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_404 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_404),LITREF(lit_530),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YevalSastYtransaction_implemented_bindings_setter);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYtransaction_implemented_bindings_setter);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_transaction_implemented_bindings_setter_404;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T43);
  T47 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_405 = YPmet(FUNCODEREF(fun_405),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T48 = fun_405;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T48);
  lit_531 = YPPsym((P)"transaction-dependents");
  T49 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_406 = YPmet(FUNCODEREF(fun_transaction_dependents_406),LITREF(lit_531),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YevalSastYtransaction_dependents);
  if (T52 != YPfalse) {
    T51 = VARREF(YevalSastYtransaction_dependents);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_transaction_dependents_406;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YevalSastYtransaction_dependents,T50);
  lit_532 = YPPsym((P)"transaction-dependents-setter");
  T54 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_407 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_407),LITREF(lit_532),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYtransaction_dependents_setter);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYtransaction_dependents_setter);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_transaction_dependents_setter_407;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYtransaction_dependents_setter,T55);
  T59 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T60 = fun_408;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T60);
  VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  lit_533 = YPPsym((P)"transaction-register-implemented-binding");
  lit_534 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T61 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_533),T61,ENVNUL,PNUL,YPfalse);
  T62 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T62);
  lit_535 = YPPsym((P)"transaction-register-dependent");
  lit_536 = YPPsym((P)"d");
  lit_537 = YPsb((P)"Can't register dependent (no subtransaction)");
  T63 = YPsig(YPPlist(1,LITREF(lit_536)),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_535),T63,ENVNUL,PNUL,YPfalse);
  T64 = YevalSastYtransaction_register_dependent;
  VARSET(YevalSastYtransaction_register_dependent,T64);
  lit_538 = YPPsym((P)"transaction-empty?");
  T65 = YPsig(YPPlist(1,LITREF(lit_165)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_538),T65,ENVNUL,PNUL,YPfalse);
  T66 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T66);
  lit_539 = YPPsym((P)"merge-transactions!");
  lit_540 = YPPsym((P)"t1");
  lit_541 = YPPsym((P)"t2");
  lit_542 = YPPsym((P)"k");
  lit_543 = YPPsym((P)"v");
  T69 = YPsig(YPPlist(2,LITREF(lit_542),LITREF(lit_543)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_412 = YPmet(FUNCODEREF(fun_412),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_542),LITREF(lit_543)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_540),LITREF(lit_541)),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_539),T67,ENVNUL,PNUL,YPfalse);
  T70 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T70);
  lit_544 = YPPsym((P)"roll-back-transaction");
  lit_545 = YPPsym((P)"junk");
  T73 = YPsig(YPPlist(2,LITREF(lit_301),LITREF(lit_545)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_415 = YPmet(FUNCODEREF(fun_415),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_144),LITREF(lit_545)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(1,LITREF(lit_165)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_544),T71,ENVNUL,PNUL,YPfalse);
  T74 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T74);
  lit_546 = YPPsym((P)"call-with-subtransaction");
  lit_547 = YPPsym((P)"module");
  lit_548 = YPPsym((P)"thunk");
  T77 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_418 = YPmet(FUNCODEREF(fun_418),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_419 = YPmet(FUNCODEREF(fun_419),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(2,LITREF(lit_547),LITREF(lit_548)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_546),T75,ENVNUL,PNUL,YPfalse);
  T78 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T78);
  lit_549 = YPPsym((P)"x-1460");
  lit_550 = YPPsym((P)"with-subtransaction");
  T81 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1460_421 = YPmet(FUNCODEREF(fun_x_1460_421),LITREF(lit_549),T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_422 = YPmet(FUNCODEREF(fun_422),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T82 = fun_423;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T82);
  lit_551 = YPPsym((P)"objectify-with-subtransaction");
  T84 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(3,LITREF(lit_150),LITREF(lit_303),LITREF(lit_304)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_551),T83,ENVNUL,PNUL,YPfalse);
  T85 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T85);
  lit_552 = YPPsym((P)"<module-loader>");
  T87 = (P)YPpair(VARREF(YLanyG),Ynil);
  T86 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_552),T87);
  VARSET(YevalSastYLmodule_loaderG,T86);
  lit_553 = YPPsym((P)"module-loader-modules");
  T88 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_426 = YPmet(FUNCODEREF(fun_module_loader_modules_426),LITREF(lit_553),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YevalSastYmodule_loader_modules);
  if (T91 != YPfalse) {
    T90 = VARREF(YevalSastYmodule_loader_modules);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_module_loader_modules_426;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YevalSastYmodule_loader_modules,T89);
  lit_554 = YPPsym((P)"module-loader-modules-setter");
  T93 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_427 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_427),LITREF(lit_554),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YevalSastYmodule_loader_modules_setter);
  if (T96 != YPfalse) {
    T95 = VARREF(YevalSastYmodule_loader_modules_setter);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_module_loader_modules_setter_427;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YevalSastYmodule_loader_modules_setter,T94);
  T98 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_428 = YPmet(FUNCODEREF(fun_428),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T99 = fun_428;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T99);
  lit_555 = YPPsym((P)"module-loader-stack");
  T100 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_429 = YPmet(FUNCODEREF(fun_module_loader_stack_429),LITREF(lit_555),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYmodule_loader_stack);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYmodule_loader_stack);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_module_loader_stack_429;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYmodule_loader_stack,T101);
  lit_556 = YPPsym((P)"module-loader-stack-setter");
  T105 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_430 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_430),LITREF(lit_556),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYmodule_loader_stack_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYmodule_loader_stack_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_module_loader_stack_setter_430;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYmodule_loader_stack_setter,T106);
  T110 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_431 = YPmet(FUNCODEREF(fun_431),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T111 = fun_431;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T111);
  lit_557 = YPPsym((P)"<module>");
  T113 = (P)YPpair(VARREF(YLanyG),Ynil);
  T112 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_557),T113);
  VARSET(YevalSastYLmoduleG,T112);
  lit_558 = YPPsym((P)"module-name");
  T114 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_432 = YPmet(FUNCODEREF(fun_module_name_432),LITREF(lit_558),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSastYmodule_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYmodule_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_module_name_432;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYmodule_name,T115);
  lit_559 = YPPsym((P)"module-name-setter");
  T119 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLsymG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_433 = YPmet(FUNCODEREF(fun_module_name_setter_433),LITREF(lit_559),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYmodule_name_setter);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYmodule_name_setter);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_module_name_setter_433;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYmodule_name_setter,T120);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),VARREF(YevalSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_560 = YPPsym((P)"module-mangled-name");
  T124 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_434 = YPmet(FUNCODEREF(fun_module_mangled_name_434),LITREF(lit_560),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYmodule_mangled_name);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYmodule_mangled_name);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_module_mangled_name_434;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYmodule_mangled_name,T125);
  lit_561 = YPPsym((P)"module-mangled-name-setter");
  T130 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T129 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T130,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_435 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_435),LITREF(lit_561),T129,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSastYmodule_mangled_name_setter);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSastYmodule_mangled_name_setter);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_module_mangled_name_setter_435;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSastYmodule_mangled_name_setter,T131);
  T135 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_436 = YPmet(FUNCODEREF(fun_436),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T136 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T137 = fun_436;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T136,T137);
  lit_562 = YPPsym((P)"module-mangled-string-name");
  T138 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_437 = YPmet(FUNCODEREF(fun_module_mangled_string_name_437),LITREF(lit_562),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YevalSastYmodule_mangled_string_name);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSastYmodule_mangled_string_name);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_module_mangled_string_name_437;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSastYmodule_mangled_string_name,T139);
  lit_563 = YPPsym((P)"module-mangled-string-name-setter");
  T144 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T143 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T144,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_438 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_438),LITREF(lit_563),T143,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYmodule_mangled_string_name_setter);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYmodule_mangled_string_name_setter);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_module_mangled_string_name_setter_438;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T145);
  T149 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_439 = YPmet(FUNCODEREF(fun_439),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T150 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T151 = fun_439;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T150,T151);
  lit_564 = YPPsym((P)"module-target-environment");
  T154 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T153 = fun_module_target_environment_440 = YPmet(FUNCODEREF(fun_module_target_environment_440),LITREF(lit_564),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSastYmodule_target_environment);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYmodule_target_environment);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_module_target_environment_440;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  T155 = VARSET(YevalSastYmodule_target_environment,T156);
  T152 = T155;
  return T152;
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
  P T192,T193,T194;
DEFCREGS();
loop:
  lit_565 = YPPsym((P)"module-target-environment-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_441 = YPmet(FUNCODEREF(fun_module_target_environment_setter_441),LITREF(lit_565),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYmodule_target_environment_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYmodule_target_environment_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_module_target_environment_setter_441;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYmodule_target_environment_setter,T1);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_566 = YPPsym((P)"module-syntax-environment");
  T5 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_442 = YPmet(FUNCODEREF(fun_module_syntax_environment_442),LITREF(lit_566),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYmodule_syntax_environment);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYmodule_syntax_environment);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_module_syntax_environment_442;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYmodule_syntax_environment,T6);
  lit_567 = YPPsym((P)"module-syntax-environment-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_443 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_443),LITREF(lit_567),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSastYmodule_syntax_environment_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYmodule_syntax_environment_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_module_syntax_environment_setter_443;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYmodule_syntax_environment_setter,T11);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_568 = YPPsym((P)"%module-exports");
  T15 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_444 = YPmet(FUNCODEREF(fun_Pmodule_exports_444),LITREF(lit_568),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSastYPmodule_exports);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSastYPmodule_exports);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_Pmodule_exports_444;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSastYPmodule_exports,T16);
  lit_569 = YPPsym((P)"%module-exports-setter");
  T20 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_445 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_445),LITREF(lit_569),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSastYPmodule_exports_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSastYPmodule_exports_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_Pmodule_exports_setter_445;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSastYPmodule_exports_setter,T21);
  T25 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_446 = YPmet(FUNCODEREF(fun_446),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T26 = fun_446;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),VARREF(YevalSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T26);
  lit_570 = YPPsym((P)"module-data-processed?");
  T27 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_447 = YPmet(FUNCODEREF(fun_module_data_processedQ_447),LITREF(lit_570),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSastYmodule_data_processedQ);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYmodule_data_processedQ);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_module_data_processedQ_447;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYmodule_data_processedQ,T28);
  lit_571 = YPPsym((P)"module-data-processed?-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_448 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_448),LITREF(lit_571),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSastYmodule_data_processedQ_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSastYmodule_data_processedQ_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_module_data_processedQ_setter_448;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSastYmodule_data_processedQ_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_449 = YPmet(FUNCODEREF(fun_449),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_449;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T38);
  lit_572 = YPPsym((P)"module-runtime-data");
  T39 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_450 = YPmet(FUNCODEREF(fun_module_runtime_data_450),LITREF(lit_572),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSastYmodule_runtime_data);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYmodule_runtime_data);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_runtime_data_450;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYmodule_runtime_data,T40);
  lit_573 = YPPsym((P)"module-runtime-data-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_451 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_451),LITREF(lit_573),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYmodule_runtime_data_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYmodule_runtime_data_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_runtime_data_setter_451;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYmodule_runtime_data_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_452 = YPmet(FUNCODEREF(fun_452),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_452;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T50);
  lit_574 = YPPsym((P)"module-transaction");
  T51 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_453 = YPmet(FUNCODEREF(fun_module_transaction_453),LITREF(lit_574),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYmodule_transaction);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYmodule_transaction);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_module_transaction_453;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYmodule_transaction,T52);
  lit_575 = YPPsym((P)"module-transaction-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_454 = YPmet(FUNCODEREF(fun_module_transaction_setter_454),LITREF(lit_575),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYmodule_transaction_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYmodule_transaction_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_module_transaction_setter_454;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYmodule_transaction_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_455 = YPmet(FUNCODEREF(fun_455),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_455;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T62);
  lit_576 = YPPsym((P)"module-uses-c-files");
  T63 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_456 = YPmet(FUNCODEREF(fun_module_uses_c_files_456),LITREF(lit_576),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSastYmodule_uses_c_files);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYmodule_uses_c_files);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_module_uses_c_files_456;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYmodule_uses_c_files,T64);
  lit_577 = YPPsym((P)"module-uses-c-files-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_setter_457 = YPmet(FUNCODEREF(fun_module_uses_c_files_setter_457),LITREF(lit_577),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYmodule_uses_c_files_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYmodule_uses_c_files_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_module_uses_c_files_setter_457;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYmodule_uses_c_files_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_458 = YPmet(FUNCODEREF(fun_458),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_458;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_files),VARREF(YevalSastYmodule_uses_c_files_setter),VARREF(YgooScolsSvecYLvecG),T74);
  lit_578 = YPPsym((P)"module-uses-c-includes");
  T75 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_459 = YPmet(FUNCODEREF(fun_module_uses_c_includes_459),LITREF(lit_578),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSastYmodule_uses_c_includes);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYmodule_uses_c_includes);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_module_uses_c_includes_459;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYmodule_uses_c_includes,T76);
  lit_579 = YPPsym((P)"module-uses-c-includes-setter");
  T80 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_setter_460 = YPmet(FUNCODEREF(fun_module_uses_c_includes_setter_460),LITREF(lit_579),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSastYmodule_uses_c_includes_setter);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSastYmodule_uses_c_includes_setter);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_module_uses_c_includes_setter_460;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSastYmodule_uses_c_includes_setter,T81);
  T85 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_461 = YPmet(FUNCODEREF(fun_461),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T86 = fun_461;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_includes),VARREF(YevalSastYmodule_uses_c_includes_setter),VARREF(YgooScolsSvecYLvecG),T86);
  lit_580 = YPPsym((P)"module-uses-c-libraries");
  T87 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_462 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_462),LITREF(lit_580),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYmodule_uses_c_libraries);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYmodule_uses_c_libraries);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_module_uses_c_libraries_462;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYmodule_uses_c_libraries,T88);
  lit_581 = YPPsym((P)"module-uses-c-libraries-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_setter_463 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_setter_463),LITREF(lit_581),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSastYmodule_uses_c_libraries_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYmodule_uses_c_libraries_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_module_uses_c_libraries_setter_463;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYmodule_uses_c_libraries_setter,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_464 = YPmet(FUNCODEREF(fun_464),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_464;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_libraries),VARREF(YevalSastYmodule_uses_c_libraries_setter),VARREF(YgooScolsSvecYLvecG),T98);
  VARSET(YevalSastYmodule_exports_setter,VARREF(YevalSastYPmodule_exports_setter));
  lit_582 = YPPsym((P)"module-exports");
  T99 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_465 = YPmet(FUNCODEREF(fun_module_exports_465),LITREF(lit_582),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSastYmodule_exports);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSastYmodule_exports);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_module_exports_465;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSastYmodule_exports,T100);
  lit_583 = YPPsym((P)"set-module-environments");
  lit_584 = YPPsym((P)"syntax-env");
  lit_585 = YPPsym((P)"target-env");
  T104 = YPsig(YPPlist(3,LITREF(lit_437),LITREF(lit_584),LITREF(lit_585)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_583),T104,ENVNUL,PNUL,YPfalse);
  T105 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T105);
  lit_586 = YPPsym((P)"do-module-loader-modules");
  lit_587 = YPPsym((P)"loader");
  T107 = YPsig(YPPlist(1,LITREF(lit_437)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_467 = YPmet(FUNCODEREF(fun_467),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_140),LITREF(lit_587)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_586),T106,ENVNUL,PNUL,YPfalse);
  T108 = YevalSastYdo_module_loader_modules;
  VARSET(YevalSastYdo_module_loader_modules,T108);
  lit_588 = YPPsym((P)"module-loader-module-type");
  T109 = YPsig(YPPlist(1,LITREF(lit_587)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_469 = YPmet(FUNCODEREF(fun_module_loader_module_type_469),LITREF(lit_588),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T112 != YPfalse) {
    T111 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_module_loader_module_type_469;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YevalSastYmodule_loader_module_type,T110);
  lit_589 = YPPsym((P)"register-module!");
  lit_590 = YPPsym((P)"module-loader");
  T114 = YPsig(YPPlist(2,LITREF(lit_590),LITREF(lit_437)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_589),T114,ENVNUL,PNUL,YPfalse);
  T115 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T115);
  lit_591 = YPPsym((P)"probe-module");
  T116 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_345)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_591),T116,ENVNUL,PNUL,YPfalse);
  T117 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T117);
  lit_592 = YPPsym((P)"load-and-register-module");
  lit_593 = YPsb((P)"  ");
  lit_594 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_595 = YPsb((P)"%s[Loading module %s...\n");
  lit_596 = YPsb((P)"%s]\n");
  T120 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_472 = YPmet(FUNCODEREF(fun_472),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_473 = YPmet(FUNCODEREF(fun_473),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_345)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_592),T118,ENVNUL,PNUL,YPfalse);
  T121 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T121);
  lit_597 = YPPsym((P)"load-module");
  T123 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_345)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T122 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_597),T123,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T122);
  lit_598 = YPPsym((P)"export-binding!");
  lit_599 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T125 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T124 = YPsig(YPPlist(3,LITREF(lit_547),LITREF(lit_345),LITREF(lit_301)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T125,Ynil);
  YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_598),T124,ENVNUL,PNUL,YPfalse);
  T126 = YevalSastYexport_bindingX;
  VARSET(YevalSastYexport_bindingX,T126);
  lit_600 = YPPsym((P)"binding-native-to?");
  T127 = YPsig(YPPlist(2,LITREF(lit_301),LITREF(lit_547)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_600),T127,ENVNUL,PNUL,YPfalse);
  T128 = YevalSastYbinding_native_toQ;
  VARSET(YevalSastYbinding_native_toQ,T128);
  lit_601 = YPPsym((P)"report-undefined-global-bindings");
  lit_602 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T130 = YPsig(YPPlist(1,LITREF(lit_301)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_477 = YPmet(FUNCODEREF(fun_477),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_437)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_601),T129,ENVNUL,PNUL,YPfalse);
  T131 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T131);
  lit_603 = YPPsym((P)"compute-transitive-users");
  lit_604 = YPPsym((P)"modnames");
  lit_605 = YPPsym((P)"add-user");
  lit_606 = YPPsym((P)"uses-mod");
  T136 = YPsig(YPPlist(1,LITREF(lit_606)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_479 = YPmet(FUNCODEREF(fun_479),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_437)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_480 = YPmet(FUNCODEREF(fun_480),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_356)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_481 = YPmet(FUNCODEREF(fun_add_user_481),LITREF(lit_605),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_543)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_482 = YPmet(FUNCODEREF(fun_482),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_604)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_603),T132,ENVNUL,PNUL,YPfalse);
  T137 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T137);
  lit_607 = YPPsym((P)"remove-module-internal!");
  T138 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_437)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_607),T138,ENVNUL,PNUL,YPfalse);
  T139 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T139);
  lit_608 = YPPsym((P)"remove-modules-by-name!");
  T142 = YPsig(YPPlist(1,LITREF(lit_356)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_485 = YPmet(FUNCODEREF(fun_485),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T140 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_604)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T141,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_608),T140,ENVNUL,PNUL,YPfalse);
  T143 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T143);
  lit_609 = YPPsym((P)"module-name-to-relpath");
  T144 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_609),T144,ENVNUL,PNUL,YPfalse);
  T145 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T145);
  lit_610 = YPPsym((P)"install-initial-bindings");
  lit_611 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T147 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_488 = YPmet(FUNCODEREF(fun_488),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(2,LITREF(lit_429),LITREF(lit_587)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_610),T146,ENVNUL,PNUL,YPfalse);
  T148 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T148);
  lit_612 = YPPsym((P)"fab-static-global-environment");
  lit_613 = YPPsym((P)"allow-foreign-names?");
  T149 = YPsig(YPPlist(3,LITREF(lit_547),LITREF(lit_590),LITREF(lit_613)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_612),T149,ENVNUL,PNUL,YPfalse);
  T150 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T150);
  lit_614 = YPPsym((P)"fab-subset-environment");
  lit_615 = YPPsym((P)"src-module");
  lit_616 = YPPsym((P)"excluded");
  T152 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_301)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_491 = YPmet(FUNCODEREF(fun_491),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(3,LITREF(lit_547),LITREF(lit_615),LITREF(lit_616)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_614),T151,ENVNUL,PNUL,YPfalse);
  T153 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T153);
  lit_617 = YPPsym((P)"<runtime-module-loader>");
  T155 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_617),T155);
  VARSET(YevalSastYLruntime_module_loaderG,T154);
  DYNDEFSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_618 = YPsb((P)"Unable to find module %s");
  T160 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_493 = YPmet(FUNCODEREF(fun_493),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_496 = YPmet(FUNCODEREF(fun_496),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_345)),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_497 = YPmet(FUNCODEREF(fun_load_module_497),LITREF(lit_597),T156,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYload_module);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYload_module);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_load_module_497;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYload_module,T161);
  T165 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T165);
  lit_619 = YPPsym((P)"runtime-module-loader");
  T166 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_619),T166,ENVNUL,PNUL,YPfalse);
  T167 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T167);
  lit_620 = YPPsym((P)"runtime-module");
  T168 = YPsig(YPPlist(1,LITREF(lit_356)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_620),T168,ENVNUL,PNUL,YPfalse);
  T169 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T169);
  lit_621 = YPPsym((P)"runtime-environment");
  T170 = YPsig(YPPlist(1,LITREF(lit_356)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_621),T170,ENVNUL,PNUL,YPfalse);
  T171 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T171);
  lit_622 = YPPsym((P)"runtime-core-environment");
  T172 = YPsig(YPPlist(1,LITREF(lit_356)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_622),T172,ENVNUL,PNUL,YPfalse);
  T173 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T173);
  lit_623 = YPPsym((P)"unchecked-runtime-environment");
  T174 = YPsig(YPPlist(1,LITREF(lit_356)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_623),T174,ENVNUL,PNUL,YPfalse);
  T175 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T175);
  lit_624 = YPPsym((P)"reloader-do-create-module");
  lit_625 = YPPsym((P)"data");
  T176 = YPsig(YPPlist(2,LITREF(lit_356),LITREF(lit_625)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_624),T176,ENVNUL,PNUL,YPfalse);
  T177 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T177);
  lit_626 = YPPsym((P)"reloader-do-use-module");
  lit_627 = YPPsym((P)"uses");
  T178 = YPsig(YPPlist(2,LITREF(lit_437),LITREF(lit_627)),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_626),T178,ENVNUL,PNUL,YPfalse);
  T179 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T179);
  lit_628 = YPPsym((P)"reloader-do-import");
  lit_629 = YPPsym((P)"from-mod");
  lit_630 = YPPsym((P)"original-name");
  lit_631 = YPsb((P)"Can't find %s from %s for %s\n");
  T180 = YPsig(YPPlist(4,LITREF(lit_437),LITREF(lit_345),LITREF(lit_629),LITREF(lit_630)),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_628),T180,ENVNUL,PNUL,YPfalse);
  T181 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T181);
  lit_632 = YPPsym((P)"process-module-data");
  T182 = YPsig(YPPlist(1,LITREF(lit_547)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_632),T182,ENVNUL,PNUL,YPfalse);
  T183 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T183);
  lit_633 = YPPsym((P)"ensure-module-data");
  T184 = YPsig(YPPlist(1,LITREF(lit_547)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_633),T184,ENVNUL,PNUL,YPfalse);
  T185 = YevalSastYensure_module_data;
  VARSET(YevalSastYensure_module_data,T185);
  lit_634 = YPPsym((P)"reloader-do-runtime-binding");
  T186 = YPsig(YPPlist(3,LITREF(lit_437),LITREF(lit_345),LITREF(lit_464)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_634),T186,ENVNUL,PNUL,YPfalse);
  T187 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T187);
  lit_635 = YPPsym((P)"reloader-do-dynamic-binding");
  T188 = YPsig(YPPlist(3,LITREF(lit_437),LITREF(lit_345),LITREF(lit_464)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_dynamic_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_dynamic_binding),LITREF(lit_635),T188,ENVNUL,PNUL,YPfalse);
  T189 = YevalSastYreloader_do_dynamic_binding;
  VARSET(YevalSastYreloader_do_dynamic_binding,T189);
  lit_636 = YPPsym((P)"reloader-do-other-binding");
  T192 = YPsig(YPPlist(2,LITREF(lit_437),LITREF(lit_345)),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T191 = YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_636),T192,ENVNUL,PNUL,YPfalse);
  T194 = YevalSastYreloader_do_other_binding;
  T193 = VARSET(YevalSastYreloader_do_other_binding,T194);
  T190 = T193;
  return T190;
}

P YevalSastY___main_10___() {
  P tmpF2712;
  P tmpF2711;
  P tmpF2710;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
DEFCREGS();
loop:
  lit_637 = YPPsym((P)"reloader-do-export");
  lit_638 = YPPsym((P)"as-name");
  lit_639 = YPsb((P)"Can't find %s in %s\n");
  T0 = YPsig(YPPlist(3,LITREF(lit_437),LITREF(lit_345),LITREF(lit_638)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_637),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSastYreloader_do_export;
  VARSET(YevalSastYreloader_do_export,T1);
  lit_640 = YPPsym((P)"reload-modules");
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_640),T2,ENVNUL,PNUL,YPfalse);
  T3 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T3);
  lit_641 = YPPsym((P)"install-magic-bindings");
  T5 = YPsig(YPPlist(1,LITREF(lit_301)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_513 = YPmet(FUNCODEREF(fun_513),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_429)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_641),T4,ENVNUL,PNUL,YPfalse);
  T6 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T6);
  lit_642 = YPPsym((P)"reload-macros");
  T7 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_642),T7,ENVNUL,PNUL,YPfalse);
  T8 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T8);
  lit_643 = YPPsym((P)"install-interpreter-hacks");
  T9 = YPsig(YPPlist(1,LITREF(lit_429)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_643),T9,ENVNUL,PNUL,YPfalse);
  T10 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T10);
  lit_644 = YPPsym((P)"init-runtime");
  T11 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_644),T11,ENVNUL,PNUL,YPfalse);
  T12 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T12);
  lit_645 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_645));
  lit_646 = YPPsym((P)"fab-syntax-environment");
  lit_647 = YPPsym((P)"goo");
  T13 = YPsig(YPPlist(1,LITREF(lit_547)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_646),T13,ENVNUL,PNUL,YPfalse);
  T14 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T14);
  lit_648 = YPPsym((P)"fab-g2c-module");
  T15 = YPsig(YPPlist(2,LITREF(lit_587),LITREF(lit_345)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_648),T15,ENVNUL,PNUL,YPfalse);
  T16 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T16);
  lit_649 = YPPsym((P)"init-g2c-boot-environment");
  T17 = YPsig(YPPlist(1,LITREF(lit_429)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_649),T17,ENVNUL,PNUL,YPfalse);
  T18 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T18);
  lit_650 = YPPsym((P)"init-g2c-regular-environment");
  T19 = YPsig(YPPlist(2,LITREF(lit_429),LITREF(lit_587)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_650),T19,ENVNUL,PNUL,YPfalse);
  T20 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T20);
  lit_651 = YPPsym((P)"init-ast");
  T21 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_651),T21,ENVNUL,PNUL,YPfalse);
  T22 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T22);
  lit_652 = YPPsym((P)"do-static-global-bindings");
  T24 = YPsig(YPPlist(1,LITREF(lit_429)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_523 = YPmet(FUNCODEREF(fun_loop_523),LITREF(lit_151),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_140),LITREF(lit_429)),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_652),T23,ENVNUL,PNUL,YPfalse);
  T25 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T25);
  lit_653 = YPPsym((P)"do-named-static-global-bindings");
  T27 = YPsig(YPPlist(1,LITREF(lit_429)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_525 = YPmet(FUNCODEREF(fun_loop_525),LITREF(lit_151),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(2,LITREF(lit_140),LITREF(lit_429)),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_653),T26,ENVNUL,PNUL,YPfalse);
  T28 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T28);
  tmpF2710 = YPfalse;
  if (tmpF2710 != YPfalse) {
    T29 = VARREF(YevalSastYast_evaluate);
  } else {
    T29 = YPfalse;
  }
  tmpF2711 = YPfalse;
  if (tmpF2711 != YPfalse) {
    T30 = VARREF(YevalSastYinit_environment_for_eval);
  } else {
    T30 = YPfalse;
  }
  tmpF2712 = YPfalse;
  if (tmpF2712 != YPfalse) {
    T31 = VARREF(YevalSastYload_in);
  } else {
    T31 = YPfalse;
  }
  T32 = YPfalse;
  return T32;
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
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;

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
  {"open", &module_info_gooSioSport, "open"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"min", &module_info_gooSmag, "min"},
  {"%str", &module_info_gooSboot, "%str"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"@len", &module_info_gooSboot, "@len"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"^", &module_info_gooSmath, "^"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {">", &module_info_gooSmag, ">"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dependency-includes-any?", &module_info_evalSdependency, "dependency-includes-any?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"$name-parse-dependency", &module_info_evalSdependency, "$name-parse-dependency"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"dependency-includes-all?", &module_info_evalSdependency, "dependency-includes-all?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<=", &module_info_gooSmag, "<="},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"mod", &module_info_gooSmath, "mod"},
  {"tail", &module_info_gooSboot, "tail"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"dependency-or", &module_info_evalSdependency, "dependency-or"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"+", &module_info_gooSmath, "+"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"time", &module_info_gooSsystem, "time"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"not", &module_info_gooSboot, "not"},
  {"add", &module_info_gooScolsScol, "add"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"dv", &module_info_gooSboot, "dv"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"$all-dependency-types", &module_info_evalSdependency, "$all-dependency-types"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"round/", &module_info_gooSmath, "round/"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"log-dependency", &module_info_evalSdependency, "log-dependency"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"$empty-dependency", &module_info_evalSdependency, "$empty-dependency"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"invalidate-dependents", &module_info_evalSdependency, "invalidate-dependents"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"<dependent>", &module_info_evalSdependency, "<dependent>"},
  {"as", &module_info_gooStypes, "as"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"round", &module_info_gooSmath, "round"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"invalidate-dependent", &module_info_evalSdependency, "invalidate-dependent"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"out", &module_info_gooSioSport, "out"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, "sexpr-function-definition-adjectives"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"$value-optimization-dependency", &module_info_evalSdependency, "$value-optimization-dependency"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"$parse-dependencies", &module_info_evalSdependency, "$parse-dependencies"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"dependency-empty?", &module_info_evalSdependency, "dependency-empty?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<dependable>", &module_info_evalSdependency, "<dependable>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"always", &module_info_gooSruntime, "always"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"cat", &module_info_gooSmacros, "cat"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"or", &module_info_gooSmacros, "or"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooSmacros, "last"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"put", &module_info_gooSioSport, "put"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"set", &module_info_gooSboot, "set"},
  {"find-dependency", &module_info_evalSdependency, "find-dependency"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"get", &module_info_gooSioSport, "get"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"dependency-and", &module_info_evalSdependency, "dependency-and"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"&", &module_info_gooSmath, "&"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"case", &module_info_gooSmacros, "case"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"close", &module_info_gooSioSport, "close"},
  {"<dependency-type>", &module_info_evalSdependency, "<dependency-type>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"$optimizaton-dependencies", &module_info_evalSdependency, "$optimizaton-dependencies"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"detach-dependent", &module_info_evalSdependency, "detach-dependent"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"port-handle-setter", &module_info_gooSioSport, "port-handle-setter"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"$expansion-parse-dependency", &module_info_evalSdependency, "$expansion-parse-dependency"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"~=", &module_info_gooSmath, "~="},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"environment-next", CVAR, &YevalSastYenvironment_next},
  {"global-box-value", CVAR, &YevalSastYglobal_box_value},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"binding-inferred-type-setter", CVAR, &YevalSastYbinding_inferred_type_setter},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"environment-uses-modules-setter", CVAR, &YevalSastYenvironment_uses_modules_setter},
  {"install-initial-bindings", CVAR, &YevalSastYinstall_initial_bindings},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"find-static-global-environment", CVAR, &YevalSastYfind_static_global_environment},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"$free-environment-empty", CVAR, &YevalSastYDfree_environment_empty},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"ensure-module-data", CVAR, &YevalSastYensure_module_data},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"module-syntax-environment", CVAR, &YevalSastYmodule_syntax_environment},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"binding-mangled-name", CVAR, &YevalSastYbinding_mangled_name},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"module-loader-modules-setter", CVAR, &YevalSastYmodule_loader_modules_setter},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"environment-module-loader", CVAR, &YevalSastYenvironment_module_loader},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"reload-modules", CVAR, &YevalSastYreload_modules},
  {"define-magic-binding", PVAR, NULL},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"module-name-setter", CVAR, &YevalSastYmodule_name_setter},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"---main-8---", PVAR, NULL},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"binding-global-box-setter", CVAR, &YevalSastYbinding_global_box_setter},
  {"ast-<bot>", CVAR, &YevalSastYast_LbotG},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"module-mangled-string-name", CVAR, &YevalSastYmodule_mangled_string_name},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"binding-type", CVAR, &YevalSastYbinding_type},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"module-syntax-environment-setter", CVAR, &YevalSastYmodule_syntax_environment_setter},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"fab-static-global-environment", CVAR, &YevalSastYfab_static_global_environment},
  {"binding-free?", CVAR, &YevalSastYbinding_freeQ},
  {"binding-module-name", CVAR, &YevalSastYbinding_module_name},
  {"binding-prop-setter", CVAR, &YevalSastYbinding_prop_setter},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"binding-kind", CVAR, &YevalSastYbinding_kind},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"report-undefined-global-bindings", CVAR, &YevalSastYreport_undefined_global_bindings},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"with-subtransaction", PVAR, NULL},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"<global-box>", CVAR, &YevalSastYLglobal_boxG},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"runtime-environment", CVAR, &YevalSastYruntime_environment},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"module-uses-c-libraries-setter", CVAR, &YevalSastYmodule_uses_c_libraries_setter},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"environment-bindings-setter", CVAR, &YevalSastYenvironment_bindings_setter},
  {"module-target-environment-setter", CVAR, &YevalSastYmodule_target_environment_setter},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"transaction-implemented-bindings", CVAR, &YevalSastYtransaction_implemented_bindings},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"merge-transactions!", CVAR, &YevalSastYmerge_transactionsX},
  {"transaction-dependents-setter", CVAR, &YevalSastYtransaction_dependents_setter},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"load-in", CVAR, &YevalSastYload_in},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"reloader-do-create-module", CVAR, &YevalSastYreloader_do_create_module},
  {"find-binding", CVAR, &YevalSastYfind_binding},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"environment-uses-modules", CVAR, &YevalSastYenvironment_uses_modules},
  {"environment-allows-foreign-names?", CVAR, &YevalSastYenvironment_allows_foreign_namesQ},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"binding-inferred-type", CVAR, &YevalSastYbinding_inferred_type},
  {"module-loader-module-type", CVAR, &YevalSastYmodule_loader_module_type},
  {"---main-1---", PVAR, NULL},
  {"<binding>", CVAR, &YevalSastYLbindingG},
  {"binding-handler-setter", CVAR, &YevalSastYbinding_handler_setter},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"load-module", CVAR, &YevalSastYload_module},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"def-list", PVAR, NULL},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"set-module-environments", CVAR, &YevalSastYset_module_environments},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"function-data-refs-setter", CVAR, &YevalSastYfunction_data_refs_setter},
  {"reloader-do-other-binding", CVAR, &YevalSastYreloader_do_other_binding},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"binding-native-to?", CVAR, &YevalSastYbinding_native_toQ},
  {"module-loader-modules", CVAR, &YevalSastYmodule_loader_modules},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"module-loader-stack-setter", CVAR, &YevalSastYmodule_loader_stack_setter},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"*runtime-module-loader*", CVAR, &YevalSastYTruntime_module_loaderT},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"$goo-boot-module-name", CVAR, &YevalSastYDgoo_boot_module_name},
  {"environment-bindings", CVAR, &YevalSastYenvironment_bindings},
  {"<module-binding>", CVAR, &YevalSastYLmodule_bindingG},
  {"ftype", CVAR, &YevalSastYftype},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"insert-globals!", CVAR, &YevalSastYinsert_globalsX},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"unchecked-runtime-environment", CVAR, &YevalSastYunchecked_runtime_environment},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"module-mangled-name-setter", CVAR, &YevalSastYmodule_mangled_name_setter},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"with-dependent", PVAR, NULL},
  {"call-with-subtransaction", CVAR, &YevalSastYcall_with_subtransaction},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"module-exports-setter", CVAR, &YevalSastYmodule_exports_setter},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"binding-prop", CVAR, &YevalSastYbinding_prop},
  {"module-uses-c-files-setter", CVAR, &YevalSastYmodule_uses_c_files_setter},
  {"binding-info-setter", CVAR, &YevalSastYbinding_info_setter},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"reloader-do-export", CVAR, &YevalSastYreloader_do_export},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"do-named-static-global-bindings", CVAR, &YevalSastYdo_named_static_global_bindings},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"fab-subset-environment", CVAR, &YevalSastYfab_subset_environment},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"process-module-data", CVAR, &YevalSastYprocess_module_data},
  {"reloader-do-runtime-binding", CVAR, &YevalSastYreloader_do_runtime_binding},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"probe-module", CVAR, &YevalSastYprobe_module},
  {"arguments", CVAR, &YevalSastYarguments},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"module-uses-c-includes", CVAR, &YevalSastYmodule_uses_c_includes},
  {"module-uses-c-includes-setter", CVAR, &YevalSastYmodule_uses_c_includes_setter},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"remove-modules-by-name!", CVAR, &YevalSastYremove_modules_by_nameX},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"binding-name", CVAR, &YevalSastYbinding_name},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"transaction-dependents", CVAR, &YevalSastYtransaction_dependents},
  {"---main-10---", PVAR, NULL},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"$fab-list-empty", CVAR, &YevalSastYDfab_list_empty},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"find-environment-module", CVAR, &YevalSastYfind_environment_module},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"$arguments-empty", CVAR, &YevalSastYDarguments_empty},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"module-loader-stack", CVAR, &YevalSastYmodule_loader_stack},
  {"<module>", CVAR, &YevalSastYLmoduleG},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"module-name", CVAR, &YevalSastYmodule_name},
  {"module-mangled-name", CVAR, &YevalSastYmodule_mangled_name},
  {"---main-3---", PVAR, NULL},
  {"module-exports", CVAR, &YevalSastYmodule_exports},
  {"<binding-name>", CVAR, &YevalSastYLbinding_nameG},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"transaction-register-dependent", CVAR, &YevalSastYtransaction_register_dependent},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"remove-module-internal!", CVAR, &YevalSastYremove_module_internalX},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"register-module!", CVAR, &YevalSastYregister_moduleX},
  {"runtime-core-environment", CVAR, &YevalSastYruntime_core_environment},
  {"---main-2---", PVAR, NULL},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"transaction-empty?", CVAR, &YevalSastYtransaction_emptyQ},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"*now-rt-env*", DVAR, &YevalSastYTnow_rt_envT},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"export-binding!", CVAR, &YevalSastYexport_bindingX},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"pairize", CVAR, &YevalSastYpairize},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"module-runtime-data", CVAR, &YevalSastYmodule_runtime_data},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"$sequential-empty", CVAR, &YevalSastYDsequential_empty},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"function-data-refs", CVAR, &YevalSastYfunction_data_refs},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"import-and-mangle-global!", CVAR, &YevalSastYimport_and_mangle_globalX},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"functions", CVAR, &YevalSastYfunctions},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"---main-4---", PVAR, NULL},
  {"<static-global-environment>", CVAR, &YevalSastYLstatic_global_environmentG},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"module-uses-c-files", CVAR, &YevalSastYmodule_uses_c_files},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"insert-global!", CVAR, &YevalSastYinsert_globalX},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"module-transaction-setter", CVAR, &YevalSastYmodule_transaction_setter},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"<transaction>", CVAR, &YevalSastYLtransactionG},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"binding-name-setter", CVAR, &YevalSastYbinding_name_setter},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"binding-info", CVAR, &YevalSastYbinding_info},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"environment-module-setter", CVAR, &YevalSastYenvironment_module_setter},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"transaction-register-implemented-binding", CVAR, &YevalSastYtransaction_register_implemented_binding},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"runtime-module", CVAR, &YevalSastYruntime_module},
  {"<static-empty-environment>", CVAR, &YevalSastYLstatic_empty_environmentG},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"binding-global-box", CVAR, &YevalSastYbinding_global_box},
  {"<static-local-environment>", CVAR, &YevalSastYLstatic_local_environmentG},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"---main-9---", PVAR, NULL},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"binding-free?-setter", CVAR, &YevalSastYbinding_freeQ_setter},
  {"environment-module", CVAR, &YevalSastYenvironment_module},
  {"reloader-do-import", CVAR, &YevalSastYreloader_do_import},
  {"environment-module-loader-setter", CVAR, &YevalSastYenvironment_module_loader_setter},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"function-self-recursive?-setter", CVAR, &YevalSastYfunction_self_recursiveQ_setter},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"<module-loader>", CVAR, &YevalSastYLmodule_loaderG},
  {"<static-environment>", CVAR, &YevalSastYLstatic_environmentG},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"module-runtime-data-setter", CVAR, &YevalSastYmodule_runtime_data_setter},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"find-syntax-environment", CVAR, &YevalSastYfind_syntax_environment},
  {"import-global!", CVAR, &YevalSastYimport_globalX},
  {"roll-back-transaction", CVAR, &YevalSastYroll_back_transaction},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"env-object-name", CVAR, &YevalSastYenv_object_name},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"reloader-do-dynamic-binding", CVAR, &YevalSastYreloader_do_dynamic_binding},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"---main-7---", PVAR, NULL},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"binding-module-setter", CVAR, &YevalSastYbinding_module_setter},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"---main-0---", PVAR, NULL},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"*current-subtransaction*", CVAR, &YevalSastYTcurrent_subtransactionT},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"frame-bindings", CVAR, &YevalSastYframe_bindings},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"environment-next-setter", CVAR, &YevalSastYenvironment_next_setter},
  {"global-box-value-setter", CVAR, &YevalSastYglobal_box_value_setter},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"<runtime-module-loader>", CVAR, &YevalSastYLruntime_module_loaderG},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"sequential", CVAR, &YevalSastYsequential},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"module-data-processed?-setter", CVAR, &YevalSastYmodule_data_processedQ_setter},
  {"binding-locative", CVAR, &YevalSastYbinding_locative},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"module-transaction", CVAR, &YevalSastYmodule_transaction},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"$functions-empty", CVAR, &YevalSastYDfunctions_empty},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"%module-exports", CVAR, &YevalSastYPmodule_exports},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"---main-6---", PVAR, NULL},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"%module-exports-setter", CVAR, &YevalSastYPmodule_exports_setter},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"module-data-processed?", CVAR, &YevalSastYmodule_data_processedQ},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"binding-type-setter", CVAR, &YevalSastYbinding_type_setter},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"do-module-loader-modules", CVAR, &YevalSastYdo_module_loader_modules},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"binding-locative-setter", CVAR, &YevalSastYbinding_locative_setter},
  {"module-name-to-relpath", CVAR, &YevalSastYmodule_name_to_relpath},
  {"binding-kind-setter", CVAR, &YevalSastYbinding_kind_setter},
  {"runtime-module-loader", CVAR, &YevalSastYruntime_module_loader},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"def-programs", PVAR, NULL},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"$empty-static-environment", CVAR, &YevalSastYDempty_static_environment},
  {"module-mangled-string-name-setter", CVAR, &YevalSastYmodule_mangled_string_name_setter},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"function-self-recursive?", CVAR, &YevalSastYfunction_self_recursiveQ},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"module-uses-c-libraries", CVAR, &YevalSastYmodule_uses_c_libraries},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"objectify-error", CVAR, &YevalSastYobjectify_error},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"insert-and-mangle-global!", CVAR, &YevalSastYinsert_and_mangle_globalX},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"reloader-do-use-module", CVAR, &YevalSastYreloader_do_use_module},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"load-and-register-module", CVAR, &YevalSastYload_and_register_module},
  {"---main-5---", PVAR, NULL},
  {"compute-transitive-users", CVAR, &YevalSastYcompute_transitive_users},
  {"transaction-implemented-bindings-setter", CVAR, &YevalSastYtransaction_implemented_bindings_setter},
  {"binding-module", CVAR, &YevalSastYbinding_module},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"binding-handler", CVAR, &YevalSastYbinding_handler},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"module-target-environment", CVAR, &YevalSastYmodule_target_environment},
  {"binding-mangled-name-setter", CVAR, &YevalSastYbinding_mangled_name_setter},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"do-static-global-bindings", CVAR, &YevalSastYdo_static_global_bindings},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"global-box-value", "global-box-value"},
  {"objectify-quotation", "objectify-quotation"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"assignment-binding", "assignment-binding"},
  {"<sequential>", "<sequential>"},
  {"sequentialize", "sequentialize"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"probe-module", "probe-module"},
  {"<ast-method>", "<ast-method>"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"<application>", "<application>"},
  {"assignment-form", "assignment-form"},
  {"<fix-let>", "<fix-let>"},
  {"binding-global-box", "binding-global-box"},
  {"function-registers", "function-registers"},
  {"function-source-setter", "function-source-setter"},
  {"application-binding", "application-binding"},
  {"<constant>", "<constant>"},
  {"binding-module-name", "binding-module-name"},
  {"binding-info", "binding-info"},
  {"ast-walk", "ast-walk"},
  {"function-body", "function-body"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"binding-kind", "binding-kind"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"<fab-list>", "<fab-list>"},
  {"assignment-reference", "assignment-reference"},
  {"constant-index-setter", "constant-index-setter"},
  {"binding-type", "binding-type"},
  {"module-mangled-string-name", "module-mangled-string-name"},
  {"<program>", "<program>"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"program-register-setter", "program-register-setter"},
  {"<global-assignment>", "<global-assignment>"},
  {"<macro-reference>", "<macro-reference>"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"as-lst", "as-lst"},
  {"application-arguments", "application-arguments"},
  {"application-known?", "application-known?"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"<arguments>", "<arguments>"},
  {"binding-mangled-name", "binding-mangled-name"},
  {"objectify-signature", "objectify-signature"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"load-in", "load-in"},
  {"constant-value", "constant-value"},
  {"find-binding", "find-binding"},
  {"signature-value-setter", "signature-value-setter"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"application-function", "application-function"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"<dynamic-definition>", "<dynamic-definition>"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"<binding>", "<binding>"},
  {"<definition>", "<definition>"},
  {"module-binding", "module-binding"},
  {"<ast-function>", "<ast-function>"},
  {"binding-index-setter", "binding-index-setter"},
  {"<local-assignment>", "<local-assignment>"},
  {"set-module-environments", "set-module-environments"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"module-uses-c-includes", "module-uses-c-includes"},
  {"binding-native-to?", "binding-native-to?"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"<ast-generic>", "<ast-generic>"},
  {"<predefined-application>", "<predefined-application>"},
  {"module-name", "module-name"},
  {"<compile-time>", "<compile-time>"},
  {"signature-names-setter", "signature-names-setter"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"<ast-signature>", "<ast-signature>"},
  {"ast-evaluate", "ast-evaluate"},
  {"function-source", "function-source"},
  {"ast-define-binding", "ast-define-binding"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"application-tail?", "application-tail?"},
  {"environment-bindings", "environment-bindings"},
  {"<module-binding>", "<module-binding>"},
  {"reference-frame-number", "reference-frame-number"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"fix-let-types", "fix-let-types"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"module-mangled-name-setter", "module-mangled-name-setter"},
  {"free-environment", "free-environment"},
  {"constant-index", "constant-index"},
  {"<locals>", "<locals>"},
  {"binding-info-setter", "binding-info-setter"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"binding-value-setter", "binding-value-setter"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"runtime-environment", "runtime-environment"},
  {"<global-box>", "<global-box>"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"function-adjectives", "function-adjectives"},
  {"reference-called-function?", "reference-called-function?"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"<monitor>", "<monitor>"},
  {"compile-time-program", "compile-time-program"},
  {"signature-bindings", "signature-bindings"},
  {"<magic-reference>", "<magic-reference>"},
  {"<regular-application>", "<regular-application>"},
  {"function-frame-len-setter", "function-frame-len-setter"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"find-environment-module", "find-environment-module"},
  {"signature-value", "signature-value"},
  {"<raw-constant>", "<raw-constant>"},
  {"<low-let>", "<low-let>"},
  {"function-nary?", "function-nary?"},
  {"module-mangled-name", "module-mangled-name"},
  {"module-exports", "module-exports"},
  {"locals-bindings", "locals-bindings"},
  {"function-temporaries", "function-temporaries"},
  {"locals-body-setter", "locals-body-setter"},
  {"fix-let-body", "fix-let-body"},
  {"binding-index", "binding-index"},
  {"monitor-type", "monitor-type"},
  {"function-data-refs", "function-data-refs"},
  {"<dynamic-reference>", "<dynamic-reference>"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"function-free-setter", "function-free-setter"},
  {"signature-names", "signature-names"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"module-uses-c-files", "module-uses-c-files"},
  {"<programs>", "<programs>"},
  {"signature-arity", "signature-arity"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"<global-reference>", "<global-reference>"},
  {"def-list", "def-list"},
  {"function-index-setter", "function-index-setter"},
  {"<reference>", "<reference>"},
  {"function-signature-setter", "function-signature-setter"},
  {"signature-nary?", "signature-nary?"},
  {"<alternative>", "<alternative>"},
  {"signature-specs", "signature-specs"},
  {"binding-value", "binding-value"},
  {"reference-binding", "reference-binding"},
  {"locals-functions", "locals-functions"},
  {"<computed-program>", "<computed-program>"},
  {"binding-dotted?", "binding-dotted?"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"<module-loader>", "<module-loader>"},
  {"<dynamic-assignment>", "<dynamic-assignment>"},
  {"function-frame-len", "function-frame-len"},
  {"<static-module-binding-reference>", "<static-module-binding-reference>"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"monitor-info", "monitor-info"},
  {"binding-mutable?", "binding-mutable?"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"load-module", "load-module"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"%%macro", "%%macro"},
  {"init-ast", "init-ast"},
  {"env-object-name", "env-object-name"},
  {"ast-walk!", "ast-walk!"},
  {"locals-body", "locals-body"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"<real-reference>", "<real-reference>"},
  {"<local-reference>", "<local-reference>"},
  {"<bound?>", "<bound?>"},
  {"alternative-condition", "alternative-condition"},
  {"function-bindings", "function-bindings"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"<module>", "<module>"},
  {"<local-binding>", "<local-binding>"},
  {"program-type-setter", "program-type-setter"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"monitor-test", "monitor-test"},
  {"<bind-exit>", "<bind-exit>"},
  {"function-free", "function-free"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"binding-locative", "binding-locative"},
  {"bound?-reference", "bound?-reference"},
  {"function-index", "function-index"},
  {"binding-name", "binding-name"},
  {"monitor-handler", "monitor-handler"},
  {"function-signature", "function-signature"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"environment-module", "environment-module"},
  {"binding-type-setter", "binding-type-setter"},
  {"function-registers-setter", "function-registers-setter"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"alternative-consequent", "alternative-consequent"},
  {"binding-locative-setter", "binding-locative-setter"},
  {"<free-environment>", "<free-environment>"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"def-programs", "def-programs"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"module-mangled-string-name-setter", "module-mangled-string-name-setter"},
  {"function-body-setter", "function-body-setter"},
  {"module-uses-c-libraries", "module-uses-c-libraries"},
  {"function-debug-name", "function-debug-name"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"<passive-program>", "<passive-program>"},
  {"function-value", "function-value"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"function-binding", "function-binding"},
  {"program-register", "program-register"},
  {"application-known?-setter", "application-known?-setter"},
  {"binding-module", "binding-module"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"module-target-environment", "module-target-environment"},
  {"binding-mangled-name-setter", "binding-mangled-name-setter"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"program-type", "program-type"},
  {"<assignment>", "<assignment>"},
  {"alternative-alternant", "alternative-alternant"},
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
  (P)YevalSastY___main_10___();

}

/* END OF GENERATED CODE. */
