/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast */

EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
DEF(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYLloopG,"eval/ast","<loop>");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSastYapplication_loop_setter,"eval/ast","application-loop-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
DEF(YevalSastYprogram_line_setter,"eval/ast","program-line-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YevalSastYarguments,"eval/ast","arguments");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
DEF(YevalSastYboundQ_default_setter,"eval/ast","bound?-default-setter");
EXT(Yclass_id,"goo/boot","class-id");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
DEF(YevalSastYspecial_define_constant,"eval/ast","special-define-constant");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
DEF(YevalSastYDfab_list_nul,"eval/ast","$fab-list-nul");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YevalSastYobjectify_function_using,"eval/ast","objectify-function-using");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSastYDarguments_nul,"eval/ast","$arguments-nul");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
DEF(YevalSastYDfree_environment_nul,"eval/ast","$free-environment-nul");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
DEF(YevalSastYftype,"eval/ast","ftype");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
DEF(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YevalSdependencyYDnul_dependency,"eval/dependency","$nul-dependency");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
DEF(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DEF(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(Ynul_prop,"goo/boot","nul-prop");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOelt,"goo/boot","@elt");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YevalSastYobjectify,"eval/ast","objectify");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSastYincf_ref_count,"eval/ast","incf-ref-count");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yarity_error,"goo/boot","arity-error");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
DEF(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
DEF(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
DEF(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
DEF(YevalSastYDsequential_nul,"eval/ast","$sequential-nul");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
EXT(YevalSdependencyYdependency_nulQ,"eval/dependency","dependency-nul?");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSastYsequential,"eval/ast","sequential");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YOpick,"goo/boot","@pick");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
DEF(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YOOnulQ,"goo/boot","@@nul?");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
DEF(YevalSastYbind_exit_lightQ_setter,"eval/ast","bind-exit-light?-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
EXT(Ynot,"goo/boot","not");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
DEF(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YPsnul,"goo/boot","%snul");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
DEF(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
DEF(YevalSastYDfunctions_nul,"eval/ast","$functions-nul");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSastYspecial_propX,"eval/ast","special-prop!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
DEF(YevalSastYobjectify_define_property,"eval/ast","objectify-define-property");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YOnew,"goo/boot","@new");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YOrev,"goo/boot","@rev");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSastYfunctions,"eval/ast","functions");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_574);
DEFLIT(lit_393);
DEFLIT(lit_4);
DEFLIT(lit_171);
DEFLIT(lit_526);
DEFLIT(lit_497);
DEFLIT(lit_199);
DEFLIT(lit_647);
DEFLIT(lit_685);
DEFLIT(lit_677);
DEFLIT(lit_70);
DEFLIT(lit_391);
DEFLIT(lit_276);
DEFLIT(lit_659);
DEFLIT(lit_646);
DEFLIT(lit_522);
DEFLIT(lit_660);
DEFLIT(lit_27);
DEFLIT(lit_723);
DEFLIT(lit_295);
DEFLIT(lit_129);
DEFLIT(lit_504);
DEFLIT(lit_758);
DEFLIT(lit_613);
DEFLIT(lit_101);
DEFLIT(lit_684);
DEFLIT(lit_539);
DEFLIT(lit_508);
DEFLIT(lit_221);
DEFLIT(lit_290);
DEFLIT(lit_186);
DEFLIT(lit_362);
DEFLIT(lit_71);
DEFLIT(lit_575);
DEFLIT(lit_291);
DEFLIT(lit_434);
DEFLIT(lit_94);
DEFLIT(lit_244);
DEFLIT(lit_456);
DEFLIT(lit_695);
DEFLIT(lit_264);
DEFLIT(lit_311);
DEFLIT(lit_117);
DEFLIT(lit_426);
DEFLIT(lit_557);
DEFLIT(lit_270);
DEFLIT(lit_212);
DEFLIT(lit_207);
DEFLIT(lit_271);
DEFLIT(lit_754);
DEFLIT(lit_473);
DEFLIT(lit_809);
DEFLIT(lit_760);
DEFLIT(lit_376);
DEFLIT(lit_43);
DEFLIT(lit_611);
DEFLIT(lit_683);
DEFLIT(lit_721);
DEFLIT(lit_633);
DEFLIT(lit_115);
DEFLIT(lit_703);
DEFLIT(lit_110);
DEFLIT(lit_169);
DEFLIT(lit_156);
DEFLIT(lit_289);
DEFLIT(lit_322);
DEFLIT(lit_247);
DEFLIT(lit_105);
DEFLIT(lit_515);
DEFLIT(lit_608);
DEFLIT(lit_267);
DEFLIT(lit_254);
DEFLIT(lit_75);
DEFLIT(lit_806);
DEFLIT(lit_673);
DEFLIT(lit_502);
DEFLIT(lit_252);
DEFLIT(lit_542);
DEFLIT(lit_594);
DEFLIT(lit_100);
DEFLIT(lit_302);
DEFLIT(lit_445);
DEFLIT(lit_505);
DEFLIT(lit_524);
DEFLIT(lit_697);
DEFLIT(lit_28);
DEFLIT(lit_666);
DEFLIT(lit_816);
DEFLIT(lit_229);
DEFLIT(lit_339);
DEFLIT(lit_645);
DEFLIT(lit_236);
DEFLIT(lit_802);
DEFLIT(lit_433);
DEFLIT(lit_166);
DEFLIT(lit_22);
DEFLIT(lit_795);
DEFLIT(lit_584);
DEFLIT(lit_753);
DEFLIT(lit_97);
DEFLIT(lit_202);
DEFLIT(lit_315);
DEFLIT(lit_370);
DEFLIT(lit_514);
DEFLIT(lit_488);
DEFLIT(lit_200);
DEFLIT(lit_454);
DEFLIT(lit_59);
DEFLIT(lit_79);
DEFLIT(lit_155);
DEFLIT(lit_548);
DEFLIT(lit_453);
DEFLIT(lit_158);
DEFLIT(lit_560);
DEFLIT(lit_587);
DEFLIT(lit_159);
DEFLIT(lit_614);
DEFLIT(lit_554);
DEFLIT(lit_10);
DEFLIT(lit_82);
DEFLIT(lit_657);
DEFLIT(lit_558);
DEFLIT(lit_214);
DEFLIT(lit_319);
DEFLIT(lit_378);
DEFLIT(lit_559);
DEFLIT(lit_564);
DEFLIT(lit_588);
DEFLIT(lit_766);
DEFLIT(lit_32);
DEFLIT(lit_383);
DEFLIT(lit_796);
DEFLIT(lit_782);
DEFLIT(lit_627);
DEFLIT(lit_521);
DEFLIT(lit_173);
DEFLIT(lit_523);
DEFLIT(lit_776);
DEFLIT(lit_528);
DEFLIT(lit_184);
DEFLIT(lit_88);
DEFLIT(lit_394);
DEFLIT(lit_353);
DEFLIT(lit_39);
DEFLIT(lit_149);
DEFLIT(lit_304);
DEFLIT(lit_366);
DEFLIT(lit_792);
DEFLIT(lit_441);
DEFLIT(lit_775);
DEFLIT(lit_477);
DEFLIT(lit_228);
DEFLIT(lit_731);
DEFLIT(lit_533);
DEFLIT(lit_636);
DEFLIT(lit_268);
DEFLIT(lit_743);
DEFLIT(lit_154);
DEFLIT(lit_701);
DEFLIT(lit_187);
DEFLIT(lit_38);
DEFLIT(lit_249);
DEFLIT(lit_341);
DEFLIT(lit_123);
DEFLIT(lit_556);
DEFLIT(lit_21);
DEFLIT(lit_355);
DEFLIT(lit_615);
DEFLIT(lit_663);
DEFLIT(lit_203);
DEFLIT(lit_768);
DEFLIT(lit_403);
DEFLIT(lit_550);
DEFLIT(lit_106);
DEFLIT(lit_238);
DEFLIT(lit_540);
DEFLIT(lit_327);
DEFLIT(lit_133);
DEFLIT(lit_566);
DEFLIT(lit_140);
DEFLIT(lit_640);
DEFLIT(lit_48);
DEFLIT(lit_545);
DEFLIT(lit_527);
DEFLIT(lit_57);
DEFLIT(lit_780);
DEFLIT(lit_348);
DEFLIT(lit_482);
DEFLIT(lit_413);
DEFLIT(lit_777);
DEFLIT(lit_242);
DEFLIT(lit_740);
DEFLIT(lit_58);
DEFLIT(lit_700);
DEFLIT(lit_736);
DEFLIT(lit_672);
DEFLIT(lit_98);
DEFLIT(lit_64);
DEFLIT(lit_714);
DEFLIT(lit_519);
DEFLIT(lit_495);
DEFLIT(lit_41);
DEFLIT(lit_127);
DEFLIT(lit_279);
DEFLIT(lit_336);
DEFLIT(lit_237);
DEFLIT(lit_5);
DEFLIT(lit_799);
DEFLIT(lit_489);
DEFLIT(lit_51);
DEFLIT(lit_125);
DEFLIT(lit_194);
DEFLIT(lit_130);
DEFLIT(lit_16);
DEFLIT(lit_656);
DEFLIT(lit_324);
DEFLIT(lit_183);
DEFLIT(lit_89);
DEFLIT(lit_99);
DEFLIT(lit_104);
DEFLIT(lit_803);
DEFLIT(lit_638);
DEFLIT(lit_219);
DEFLIT(lit_573);
DEFLIT(lit_812);
DEFLIT(lit_571);
DEFLIT(lit_581);
DEFLIT(lit_813);
DEFLIT(lit_602);
DEFLIT(lit_708);
DEFLIT(lit_442);
DEFLIT(lit_658);
DEFLIT(lit_493);
DEFLIT(lit_532);
DEFLIT(lit_107);
DEFLIT(lit_457);
DEFLIT(lit_113);
DEFLIT(lit_591);
DEFLIT(lit_483);
DEFLIT(lit_118);
DEFLIT(lit_416);
DEFLIT(lit_428);
DEFLIT(lit_693);
DEFLIT(lit_312);
DEFLIT(lit_546);
DEFLIT(lit_195);
DEFLIT(lit_720);
DEFLIT(lit_146);
DEFLIT(lit_725);
DEFLIT(lit_380);
DEFLIT(lit_485);
DEFLIT(lit_109);
DEFLIT(lit_653);
DEFLIT(lit_552);
DEFLIT(lit_108);
DEFLIT(lit_248);
DEFLIT(lit_568);
DEFLIT(lit_452);
DEFLIT(lit_209);
DEFLIT(lit_103);
DEFLIT(lit_191);
DEFLIT(lit_305);
DEFLIT(lit_654);
DEFLIT(lit_579);
DEFLIT(lit_759);
DEFLIT(lit_622);
DEFLIT(lit_696);
DEFLIT(lit_297);
DEFLIT(lit_652);
DEFLIT(lit_536);
DEFLIT(lit_509);
DEFLIT(lit_671);
DEFLIT(lit_357);
DEFLIT(lit_797);
DEFLIT(lit_543);
DEFLIT(lit_182);
DEFLIT(lit_674);
DEFLIT(lit_763);
DEFLIT(lit_150);
DEFLIT(lit_769);
DEFLIT(lit_112);
DEFLIT(lit_496);
DEFLIT(lit_213);
DEFLIT(lit_280);
DEFLIT(lit_204);
DEFLIT(lit_565);
DEFLIT(lit_92);
DEFLIT(lit_765);
DEFLIT(lit_272);
DEFLIT(lit_141);
DEFLIT(lit_174);
DEFLIT(lit_342);
DEFLIT(lit_301);
DEFLIT(lit_707);
DEFLIT(lit_459);
DEFLIT(lit_525);
DEFLIT(lit_262);
DEFLIT(lit_599);
DEFLIT(lit_635);
DEFLIT(lit_484);
DEFLIT(lit_631);
DEFLIT(lit_520);
DEFLIT(lit_321);
DEFLIT(lit_623);
DEFLIT(lit_3);
DEFLIT(lit_329);
DEFLIT(lit_292);
DEFLIT(lit_313);
DEFLIT(lit_170);
DEFLIT(lit_648);
DEFLIT(lit_259);
DEFLIT(lit_284);
DEFLIT(lit_136);
DEFLIT(lit_474);
DEFLIT(lit_52);
DEFLIT(lit_25);
DEFLIT(lit_77);
DEFLIT(lit_153);
DEFLIT(lit_621);
DEFLIT(lit_68);
DEFLIT(lit_161);
DEFLIT(lit_691);
DEFLIT(lit_689);
DEFLIT(lit_33);
DEFLIT(lit_669);
DEFLIT(lit_223);
DEFLIT(lit_784);
DEFLIT(lit_529);
DEFLIT(lit_379);
DEFLIT(lit_716);
DEFLIT(lit_630);
DEFLIT(lit_53);
DEFLIT(lit_317);
DEFLIT(lit_201);
DEFLIT(lit_475);
DEFLIT(lit_273);
DEFLIT(lit_288);
DEFLIT(lit_49);
DEFLIT(lit_512);
DEFLIT(lit_90);
DEFLIT(lit_593);
DEFLIT(lit_287);
DEFLIT(lit_632);
DEFLIT(lit_639);
DEFLIT(lit_604);
DEFLIT(lit_692);
DEFLIT(lit_463);
DEFLIT(lit_785);
DEFLIT(lit_390);
DEFLIT(lit_54);
DEFLIT(lit_597);
DEFLIT(lit_688);
DEFLIT(lit_447);
DEFLIT(lit_798);
DEFLIT(lit_216);
DEFLIT(lit_439);
DEFLIT(lit_250);
DEFLIT(lit_230);
DEFLIT(lit_713);
DEFLIT(lit_277);
DEFLIT(lit_555);
DEFLIT(lit_126);
DEFLIT(lit_335);
DEFLIT(lit_164);
DEFLIT(lit_698);
DEFLIT(lit_770);
DEFLIT(lit_210);
DEFLIT(lit_265);
DEFLIT(lit_510);
DEFLIT(lit_432);
DEFLIT(lit_19);
DEFLIT(lit_436);
DEFLIT(lit_507);
DEFLIT(lit_438);
DEFLIT(lit_807);
DEFLIT(lit_15);
DEFLIT(lit_567);
DEFLIT(lit_308);
DEFLIT(lit_791);
DEFLIT(lit_234);
DEFLIT(lit_372);
DEFLIT(lit_256);
DEFLIT(lit_779);
DEFLIT(lit_592);
DEFLIT(lit_253);
DEFLIT(lit_649);
DEFLIT(lit_415);
DEFLIT(lit_643);
DEFLIT(lit_644);
DEFLIT(lit_55);
DEFLIT(lit_440);
DEFLIT(lit_162);
DEFLIT(lit_151);
DEFLIT(lit_145);
DEFLIT(lit_715);
DEFLIT(lit_67);
DEFLIT(lit_375);
DEFLIT(lit_724);
DEFLIT(lit_18);
DEFLIT(lit_352);
DEFLIT(lit_257);
DEFLIT(lit_810);
DEFLIT(lit_180);
DEFLIT(lit_240);
DEFLIT(lit_430);
DEFLIT(lit_178);
DEFLIT(lit_755);
DEFLIT(lit_682);
DEFLIT(lit_334);
DEFLIT(lit_712);
DEFLIT(lit_226);
DEFLIT(lit_131);
DEFLIT(lit_814);
DEFLIT(lit_455);
DEFLIT(lit_241);
DEFLIT(lit_215);
DEFLIT(lit_465);
DEFLIT(lit_47);
DEFLIT(lit_744);
DEFLIT(lit_462);
DEFLIT(lit_177);
DEFLIT(lit_805);
DEFLIT(lit_729);
DEFLIT(lit_537);
DEFLIT(lit_381);
DEFLIT(lit_686);
DEFLIT(lit_590);
DEFLIT(lit_727);
DEFLIT(lit_628);
DEFLIT(lit_233);
DEFLIT(lit_80);
DEFLIT(lit_424);
DEFLIT(lit_294);
DEFLIT(lit_491);
DEFLIT(lit_710);
DEFLIT(lit_285);
DEFLIT(lit_420);
DEFLIT(lit_197);
DEFLIT(lit_359);
DEFLIT(lit_269);
DEFLIT(lit_641);
DEFLIT(lit_258);
DEFLIT(lit_789);
DEFLIT(lit_678);
DEFLIT(lit_458);
DEFLIT(lit_781);
DEFLIT(lit_152);
DEFLIT(lit_471);
DEFLIT(lit_422);
DEFLIT(lit_2);
DEFLIT(lit_116);
DEFLIT(lit_13);
DEFLIT(lit_211);
DEFLIT(lit_135);
DEFLIT(lit_120);
DEFLIT(lit_553);
DEFLIT(lit_81);
DEFLIT(lit_192);
DEFLIT(lit_363);
DEFLIT(lit_165);
DEFLIT(lit_231);
DEFLIT(lit_261);
DEFLIT(lit_749);
DEFLIT(lit_12);
DEFLIT(lit_629);
DEFLIT(lit_787);
DEFLIT(lit_562);
DEFLIT(lit_281);
DEFLIT(lit_347);
DEFLIT(lit_245);
DEFLIT(lit_46);
DEFLIT(lit_589);
DEFLIT(lit_303);
DEFLIT(lit_655);
DEFLIT(lit_266);
DEFLIT(lit_42);
DEFLIT(lit_586);
DEFLIT(lit_354);
DEFLIT(lit_37);
DEFLIT(lit_738);
DEFLIT(lit_449);
DEFLIT(lit_343);
DEFLIT(lit_407);
DEFLIT(lit_367);
DEFLIT(lit_751);
DEFLIT(lit_8);
DEFLIT(lit_412);
DEFLIT(lit_722);
DEFLIT(lit_745);
DEFLIT(lit_300);
DEFLIT(lit_620);
DEFLIT(lit_60);
DEFLIT(lit_726);
DEFLIT(lit_764);
DEFLIT(lit_705);
DEFLIT(lit_746);
DEFLIT(lit_220);
DEFLIT(lit_580);
DEFLIT(lit_741);
DEFLIT(lit_251);
DEFLIT(lit_74);
DEFLIT(lit_616);
DEFLIT(lit_637);
DEFLIT(lit_44);
DEFLIT(lit_299);
DEFLIT(lit_774);
DEFLIT(lit_761);
DEFLIT(lit_260);
DEFLIT(lit_243);
DEFLIT(lit_709);
DEFLIT(lit_85);
DEFLIT(lit_196);
DEFLIT(lit_486);
DEFLIT(lit_374);
DEFLIT(lit_371);
DEFLIT(lit_503);
DEFLIT(lit_513);
DEFLIT(lit_298);
DEFLIT(lit_34);
DEFLIT(lit_808);
DEFLIT(lit_95);
DEFLIT(lit_318);
DEFLIT(lit_756);
DEFLIT(lit_282);
DEFLIT(lit_274);
DEFLIT(lit_50);
DEFLIT(lit_530);
DEFLIT(lit_429);
DEFLIT(lit_624);
DEFLIT(lit_605);
DEFLIT(lit_36);
DEFLIT(lit_661);
DEFLIT(lit_421);
DEFLIT(lit_577);
DEFLIT(lit_480);
DEFLIT(lit_401);
DEFLIT(lit_704);
DEFLIT(lit_750);
DEFLIT(lit_344);
DEFLIT(lit_358);
DEFLIT(lit_435);
DEFLIT(lit_235);
DEFLIT(lit_286);
DEFLIT(lit_384);
DEFLIT(lit_739);
DEFLIT(lit_26);
DEFLIT(lit_547);
DEFLIT(lit_662);
DEFLIT(lit_516);
DEFLIT(lit_263);
DEFLIT(lit_137);
DEFLIT(lit_395);
DEFLIT(lit_6);
DEFLIT(lit_331);
DEFLIT(lit_610);
DEFLIT(lit_175);
DEFLIT(lit_650);
DEFLIT(lit_309);
DEFLIT(lit_306);
DEFLIT(lit_634);
DEFLIT(lit_732);
DEFLIT(lit_111);
DEFLIT(lit_681);
DEFLIT(lit_124);
DEFLIT(lit_771);
DEFLIT(lit_651);
DEFLIT(lit_773);
DEFLIT(lit_494);
DEFLIT(lit_278);
DEFLIT(lit_625);
DEFLIT(lit_742);
DEFLIT(lit_93);
DEFLIT(lit_468);
DEFLIT(lit_406);
DEFLIT(lit_396);
DEFLIT(lit_185);
DEFLIT(lit_398);
DEFLIT(lit_373);
DEFLIT(lit_506);
DEFLIT(lit_332);
DEFLIT(lit_167);
DEFLIT(lit_350);
DEFLIT(lit_544);
DEFLIT(lit_481);
DEFLIT(lit_190);
DEFLIT(lit_752);
DEFLIT(lit_478);
DEFLIT(lit_719);
DEFLIT(lit_314);
DEFLIT(lit_563);
DEFLIT(lit_119);
DEFLIT(lit_134);
DEFLIT(lit_706);
DEFLIT(lit_325);
DEFLIT(lit_389);
DEFLIT(lit_128);
DEFLIT(lit_612);
DEFLIT(lit_122);
DEFLIT(lit_549);
DEFLIT(lit_737);
DEFLIT(lit_790);
DEFLIT(lit_747);
DEFLIT(lit_189);
DEFLIT(lit_469);
DEFLIT(lit_360);
DEFLIT(lit_69);
DEFLIT(lit_694);
DEFLIT(lit_664);
DEFLIT(lit_794);
DEFLIT(lit_143);
DEFLIT(lit_668);
DEFLIT(lit_538);
DEFLIT(lit_147);
DEFLIT(lit_487);
DEFLIT(lit_717);
DEFLIT(lit_730);
DEFLIT(lit_255);
DEFLIT(lit_446);
DEFLIT(lit_570);
DEFLIT(lit_232);
DEFLIT(lit_778);
DEFLIT(lit_176);
DEFLIT(lit_157);
DEFLIT(lit_222);
DEFLIT(lit_224);
DEFLIT(lit_733);
DEFLIT(lit_29);
DEFLIT(lit_472);
DEFLIT(lit_239);
DEFLIT(lit_310);
DEFLIT(lit_45);
DEFLIT(lit_443);
DEFLIT(lit_293);
DEFLIT(lit_670);
DEFLIT(lit_404);
DEFLIT(lit_333);
DEFLIT(lit_467);
DEFLIT(lit_198);
DEFLIT(lit_179);
DEFLIT(lit_408);
DEFLIT(lit_132);
DEFLIT(lit_667);
DEFLIT(lit_409);
DEFLIT(lit_800);
DEFLIT(lit_448);
DEFLIT(lit_1);
DEFLIT(lit_772);
DEFLIT(lit_711);
DEFLIT(lit_138);
DEFLIT(lit_246);
DEFLIT(lit_142);
DEFLIT(lit_572);
DEFLIT(lit_470);
DEFLIT(lit_476);
DEFLIT(lit_323);
DEFLIT(lit_767);
DEFLIT(lit_431);
DEFLIT(lit_804);
DEFLIT(lit_561);
DEFLIT(lit_73);
DEFLIT(lit_283);
DEFLIT(lit_619);
DEFLIT(lit_461);
DEFLIT(lit_369);
DEFLIT(lit_20);
DEFLIT(lit_675);
DEFLIT(lit_541);
DEFLIT(lit_340);
DEFLIT(lit_361);
DEFLIT(lit_163);
DEFLIT(lit_172);
DEFLIT(lit_617);
DEFLIT(lit_419);
DEFLIT(lit_148);
DEFLIT(lit_31);
DEFLIT(lit_437);
DEFLIT(lit_606);
DEFLIT(lit_786);
DEFLIT(lit_788);
DEFLIT(lit_444);
DEFLIT(lit_78);
DEFLIT(lit_699);
DEFLIT(lit_227);
DEFLIT(lit_86);
DEFLIT(lit_585);
DEFLIT(lit_9);
DEFLIT(lit_76);
DEFLIT(lit_40);
DEFLIT(lit_411);
DEFLIT(lit_598);
DEFLIT(lit_35);
DEFLIT(lit_460);
DEFLIT(lit_114);
DEFLIT(lit_676);
DEFLIT(lit_385);
DEFLIT(lit_365);
DEFLIT(lit_388);
DEFLIT(lit_17);
DEFLIT(lit_405);
DEFLIT(lit_61);
DEFLIT(lit_410);
DEFLIT(lit_225);
DEFLIT(lit_320);
DEFLIT(lit_418);
DEFLIT(lit_144);
DEFLIT(lit_576);
DEFLIT(lit_351);
DEFLIT(lit_328);
DEFLIT(lit_665);
DEFLIT(lit_500);
DEFLIT(lit_600);
DEFLIT(lit_345);
DEFLIT(lit_72);
DEFLIT(lit_30);
DEFLIT(lit_757);
DEFLIT(lit_718);
DEFLIT(lit_479);
DEFLIT(lit_402);
DEFLIT(lit_690);
DEFLIT(lit_618);
DEFLIT(lit_181);
DEFLIT(lit_386);
DEFLIT(lit_492);
DEFLIT(lit_387);
DEFLIT(lit_168);
DEFLIT(lit_24);
DEFLIT(lit_414);
DEFLIT(lit_364);
DEFLIT(lit_188);
DEFLIT(lit_397);
DEFLIT(lit_815);
DEFLIT(lit_382);
DEFLIT(lit_534);
DEFLIT(lit_801);
DEFLIT(lit_417);
DEFLIT(lit_7);
DEFLIT(lit_206);
DEFLIT(lit_642);
DEFLIT(lit_762);
DEFLIT(lit_702);
DEFLIT(lit_601);
DEFLIT(lit_569);
DEFLIT(lit_377);
DEFLIT(lit_87);
DEFLIT(lit_160);
DEFLIT(lit_427);
DEFLIT(lit_63);
DEFLIT(lit_208);
DEFLIT(lit_399);
DEFLIT(lit_56);
DEFLIT(lit_84);
DEFLIT(lit_102);
DEFLIT(lit_490);
DEFLIT(lit_11);
DEFLIT(lit_121);
DEFLIT(lit_603);
DEFLIT(lit_499);
DEFLIT(lit_356);
DEFLIT(lit_65);
DEFLIT(lit_596);
DEFLIT(lit_218);
DEFLIT(lit_275);
DEFLIT(lit_811);
DEFLIT(lit_783);
DEFLIT(lit_793);
DEFLIT(lit_23);
DEFLIT(lit_400);
DEFLIT(lit_687);
DEFLIT(lit_626);
DEFLIT(lit_423);
DEFLIT(lit_307);
DEFLIT(lit_83);
DEFLIT(lit_680);
DEFLIT(lit_551);
DEFLIT(lit_511);
DEFLIT(lit_498);
DEFLIT(lit_466);
DEFLIT(lit_518);
DEFLIT(lit_0);
DEFLIT(lit_66);
DEFLIT(lit_578);
DEFLIT(lit_535);
DEFLIT(lit_346);
DEFLIT(lit_349);
DEFLIT(lit_337);
DEFLIT(lit_193);
DEFLIT(lit_517);
DEFLIT(lit_392);
DEFLIT(lit_583);
DEFLIT(lit_296);
DEFLIT(lit_451);
DEFLIT(lit_501);
DEFLIT(lit_450);
DEFLIT(lit_368);
DEFLIT(lit_679);
DEFLIT(lit_734);
DEFLIT(lit_728);
DEFLIT(lit_531);
DEFLIT(lit_316);
DEFLIT(lit_338);
DEFLIT(lit_607);
DEFLIT(lit_609);
DEFLIT(lit_735);
DEFLIT(lit_96);
DEFLIT(lit_326);
DEFLIT(lit_464);
DEFLIT(lit_330);
DEFLIT(lit_91);
DEFLIT(lit_748);
DEFLIT(lit_205);
DEFLIT(lit_62);
DEFLIT(lit_425);
DEFLIT(lit_217);
DEFLIT(lit_582);
DEFLIT(lit_139);
DEFLIT(lit_14);
DEFLIT(lit_595);

/* FUNCTIONS: */

LOCFOR(fun_x_1854_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_ast_error_3);
LOCFOR(fun_program_type_4);
LOCFOR(fun_program_type_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_program_line_7);
LOCFOR(fun_program_line_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_program_register_10);
LOCFOR(fun_program_register_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_binding_value_13);
LOCFOR(fun_binding_value_setter_14);
LOCFOR(fun_15);
LOCFOR(fun_binding_mutableQ_16);
LOCFOR(fun_binding_mutableQ_setter_17);
LOCFOR(fun_18);
LOCFOR(fun_binding_dynamic_extentQ_19);
LOCFOR(fun_binding_dynamic_extentQ_setter_20);
LOCFOR(fun_21);
LOCFOR(fun_binding_dottedQ_22);
LOCFOR(fun_binding_dottedQ_setter_23);
LOCFOR(fun_24);
LOCFOR(fun_binding_closed_overQ_25);
LOCFOR(fun_binding_closed_overQ_setter_26);
LOCFOR(fun_27);
LOCFOR(fun_binding_index_28);
LOCFOR(fun_binding_index_setter_29);
LOCFOR(fun_30);
LOCFOR(fun_compile_time_program_31);
LOCFOR(fun_compile_time_program_setter_32);
LOCFOR(fun_reference_binding_33);
LOCFOR(fun_reference_binding_setter_34);
LOCFOR(fun_reference_called_functionQ_35);
LOCFOR(fun_reference_called_functionQ_setter_36);
LOCFOR(fun_37);
LOCFOR(fun_reference_frame_number_38);
LOCFOR(fun_reference_frame_number_setter_39);
LOCFOR(fun_reference_frame_offset_40);
LOCFOR(fun_reference_frame_offset_setter_41);
LOCFOR(fun_boundQ_reference_42);
LOCFOR(fun_boundQ_reference_setter_43);
LOCFOR(fun_boundQ_default_44);
LOCFOR(fun_boundQ_default_setter_45);
LOCFOR(fun_assignment_form_46);
LOCFOR(fun_assignment_form_setter_47);
LOCFOR(fun_assignment_reference_48);
LOCFOR(fun_assignment_reference_setter_49);
LOCFOR(fun_assignment_binding_50);
LOCFOR(fun_assignment_binding_setter_51);
LOCFOR(fun_signature_bindings_52);
LOCFOR(fun_signature_bindings_setter_53);
LOCFOR(fun_54);
LOCFOR(fun_signature_names_55);
LOCFOR(fun_signature_names_setter_56);
LOCFOR(fun_57);
LOCFOR(fun_signature_specs_58);
LOCFOR(fun_signature_specs_setter_59);
LOCFOR(fun_60);
LOCFOR(fun_signature_naryQ_61);
LOCFOR(fun_signature_naryQ_setter_62);
LOCFOR(fun_63);
LOCFOR(fun_signature_arity_64);
LOCFOR(fun_signature_arity_setter_65);
LOCFOR(fun_66);
LOCFOR(fun_signature_value_67);
LOCFOR(fun_signature_value_setter_68);
LOCFOR(fun_69);
LOCFOR(fun_req_sig_specs_70);
LOCFOR(fun_function_binding_71);
LOCFOR(fun_function_binding_setter_72);
LOCFOR(fun_73);
LOCFOR(fun_function_debug_name_74);
LOCFOR(fun_function_debug_name_setter_75);
LOCFOR(fun_76);
LOCFOR(fun_function_signature_77);
LOCFOR(fun_function_signature_setter_78);
FUNFOR(YevalSastYfunction_bindings);
FUNFOR(YevalSastYfunction_names);
FUNFOR(YevalSastYfunction_specs);
FUNFOR(YevalSastYfunction_naryQ);
FUNFOR(YevalSastYfunction_arity);
FUNFOR(YevalSastYfunction_value);
LOCFOR(fun_function_kind_85);
FUNFOR(YevalSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_87);
LOCFOR(fun_as_lst_88);
LOCFOR(fun_x_1860_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_function_body_92);
LOCFOR(fun_function_body_setter_93);
LOCFOR(fun_94);
LOCFOR(fun_function_index_95);
LOCFOR(fun_function_index_setter_96);
LOCFOR(fun_97);
LOCFOR(fun_function_temporaries_98);
LOCFOR(fun_function_temporaries_setter_99);
LOCFOR(fun_100);
LOCFOR(fun_function_registers_101);
LOCFOR(fun_function_registers_setter_102);
LOCFOR(fun_103);
LOCFOR(fun_function_loop_104);
LOCFOR(fun_function_loop_setter_105);
LOCFOR(fun_106);
LOCFOR(fun_function_source_107);
LOCFOR(fun_function_source_setter_108);
LOCFOR(fun_109);
LOCFOR(fun_function_frame_len_110);
LOCFOR(fun_function_frame_len_setter_111);
LOCFOR(fun_112);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_nul_114);
LOCFOR(fun_function_ref_count_115);
LOCFOR(fun_function_ref_count_setter_116);
LOCFOR(fun_117);
LOCFOR(fun_function_free_118);
LOCFOR(fun_function_free_setter_119);
LOCFOR(fun_120);
LOCFOR(fun_incf_ref_count_121);
LOCFOR(fun_incf_ref_count_122);
LOCFOR(fun_function_kind_123);
LOCFOR(fun_function_adjectives_124);
LOCFOR(fun_function_adjectives_setter_125);
LOCFOR(fun_126);
LOCFOR(fun_function_kind_127);
LOCFOR(fun_function_kind_128);
LOCFOR(fun_alternative_condition_129);
LOCFOR(fun_alternative_condition_setter_130);
LOCFOR(fun_alternative_consequent_131);
LOCFOR(fun_alternative_consequent_setter_132);
LOCFOR(fun_alternative_alternant_133);
LOCFOR(fun_alternative_alternant_setter_134);
LOCFOR(fun_loop_bindings_135);
LOCFOR(fun_loop_bindings_setter_136);
LOCFOR(fun_loop_body_137);
LOCFOR(fun_loop_body_setter_138);
LOCFOR(fun_loop_continue_139);
LOCFOR(fun_loop_continue_setter_140);
LOCFOR(fun_141);
FUNFOR(YevalSastYsequential);
LOCFOR(fun_nul_143);
LOCFOR(fun_constant_value_144);
LOCFOR(fun_constant_value_setter_145);
LOCFOR(fun_constant_index_146);
LOCFOR(fun_constant_index_setter_147);
LOCFOR(fun_application_arguments_148);
LOCFOR(fun_application_arguments_setter_149);
LOCFOR(fun_application_tailQ_150);
LOCFOR(fun_application_tailQ_setter_151);
LOCFOR(fun_152);
LOCFOR(fun_application_loop_153);
LOCFOR(fun_application_loop_setter_154);
LOCFOR(fun_application_tailQ_155);
LOCFOR(fun_application_function_156);
LOCFOR(fun_application_function_setter_157);
LOCFOR(fun_application_knownQ_158);
LOCFOR(fun_application_knownQ_setter_159);
LOCFOR(fun_160);
LOCFOR(fun_application_next_methods_161);
LOCFOR(fun_application_next_methods_setter_162);
LOCFOR(fun_application_knownQ_163);
LOCFOR(fun_application_binding_164);
LOCFOR(fun_application_binding_setter_165);
LOCFOR(fun_fix_let_bindings_166);
LOCFOR(fun_fix_let_bindings_setter_167);
LOCFOR(fun_fix_let_types_168);
LOCFOR(fun_fix_let_types_setter_169);
LOCFOR(fun_fix_let_arguments_170);
LOCFOR(fun_fix_let_arguments_setter_171);
LOCFOR(fun_fix_let_body_172);
LOCFOR(fun_fix_let_body_setter_173);
FUNFOR(YevalSastYfab_list);
LOCFOR(fun_nul_175);
FUNFOR(YevalSastYarguments);
LOCFOR(fun_nul_177);
LOCFOR(fun_locals_bindings_178);
LOCFOR(fun_locals_bindings_setter_179);
LOCFOR(fun_locals_functions_180);
LOCFOR(fun_locals_functions_setter_181);
LOCFOR(fun_locals_body_182);
LOCFOR(fun_locals_body_setter_183);
LOCFOR(fun_bind_exit_main_fun_184);
LOCFOR(fun_bind_exit_main_fun_setter_185);
LOCFOR(fun_bind_exit_lightQ_186);
LOCFOR(fun_bind_exit_lightQ_setter_187);
LOCFOR(fun_188);
LOCFOR(fun_unwind_protect_protected_thunk_189);
LOCFOR(fun_unwind_protect_protected_thunk_setter_190);
LOCFOR(fun_unwind_protect_cleanup_thunk_191);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_192);
LOCFOR(fun_monitor_type_193);
LOCFOR(fun_monitor_type_setter_194);
LOCFOR(fun_monitor_info_195);
LOCFOR(fun_monitor_info_setter_196);
LOCFOR(fun_monitor_test_197);
LOCFOR(fun_monitor_test_setter_198);
LOCFOR(fun_monitor_handler_199);
LOCFOR(fun_monitor_handler_setter_200);
LOCFOR(fun_monitor_main_thunk_201);
LOCFOR(fun_monitor_main_thunk_setter_202);
LOCFOR(fun_ast_walkX_203);
LOCFOR(fun_ast_walk_204);
LOCFOR(fun_ast_walk_205);
LOCFOR(fun_ast_copy_206);
LOCFOR(fun_ast_copy_207);
LOCFOR(fun_objectify_208);
LOCFOR(fun_objectify_list_209);
LOCFOR(fun_objectify_list_210);
FUNFOR(YevalSastYmaybe_log_dependency);
FUNFOR(YevalSastYmacro_expander);
LOCFOR(fun_objectify_list_213);
LOCFOR(fun_objectify_214);
LOCFOR(fun_objectify_215);
LOCFOR(fun_objectify_216);
LOCFOR(fun_objectify_217);
LOCFOR(fun_objectify_218);
LOCFOR(fun_objectify_quotation_219);
LOCFOR(fun_objectify_quotation_220);
LOCFOR(fun_objectify_quotation_221);
LOCFOR(fun_objectify_raw_222);
LOCFOR(fun_objectify_boundQ_223);
LOCFOR(fun_objectify_compile_time_224);
LOCFOR(fun_objectify_alternative_225);
LOCFOR(fun_loop_226);
LOCFOR(fun_sequentialize_227);
LOCFOR(fun_transform_defs_228);
LOCFOR(fun_objectify_sequential_229);
LOCFOR(fun_230);
LOCFOR(fun_objectify_application_231);
LOCFOR(fun_232);
LOCFOR(fun_objectify_application_233);
LOCFOR(fun_234);
LOCFOR(fun_objectify_application_235);
LOCFOR(fun_process_closed_application_236);
LOCFOR(fun_pack_args_237);
LOCFOR(fun_process_nary_closed_application_238);
LOCFOR(fun_convert2arguments_239);
LOCFOR(fun_objectify_assignment_240);
LOCFOR(fun_objectify_assignment_241);
LOCFOR(fun_objectify_assignment_using_242);
LOCFOR(fun_objectify_assignment_using_243);
LOCFOR(fun_objectify_assignment_using_244);
LOCFOR(fun_objectify_assignment_using_245);
LOCFOR(fun_objectify_assignment_using_246);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_248);
LOCFOR(fun_objectify_definition_249);
LOCFOR(fun_objectify_variable_definition_250);
LOCFOR(fun_objectify_dynamic_definition_251);
LOCFOR(fun_expand_252);
FUNFOR(YevalSastYPPPmacro);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_255);
LOCFOR(fun_objectify_function_definition_256);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_258);
LOCFOR(fun_objectify_generic_definition_259);
LOCFOR(fun_objectify_method_definition_260);
LOCFOR(fun_261);
LOCFOR(fun_262);
LOCFOR(fun_263);
LOCFOR(fun_264);
LOCFOR(fun_objectify_function_source_265);
LOCFOR(fun_266);
LOCFOR(fun_267);
LOCFOR(fun_objectify_function_using_268);
LOCFOR(fun_objectify_function_269);
LOCFOR(fun_objectify_signature_270);
LOCFOR(fun_compute_local_reference_offsets_271);
LOCFOR(fun_objectify_binding_272);
LOCFOR(fun_binding_reference_class_273);
LOCFOR(fun_objectify_binding_274);
LOCFOR(fun_objectify_binding_275);
LOCFOR(fun_default_type_276);
LOCFOR(fun_objectify_free_global_reference_277);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_279);
LOCFOR(fun_objectify_symbol_280);
LOCFOR(fun_ftype_281);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_nul_283);
LOCFOR(fun_284);
LOCFOR(fun_285);
LOCFOR(fun_286);
LOCFOR(fun_objectify_locals_287);
LOCFOR(fun_objectify_bind_exit_288);
LOCFOR(fun_objectify_unwind_protect_289);
LOCFOR(fun_objectify_monitor_290);
LOCFOR(fun_291);
LOCFOR(fun_292);
LOCFOR(fun_293);
LOCFOR(fun_294);
LOCFOR(fun_295);
LOCFOR(fun_objectify_export_296);
LOCFOR(fun_297);
LOCFOR(fun_objectify_useSexport_module_298);
LOCFOR(fun_299);
LOCFOR(fun_objectify_use_include_300);
LOCFOR(fun_301);
LOCFOR(fun_objectify_use_library_302);
LOCFOR(fun_303);
LOCFOR(fun_use_mod_304);
LOCFOR(fun_use_c_mod_305);
LOCFOR(fun_objectify_use_module_306);
LOCFOR(fun_307);
LOCFOR(fun_objectify_use_mangle_module_308);
LOCFOR(fun_expand_bind_list_309);
LOCFOR(fun_expand_bind_list_310);
LOCFOR(fun_expand_bind_list_311);
LOCFOR(fun_expand_bind_listT_312);
LOCFOR(fun_expand_bind_listT_313);
LOCFOR(fun_expand_bind_element_314);
LOCFOR(fun_expand_bind_element_315);
LOCFOR(fun_expand_pattern_316);
LOCFOR(fun_317);
LOCFOR(fun_expand_syntax_if_318);
LOCFOR(fun_r_extendT_319);
LOCFOR(fun_find_binding_320);
LOCFOR(fun_find_binding_321);
LOCFOR(fun_register_magic_binding_322);
LOCFOR(fun_magic_bindings_323);
LOCFOR(fun_x_1880_324);
LOCFOR(fun_325);
LOCFOR(fun_326);
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
LOCFOR(fun_pairize_349);
LOCFOR(fun_350);
LOCFOR(fun_objectify_define_property_351);
LOCFOR(fun_352);
LOCFOR(fun_353);
LOCFOR(fun_354);
LOCFOR(fun_355);
LOCFOR(fun_356);
LOCFOR(fun_357);
LOCFOR(fun_ast_macro_expand_358);
LOCFOR(fun_359);
LOCFOR(fun_360);
LOCFOR(fun_361);
LOCFOR(fun_362);
LOCFOR(fun_363);
LOCFOR(fun_364);
LOCFOR(fun_365);
LOCFOR(fun_366);
LOCFOR(fun_367);
LOCFOR(fun_install_initial_bindings_368);
LOCFOR(fun_369);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_371);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_ast_contains_funQ_381);
LOCFOR(fun_walk_382);
LOCFOR(fun_383);
LOCFOR(fun_ast_contains_funQ_384);
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

LOCCODEDEF(fun_x_1854_0) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_4),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P return_;
  P saved_dependentF5210;
  P x_1853F5209;
  P x_1853F5208;
  P x_1853F5207;
  P x_1853F5206;
  P x_1853F5205;
  P bodyF5204;
  P dependentF5203;
  P x_1853F5202;
  P x_1854F5201;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_1854_0,2);
  x_1854F5201 = T38;
  FUNINIT(x_1854F5201, 2,FREEREF(0),return_);
  x_1853F5202 = FREEREF(0);
  dependentF5203 = YPfalse;
  bodyF5204 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1853F5202,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1853F5202,LITREF(lit_4),x_1854F5201);
    x_1853F5205 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1853F5205,x_1854F5201);
    dependentF5203 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1853F5205);
    x_1853F5206 = T8;
    bodyF5204 = x_1853F5206;
    x_1853F5207 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1853F5207,x_1854F5201);
    x_1853F5208 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1853F5208,x_1854F5201);
    T6 = CALL1(1,VARREF(Ytail),x_1853F5207);
    x_1853F5209 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1853F5209,x_1854F5201);
  } else {
    T10 = CALL2(1,x_1854F5201,LITREF(lit_5),x_1853F5202);
  }
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF5210 = T37;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T17 = CALL1(1,VARREF(Ylst),saved_dependentF5210);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_8));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_8));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T24 = dependentF5203;
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T31 = bodyF5204;
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_8));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T36 = CALL1(1,VARREF(Ylst),saved_dependentF5210);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_8));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T32,LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T19,T25,LITREF(lit_8));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_2) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_error_3) {
  P message_,arguments_;
  P T0,T1;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLsimple_ast_errorG),VARREF(YgooSconditionsYcondition_message),message_,VARREF(YgooSconditionsYcondition_arguments),arguments_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_type_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_type_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_6) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(VARREF(YgooStypesYDbot));
}

LOCCODEDEF(fun_program_line_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_line_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_program_register_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_register_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_value_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_value_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_mutableQ_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_mutableQ_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_18) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_dynamic_extentQ_19) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_dynamic_extentQ_setter_20) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_21) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_binding_dottedQ_22) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_dottedQ_setter_23) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_closed_overQ_25) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_closed_overQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_closed_overQ_setter_26) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_closed_overQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_27) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_index_28) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_index_setter_29) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_30) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_compile_time_program_31) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_compile_time_program_setter_32) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_binding_33) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_binding_setter_34) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_called_functionQ_35) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_called_functionQ_setter_36) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_reference_frame_number_38) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_frame_number_setter_39) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_frame_offset_40) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_frame_offset_setter_41) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_reference_42) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_reference_setter_43) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_default_44) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_default_setter_45) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_form_46) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_form_setter_47) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_reference_48) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_reference_setter_49) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_binding_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_binding_setter_51) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_bindings_52) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_bindings_setter_53) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_54) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_signature_names_55) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_names_setter_56) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_57) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_signature_specs_58) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_specs_setter_59) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_60) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_signature_naryQ_61) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_naryQ_setter_62) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_63) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_signature_arity_64) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_arity_setter_65) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_66) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_signature_value_67) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_value_setter_68) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_69) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_req_sig_specs_70) {
  P sig_;
  P typesF5211;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(sig_, 0);
  T6 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF5211 = T6;
  T2 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),typesF5211);
    T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF5211,YPint((P)0),T4);
    T0 = T3;
  } else {
    T0 = typesF5211;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_binding_71) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_binding_setter_72) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_debug_name_74) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_debug_name_setter_75) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_76) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_signature_77) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_signature_setter_78) {
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

FUNCODEDEF(YevalSastYfunction_names) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_names),T1);
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

FUNCODEDEF(YevalSastYfunction_arity) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_arity),T2);
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

LOCCODEDEF(fun_function_kind_85) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_194));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1856F5214;
  P x_1855F5213;
  P bF5212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  T8 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF5212 = T8;
  x_1855F5213 = bF5212;
  x_1856F5214 = VARREF(YisaQ);
  T1 = CALL2(1,x_1856F5214,x_1855F5213,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF5212);
    T0 = T2;
  } else {
    T4 = CALL2(1,x_1856F5214,x_1855F5213,VARREF(YevalSmoduleYLmodule_bindingG));
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),bF5212);
      T7 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bF5212);
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_197),T6,T7);
      T3 = T5;
    } else {
      T3 = LITREF(lit_198);
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_invalidate_dependent_87) {
  P dependent_,dependable_,dtype_;
  P nameF5215;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF5215 = T8;
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_201),nameF5215);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T4 != YPfalse) {
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_202),nameF5215);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_203),nameF5215);
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

LOCCODEDEF(fun_as_lst_88) {
  P e_;
  P eF5217;
  P resF5216;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  resF5216 = Ynil;
  eF5217 = e_;
  LOOP_251: {
    P a251_0,a251_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eF5217);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF5216);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(Yhead),eF5217);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF5216);
      T6 = CALL1(1,VARREF(Ytail),eF5217);
      a251_0 = T4;
      a251_1 = T6;
      resF5216 = a251_0;
      eF5217 = a251_1;
      goto LOOP_251;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1860_89) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_211),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_90) {
  P return_;
  P x_1859F5224;
  P x_1859F5223;
  P x_1859F5222;
  P x_1859F5221;
  P nameF5220;
  P x_1859F5219;
  P x_1860F5218;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1860_89,2);
  x_1860F5218 = T17;
  FUNINIT(x_1860F5218, 2,FREEREF(0),return_);
  x_1859F5219 = FREEREF(0);
  nameF5220 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1859F5219,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1859F5219,LITREF(lit_211),x_1860F5218);
    x_1859F5221 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1859F5221,x_1860F5218);
    nameF5220 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1859F5221);
    x_1859F5222 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1859F5222,x_1860F5218);
    x_1859F5223 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1859F5223,x_1860F5218);
    T5 = CALL1(1,VARREF(Ytail),x_1859F5222);
    x_1859F5224 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1859F5224,x_1860F5218);
  } else {
    T9 = CALL2(1,x_1860F5218,LITREF(lit_5),x_1859F5219);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T13 = nameF5220;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T15 = CALL2(1,VARREF(YgooSmacrosYcat),T16,LITREF(lit_8));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T14,LITREF(lit_8));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_91) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_90,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_body_92) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_body_setter_93) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_94) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_index_95) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_index_setter_96) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_97) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_function_temporaries_98) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_temporaries_setter_99) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_100) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_function_registers_101) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_registers_setter_102) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_103) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_loop_104) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_loop_setter_105) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_106) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_source_107) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_source_setter_108) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_109) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_frame_len_110) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_frame_len_setter_111) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_112) {
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

LOCCODEDEF(fun_nul_114) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_nul));
}

LOCCODEDEF(fun_function_ref_count_115) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_ref_count_setter_116) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_117) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_function_free_118) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_free_setter_119) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_120) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfree_environmentG));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_incf_ref_count_121) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_incf_ref_count_122) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_ref_count),x_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_kind_123) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_269));
}

LOCCODEDEF(fun_function_adjectives_124) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_adjectives_setter_125) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_126) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_function_kind_127) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_277));
}

LOCCODEDEF(fun_function_kind_128) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_280));
}

LOCCODEDEF(fun_alternative_condition_129) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_condition_setter_130) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_consequent_131) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_consequent_setter_132) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_alternant_133) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_alternant_setter_134) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_bindings_135) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_bindings_setter_136) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_body_137) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_body_setter_138) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_continue_139) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_continue));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_continue_setter_140) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_continue));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_141) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
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

LOCCODEDEF(fun_nul_143) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDsequential_nul));
}

LOCCODEDEF(fun_constant_value_144) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_constant_value_setter_145) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_constant_index_146) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_constant_index_setter_147) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_arguments_148) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_arguments_setter_149) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_tailQ_150) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_tailQ_setter_151) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_152) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_application_loop_153) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_loop_setter_154) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_tailQ_155) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_application_function_156) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_function_setter_157) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_knownQ_158) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_knownQ_setter_159) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_160) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_application_next_methods_161) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_next_methods_setter_162) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_knownQ_163) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_application_binding_164) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_binding_setter_165) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_bindings_166) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_bindings_setter_167) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_types_168) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_types_setter_169) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_arguments_170) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_arguments_setter_171) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_body_172) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_body_setter_173) {
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

LOCCODEDEF(fun_nul_175) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfab_list_nul));
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

LOCCODEDEF(fun_nul_177) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDarguments_nul));
}

LOCCODEDEF(fun_locals_bindings_178) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_bindings_setter_179) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_functions_180) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_functions_setter_181) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_body_182) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_body_setter_183) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_main_fun_184) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_main_fun_setter_185) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_lightQ_186) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_lightQ_setter_187) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_188) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_unwind_protect_protected_thunk_189) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_protected_thunk_setter_190) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_cleanup_thunk_191) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_cleanup_thunk_setter_192) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_type_193) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_type_setter_194) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_info_195) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_info_setter_196) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_test_197) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_test_setter_198) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_handler_199) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_handler_setter_200) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_main_thunk_201) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_main_thunk_setter_202) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_walkX_203) {
  P g_,o_,args_;
  P xF5230;
  P tmpF5229;
  P setterF5228;
  P getterF5227;
  P propF5226;
  P x_1861F5225;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T20 = CALL1(1,VARREF(Yprops_of),o_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1861F5225 = T19;
  LOOP_252: {
    P a252_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1861F5225);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1861F5225);
      propF5226 = T18;
      T17 = CALL1(1,VARREF(Yprop_getter),propF5226);
      getterF5227 = T17;
      T16 = CALL1(1,VARREF(Yprop_setter),propF5226);
      setterF5228 = T16;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF5227,VARREF(YevalSastYbinding_value));
      tmpF5229 = T6;
      if (tmpF5229 != YPfalse) {
        T4 = tmpF5229;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF5227,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF5227);
        if (T8 != YPfalse) {
          T13 = CALL1(0,getterF5227,o_);
          xF5230 = T13;
          T10 = CALL2(1,VARREF(YisaQ),xF5230,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T12 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF5230,args_);
            T11 = CALL2(1,setterF5228,T12,o_);
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
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1861F5225);
      a252_0 = T15;
      x_1861F5225 = a252_0;
      goto LOOP_252;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ast_walk_204) {
  P g_,o_,args_;
  P xF5235;
  P tmpF5234;
  P getterF5233;
  P propF5232;
  P x_1863F5231;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T18 = CALL1(1,VARREF(Yprops_of),o_);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1863F5231 = T17;
  LOOP_253: {
    P a253_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1863F5231);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1863F5231);
      propF5232 = T16;
      T15 = CALL1(1,VARREF(Yprop_getter),propF5232);
      getterF5233 = T15;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF5233,VARREF(YevalSastYbinding_value));
      tmpF5234 = T6;
      if (tmpF5234 != YPfalse) {
        T4 = tmpF5234;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF5233,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF5233);
        if (T8 != YPfalse) {
          T12 = CALL1(0,getterF5233,o_);
          xF5235 = T12;
          T10 = CALL2(1,VARREF(YisaQ),xF5235,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T11 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF5235,args_);
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
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1863F5231);
      a253_0 = T14;
      x_1863F5231 = a253_0;
      goto LOOP_253;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ast_walk_205) {
  P g_,o_,args_;
  P eF5237;
  P xF5236;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  xF5236 = o_;
  LOOP_254: {
    P a254_0;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF5236);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(Yhead),xF5236);
      eF5237 = T7;
      T3 = CALL2(1,VARREF(YisaQ),eF5237,VARREF(YevalSastYLprogramG));
      if (T3 != YPfalse) {
        T4 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,eF5237,args_);
      } else {
      }
      T6 = CALL1(1,VARREF(Ytail),xF5236);
      a254_0 = T6;
      xF5236 = a254_0;
      goto LOOP_254;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_copy_206) {
  P x_;
  P copyF5238;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSclassYclone),x_);
  copyF5238 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF5238);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF5238);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_copy_207) {
  P x_;
  P next_metsF5239;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T6 = (P)YPfun_reg();
    T7 = (P)YPnext_methods();
    T5 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T6,T7,x_);
    next_metsF5239 = T5;
    T3 = CALL1(1,VARREF(Yhead),next_metsF5239);
    T4 = CALL1(1,VARREF(Ytail),next_metsF5239);
    T2 = CALL4(1,VARREF(YgooSmacrosYnapp),T3,T4,x_,Ynil);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_208) {
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

LOCCODEDEF(fun_objectify_list_209) {
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

LOCCODEDEF(fun_objectify_list_210) {
  P f_,e_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),f_);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),T2);
  T0 = CALL3(1,T1,e_,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYmaybe_log_dependency) {
  P dependable_,dtype_;
  P T0,T1;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dtype_, 1);
  if (DYNREF(YevalSastYTcurrent_dependentT) != YPfalse) {
    CALL3(1,VARREF(YevalSdependencyYlog_dependency),dependable_,DYNREF(YevalSastYTcurrent_dependentT),dtype_);
    T1 = CALL1(1,VARREF(YevalSmoduleYtransaction_register_dependent),DYNREF(YevalSastYTcurrent_dependentT));
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
  T0 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),macro_binding_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_list_213) {
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

LOCCODEDEF(fun_objectify_214) {
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

LOCCODEDEF(fun_objectify_215) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

LOCCODEDEF(fun_objectify_216) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

LOCCODEDEF(fun_objectify_217) {
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

LOCCODEDEF(fun_objectify_218) {
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

LOCCODEDEF(fun_objectify_quotation_219) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_quotation_220) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_quotation_221) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_raw_222) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLraw_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_boundQ_223) {
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

LOCCODEDEF(fun_objectify_compile_time_224) {
  P program_,r_,tailQ_,rtQ_;
  P astF5243;
  P target_envF5242;
  P syntax_envF5241;
  P modF5240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  modF5240 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYmodule_syntax_environment),modF5240);
  syntax_envF5241 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF5240);
  target_envF5242 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF5241,tailQ_);
  astF5243 = T5;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF5243);
  if (rtQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSlogYNEE),syntax_envF5241,target_envF5242);
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

LOCCODEDEF(fun_objectify_alternative_225) {
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

LOCCODEDEF(fun_loop_226) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLsequentialG));
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

LOCCODEDEF(fun_sequentialize_227) {
  P eT_;
  P loopF5244;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),eT_);
    T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),T5);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),eT_);
      T3 = T6;
    } else {
      T8 = FUNSHELL(1,fun_loop_226,1);
      loopF5244 = T8;
      FUNINIT(loopF5244, 1,loopF5244);
      T7 = CALL1(1,loopF5244,eT_);
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_transform_defs_228) {
  P eT_;
  P eF5245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T22 = CALL1(1,VARREF(Yhead),eT_);
    eF5245 = T22;
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF5245);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
      T13 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF5245);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF5245);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_8));
      T10 = CALL1(1,VARREF(Ylst),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYcat),T10,LITREF(lit_8));
      T8 = CALL1(1,VARREF(Ylst),T9);
      T17 = CALL1(1,VARREF(Ytail),eT_);
      T16 = CALL1(1,VARREF(YevalSastYtransform_defs),T17);
      T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T16,LITREF(lit_8));
      T5 = CALL1(1,VARREF(Ylst),T6);
      T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_8));
      T2 = T4;
    } else {
      T19 = CALL1(1,VARREF(Ylst),eF5245);
      T21 = CALL1(1,VARREF(Ytail),eT_);
      T20 = CALL1(1,VARREF(YevalSastYtransform_defs),T21);
      T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_8));
      T2 = T18;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_sequential_229) {
  P eT_,r_,tailQ_;
  P astsF5250;
  P headF5249;
  P tailQF5248;
  P eTF5247;
  P resF5246;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  resF5246 = Ynil;
  T12 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  eTF5247 = T12;
  LOOP_255: {
    P a255_0,a255_1;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),eTF5247);
    if (T2 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF5246);
      T1 = T3;
    } else {
      T11 = CALL1(1,VARREF(Ytail),eTF5247);
      T10 = CALL1(1,VARREF(YgooSmacrosYnulQ),T11);
      if (T10 != YPfalse) {
        T9 = tailQ_;
      } else {
        T9 = YPfalse;
      }
      tailQF5248 = T9;
      T8 = CALL1(1,VARREF(Yhead),eTF5247);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,r_,tailQF5248);
      headF5249 = T7;
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),headF5249,resF5246);
      T6 = CALL1(1,VARREF(Ytail),eTF5247);
      a255_0 = T5;
      a255_1 = T6;
      resF5246 = a255_0;
      eTF5247 = a255_1;
      goto LOOP_255;
      T1 = T4;
    }
  }
  astsF5250 = T1;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),astsF5250);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_230) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_231) {
  P ff_,eT_,r_,tailQ_;
  P eeTF5251;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T3 = FUNFAB(fun_230,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF5251 = T1;
  T0 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF5251,r_,tailQ_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_232) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_233) {
  P ff_,eT_,r_,tailQ_;
  P primF5254;
  P fvfF5253;
  P eeTF5252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = FUNFAB(fun_232,1,r_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,eT_);
  T6 = CALL1(1,VARREF(YevalSastYconvert2arguments),T7);
  eeTF5252 = T6;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF5253 = T5;
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_prop),fvfF5253);
  primF5254 = T4;
  if (primF5254 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYast_copy),primF5254);
    T1 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T2,eeTF5252,r_,tailQ_);
    T0 = T1;
  } else {
    T3 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF5253,VARREF(YevalSastYapplication_arguments),eeTF5252,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_234) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_235) {
  P ff_,eT_,r_,tailQ_;
  P eeTF5255;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T5 = FUNFAB(fun_234,1,r_);
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),T5,eT_);
  T3 = CALL1(1,VARREF(YevalSastYconvert2arguments),T4);
  eeTF5255 = T3;
  T0 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T2 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF5255,VARREF(YevalSastYapplication_tailQ),tailQ_);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_process_closed_application_236) {
  P f_,eT_,r_,tailQ_;
  P bF5257;
  P vTF5256;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T16 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF5256 = T16;
  T15 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF5257 = T15;
  T1 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
  if (T1 != YPfalse) {
    T2 = CALL4(1,VARREF(YevalSastYprocess_nary_closed_application),f_,eT_,r_,tailQ_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),eT_);
    T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSlogYE),T5,T6);
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
      T14 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_491),f_,eT_);
      T3 = T14;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pack_args_237) {
  P eT_,vT_,tT_;
  P dotted_typeF5259;
  P varF5258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
  T17 = CALL1(1,VARREF(Yhead),vT_);
  varF5258 = T17;
  T1 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF5258);
  if (T1 != YPfalse) {
    T7 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_496),FREEREF(0),YPfalse);
    dotted_typeF5259 = T7;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF5258);
    CALL2(1,VARREF(YevalSmoduleYbinding_type_setter),dotted_typeF5259,varF5258);
    CALL2(1,VARREF(Yhead_setter),dotted_typeF5259,tT_);
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_497));
    T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,eT_,LITREF(lit_8));
    T3 = CALL3(1,VARREF(YevalSastYobjectify),T4,FREEREF(0),YPfalse);
    T6 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLargumentsG));
    T2 = CALL2(1,VARREF(YevalSastYarguments),T3,T6);
    T0 = T2;
  } else {
    T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
    if (T9 != YPfalse) {
      T10 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_498),FREEREF(1),eT_);
      T8 = T10;
    } else {
      T12 = CALL1(1,VARREF(Yhead),eT_);
      T14 = CALL1(1,VARREF(Ytail),eT_);
      T15 = CALL1(1,VARREF(Ytail),vT_);
      T16 = CALL1(1,VARREF(Ytail),tT_);
      T13 = CALL3(0,FREEREF(2),T14,T15,T16);
      T11 = CALL2(1,VARREF(YevalSastYarguments),T12,T13);
      T8 = T11;
    }
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_process_nary_closed_application_238) {
  P f_,eT_,r_,tailQ_;
  P oF5262;
  P vTF5261;
  P pack_argsF5260;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T6 = FUNSHELL(1,fun_pack_args_237,3);
  pack_argsF5260 = T6;
  FUNINIT(pack_argsF5260, 3,r_,f_,pack_argsF5260);
  T5 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF5261 = T5;
  T1 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T2 = CALL3(1,pack_argsF5260,eT_,vTF5261,T3);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF5261,VARREF(YevalSastYfix_let_types),T1,VARREF(YevalSastYfix_let_arguments),T2,VARREF(YevalSastYfix_let_body),T4);
  oF5262 = T0;
UNLINK_STACK();
  RET(oF5262);
}

LOCCODEDEF(fun_convert2arguments_239) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLargumentsG));
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

LOCCODEDEF(fun_objectify_assignment_240) {
  P binding_,e_,r_,tailQ_;
  P opF5263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF5263 = T9;
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF5263);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF5263);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T7);
    T3 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T4,T6);
    T2 = CALL3(1,VARREF(YevalSastYobjectify),T3,r_,tailQ_);
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_503),e_);
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_241) {
  P binding_,e_,r_,tailQ_;
  P valF5265;
  P refF5264;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF5264 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF5265 = T1;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF5264,valF5265);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_using_242) {
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

LOCCODEDEF(fun_objectify_assignment_using_243) {
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

LOCCODEDEF(fun_objectify_assignment_using_244) {
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

LOCCODEDEF(fun_objectify_assignment_using_245) {
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

LOCCODEDEF(fun_objectify_assignment_using_246) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_511),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF5266;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
  T3 = CALL2(1,VARREF(YgooSlogYNEE),T4,LITREF(lit_514));
  tmpF5266 = T3;
  if (tmpF5266 != YPfalse) {
    T1 = tmpF5266;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_515));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSmoduleYbinding_kind_setter),new_kind_,binding_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_514));
    if (T7 != YPfalse) {
      T6 = YPtrue;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_516));
      if (T9 != YPfalse) {
        T8 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T12 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
          T11 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_517),T12,new_kind_);
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

LOCCODEDEF(fun_ast_define_binding_248) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF5274;
  P bindingF5273;
  P modF5272;
  P foreignQF5271;
  P tmpF5270;
  P modF5269;
  P grF5268;
  P existing_bindingF5267;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
  T15 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,r_);
  existing_bindingF5267 = T15;
  T14 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF5268 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),grF5268);
  modF5269 = T13;
  if (existing_bindingF5267 != YPfalse) {
    T10 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),existing_bindingF5267,modF5269);
    tmpF5270 = T10;
    if (tmpF5270 != YPfalse) {
      T9 = tmpF5270;
    } else {
      T9 = defining_methodQ_;
    }
    T8 = CALL1(1,VARREF(Ynot),T9);
    foreignQF5271 = T8;
    T1 = CALL1(1,VARREF(YevalSmoduleYbinding_freeQ),existing_bindingF5267);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSmoduleYbinding_freeQ_setter),YPfalse,existing_bindingF5267);
      if (foreignQF5271 != YPfalse) {
        T3 = CALL1(1,VARREF(YevalSmoduleYtransaction_register_implemented_binding),existing_bindingF5267);
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
    } else {
      if (foreignQF5271 != YPfalse) {
        T6 = CALL1(1,VARREF(YevalSmoduleYmodule_name),modF5269);
        T7 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),existing_bindingF5267);
        T5 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_520),T6,name_,T7);
        T4 = T5;
      } else {
        T4 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF5267,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF5267,kind_);
    T0 = existing_bindingF5267;
  } else {
    T12 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
    modF5272 = T12;
    T11 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),kind_,VARREF(YevalSmoduleYbinding_name),name_,VARREF(YevalSmoduleYbinding_freeQ),YPfalse,VARREF(YevalSmoduleYbinding_module),modF5272);
    bindingF5273 = T11;
    CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF5273,grF5268);
    T0 = bindingF5273;
  }
  bindingF5274 = T0;
  CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),modF5269,bindingF5274);
UNLINK_STACK();
  QRET(bindingF5274);
}

LOCCODEDEF(fun_objectify_definition_249) {
  P type_,kind_,var_,e_,r_;
  P defnF5277;
  P bindingF5276;
  P nameF5275;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(type_, 0);
  ARG(kind_, 1);
  ARG(var_, 2);
  ARG(e_, 3);
  ARG(r_, 4);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),var_);
  nameF5275 = T3;
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF5275,YPfalse,kind_);
  bindingF5276 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF5276,VARREF(YevalSastYassignment_form),T1);
  defnF5277 = T0;
UNLINK_STACK();
  QRET(defnF5277);
}

LOCCODEDEF(fun_objectify_variable_definition_250) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_516),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_dynamic_definition_251) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_527),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_252) {
  P x_,r_,tailQ_;
  P expF5278;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_532));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_533));
  } else {
  }
  T3 = CALL1(1,FREEREF(0),x_);
  T2 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),x_,T3);
  expF5278 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_534));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF5278);
    T1 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_535));
  } else {
  }
UNLINK_STACK();
  QRET(expF5278);
}

FUNCODEDEF(YevalSastYPPPmacro) {
  P binding_,expander_;
  P T0;
LINK_STACK();
  ARG(binding_, 0);
  ARG(expander_, 1);
  T0 = FUNFAB(fun_expand_252,1,expander_);
  CALL2(1,VARREF(YevalSmoduleYbinding_handler_setter),T0,binding_);
UNLINK_STACK();
  RET(binding_);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF5281;
  P envF5280;
  P tmpF5279;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
  tmpF5279 = env_or_false_;
  if (tmpF5279 != YPfalse) {
    T2 = tmpF5279;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYunchecked_runtime_environment),modname_);
    T2 = T3;
  }
  envF5280 = T2;
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),envF5280,name_,YPfalse,LITREF(lit_538));
  bindingF5281 = T1;
  T0 = CALL2(1,VARREF(YevalSastYPPPmacro),bindingF5281,expander_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_syntax_definition_255) {
  P name_,e_,r_,rtQ_;
  P bindingF5287;
  P modnameF5286;
  P expanderF5285;
  P ast_expanderF5284;
  P syntax_envF5283;
  P sep_expanderF5282;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
  T14 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_macro_function),name_,e_);
  sep_expanderF5282 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYfind_syntax_environment),r_);
  syntax_envF5283 = T13;
  T12 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF5282,syntax_envF5283,YPfalse);
  ast_expanderF5284 = T12;
  T11 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF5284);
  expanderF5285 = T11;
  T10 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_name),T10);
  modnameF5286 = T9;
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T7 = CALL4(1,VARREF(YPPmacro),modnameF5286,name_,expanderF5285,T8);
  bindingF5287 = T7;
  T1 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T0 = CALL2(1,VARREF(YgooSlogYNEE),syntax_envF5283,T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF5287,syntax_envF5283);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF5282,r_,YPfalse);
    T4 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF5287,VARREF(YevalSastYassignment_form),T5);
    T3 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,r_);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_objectify_function_definition_256) {
  P name_,e_,r_;
  P defnF5290;
  P fF5289;
  P bindingF5288;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_516));
  bindingF5288 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF5289 = T2;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF5288,fF5289);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,fF5289);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF5288,VARREF(YevalSastYassignment_form),fF5289);
  defnF5290 = T1;
UNLINK_STACK();
  RET(defnF5290);
}

FUNCODEDEF(YevalSastYmodule_binding) {
  P kind_;
  P T0;
LINK_STACK();
  ARG(kind_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),kind_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_primitive_definition_258) {
  P name_,mods_,sig_,body_,r_;
  P defnF5296;
  P formF5295;
  P bodyF5294;
  P new_rF5293;
  P signatureF5292;
  P bindingF5291;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_547));
  bindingF5291 = T9;
  T8 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF5292 = T8;
  T7 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF5292);
  T6 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T7);
  new_rF5293 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF5293,YPtrue);
  bodyF5294 = T5;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T3 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF5291,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T4,VARREF(YevalSastYfunction_signature),signatureF5292,VARREF(YevalSastYfunction_body),bodyF5294);
  formF5295 = T3;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_548));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_prop_setter),formF5295,bindingF5291);
  } else {
  }
  T2 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF5291,VARREF(YevalSastYassignment_form),formF5295);
  defnF5296 = T2;
UNLINK_STACK();
  RET(defnF5296);
}

LOCCODEDEF(fun_objectify_generic_definition_259) {
  P name_,sig_,r_;
  P defnF5300;
  P formF5299;
  P signatureF5298;
  P bindingF5297;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
  T4 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_516));
  bindingF5297 = T4;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF5298 = T3;
  T2 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF5297,VARREF(YevalSastYfunction_debug_name),T2,VARREF(YevalSastYfunction_signature),signatureF5298);
  formF5299 = T1;
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF5297,VARREF(YevalSastYassignment_form),formF5299);
  defnF5300 = T0;
UNLINK_STACK();
  RET(defnF5300);
}

LOCCODEDEF(fun_objectify_method_definition_260) {
  P name_,e_,r_;
  P defnF5306;
  P formF5305;
  P callF5304;
  P metF5303;
  P genF5302;
  P bindingF5301;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_516));
  bindingF5301 = T9;
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_553));
  T7 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL1(1,VARREF(Ylst),YPfalse);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_8));
  genF5302 = T5;
  T4 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF5303 = T4;
  T3 = CALL3(1,VARREF(Ylst),LITREF(lit_554),genF5302,metF5303);
  callF5304 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),callF5304,r_,YPfalse);
  formF5305 = T2;
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF5301,VARREF(YevalSastYassignment_form),formF5305);
  defnF5306 = T1;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF5303);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,metF5303);
UNLINK_STACK();
  RET(defnF5306);
}

LOCCODEDEF(fun_261) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  if (DYNREF(YevalSastYTrecord_sourceQT) != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_559));
    T5 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,FREEREF(1),LITREF(lit_8));
    T2 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_558),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_262) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_263) {
  P x_1866F5307;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1866F5307 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T1 = FUNFAB(fun_261,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T2 = FUNFAB(fun_262,1,x_1866F5307);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_264) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_function_source_265) {
  P sig_,body_,r_;
  P x_1865F5308;
  P T0,T1,T2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  x_1865F5308 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T1 = FUNFAB(fun_263,3,sig_,body_,r_);
  T2 = FUNFAB(fun_264,1,x_1865F5308);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_266) {
  P astF5311;
  P new_rF5310;
  P signatureF5309;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T5 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF5309 = T5;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF5309);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF5310 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF5310,YPtrue);
  astF5311 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF5309,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),astF5311,FREEREF(3));
  T1 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T1,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(3));
}

LOCCODEDEF(fun_267) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_function_using_268) {
  P met_,sig_,body_,r_,tailQ_;
  P x_1867F5312;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  x_1867F5312 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,met_);
  T1 = FUNFAB(fun_266,4,sig_,r_,body_,met_);
  T2 = FUNFAB(fun_267,1,x_1867F5312);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_function_269) {
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

LOCCODEDEF(fun_objectify_signature_270) {
  P sig_,r_;
  P bindingF5329;
  P typeF5328;
  P stypeF5327;
  P dottedQF5326;
  P stypeF5325;
  P snameF5324;
  P paramF5323;
  P arityF5322;
  P valueF5321;
  P tmpF5320;
  P sexpr_valueF5319;
  P typesF5318;
  P namesF5317;
  P bindingsF5316;
  P naryQF5315;
  P paramsF5314;
  P sexpr_paramsF5313;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
  T30 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF5313 = T30;
  paramsF5314 = sexpr_paramsF5313;
  naryQF5315 = YPfalse;
  bindingsF5316 = Ynil;
  T28 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfab_listG));
  namesF5317 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfab_listG));
  typesF5318 = T29;
  LOOP_256: {
    P a256_0,a256_1,a256_2,a256_3,a256_4;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),paramsF5314);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sig_);
      sexpr_valueF5319 = T15;
      tmpF5320 = sexpr_valueF5319;
      if (tmpF5320 != YPfalse) {
        T13 = tmpF5320;
      } else {
        T14 = CALL1(1,VARREF(YevalSastYdefault_type),r_);
        T13 = T14;
      }
      T12 = CALL3(1,VARREF(YevalSastYobjectify),T13,r_,YPfalse);
      valueF5321 = T12;
      T10 = CALL1(1,VARREF(YgooStypesYlen),namesF5317);
      if (naryQF5315 != YPfalse) {
        T11 = YPint((P)1);
      } else {
        T11 = YPint((P)0);
      }
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
      arityF5322 = T9;
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),bindingsF5316);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),namesF5317);
      T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T5,r_);
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),typesF5318);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),naryQF5315,r_,YPfalse);
      T8 = CALL3(1,VARREF(YevalSastYobjectify),arityF5322,r_,YPfalse);
      T2 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T3,VARREF(YevalSastYsignature_names),T4,VARREF(YevalSastYsignature_specs),T6,VARREF(YevalSastYsignature_naryQ),T7,VARREF(YevalSastYsignature_arity),T8,VARREF(YevalSastYsignature_value),valueF5321);
      T0 = T2;
    } else {
      T27 = CALL1(1,VARREF(Yhead),paramsF5314);
      paramF5323 = T27;
      T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF5323);
      snameF5324 = T26;
      T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF5323);
      stypeF5325 = T25;
      T24 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF5325,VARREF(YevalSastYDsexpr_optionals_tag));
      dottedQF5326 = T24;
      if (dottedQF5326 != YPfalse) {
        T23 = VARREF(YevalSastYDsexpr_optionals_type_name);
      } else {
        T23 = stypeF5325;
      }
      stypeF5327 = T23;
      T22 = CALL3(1,VARREF(YevalSastYobjectify),stypeF5327,r_,YPfalse);
      typeF5328 = T22;
      T21 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYbinding_name),snameF5324,VARREF(YevalSmoduleYbinding_type),typeF5328,VARREF(YevalSastYbinding_dottedQ),dottedQF5326);
      bindingF5329 = T21;
      T17 = CALL1(1,VARREF(Ytail),paramsF5314);
      T18 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF5329,bindingsF5316);
      T19 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF5324,VARREF(Ytail),namesF5317);
      T20 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF5328,VARREF(Ytail),typesF5318);
      a256_0 = T17;
      a256_1 = dottedQF5326;
      a256_2 = T18;
      a256_3 = T19;
      a256_4 = T20;
      paramsF5314 = a256_0;
      naryQF5315 = a256_1;
      bindingsF5316 = a256_2;
      namesF5317 = a256_3;
      typesF5318 = a256_4;
      goto LOOP_256;
      T0 = T16;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_compute_local_reference_offsets_271) {
  P binding_,r_;
  P bindingsF5333;
  P jF5332;
  P rF5331;
  P iF5330;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  iF5330 = YPint((P)0);
  rF5331 = r_;
  LOOP_257: {
    P a257_0,a257_1;
    T1 = CALL2(1,VARREF(YisaQ),rF5331,VARREF(YevalSmoduleYLstatic_local_environmentG));
    if (T1 != YPfalse) {
      jF5332 = YPint((P)0);
      T14 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),rF5331);
      bindingsF5333 = T14;
      LOOP_258: {
        P a258_0,a258_1;
        T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5333);
        if (T3 != YPfalse) {
          T5 = CALL2(1,VARREF(YgooSmathYA),iF5330,YPint((P)1));
          T6 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),rF5331);
          a257_0 = T5;
          a257_1 = T6;
          iF5330 = a257_0;
          rF5331 = a257_1;
          goto LOOP_257;
          T2 = T4;
        } else {
          T9 = CALL1(1,VARREF(Yhead),bindingsF5333);
          T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,binding_);
          if (T8 != YPfalse) {
            T10 = CALL2(1,VARREF(Ytup),iF5330,jF5332);
            T7 = T10;
          } else {
            T12 = CALL2(1,VARREF(YgooSmathYA),jF5332,YPint((P)1));
            T13 = CALL1(1,VARREF(Ytail),bindingsF5333);
            a258_0 = T12;
            a258_1 = T13;
            jF5332 = a258_0;
            bindingsF5333 = a258_1;
            goto LOOP_258;
            T7 = T11;
          }
          T2 = T7;
        }
      }
      T0 = T2;
    } else {
      T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T15 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_570),T16,rF5331);
      T0 = T15;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_binding_272) {
  P n_,b_,r_;
  P jF5336;
  P iF5335;
  P tup39F5334;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T4 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup39F5334 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F5334,YPint((P)0));
  iF5335 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F5334,YPint((P)1));
  jF5336 = T2;
  T0 = CALL1(1,VARREF(YevalSastYbinding_value),b_);
  CALL1(1,VARREF(YevalSastYincf_ref_count),T0);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF5335,VARREF(YevalSastYreference_frame_offset),jF5336);
UNLINK_STACK();
  RET(T1);
}

LOCCODEDEF(fun_binding_reference_class_273) {
  P b_;
  P x_1869F5338;
  P x_1868F5337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(b_, 0);
  T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
  x_1868F5337 = T14;
  x_1869F5338 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1869F5338,x_1868F5337,LITREF(lit_516));
  if (T1 != YPfalse) {
    T0 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T3 = CALL2(1,x_1869F5338,x_1868F5337,LITREF(lit_547));
    if (T3 != YPfalse) {
      T2 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T5 = CALL2(1,x_1869F5338,x_1868F5337,LITREF(lit_514));
      if (T5 != YPfalse) {
        T4 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T7 = CALL2(1,x_1869F5338,x_1868F5337,LITREF(lit_527));
        if (T7 != YPfalse) {
          T6 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T9 = CALL2(1,x_1869F5338,x_1868F5337,LITREF(lit_538));
          if (T9 != YPfalse) {
            T8 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T11 = CALL2(1,x_1869F5338,x_1868F5337,LITREF(lit_515));
            if (T11 != YPfalse) {
              T10 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T13 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
              T12 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_575),T13);
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

LOCCODEDEF(fun_objectify_binding_274) {
  P n_,b_,r_;
  P LrefGF5339;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),r_,b_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF5339 = T1;
  T0 = CALL3(1,VARREF(Ynew),LrefGF5339,VARREF(YevalSastYreference_binding),b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_binding_275) {
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

LOCCODEDEF(fun_default_type_276) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_580),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_free_global_reference_277) {
  P name_,r_;
  P bF5341;
  P grF5340;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF5340 = T8;
  T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ),grF5340);
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
    T7 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
    T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_freeQ),YPtrue,VARREF(YevalSmoduleYbinding_kind),LITREF(lit_516),VARREF(YevalSmoduleYbinding_name),name_,VARREF(YevalSmoduleYbinding_module),T7);
    bF5341 = T6;
    CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bF5341,grF5340);
    CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),grF5340,bF5341);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF5341);
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
  T0 = CALL2(1,VARREF(YgooSlogYNEE),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_foreign_reference_279) {
  P name_,r_;
  P bindingF5349;
  P modF5348;
  P loaderF5347;
  P grF5346;
  P varnameF5345;
  P modnameF5344;
  P breakF5343;
  P namestrF5342;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF5342 = T22;
  T21 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF5342,YPchr((P)58));
  breakF5343 = T21;
  T20 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF5342,YPint((P)0),breakF5343);
  modnameF5344 = T20;
  T18 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF5343);
  T19 = CALL1(1,VARREF(YgooStypesYlen),namestrF5342);
  T17 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF5342,T18,T19);
  varnameF5345 = T17;
  T3 = CALL1(1,VARREF(YgooStypesYlen),modnameF5344);
  T2 = CALL2(1,VARREF(YgooSmagYG),T3,YPint((P)0));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),varnameF5345);
    T4 = CALL2(1,VARREF(YgooSmagYG),T5,YPint((P)0));
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_587),name_);
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF5346 = T16;
  T15 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),grF5346);
  loaderF5347 = T15;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF5344);
  T13 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF5347,T14);
  modF5348 = T13;
  T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF5345);
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF5348);
  T10 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T11,T12);
  bindingF5349 = T10;
  CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF5349,grF5346);
  T7 = CALL1(1,VARREF(Ynot),bindingF5349);
  if (T7 != YPfalse) {
    T8 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_588),varnameF5345,modnameF5344);
  } else {
  }
  T9 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF5349,r_);
UNLINK_STACK();
  RET(T9);
}

LOCCODEDEF(fun_objectify_symbol_280) {
  P name_,r_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T1 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,r_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ftype_281) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_593),r_,YPfalse);
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

LOCCODEDEF(fun_nul_283) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_nul));
}

LOCCODEDEF(fun_284) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = CALL1(1,VARREF(YevalSastYftype),FREEREF(0));
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYbinding_name),n_,VARREF(YevalSmoduleYbinding_type),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_285) {
  P sig_,body_;
  P lineF5351;
  P tmpF5350;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),sig_);
  tmpF5350 = T3;
  if (tmpF5350 != YPfalse) {
    T1 = tmpF5350;
  } else {
    T2 = CALL1(1,VARREF(YgooScolsSlstYline_of),body_);
    T1 = T2;
  }
  lineF5351 = T1;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),lineF5351);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_286) {
  P f_,b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(b_, 1);
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),b_,f_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T2,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T1,f_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_locals_287) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P sigF5365;
  P bodyF5364;
  P metF5363;
  P varF5362;
  P tmpF5361;
  P tmpF5360;
  P tmpF5359;
  P x_1870F5358;
  P x_1871F5357;
  P x_1872F5356;
  P x_1873F5355;
  P metsF5354;
  P new_rF5353;
  P varsF5352;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(names_, 0);
  ARG(sigs_, 1);
  ARG(bodies_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  ARG(tailQ_, 5);
  T30 = FUNFAB(fun_284,1,r_);
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),T30,names_);
  varsF5352 = T29;
  T28 = CALL2(1,VARREF(YevalSastYr_extendT),r_,varsF5352);
  new_rF5353 = T28;
  T27 = fun_285;
  T26 = CALL3(1,VARREF(YgooSmacrosYmap2),T27,sigs_,bodies_);
  metsF5354 = T26;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),varsF5352);
  x_1873F5355 = T18;
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),metsF5354);
  x_1872F5356 = T19;
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),bodies_);
  x_1871F5357 = T20;
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),sigs_);
  x_1870F5358 = T21;
  LOOP_259: {
    P a259_0,a259_1,a259_2,a259_3;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1873F5355);
    tmpF5359 = T8;
    if (tmpF5359 != YPfalse) {
      T2 = tmpF5359;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1872F5356);
      tmpF5360 = T7;
      if (tmpF5360 != YPfalse) {
        T3 = tmpF5360;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1871F5357);
        tmpF5361 = T6;
        if (tmpF5361 != YPfalse) {
          T4 = tmpF5361;
        } else {
          T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1870F5358);
          T4 = T5;
        }
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1873F5355);
      varF5362 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1872F5356);
      metF5363 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1871F5357);
      bodyF5364 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1870F5358);
      sigF5365 = T14;
      CALL2(1,VARREF(YevalSastYbinding_value_setter),metF5363,varF5362);
      CALL5(1,VARREF(YevalSastYobjectify_function_using),metF5363,sigF5365,bodyF5364,new_rF5353,YPfalse);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1873F5355);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1872F5356);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1871F5357);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1870F5358);
      a259_0 = T10;
      a259_1 = T11;
      a259_2 = T12;
      a259_3 = T13;
      x_1873F5355 = a259_0;
      x_1872F5356 = a259_1;
      x_1871F5357 = a259_2;
      x_1870F5358 = a259_3;
      goto LOOP_259;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = FUNFAB(fun_286,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T22,metsF5354,varsF5352);
  T24 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSchrYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),metsF5354);
  T25 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF5353,YPtrue);
  T23 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),varsF5352,VARREF(YevalSastYlocals_functions),T24,VARREF(YevalSastYlocals_body),T25);
UNLINK_STACK();
  RET(T23);
}

LOCCODEDEF(fun_objectify_bind_exit_288) {
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

LOCCODEDEF(fun_objectify_unwind_protect_289) {
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

LOCCODEDEF(fun_objectify_monitor_290) {
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

LOCCODEDEF(fun_291) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_292) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_293) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_616),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_294) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(exit_, 0);
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_614),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_291;
  T4 = FUNFAB(fun_292,1,exit_);
  T5 = FUNFAB(fun_293,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_295) {
  P name_;
  P bindingF5366;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(name_, 0);
  T5 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,FREEREF(0));
  bindingF5366 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF5366,YPfalse);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_294,1,name_);
    T2 = with_exit(T3);
    T0 = T2;
  } else {
    T4 = CALL3(1,VARREF(YevalSmoduleYexport_bindingX),FREEREF(1),name_,bindingF5366);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_export_296) {
  P names_,r_,tailQ_;
  P moduleF5368;
  P envF5367;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF5367 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF5368 = T6;
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),moduleF5368);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),envF5367,T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_611));
  } else {
  }
  T4 = FUNFAB(fun_295,2,envF5367,moduleF5368);
  CALL2(1,VARREF(YgooSmacrosYdo),T4,names_);
  T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T5);
}

LOCCODEDEF(fun_297) {
  P b_;
  P T0,T1;
LINK_STACK();
  ARG(b_, 0);
  CALL2(1,VARREF(YevalSmoduleYimport_globalX),b_,FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T0 = CALL3(1,VARREF(YevalSmoduleYexport_bindingX),FREEREF(1),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_useSexport_module_298) {
  P name_,r_,tailQ_;
  P used_moduleF5372;
  P loaderF5371;
  P moduleF5370;
  P envF5369;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF5369 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF5370 = T6;
  T5 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),envF5369);
  loaderF5371 = T5;
  T4 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF5371,name_);
  used_moduleF5372 = T4;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5369);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF5372);
  T1 = FUNFAB(fun_297,2,envF5369,moduleF5370);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF5372);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

LOCCODEDEF(fun_299) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_include_300) {
  P name_,r_,tailQ_;
  P modF5374;
  P envF5373;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF5373 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF5373);
  modF5374 = T7;
  T2 = FUNFAB(fun_299,1,name_);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),modF5374);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),modF5374);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_301) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_library_302) {
  P name_,r_,tailQ_;
  P modF5376;
  P envF5375;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF5375 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF5375);
  modF5376 = T7;
  T2 = FUNFAB(fun_301,1,name_);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),modF5376);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),modF5376);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_303) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSmoduleYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_use_mod_304) {
  P name_;
  P used_moduleF5378;
  P loaderF5377;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),FREEREF(0));
  loaderF5377 = T4;
  T3 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF5377,name_);
  used_moduleF5378 = T3;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF5378);
  T1 = FUNFAB(fun_303,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF5378);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(used_moduleF5378);
}

LOCCODEDEF(fun_use_c_mod_305) {
  P mod_,name_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),T3,name_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_module_306) {
  P name_,r_,tailQ_;
  P swig_modF5387;
  P swig_mod_nameF5386;
  P tmpF5385;
  P x_1876F5384;
  P x_1875F5383;
  P use_c_modF5382;
  P use_modF5381;
  P modF5380;
  P envF5379;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T21 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF5379 = T21;
  T20 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF5379);
  modF5380 = T20;
  T17 = FUNSHELL(1,fun_use_mod_304,1);
  use_modF5381 = T17;
  T18 = fun_use_c_mod_305;
  use_c_modF5382 = T18;
  FUNINIT(use_modF5381, 1,envF5379);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1875F5383 = T16;
  x_1876F5384 = VARREF(YgooScolsSseqYsuffixQ);
  T3 = CALL2(1,x_1876F5384,x_1875F5383,LITREF(lit_633));
  tmpF5385 = T3;
  if (tmpF5385 != YPfalse) {
    T1 = tmpF5385;
  } else {
    T2 = CALL2(1,x_1876F5384,x_1875F5383,LITREF(lit_634));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T4 = CALL2(1,use_c_modF5382,modF5380,T5);
    T0 = T4;
  } else {
    T7 = CALL2(1,x_1876F5384,x_1875F5383,LITREF(lit_635));
    if (T7 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T13 = CALL2(1,VARREF(YgooScolsSseqYsplit),T14,YPchr((P)46));
      T12 = CALL1(1,VARREF(YgooSmacrosY1st),T13);
      T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T12);
      swig_mod_nameF5386 = T11;
      T10 = CALL1(1,use_modF5381,swig_mod_nameF5386);
      swig_modF5387 = T10;
      T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_636));
      T8 = CALL2(1,use_c_modF5382,swig_modF5387,T9);
      T6 = T8;
    } else {
      T15 = CALL1(1,use_modF5381,name_);
      T6 = T15;
    }
    T0 = T6;
  }
  T19 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T19);
}

LOCCODEDEF(fun_307) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL3(1,VARREF(YevalSmoduleYimport_and_mangle_globalX),b_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_mangle_module_308) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF5392;
  P used_moduleF5391;
  P loaderF5390;
  P moduleF5389;
  P envF5388;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF5388 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF5389 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),envF5388);
  loaderF5390 = T6;
  T5 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF5390,name_);
  used_moduleF5391 = T5;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF5392 = T4;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5388);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF5391);
  T1 = FUNFAB(fun_307,2,str_manglerF5392,envF5388);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF5391);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

LOCCODEDEF(fun_expand_bind_list_309) {
  P pat_,var_,fail_;
  P T0;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_642),pat_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_list_310) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_644));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_expand_bind_list_311) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_646),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_647),pat_);
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

LOCCODEDEF(fun_expand_bind_listT_312) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_644));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_listT_313) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T6 = CALL1(1,VARREF(Ylst),var_);
  T9 = CALL1(1,VARREF(Yhead),pat_);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_element),T9,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_8));
  T4 = CALL1(1,VARREF(Ylst),T5);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,LITREF(lit_8));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T12 = CALL1(1,VARREF(Ytail),pat_);
  T11 = CALL3(1,VARREF(YevalSastYexpand_bind_listT),T12,var_,fail_);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T10,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_element_314) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_653));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_654));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_element_315) {
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
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
    T8 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_656));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_8));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_8));
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_657));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_8));
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T14,LITREF(lit_8));
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
      T26 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_8));
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_654));
      T31 = CALL1(1,VARREF(Ylst),Ynil);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T28,LITREF(lit_8));
      T18 = T20;
    } else {
      if (YPtrue != YPfalse) {
        T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
        T42 = CALL1(1,VARREF(Ylst),var_);
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_658));
        T46 = CALL1(1,VARREF(Ylst),var_);
        T47 = CALL1(1,VARREF(Ylst),fail_);
        T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_8));
        T43 = CALL1(1,VARREF(Ylst),T44);
        T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_8));
        T40 = CALL1(1,VARREF(Ylst),T41);
        T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_8));
        T38 = CALL1(1,VARREF(Ylst),T39);
        T49 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
        T48 = CALL1(1,VARREF(Ylst),T49);
        T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T48,LITREF(lit_8));
        T35 = CALL1(1,VARREF(Ylst),T36);
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_657));
        T53 = CALL1(1,VARREF(Ylst),var_);
        T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_8));
        T50 = CALL1(1,VARREF(Ylst),T51);
        T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T50,LITREF(lit_8));
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

LOCCODEDEF(fun_expand_pattern_316) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_661));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_662));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_663));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_8));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_664));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_8));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_317) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL1(1,VARREF(Ylst),YPfalse);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_syntax_if_318) {
  P x_;
  P epatF5400;
  P failF5399;
  P varF5398;
  P elseF5397;
  P thenF5396;
  P valueF5395;
  P varsF5394;
  P patF5393;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(x_, 0);
  T49 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF5393 = T49;
  T48 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF5393);
  varsF5394 = T48;
  T47 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF5395 = T47;
  T46 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF5396 = T46;
  T45 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF5397 = T45;
  T44 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF5398 = T44;
  T43 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF5399 = T43;
  T42 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF5393,varF5398,failF5399);
  epatF5400 = T42;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_667));
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_668));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_669));
  T10 = CALL1(1,VARREF(Ylst),failF5399);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_670));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_671));
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_8));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_672));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_564));
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T17,LITREF(lit_8));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_668));
  T24 = CALL1(1,VARREF(Ylst),elseF5397);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_8));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T21,LITREF(lit_8));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T7 = CALL2(1,VARREF(YgooSmacrosYcat),T8,LITREF(lit_8));
  T6 = CALL1(1,VARREF(Ylst),T7);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T32 = CALL1(1,VARREF(Ylst),varF5398);
  T33 = CALL1(1,VARREF(Ylst),valueF5395);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_8));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_8));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T39 = fun_317;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),T39,varsF5394);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = CALL1(1,VARREF(Ylst),epatF5400);
  T41 = CALL1(1,VARREF(Ylst),thenF5396);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T40,T41,LITREF(lit_8));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T34,LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T4 = CALL4(1,VARREF(YgooSmacrosYcat),T5,T6,T25,LITREF(lit_8));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_r_extendT_319) {
  P r_,bindings_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  ARG(bindings_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSmoduleYLstatic_local_environmentG),VARREF(YevalSmoduleYenvironment_next),r_,VARREF(YevalSmoduleYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_find_binding_320) {
  P name_,r_;
  P bindingsF5401;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T11 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),r_);
  bindingsF5401 = T11;
  LOOP_260: {
    P a260_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5401);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),r_);
      T2 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(Yhead),bindingsF5401);
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T7);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(Yhead),bindingsF5401);
        T4 = T8;
      } else {
        T10 = CALL1(1,VARREF(Ytail),bindingsF5401);
        a260_0 = T10;
        bindingsF5401 = a260_0;
        goto LOOP_260;
        T4 = T9;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_binding_321) {
  P name_,r_;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_register_magic_binding_322) {
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

LOCCODEDEF(fun_magic_bindings_323) {
LINK_STACK();
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

LOCCODEDEF(fun_x_1880_324) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_686),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_325) {
  P return_;
  P sexpr_nameF5418;
  P special_nameF5417;
  P x_1879F5416;
  P x_1879F5415;
  P x_1879F5414;
  P x_1879F5413;
  P x_1879F5412;
  P x_1879F5411;
  P x_1879F5410;
  P x_1879F5409;
  P x_1879F5408;
  P x_1879F5407;
  P bodyF5406;
  P paramsF5405;
  P nameF5404;
  P x_1879F5403;
  P x_1880F5402;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
LINK_STACK();
  ARG(return_, 0);
  T60 = FUNSHELL(0,fun_x_1880_324,2);
  x_1880F5402 = T60;
  FUNINIT(x_1880F5402, 2,FREEREF(0),return_);
  x_1879F5403 = FREEREF(0);
  nameF5404 = YPfalse;
  paramsF5405 = YPfalse;
  bodyF5406 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1879F5403,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1879F5403,LITREF(lit_686),x_1880F5402);
    x_1879F5407 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1879F5407,x_1880F5402);
    nameF5404 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1879F5407);
    x_1879F5408 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1879F5408,x_1880F5402);
    x_1879F5409 = T12;
    paramsF5405 = x_1879F5409;
    x_1879F5410 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1879F5410,x_1880F5402);
    x_1879F5411 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1879F5411,x_1880F5402);
    T11 = CALL1(1,VARREF(Ytail),x_1879F5410);
    x_1879F5412 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1879F5412,x_1880F5402);
    T13 = CALL1(1,VARREF(Ytail),x_1879F5408);
    x_1879F5413 = T13;
    bodyF5406 = x_1879F5413;
    x_1879F5414 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1879F5414,x_1880F5402);
    x_1879F5415 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1879F5415,x_1880F5402);
    T7 = CALL1(1,VARREF(Ytail),x_1879F5414);
    x_1879F5416 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1879F5416,x_1880F5402);
  } else {
    T17 = CALL2(1,x_1880F5402,LITREF(lit_5),x_1879F5403);
  }
  T59 = nameF5404;
  T58 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_687),T59);
  special_nameF5417 = T58;
  T57 = nameF5404;
  T56 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_688),T57,LITREF(lit_689));
  sexpr_nameF5418 = T56;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_690));
  T23 = CALL1(1,VARREF(Ylst),special_nameF5417);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_691));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_692));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_693));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_654));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_515));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_694));
  T34 = CALL1(1,VARREF(Ylst),sexpr_nameF5418);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_695));
  T36 = CALL1(1,VARREF(Ylst),YPfalse);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_696));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_559));
  T43 = paramsF5405;
  T42 = CALL2(1,VARREF(YgooSmacrosYcat),T43,LITREF(lit_8));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = bodyF5406;
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T44,LITREF(lit_8));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_697));
  T46 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),13,T26,T27,T28,T29,T33,T34,T35,T36,T37,T38,T45,T46,LITREF(lit_8));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T24,LITREF(lit_8));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_679));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_654));
  T54 = nameF5404;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T55 = CALL1(1,VARREF(Ylst),special_nameF5417);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T55,LITREF(lit_8));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T47,LITREF(lit_8));
UNLINK_STACK();
  QRET(T18);
}

LOCCODEDEF(fun_326) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_325,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_327) {
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

LOCCODEDEF(fun_328) {
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

LOCCODEDEF(fun_329) {
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

LOCCODEDEF(fun_330) {
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

LOCCODEDEF(fun_331) {
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

LOCCODEDEF(fun_332) {
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

LOCCODEDEF(fun_333) {
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

LOCCODEDEF(fun_334) {
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

LOCCODEDEF(fun_335) {
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

LOCCODEDEF(fun_336) {
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

LOCCODEDEF(fun_337) {
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

LOCCODEDEF(fun_338) {
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

LOCCODEDEF(fun_339) {
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

LOCCODEDEF(fun_340) {
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

LOCCODEDEF(fun_341) {
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

LOCCODEDEF(fun_342) {
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

LOCCODEDEF(fun_343) {
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

LOCCODEDEF(fun_344) {
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

LOCCODEDEF(fun_345) {
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

LOCCODEDEF(fun_346) {
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

LOCCODEDEF(fun_347) {
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

LOCCODEDEF(fun_348) {
  P x_,r_,tailQ_;
  P bodyF5424;
  P handlerF5423;
  P testF5422;
  P infoF5421;
  P typeF5420;
  P tup40F5419;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup40F5419 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F5419,YPint((P)0));
  typeF5420 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F5419,YPint((P)1));
  infoF5421 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F5419,YPint((P)2));
  testF5422 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F5419,YPint((P)3));
  handlerF5423 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F5419,YPint((P)4));
  bodyF5424 = T1;
  T0 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF5420,infoF5421,testF5422,handlerF5423,bodyF5424,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_pairize_349) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(args_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_654),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_741),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_350) {
  P x_,r_,tailQ_;
  P nameF5425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF5425 = T10;
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_743));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_654));
  T6 = CALL1(1,VARREF(Ylst),nameF5425);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T8 = CALL1(1,VARREF(YevalSastYpairize),T9);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T7,LITREF(lit_8));
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_516),nameF5425,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_define_property_351) {
  P x_,setterQ_,r_,tailQ_;
  P setter_nameF5431;
  P lineF5430;
  P typeF5429;
  P ownerF5428;
  P varF5427;
  P nameF5426;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(x_, 0);
  ARG(setterQ_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T24 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF5426 = T24;
  T23 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF5427 = T23;
  T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF5428 = T22;
  T21 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF5429 = T21;
  T20 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  lineF5430 = T20;
  if (setterQ_ != YPfalse) {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF5426);
    T18 = T19;
  } else {
    T18 = YPfalse;
  }
  setter_nameF5431 = T18;
  T3 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF5426,ownerF5428,lineF5430);
  if (setterQ_ != YPfalse) {
    T5 = CALL4(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF5426,ownerF5428,typeF5429,lineF5430);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T9 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),varF5427);
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_580));
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_8));
    T12 = CALL1(1,VARREF(Ylst),T13);
    T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_8));
    T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T16 = CALL2(1,VARREF(YgooScolsSlstYline_list),lineF5430,T17);
    T10 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T11,T16);
    T8 = T10;
  } else {
    T8 = LITREF(lit_748);
  }
  T7 = CALL5(1,VARREF(Ylst),ownerF5428,nameF5426,setter_nameF5431,typeF5429,T8);
  T6 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_747),T7);
  T2 = CALL3(1,VARREF(Ylst),T3,T4,T6);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),T2);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_352) {
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

LOCCODEDEF(fun_353) {
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

LOCCODEDEF(fun_354) {
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

LOCCODEDEF(fun_355) {
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

LOCCODEDEF(fun_356) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_547));
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

LOCCODEDEF(fun_357) {
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

LOCCODEDEF(fun_ast_macro_expand_358) {
  P x_,r_,tailQ_;
  P resF5434;
  P macF5433;
  P astF5432;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(Yhead),x_);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,r_,tailQ_);
  astF5432 = T5;
  T1 = CALL2(1,VARREF(YisaQ),astF5432,VARREF(YevalSastYLmacro_referenceG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),astF5432);
    macF5433 = T4;
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),macF5433);
    T2 = CALL3(1,T3,x_,r_,tailQ_);
    resF5434 = T2;
    T0 = resF5434;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_359) {
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

LOCCODEDEF(fun_360) {
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

LOCCODEDEF(fun_361) {
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

LOCCODEDEF(fun_362) {
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

LOCCODEDEF(fun_363) {
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

LOCCODEDEF(fun_364) {
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

LOCCODEDEF(fun_365) {
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

LOCCODEDEF(fun_366) {
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

LOCCODEDEF(fun_367) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_install_initial_bindings_368) {
  P env_,loader_;
  P bootenvF5436;
  P bootmodF5435;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T3 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loader_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  bootmodF5435 = T3;
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),bootmodF5435);
  bootenvF5436 = T2;
  T1 = FUNFAB(fun_367,2,bootenvF5436,env_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,LITREF(lit_790));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_369) {
  P T0;
LINK_STACK();
  T0 = CALL3(1,VARREF(YevalSastYobjectify),FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYobjectify_with_subtransaction) {
  P e_,r_,dynamic_compilationQ_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(dynamic_compilationQ_, 2);
  ARG(tailQ_, 3);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),r_);
  T2 = FUNFAB(fun_369,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSmoduleYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_371) {
  P binding_;
  P cloneF5437;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T3,YPfalse,LITREF(lit_515));
  cloneF5437 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),binding_);
  T0 = CALL2(1,VARREF(YevalSmoduleYbinding_handler_setter),T1,cloneF5437);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinstall_magic_bindings) {
  P env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  T1 = FUNFAB(fun_371,1,env_);
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
  P bootenvF5439;
  P bootmodF5438;
  P T0,T1,T2;
LINK_STACK();
  CALL0(1,VARREF(YevalSmoduleYreload_modules));
  T2 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSmoduleYprobe_module),T2,VARREF(YevalSmoduleYDgoo_boot_module_name));
  bootmodF5438 = T1;
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),bootmodF5438);
  bootenvF5439 = T0;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF5439);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF5439);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYfab_syntax_environment) {
  P module_;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_module),LITREF(lit_803));
  T0 = CALL3(1,VARREF(YevalSmoduleYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF5443;
  P syntax_envF5442;
  P moduleF5441;
  P typeF5440;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_module_type),loader_);
  typeF5440 = T6;
  T5 = CALL3(1,VARREF(Ynew),typeF5440,VARREF(YevalSmoduleYmodule_name),name_);
  moduleF5441 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF5441);
  syntax_envF5442 = T4;
  T3 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),moduleF5441,loader_,YPfalse);
  target_envF5443 = T3;
  CALL3(1,VARREF(YevalSmoduleYset_module_environments),moduleF5441,syntax_envF5442,target_envF5443);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF5443);
  } else {
    T2 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF5443,loader_);
  }
UNLINK_STACK();
  RET(moduleF5441);
}

FUNCODEDEF(YevalSastYinit_g2c_boot_environment) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL0(1,VARREF(YevalSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalsX),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_g2c_regular_environment) {
  P env_,loader_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T0 = CALL2(1,VARREF(YevalSmoduleYinstall_initial_bindings),env_,loader_);
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

LOCCODEDEF(fun_ast_contains_funQ_381) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_walk_382) {
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

LOCCODEDEF(fun_383) {
  P return_;
  P walkF5444;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_walk_382,2);
  walkF5444 = T1;
  FUNINIT(walkF5444, 2,return_,walkF5444);
  T0 = CALL2(1,VARREF(YevalSastYast_walk),walkF5444,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_ast_contains_funQ_384) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_383,1,x_);
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
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121;
DEFCREGS();
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_0 = YPPlist(1,YPPsym((P)"exp"));
  lit_1 = YPPlist(1,YPPsym((P)"return"));
  lit_2 = YPPsym((P)"x-1854");
  lit_3 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_4 = YPPsym((P)"with-dependent");
  lit_5 = YPsb((P)"Match Pattern Failure");
  lit_6 = YPPsym((P)"let");
  lit_7 = YPPsym((P)"*current-dependent*");
  lit_8 = Ynil;
  lit_9 = YPPsym((P)"set");
  lit_10 = YPPsym((P)"fin");
  lit_11 = YPPsym((P)"seq");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1854_0 = YPfab_met(FUNCODEREF(fun_x_1854_0),T2,LITREF(lit_2),LITREF(lit_3),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'with-dependent exp)))"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T1,YPfalse,LITREF(lit_1),YPfalse,YPsb((P)"(fun (return) (loc ((x-1854 ((msg <str>) (args ...)) (return (macro-error 'with-dependent exp)))) (let ((x-1853 exp)) (let ((dependent #f) (body #f)) (if (isa? x-1853 <lst>) (let ((x-1853 (match-atom x-1853 'with-dependent x-1854))) (let ((x-1853 (seq (set dependent (match-unquote x-1853 x-1854)) (tail x-1853)))) (let ((x-1853 (seq (set body x-1853) '()))) (let ((x-1853 (seq (let ((x-1853 (match-sublist x-1853 x-1854))) (match-nul-list x-1853 x-1854)) (tail x-1853)))) (match-nul-list x-1853 x-1854))))) (x-1854 Match Pattern Failure x-1853)) (let ((saved-dependent (gensym))) (quasiquote (let (((unquote saved-dependent) *current-dependent*)) (set *current-dependent* (unquote dependent)) (fin (seq (unquote-splicing body)) (set *current-dependent* (unquote saved-dependent))))))))))"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T0,YPfalse,LITREF(lit_0),YPfalse,YPsb((P)"(fun (exp) (mif ((with-dependent (unquote dependent) (unquote-splicing body)) exp) (let ((saved-dependent (gensym))) (quasiquote (let (((unquote saved-dependent) *current-dependent*)) (set *current-dependent* (unquote dependent)) (fin (seq (unquote-splicing body)) (set *current-dependent* (unquote saved-dependent)))))) (macro-error 'with-dependent exp)))"));
  T3 = fun_2;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-dependent"),T3);
  lit_12 = YPPsym((P)"<ast-error>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcompiler_errorG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_12),T5);
  VARSET(YevalSastYLast_errorG,T4);
  lit_13 = YPPsym((P)"<simple-ast-error>");
  T8 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_errorG),T8);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_13),T7);
  VARSET(YevalSastYLsimple_ast_errorG,T6);
  lit_14 = YPPsym((P)"ast-error");
  lit_15 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_error_3 = YPfab_met(FUNCODEREF(fun_ast_error_3),T9,LITREF(lit_14),LITREF(lit_15),sloc(36),YPsb((P)"(fun ((message <str>) (arguments ...)) (sig (new <simple-ast-error> condition-message message condition-arguments arguments)))"));
  T11 = VARREF_OR(YevalSdependencyYast_error,YPfalse);
  T12 = fun_ast_error_3;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSdependencyYast_error,T10);
  lit_16 = YPPsym((P)"<program>");
  T14 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T13 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_16),T14);
  VARSET(YevalSastYLprogramG,T13);
  lit_17 = YPPsym((P)"program-type");
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_4 = YPfab_met(FUNCODEREF(fun_program_type_4),T15,LITREF(lit_17),LITREF(lit_18),sloc(43),YPsb((P)"(fun ((_x <program>)) (prop-value _x program-type))"));
  T17 = VARREF_OR(YevalSastYprogram_type,YPfalse);
  T18 = fun_program_type_4;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalSastYprogram_type,T16);
  lit_19 = YPPsym((P)"program-type-setter");
  lit_20 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_5 = YPfab_met(FUNCODEREF(fun_program_type_setter_5),T19,LITREF(lit_19),LITREF(lit_20),sloc(43),YPsb((P)"(fun ((_z <any>) (_x <program>)) (prop-value-setter _z _x program-type))"));
  T21 = VARREF_OR(YevalSastYprogram_type_setter,YPfalse);
  T22 = fun_program_type_setter_5;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalSastYprogram_type_setter,T20);
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T23,YPfalse,LITREF(lit_21),sloc(43),YPsb((P)"(fun ((_x <any>)) $bot)"));
  T24 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),T24);
  lit_22 = YPPsym((P)"program-line");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_line_7 = YPfab_met(FUNCODEREF(fun_program_line_7),T25,LITREF(lit_22),LITREF(lit_23),sloc(44),YPsb((P)"(fun ((_x <program>)) (prop-value _x program-line))"));
  T27 = VARREF_OR(YevalSastYprogram_line,YPfalse);
  T28 = fun_program_line_7;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSastYprogram_line,T26);
  lit_24 = YPPsym((P)"program-line-setter");
  lit_25 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T29 = YPfab_sig(YPPlist(2,T30,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_line_setter_8 = YPfab_met(FUNCODEREF(fun_program_line_setter_8),T29,LITREF(lit_24),LITREF(lit_25),sloc(44),YPsb((P)"(fun ((_z (t? <int>)) (_x <program>)) (prop-value-setter _z _x program-line))"));
  T32 = VARREF_OR(YevalSastYprogram_line_setter,YPfalse);
  T33 = fun_program_line_setter_8;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYprogram_line_setter,T31);
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T34,YPfalse,LITREF(lit_26),sloc(44),YPsb((P)"(fun ((_x <any>)) #f)"));
  T35 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T36 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_line),VARREF(YevalSastYprogram_line_setter),T35,T36);
  lit_27 = YPPsym((P)"program-register");
  lit_28 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_10 = YPfab_met(FUNCODEREF(fun_program_register_10),T37,LITREF(lit_27),LITREF(lit_28),sloc(45),YPsb((P)"(fun ((_x <program>)) (prop-value _x program-register))"));
  T39 = VARREF_OR(YevalSastYprogram_register,YPfalse);
  T40 = fun_program_register_10;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSastYprogram_register,T38);
  lit_29 = YPPsym((P)"program-register-setter");
  lit_30 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_11 = YPfab_met(FUNCODEREF(fun_program_register_setter_11),T41,LITREF(lit_29),LITREF(lit_30),sloc(45),YPsb((P)"(fun ((_z <any>) (_x <program>)) (prop-value-setter _z _x program-register))"));
  T43 = VARREF_OR(YevalSastYprogram_register_setter,YPfalse);
  T44 = fun_program_register_setter_11;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSastYprogram_register_setter,T42);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T45,YPfalse,LITREF(lit_31),sloc(45),YPsb((P)"(fun ((_x <any>)) #f)"));
  T46 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T46);
  lit_32 = YPPsym((P)"<computed-program>");
  T48 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramG),Ynil);
  T47 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_32),T48);
  VARSET(YevalSastYLcomputed_programG,T47);
  lit_33 = YPPsym((P)"<passive-program>");
  T50 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramG),Ynil);
  T49 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_33),T50);
  VARSET(YevalSastYLpassive_programG,T49);
  lit_34 = YPPsym((P)"<local-binding>");
  T52 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLbindingG),Ynil);
  T51 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_34),T52);
  VARSET(YevalSastYLlocal_bindingG,T51);
  lit_35 = YPPsym((P)"binding-value");
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T53 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_13 = YPfab_met(FUNCODEREF(fun_binding_value_13),T53,LITREF(lit_35),LITREF(lit_36),sloc(53),YPsb((P)"(fun ((_x <local-binding>)) (prop-value _x binding-value))"));
  T55 = VARREF_OR(YevalSastYbinding_value,YPfalse);
  T56 = fun_binding_value_13;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSastYbinding_value,T54);
  lit_37 = YPPsym((P)"binding-value-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_14 = YPfab_met(FUNCODEREF(fun_binding_value_setter_14),T57,LITREF(lit_37),LITREF(lit_38),sloc(53),YPsb((P)"(fun ((_z <any>) (_x <local-binding>)) (prop-value-setter _z _x binding-value))"));
  T59 = VARREF_OR(YevalSastYbinding_value_setter,YPfalse);
  T60 = fun_binding_value_setter_14;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYbinding_value_setter,T58);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T61,YPfalse,LITREF(lit_39),sloc(53),YPsb((P)"(fun ((_x <any>)) #f)"));
  T62 = fun_15;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T62);
  lit_40 = YPPsym((P)"binding-mutable?");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_16 = YPfab_met(FUNCODEREF(fun_binding_mutableQ_16),T63,LITREF(lit_40),LITREF(lit_41),sloc(54),YPsb((P)"(fun ((_x <local-binding>)) (prop-value _x binding-mutable?))"));
  T65 = VARREF_OR(YevalSastYbinding_mutableQ,YPfalse);
  T66 = fun_binding_mutableQ_16;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYbinding_mutableQ,T64);
  lit_42 = YPPsym((P)"binding-mutable?-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T67 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_17 = YPfab_met(FUNCODEREF(fun_binding_mutableQ_setter_17),T67,LITREF(lit_42),LITREF(lit_43),sloc(54),YPsb((P)"(fun ((_z <any>) (_x <local-binding>)) (prop-value-setter _z _x binding-mutable?))"));
  T69 = VARREF_OR(YevalSastYbinding_mutableQ_setter,YPfalse);
  T70 = fun_binding_mutableQ_setter_17;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYbinding_mutableQ_setter,T68);
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T71,YPfalse,LITREF(lit_44),sloc(54),YPsb((P)"(fun ((_x <any>)) #f)"));
  T72 = fun_18;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T72);
  lit_45 = YPPsym((P)"binding-dynamic-extent?");
  lit_46 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_19 = YPfab_met(FUNCODEREF(fun_binding_dynamic_extentQ_19),T73,LITREF(lit_45),LITREF(lit_46),sloc(55),YPsb((P)"(fun ((_x <local-binding>)) (prop-value _x binding-dynamic-extent?))"));
  T75 = VARREF_OR(YevalSastYbinding_dynamic_extentQ,YPfalse);
  T76 = fun_binding_dynamic_extentQ_19;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYbinding_dynamic_extentQ,T74);
  lit_47 = YPPsym((P)"binding-dynamic-extent?-setter");
  lit_48 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_20 = YPfab_met(FUNCODEREF(fun_binding_dynamic_extentQ_setter_20),T77,LITREF(lit_47),LITREF(lit_48),sloc(55),YPsb((P)"(fun ((_z <any>) (_x <local-binding>)) (prop-value-setter _z _x binding-dynamic-extent?))"));
  T79 = VARREF_OR(YevalSastYbinding_dynamic_extentQ_setter,YPfalse);
  T80 = fun_binding_dynamic_extentQ_setter_20;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T78);
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPfab_met(FUNCODEREF(fun_21),T81,YPfalse,LITREF(lit_49),sloc(55),YPsb((P)"(fun ((_x <any>)) #t)"));
  T82 = fun_21;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T82);
  lit_50 = YPPsym((P)"binding-dotted?");
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_22 = YPfab_met(FUNCODEREF(fun_binding_dottedQ_22),T83,LITREF(lit_50),LITREF(lit_51),sloc(56),YPsb((P)"(fun ((_x <local-binding>)) (prop-value _x binding-dotted?))"));
  T85 = VARREF_OR(YevalSastYbinding_dottedQ,YPfalse);
  T86 = fun_binding_dottedQ_22;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYbinding_dottedQ,T84);
  lit_52 = YPPsym((P)"binding-dotted?-setter");
  lit_53 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_23 = YPfab_met(FUNCODEREF(fun_binding_dottedQ_setter_23),T87,LITREF(lit_52),LITREF(lit_53),sloc(56),YPsb((P)"(fun ((_z <any>) (_x <local-binding>)) (prop-value-setter _z _x binding-dotted?))"));
  T89 = VARREF_OR(YevalSastYbinding_dottedQ_setter,YPfalse);
  T90 = fun_binding_dottedQ_setter_23;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYbinding_dottedQ_setter,T88);
  lit_54 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T91,YPfalse,LITREF(lit_54),sloc(56),YPsb((P)"(fun ((_x <any>)) #f)"));
  T92 = fun_24;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T92);
  lit_55 = YPPsym((P)"binding-closed-over?");
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_25 = YPfab_met(FUNCODEREF(fun_binding_closed_overQ_25),T93,LITREF(lit_55),LITREF(lit_56),sloc(57),YPsb((P)"(fun ((_x <local-binding>)) (prop-value _x binding-closed-over?))"));
  T95 = VARREF_OR(YevalSastYbinding_closed_overQ,YPfalse);
  T96 = fun_binding_closed_overQ_25;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYbinding_closed_overQ,T94);
  lit_57 = YPPsym((P)"binding-closed-over?-setter");
  lit_58 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_setter_26 = YPfab_met(FUNCODEREF(fun_binding_closed_overQ_setter_26),T97,LITREF(lit_57),LITREF(lit_58),sloc(57),YPsb((P)"(fun ((_z <any>) (_x <local-binding>)) (prop-value-setter _z _x binding-closed-over?))"));
  T99 = VARREF_OR(YevalSastYbinding_closed_overQ_setter,YPfalse);
  T100 = fun_binding_closed_overQ_setter_26;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYbinding_closed_overQ_setter,T98);
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T101,YPfalse,LITREF(lit_59),sloc(57),YPsb((P)"(fun ((_x <any>)) #f)"));
  T102 = fun_27;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_closed_overQ),VARREF(YevalSastYbinding_closed_overQ_setter),VARREF(YLanyG),T102);
  lit_60 = YPPsym((P)"binding-index");
  lit_61 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_28 = YPfab_met(FUNCODEREF(fun_binding_index_28),T103,LITREF(lit_60),LITREF(lit_61),sloc(58),YPsb((P)"(fun ((_x <local-binding>)) (prop-value _x binding-index))"));
  T105 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T106 = fun_binding_index_28;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYbinding_index,T104);
  lit_62 = YPPsym((P)"binding-index-setter");
  lit_63 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_29 = YPfab_met(FUNCODEREF(fun_binding_index_setter_29),T107,LITREF(lit_62),LITREF(lit_63),sloc(58),YPsb((P)"(fun ((_z <any>) (_x <local-binding>)) (prop-value-setter _z _x binding-index))"));
  T109 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T110 = fun_binding_index_setter_29;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYbinding_index_setter,T108);
  lit_64 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T111,YPfalse,LITREF(lit_64),sloc(58),YPsb((P)"(fun ((_x <any>)) #f)"));
  T112 = fun_30;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T112);
  lit_65 = YPPsym((P)"<compile-time>");
  T114 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T113 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_65),T114);
  VARSET(YevalSastYLcompile_timeG,T113);
  lit_66 = YPPsym((P)"compile-time-program");
  lit_67 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T116 = fun_compile_time_program_31 = YPfab_met(FUNCODEREF(fun_compile_time_program_31),T117,LITREF(lit_66),LITREF(lit_67),sloc(65),YPsb((P)"(fun ((_x <compile-time>)) (prop-value _x compile-time-program))"));
  T120 = VARREF_OR(YevalSastYcompile_time_program,YPfalse);
  T121 = fun_compile_time_program_31;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  T118 = VARSET(YevalSastYcompile_time_program,T119);
  T115 = T118;
  return T115;
}

P YevalSastY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121;
DEFCREGS();
  lit_68 = YPPsym((P)"compile-time-program-setter");
  lit_69 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_32 = YPfab_met(FUNCODEREF(fun_compile_time_program_setter_32),T0,LITREF(lit_68),LITREF(lit_69),sloc(65),YPsb((P)"(fun ((_z <any>) (_x <compile-time>)) (prop-value-setter _z _x compile-time-program))"));
  T2 = VARREF_OR(YevalSastYcompile_time_program_setter,YPfalse);
  T3 = fun_compile_time_program_setter_32;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYcompile_time_program_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_70 = YPPsym((P)"<reference>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLpassive_programG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_70),T5);
  VARSET(YevalSastYLreferenceG,T4);
  lit_71 = YPPsym((P)"<real-reference>");
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreferenceG),Ynil);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_71),T7);
  VARSET(YevalSastYLreal_referenceG,T6);
  lit_72 = YPPsym((P)"reference-binding");
  lit_73 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_33 = YPfab_met(FUNCODEREF(fun_reference_binding_33),T8,LITREF(lit_72),LITREF(lit_73),sloc(76),YPsb((P)"(fun ((_x <real-reference>)) (prop-value _x reference-binding))"));
  T10 = VARREF_OR(YevalSastYreference_binding,YPfalse);
  T11 = fun_reference_binding_33;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYreference_binding,T9);
  lit_74 = YPPsym((P)"reference-binding-setter");
  lit_75 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_34 = YPfab_met(FUNCODEREF(fun_reference_binding_setter_34),T12,LITREF(lit_74),LITREF(lit_75),sloc(76),YPsb((P)"(fun ((_z <any>) (_x <real-reference>)) (prop-value-setter _z _x reference-binding))"));
  T14 = VARREF_OR(YevalSastYreference_binding_setter,YPfalse);
  T15 = fun_reference_binding_setter_34;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYreference_binding_setter,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_76 = YPPsym((P)"<local-reference>");
  T17 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreal_referenceG),Ynil);
  T16 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_76),T17);
  VARSET(YevalSastYLlocal_referenceG,T16);
  lit_77 = YPPsym((P)"reference-called-function?");
  lit_78 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_35 = YPfab_met(FUNCODEREF(fun_reference_called_functionQ_35),T18,LITREF(lit_77),LITREF(lit_78),sloc(79),YPsb((P)"(fun ((_x <local-reference>)) (prop-value _x reference-called-function?))"));
  T20 = VARREF_OR(YevalSastYreference_called_functionQ,YPfalse);
  T21 = fun_reference_called_functionQ_35;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYreference_called_functionQ,T19);
  lit_79 = YPPsym((P)"reference-called-function?-setter");
  lit_80 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_36 = YPfab_met(FUNCODEREF(fun_reference_called_functionQ_setter_36),T22,LITREF(lit_79),LITREF(lit_80),sloc(79),YPsb((P)"(fun ((_z <any>) (_x <local-reference>)) (prop-value-setter _z _x reference-called-function?))"));
  T24 = VARREF_OR(YevalSastYreference_called_functionQ_setter,YPfalse);
  T25 = fun_reference_called_functionQ_setter_36;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYreference_called_functionQ_setter,T23);
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T26,YPfalse,LITREF(lit_81),sloc(79),YPsb((P)"(fun ((_x <any>)) #f)"));
  T27 = fun_37;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T27);
  lit_82 = YPPsym((P)"reference-frame-number");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_38 = YPfab_met(FUNCODEREF(fun_reference_frame_number_38),T28,LITREF(lit_82),LITREF(lit_83),sloc(80),YPsb((P)"(fun ((_x <local-reference>)) (prop-value _x reference-frame-number))"));
  T30 = VARREF_OR(YevalSastYreference_frame_number,YPfalse);
  T31 = fun_reference_frame_number_38;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYreference_frame_number,T29);
  lit_84 = YPPsym((P)"reference-frame-number-setter");
  lit_85 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_39 = YPfab_met(FUNCODEREF(fun_reference_frame_number_setter_39),T32,LITREF(lit_84),LITREF(lit_85),sloc(80),YPsb((P)"(fun ((_z <int>) (_x <local-reference>)) (prop-value-setter _z _x reference-frame-number))"));
  T34 = VARREF_OR(YevalSastYreference_frame_number_setter,YPfalse);
  T35 = fun_reference_frame_number_setter_39;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSastYreference_frame_number_setter,T33);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_86 = YPPsym((P)"reference-frame-offset");
  lit_87 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_40 = YPfab_met(FUNCODEREF(fun_reference_frame_offset_40),T36,LITREF(lit_86),LITREF(lit_87),sloc(81),YPsb((P)"(fun ((_x <local-reference>)) (prop-value _x reference-frame-offset))"));
  T38 = VARREF_OR(YevalSastYreference_frame_offset,YPfalse);
  T39 = fun_reference_frame_offset_40;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYreference_frame_offset,T37);
  lit_88 = YPPsym((P)"reference-frame-offset-setter");
  lit_89 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_41 = YPfab_met(FUNCODEREF(fun_reference_frame_offset_setter_41),T40,LITREF(lit_88),LITREF(lit_89),sloc(81),YPsb((P)"(fun ((_z <int>) (_x <local-reference>)) (prop-value-setter _z _x reference-frame-offset))"));
  T42 = VARREF_OR(YevalSastYreference_frame_offset_setter,YPfalse);
  T43 = fun_reference_frame_offset_setter_41;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYreference_frame_offset_setter,T41);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_90 = YPPsym((P)"<module-binding-reference>");
  T45 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreal_referenceG),Ynil);
  T44 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_90),T45);
  VARSET(YevalSastYLmodule_binding_referenceG,T44);
  lit_91 = YPPsym((P)"<global-reference>");
  T47 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T46 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_91),T47);
  VARSET(YevalSastYLglobal_referenceG,T46);
  lit_92 = YPPsym((P)"<runtime-reference>");
  T49 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T48 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_92),T49);
  VARSET(YevalSastYLruntime_referenceG,T48);
  lit_93 = YPPsym((P)"<dynamic-reference>");
  T51 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T50 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_93),T51);
  VARSET(YevalSastYLdynamic_referenceG,T50);
  lit_94 = YPPsym((P)"<predefined-reference>");
  T53 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreal_referenceG),Ynil);
  T52 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_94),T53);
  VARSET(YevalSastYLpredefined_referenceG,T52);
  lit_95 = YPPsym((P)"<static-module-binding-reference>");
  T55 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T54 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_95),T55);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T54);
  lit_96 = YPPsym((P)"<macro-reference>");
  T57 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T56 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_96),T57);
  VARSET(YevalSastYLmacro_referenceG,T56);
  lit_97 = YPPsym((P)"<magic-reference>");
  T59 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T58 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_97),T59);
  VARSET(YevalSastYLmagic_referenceG,T58);
  lit_98 = YPPsym((P)"<bound?>");
  T61 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T60 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T61);
  VARSET(YevalSastYLboundQG,T60);
  lit_99 = YPPsym((P)"bound?-reference");
  lit_100 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_42 = YPfab_met(FUNCODEREF(fun_boundQ_reference_42),T62,LITREF(lit_99),LITREF(lit_100),sloc(102),YPsb((P)"(fun ((_x <bound?>)) (prop-value _x bound?-reference))"));
  T64 = VARREF_OR(YevalSastYboundQ_reference,YPfalse);
  T65 = fun_boundQ_reference_42;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYboundQ_reference,T63);
  lit_101 = YPPsym((P)"bound?-reference-setter");
  lit_102 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_43 = YPfab_met(FUNCODEREF(fun_boundQ_reference_setter_43),T66,LITREF(lit_101),LITREF(lit_102),sloc(102),YPsb((P)"(fun ((_z <any>) (_x <bound?>)) (prop-value-setter _z _x bound?-reference))"));
  T68 = VARREF_OR(YevalSastYboundQ_reference_setter,YPfalse);
  T69 = fun_boundQ_reference_setter_43;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYboundQ_reference_setter,T67);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_103 = YPPsym((P)"bound?-default");
  lit_104 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_default_44 = YPfab_met(FUNCODEREF(fun_boundQ_default_44),T70,LITREF(lit_103),LITREF(lit_104),sloc(103),YPsb((P)"(fun ((_x <bound?>)) (prop-value _x bound?-default))"));
  T72 = VARREF_OR(YevalSastYboundQ_default,YPfalse);
  T73 = fun_boundQ_default_44;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYboundQ_default,T71);
  lit_105 = YPPsym((P)"bound?-default-setter");
  lit_106 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_default_setter_45 = YPfab_met(FUNCODEREF(fun_boundQ_default_setter_45),T74,LITREF(lit_105),LITREF(lit_106),sloc(103),YPsb((P)"(fun ((_z <any>) (_x <bound?>)) (prop-value-setter _z _x bound?-default))"));
  T76 = VARREF_OR(YevalSastYboundQ_default_setter,YPfalse);
  T77 = fun_boundQ_default_setter_45;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSastYboundQ_default_setter,T75);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_default),VARREF(YevalSastYboundQ_default_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_107 = YPPsym((P)"<assignment>");
  T79 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T78 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_107),T79);
  VARSET(YevalSastYLassignmentG,T78);
  lit_108 = YPPsym((P)"assignment-form");
  lit_109 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_46 = YPfab_met(FUNCODEREF(fun_assignment_form_46),T80,LITREF(lit_108),LITREF(lit_109),sloc(106),YPsb((P)"(fun ((_x <assignment>)) (prop-value _x assignment-form))"));
  T82 = VARREF_OR(YevalSastYassignment_form,YPfalse);
  T83 = fun_assignment_form_46;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYassignment_form,T81);
  lit_110 = YPPsym((P)"assignment-form-setter");
  lit_111 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_47 = YPfab_met(FUNCODEREF(fun_assignment_form_setter_47),T84,LITREF(lit_110),LITREF(lit_111),sloc(106),YPsb((P)"(fun ((_z <any>) (_x <assignment>)) (prop-value-setter _z _x assignment-form))"));
  T86 = VARREF_OR(YevalSastYassignment_form_setter,YPfalse);
  T87 = fun_assignment_form_setter_47;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSastYassignment_form_setter,T85);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_112 = YPPsym((P)"<local-assignment>");
  T89 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLassignmentG),Ynil);
  T88 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_112),T89);
  VARSET(YevalSastYLlocal_assignmentG,T88);
  lit_113 = YPPsym((P)"assignment-reference");
  lit_114 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_48 = YPfab_met(FUNCODEREF(fun_assignment_reference_48),T90,LITREF(lit_113),LITREF(lit_114),sloc(109),YPsb((P)"(fun ((_x <local-assignment>)) (prop-value _x assignment-reference))"));
  T92 = VARREF_OR(YevalSastYassignment_reference,YPfalse);
  T93 = fun_assignment_reference_48;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYassignment_reference,T91);
  lit_115 = YPPsym((P)"assignment-reference-setter");
  lit_116 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_49 = YPfab_met(FUNCODEREF(fun_assignment_reference_setter_49),T94,LITREF(lit_115),LITREF(lit_116),sloc(109),YPsb((P)"(fun ((_z <any>) (_x <local-assignment>)) (prop-value-setter _z _x assignment-reference))"));
  T96 = VARREF_OR(YevalSastYassignment_reference_setter,YPfalse);
  T97 = fun_assignment_reference_setter_49;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSastYassignment_reference_setter,T95);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_117 = YPPsym((P)"<global-assignment>");
  T99 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLassignmentG),Ynil);
  T98 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_117),T99);
  VARSET(YevalSastYLglobal_assignmentG,T98);
  lit_118 = YPPsym((P)"assignment-binding");
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_50 = YPfab_met(FUNCODEREF(fun_assignment_binding_50),T100,LITREF(lit_118),LITREF(lit_119),sloc(112),YPsb((P)"(fun ((_x <global-assignment>)) (prop-value _x assignment-binding))"));
  T102 = VARREF_OR(YevalSastYassignment_binding,YPfalse);
  T103 = fun_assignment_binding_50;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSastYassignment_binding,T101);
  lit_120 = YPPsym((P)"assignment-binding-setter");
  lit_121 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_51 = YPfab_met(FUNCODEREF(fun_assignment_binding_setter_51),T104,LITREF(lit_120),LITREF(lit_121),sloc(112),YPsb((P)"(fun ((_z <any>) (_x <global-assignment>)) (prop-value-setter _z _x assignment-binding))"));
  T106 = VARREF_OR(YevalSastYassignment_binding_setter,YPfalse);
  T107 = fun_assignment_binding_setter_51;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSastYassignment_binding_setter,T105);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_122 = YPPsym((P)"<runtime-assignment>");
  T109 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T108 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_122),T109);
  VARSET(YevalSastYLruntime_assignmentG,T108);
  lit_123 = YPPsym((P)"<dynamic-assignment>");
  T111 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T110 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_123),T111);
  VARSET(YevalSastYLdynamic_assignmentG,T110);
  lit_124 = YPPsym((P)"<definition>");
  T113 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T112 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_124),T113);
  VARSET(YevalSastYLdefinitionG,T112);
  lit_125 = YPPsym((P)"<variable-definition>");
  T115 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T114 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_125),T115);
  VARSET(YevalSastYLvariable_definitionG,T114);
  lit_126 = YPPsym((P)"<dynamic-definition>");
  T117 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLvariable_definitionG),Ynil);
  T116 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_126),T117);
  VARSET(YevalSastYLdynamic_definitionG,T116);
  lit_127 = YPPsym((P)"<ast-generic-definition>");
  T121 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T120 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_127),T121);
  T119 = VARSET(YevalSastYLast_generic_definitionG,T120);
  T118 = T119;
  return T118;
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
  P T144,T145,T146,T147,T148,T149,T150,T151;
DEFCREGS();
  lit_128 = YPPsym((P)"<ast-function-definition>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_128),T1);
  VARSET(YevalSastYLast_function_definitionG,T0);
  lit_129 = YPPsym((P)"<ast-method-definition>");
  T3 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T2 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_129),T3);
  VARSET(YevalSastYLast_method_definitionG,T2);
  lit_130 = YPPsym((P)"<ast-primitive-definition>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_130),T5);
  VARSET(YevalSastYLast_primitive_definitionG,T4);
  lit_131 = YPPsym((P)"<ast-macro-definition>");
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_131),T7);
  VARSET(YevalSastYLast_macro_definitionG,T6);
  lit_132 = YPPsym((P)"<ast-signature>");
  T9 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T8 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_132),T9);
  VARSET(YevalSastYLast_signatureG,T8);
  lit_133 = YPPsym((P)"signature-bindings");
  lit_134 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_52 = YPfab_met(FUNCODEREF(fun_signature_bindings_52),T10,LITREF(lit_133),LITREF(lit_134),sloc(137),YPsb((P)"(fun ((_x <ast-signature>)) (prop-value _x signature-bindings))"));
  T12 = VARREF_OR(YevalSastYsignature_bindings,YPfalse);
  T13 = fun_signature_bindings_52;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYsignature_bindings,T11);
  lit_135 = YPPsym((P)"signature-bindings-setter");
  lit_136 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_53 = YPfab_met(FUNCODEREF(fun_signature_bindings_setter_53),T14,LITREF(lit_135),LITREF(lit_136),sloc(137),YPsb((P)"(fun ((_z <any>) (_x <ast-signature>)) (prop-value-setter _z _x signature-bindings))"));
  T16 = VARREF_OR(YevalSastYsignature_bindings_setter,YPfalse);
  T17 = fun_signature_bindings_setter_53;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYsignature_bindings_setter,T15);
  lit_137 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T18,YPfalse,LITREF(lit_137),sloc(137),YPsb((P)"(fun ((_x <any>)) '())"));
  T19 = fun_54;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T19);
  lit_138 = YPPsym((P)"signature-names");
  lit_139 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_55 = YPfab_met(FUNCODEREF(fun_signature_names_55),T20,LITREF(lit_138),LITREF(lit_139),sloc(138),YPsb((P)"(fun ((_x <ast-signature>)) (prop-value _x signature-names))"));
  T22 = VARREF_OR(YevalSastYsignature_names,YPfalse);
  T23 = fun_signature_names_55;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYsignature_names,T21);
  lit_140 = YPPsym((P)"signature-names-setter");
  lit_141 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_56 = YPfab_met(FUNCODEREF(fun_signature_names_setter_56),T24,LITREF(lit_140),LITREF(lit_141),sloc(138),YPsb((P)"(fun ((_z <any>) (_x <ast-signature>)) (prop-value-setter _z _x signature-names))"));
  T26 = VARREF_OR(YevalSastYsignature_names_setter,YPfalse);
  T27 = fun_signature_names_setter_56;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYsignature_names_setter,T25);
  lit_142 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T28,YPfalse,LITREF(lit_142),sloc(138),YPsb((P)"(fun ((_x <any>)) '())"));
  T29 = fun_57;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T29);
  lit_143 = YPPsym((P)"signature-specs");
  lit_144 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_58 = YPfab_met(FUNCODEREF(fun_signature_specs_58),T30,LITREF(lit_143),LITREF(lit_144),sloc(139),YPsb((P)"(fun ((_x <ast-signature>)) (prop-value _x signature-specs))"));
  T32 = VARREF_OR(YevalSastYsignature_specs,YPfalse);
  T33 = fun_signature_specs_58;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYsignature_specs,T31);
  lit_145 = YPPsym((P)"signature-specs-setter");
  lit_146 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_59 = YPfab_met(FUNCODEREF(fun_signature_specs_setter_59),T34,LITREF(lit_145),LITREF(lit_146),sloc(139),YPsb((P)"(fun ((_z <any>) (_x <ast-signature>)) (prop-value-setter _z _x signature-specs))"));
  T36 = VARREF_OR(YevalSastYsignature_specs_setter,YPfalse);
  T37 = fun_signature_specs_setter_59;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYsignature_specs_setter,T35);
  lit_147 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T38,YPfalse,LITREF(lit_147),sloc(139),YPsb((P)"(fun ((_x <any>)) '())"));
  T39 = fun_60;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T39);
  lit_148 = YPPsym((P)"signature-nary?");
  lit_149 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_61 = YPfab_met(FUNCODEREF(fun_signature_naryQ_61),T40,LITREF(lit_148),LITREF(lit_149),sloc(140),YPsb((P)"(fun ((_x <ast-signature>)) (prop-value _x signature-nary?))"));
  T42 = VARREF_OR(YevalSastYsignature_naryQ,YPfalse);
  T43 = fun_signature_naryQ_61;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYsignature_naryQ,T41);
  lit_150 = YPPsym((P)"signature-nary?-setter");
  lit_151 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_62 = YPfab_met(FUNCODEREF(fun_signature_naryQ_setter_62),T44,LITREF(lit_150),LITREF(lit_151),sloc(140),YPsb((P)"(fun ((_z <any>) (_x <ast-signature>)) (prop-value-setter _z _x signature-nary?))"));
  T46 = VARREF_OR(YevalSastYsignature_naryQ_setter,YPfalse);
  T47 = fun_signature_naryQ_setter_62;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYsignature_naryQ_setter,T45);
  lit_152 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T48,YPfalse,LITREF(lit_152),sloc(140),YPsb((P)"(fun ((_x <any>)) #f)"));
  T49 = fun_63;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T49);
  lit_153 = YPPsym((P)"signature-arity");
  lit_154 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_64 = YPfab_met(FUNCODEREF(fun_signature_arity_64),T50,LITREF(lit_153),LITREF(lit_154),sloc(141),YPsb((P)"(fun ((_x <ast-signature>)) (prop-value _x signature-arity))"));
  T52 = VARREF_OR(YevalSastYsignature_arity,YPfalse);
  T53 = fun_signature_arity_64;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYsignature_arity,T51);
  lit_155 = YPPsym((P)"signature-arity-setter");
  lit_156 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_65 = YPfab_met(FUNCODEREF(fun_signature_arity_setter_65),T54,LITREF(lit_155),LITREF(lit_156),sloc(141),YPsb((P)"(fun ((_z <any>) (_x <ast-signature>)) (prop-value-setter _z _x signature-arity))"));
  T56 = VARREF_OR(YevalSastYsignature_arity_setter,YPfalse);
  T57 = fun_signature_arity_setter_65;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYsignature_arity_setter,T55);
  lit_157 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPfab_met(FUNCODEREF(fun_66),T58,YPfalse,LITREF(lit_157),sloc(141),YPsb((P)"(fun ((_x <any>)) #f)"));
  T59 = fun_66;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T59);
  lit_158 = YPPsym((P)"signature-value");
  lit_159 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_67 = YPfab_met(FUNCODEREF(fun_signature_value_67),T60,LITREF(lit_158),LITREF(lit_159),sloc(142),YPsb((P)"(fun ((_x <ast-signature>)) (prop-value _x signature-value))"));
  T62 = VARREF_OR(YevalSastYsignature_value,YPfalse);
  T63 = fun_signature_value_67;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYsignature_value,T61);
  lit_160 = YPPsym((P)"signature-value-setter");
  lit_161 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_68 = YPfab_met(FUNCODEREF(fun_signature_value_setter_68),T64,LITREF(lit_160),LITREF(lit_161),sloc(142),YPsb((P)"(fun ((_z <any>) (_x <ast-signature>)) (prop-value-setter _z _x signature-value))"));
  T66 = VARREF_OR(YevalSastYsignature_value_setter,YPfalse);
  T67 = fun_signature_value_setter_68;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYsignature_value_setter,T65);
  lit_162 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T68,YPfalse,LITREF(lit_162),sloc(142),YPsb((P)"(fun ((_x <any>)) #f)"));
  T69 = fun_69;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T69);
  lit_163 = YPPsym((P)"req-sig-specs");
  lit_164 = YPPlist(1,YPPsym((P)"sig"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_req_sig_specs_70 = YPfab_met(FUNCODEREF(fun_req_sig_specs_70),T70,LITREF(lit_163),LITREF(lit_164),sloc(145),YPsb((P)"(fun ((sig <ast-signature>) => <any>) (def types (signature-specs sig)) (if (constant-value (signature-nary? sig)) (sub types 0 (- (len types) 1)) types))"));
  T72 = VARREF_OR(YevalSastYreq_sig_specs,YPfalse);
  T73 = fun_req_sig_specs_70;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYreq_sig_specs,T71);
  lit_165 = YPPsym((P)"<ast-function>");
  T76 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSdependencyYLdependentG),Ynil);
  T75 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),T76);
  T74 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_165),T75);
  VARSET(YevalSastYLast_functionG,T74);
  lit_166 = YPPsym((P)"function-binding");
  lit_167 = YPPlist(1,YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_71 = YPfab_met(FUNCODEREF(fun_function_binding_71),T77,LITREF(lit_166),LITREF(lit_167),sloc(152),YPsb((P)"(fun ((_x <ast-function>)) (prop-value _x function-binding))"));
  T79 = VARREF_OR(YevalSastYfunction_binding,YPfalse);
  T80 = fun_function_binding_71;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYfunction_binding,T78);
  lit_168 = YPPsym((P)"function-binding-setter");
  lit_169 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_72 = YPfab_met(FUNCODEREF(fun_function_binding_setter_72),T81,LITREF(lit_168),LITREF(lit_169),sloc(152),YPsb((P)"(fun ((_z <any>) (_x <ast-function>)) (prop-value-setter _z _x function-binding))"));
  T83 = VARREF_OR(YevalSastYfunction_binding_setter,YPfalse);
  T84 = fun_function_binding_setter_72;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYfunction_binding_setter,T82);
  lit_170 = YPPlist(1,YPPsym((P)"_x"));
  T85 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T85,YPfalse,LITREF(lit_170),sloc(152),YPsb((P)"(fun ((_x <any>)) #f)"));
  T86 = fun_73;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T86);
  lit_171 = YPPsym((P)"function-debug-name");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_74 = YPfab_met(FUNCODEREF(fun_function_debug_name_74),T87,LITREF(lit_171),LITREF(lit_172),sloc(153),YPsb((P)"(fun ((_x <ast-function>)) (prop-value _x function-debug-name))"));
  T89 = VARREF_OR(YevalSastYfunction_debug_name,YPfalse);
  T90 = fun_function_debug_name_74;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_debug_name,T88);
  lit_173 = YPPsym((P)"function-debug-name-setter");
  lit_174 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_75 = YPfab_met(FUNCODEREF(fun_function_debug_name_setter_75),T91,LITREF(lit_173),LITREF(lit_174),sloc(153),YPsb((P)"(fun ((_z <any>) (_x <ast-function>)) (prop-value-setter _z _x function-debug-name))"));
  T93 = VARREF_OR(YevalSastYfunction_debug_name_setter,YPfalse);
  T94 = fun_function_debug_name_setter_75;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSastYfunction_debug_name_setter,T92);
  lit_175 = YPPlist(1,YPPsym((P)"_x"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPfab_met(FUNCODEREF(fun_76),T95,YPfalse,LITREF(lit_175),sloc(153),YPsb((P)"(fun ((_x <any>)) #f)"));
  T96 = fun_76;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T96);
  lit_176 = YPPsym((P)"function-signature");
  lit_177 = YPPlist(1,YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_77 = YPfab_met(FUNCODEREF(fun_function_signature_77),T97,LITREF(lit_176),LITREF(lit_177),sloc(155),YPsb((P)"(fun ((_x <ast-function>)) (prop-value _x function-signature))"));
  T99 = VARREF_OR(YevalSastYfunction_signature,YPfalse);
  T100 = fun_function_signature_77;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYfunction_signature,T98);
  lit_178 = YPPsym((P)"function-signature-setter");
  lit_179 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_78 = YPfab_met(FUNCODEREF(fun_function_signature_setter_78),T101,LITREF(lit_178),LITREF(lit_179),sloc(155),YPsb((P)"(fun ((_z <any>) (_x <ast-function>)) (prop-value-setter _z _x function-signature))"));
  T103 = VARREF_OR(YevalSastYfunction_signature_setter,YPfalse);
  T104 = fun_function_signature_setter_78;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYfunction_signature_setter,T102);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_180 = YPPsym((P)"function-bindings");
  lit_181 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPfab_met(FUNCODEREF(YevalSastYfunction_bindings),T105,LITREF(lit_180),LITREF(lit_181),sloc(157),YPsb((P)"(fun ((x <ast-function>)) (signature-bindings (function-signature x)))"));
  T106 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T106);
  lit_182 = YPPsym((P)"function-names");
  lit_183 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_names = YPfab_met(FUNCODEREF(YevalSastYfunction_names),T107,LITREF(lit_182),LITREF(lit_183),sloc(159),YPsb((P)"(fun ((x <ast-function>)) (signature-names (function-signature x)))"));
  T108 = YevalSastYfunction_names;
  VARSET(YevalSastYfunction_names,T108);
  lit_184 = YPPsym((P)"function-specs");
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPfab_met(FUNCODEREF(YevalSastYfunction_specs),T109,LITREF(lit_184),LITREF(lit_185),sloc(161),YPsb((P)"(fun ((x <ast-function>)) (signature-specs (function-signature x)))"));
  T110 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T110);
  lit_186 = YPPsym((P)"function-nary?");
  lit_187 = YPPlist(1,YPPsym((P)"x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPfab_met(FUNCODEREF(YevalSastYfunction_naryQ),T111,LITREF(lit_186),LITREF(lit_187),sloc(163),YPsb((P)"(fun ((x <ast-function>)) (constant-value (signature-nary? (function-signature x))))"));
  T112 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T112);
  lit_188 = YPPsym((P)"function-arity");
  lit_189 = YPPlist(1,YPPsym((P)"x"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_arity = YPfab_met(FUNCODEREF(YevalSastYfunction_arity),T113,LITREF(lit_188),LITREF(lit_189),sloc(165),YPsb((P)"(fun ((x <ast-function>)) (constant-value (signature-arity (function-signature x))))"));
  T114 = YevalSastYfunction_arity;
  VARSET(YevalSastYfunction_arity,T114);
  lit_190 = YPPsym((P)"function-value");
  lit_191 = YPPlist(1,YPPsym((P)"x"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPfab_met(FUNCODEREF(YevalSastYfunction_value),T115,LITREF(lit_190),LITREF(lit_191),sloc(167),YPsb((P)"(fun ((x <ast-function>)) (signature-value (function-signature x)))"));
  T116 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T116);
  lit_192 = YPPsym((P)"function-kind");
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  lit_194 = YPsb((P)"FUN");
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_85 = YPfab_met(FUNCODEREF(fun_function_kind_85),T117,LITREF(lit_192),LITREF(lit_193),sloc(170),YPsb((P)"(fun ((x <ast-function>)) FUN)"));
  T119 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T120 = fun_function_kind_85;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYfunction_kind,T118);
  lit_195 = YPPsym((P)"function-display-name");
  lit_196 = YPPlist(1,YPPsym((P)"f"));
  lit_197 = YPsb((P)"%s:%s");
  lit_198 = YPsb((P)"anonymous function");
  T121 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPfab_met(FUNCODEREF(YevalSastYfunction_display_name),T121,LITREF(lit_195),LITREF(lit_196),sloc(172),YPsb((P)"(fun ((f <ast-function>)) (def b (function-binding f)) (case-by b isa? ((<sym>) (as <str> b)) ((<module-binding>) (msg-to-str %s:%s (binding-module-name b) (binding-name b))) (#t anonymous function)))"));
  T122 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T122);
  lit_199 = YPPsym((P)"invalidate-dependent");
  lit_200 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  lit_201 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_202 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_203 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T123 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_87 = YPfab_met(FUNCODEREF(fun_invalidate_dependent_87),T123,LITREF(lit_199),LITREF(lit_200),sloc(182),YPsb((P)"(fun ((dependent <ast-function>) (dependable <dependable>) (dtype <dependency-type>)) (detach-dependent dependent) (def name (function-display-name dependent)) (cond ((dependency-includes-any? dtype $parse-dependencies) (msg out warning: %s needs to be reparsed\n name)) ((dependency-includes-any? dtype $optimizaton-dependencies) (msg out warning: %s needs to be re-optimized\n name)) (#t (msg out warning: unknown dependency of %s clobbered\n name))))"));
  T125 = VARREF_OR(YevalSdependencyYinvalidate_dependent,YPfalse);
  T126 = fun_invalidate_dependent_87;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSdependencyYinvalidate_dependent,T124);
  lit_204 = YPPsym((P)"<programs>");
  T128 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLpassive_programG),Ynil);
  T127 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_204),T128);
  VARSET(YevalSastYLprogramsG,T127);
  lit_205 = YPPsym((P)"as-lst");
  lit_206 = YPPlist(1,YPPsym((P)"e"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_88 = YPfab_met(FUNCODEREF(fun_as_lst_88),T129,LITREF(lit_205),LITREF(lit_206),sloc(198),YPsb((P)"(fun ((e <programs>) => <lst>) (rep loop ((res '()) (e e)) (if (nul? e) (rev! res) (loop (pair (head e) res) (tail e)))))"));
  T131 = VARREF_OR(YevalSastYas_lst,YPfalse);
  T132 = fun_as_lst_88;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYas_lst,T130);
  lit_207 = YPPlist(1,YPPsym((P)"exp"));
  lit_208 = YPPlist(1,YPPsym((P)"return"));
  lit_209 = YPPsym((P)"x-1860");
  lit_210 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_211 = YPPsym((P)"def-programs");
  lit_212 = YPPsym((P)"def-list");
  T135 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1860_89 = YPfab_met(FUNCODEREF(fun_x_1860_89),T135,LITREF(lit_209),LITREF(lit_210),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'def-programs exp)))"));
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPfab_met(FUNCODEREF(fun_90),T134,YPfalse,LITREF(lit_208),YPfalse,YPsb((P)"(fun (return) (loc ((x-1860 ((msg <str>) (args ...)) (return (macro-error 'def-programs exp)))) (let ((x-1859 exp)) (let ((name #f)) (if (isa? x-1859 <lst>) (let ((x-1859 (match-atom x-1859 'def-programs x-1860))) (let ((x-1859 (seq (set name (match-unquote x-1859 x-1860)) (tail x-1859)))) (let ((x-1859 (seq (let ((x-1859 (match-sublist x-1859 x-1860))) (match-nul-list x-1859 x-1860)) (tail x-1859)))) (match-nul-list x-1859 x-1860)))) (x-1860 Match Pattern Failure x-1859)) (quasiquote (def-list (unquote name) (<programs>)))))))"));
  T133 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T133,YPfalse,LITREF(lit_207),YPfalse,YPsb((P)"(fun (exp) (mif ((def-programs (unquote name)) exp) (quasiquote (def-list (unquote name) (<programs>))) (macro-error 'def-programs exp)))"));
  T136 = fun_91;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T136);
  lit_213 = YPPsym((P)"<ast-embodied-function>");
  T138 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_functionG),Ynil);
  T137 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_213),T138);
  VARSET(YevalSastYLast_embodied_functionG,T137);
  lit_214 = YPPsym((P)"function-body");
  lit_215 = YPPlist(1,YPPsym((P)"_x"));
  T139 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_92 = YPfab_met(FUNCODEREF(fun_function_body_92),T139,LITREF(lit_214),LITREF(lit_215),sloc(205),YPsb((P)"(fun ((_x <ast-embodied-function>)) (prop-value _x function-body))"));
  T141 = VARREF_OR(YevalSastYfunction_body,YPfalse);
  T142 = fun_function_body_92;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSastYfunction_body,T140);
  lit_216 = YPPsym((P)"function-body-setter");
  lit_217 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T143 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_93 = YPfab_met(FUNCODEREF(fun_function_body_setter_93),T143,LITREF(lit_216),LITREF(lit_217),sloc(205),YPsb((P)"(fun ((_z <any>) (_x <ast-embodied-function>)) (prop-value-setter _z _x function-body))"));
  T145 = VARREF_OR(YevalSastYfunction_body_setter,YPfalse);
  T146 = fun_function_body_setter_93;
  T144 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T145,T146);
  VARSET(YevalSastYfunction_body_setter,T144);
  lit_218 = YPPlist(1,YPPsym((P)"_x"));
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T148 = fun_94 = YPfab_met(FUNCODEREF(fun_94),T149,YPfalse,LITREF(lit_218),sloc(205),YPsb((P)"(fun ((_x <any>)) #f)"));
  T151 = fun_94;
  T150 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T151);
  T147 = T150;
  return T147;
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
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156;
DEFCREGS();
  lit_219 = YPPsym((P)"function-index");
  lit_220 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_95 = YPfab_met(FUNCODEREF(fun_function_index_95),T0,LITREF(lit_219),LITREF(lit_220),sloc(206),YPsb((P)"(fun ((_x <ast-embodied-function>)) (prop-value _x function-index))"));
  T2 = VARREF_OR(YevalSastYfunction_index,YPfalse);
  T3 = fun_function_index_95;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYfunction_index,T1);
  lit_221 = YPPsym((P)"function-index-setter");
  lit_222 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_96 = YPfab_met(FUNCODEREF(fun_function_index_setter_96),T4,LITREF(lit_221),LITREF(lit_222),sloc(206),YPsb((P)"(fun ((_z <any>) (_x <ast-embodied-function>)) (prop-value-setter _z _x function-index))"));
  T6 = VARREF_OR(YevalSastYfunction_index_setter,YPfalse);
  T7 = fun_function_index_setter_96;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYfunction_index_setter,T5);
  lit_223 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T8,YPfalse,LITREF(lit_223),sloc(206),YPsb((P)"(fun ((_x <any>)) 0)"));
  T9 = fun_97;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T9);
  lit_224 = YPPsym((P)"function-temporaries");
  lit_225 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_98 = YPfab_met(FUNCODEREF(fun_function_temporaries_98),T10,LITREF(lit_224),LITREF(lit_225),sloc(207),YPsb((P)"(fun ((_x <ast-embodied-function>)) (prop-value _x function-temporaries))"));
  T12 = VARREF_OR(YevalSastYfunction_temporaries,YPfalse);
  T13 = fun_function_temporaries_98;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYfunction_temporaries,T11);
  lit_226 = YPPsym((P)"function-temporaries-setter");
  lit_227 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_99 = YPfab_met(FUNCODEREF(fun_function_temporaries_setter_99),T14,LITREF(lit_226),LITREF(lit_227),sloc(207),YPsb((P)"(fun ((_z <any>) (_x <ast-embodied-function>)) (prop-value-setter _z _x function-temporaries))"));
  T16 = VARREF_OR(YevalSastYfunction_temporaries_setter,YPfalse);
  T17 = fun_function_temporaries_setter_99;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYfunction_temporaries_setter,T15);
  lit_228 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T18,YPfalse,LITREF(lit_228),sloc(207),YPsb((P)"(fun ((_x <any>)) '())"));
  T19 = fun_100;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T19);
  lit_229 = YPPsym((P)"function-registers");
  lit_230 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_101 = YPfab_met(FUNCODEREF(fun_function_registers_101),T20,LITREF(lit_229),LITREF(lit_230),sloc(208),YPsb((P)"(fun ((_x <ast-embodied-function>)) (prop-value _x function-registers))"));
  T22 = VARREF_OR(YevalSastYfunction_registers,YPfalse);
  T23 = fun_function_registers_101;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYfunction_registers,T21);
  lit_231 = YPPsym((P)"function-registers-setter");
  lit_232 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_102 = YPfab_met(FUNCODEREF(fun_function_registers_setter_102),T24,LITREF(lit_231),LITREF(lit_232),sloc(208),YPsb((P)"(fun ((_z <vec>) (_x <ast-embodied-function>)) (prop-value-setter _z _x function-registers))"));
  T26 = VARREF_OR(YevalSastYfunction_registers_setter,YPfalse);
  T27 = fun_function_registers_setter_102;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYfunction_registers_setter,T25);
  lit_233 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPfab_met(FUNCODEREF(fun_103),T28,YPfalse,LITREF(lit_233),sloc(208),YPsb((P)"(fun ((_x <any>)) (fab <vec> 0))"));
  T29 = fun_103;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T29);
  lit_234 = YPPsym((P)"function-loop");
  lit_235 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_loop_104 = YPfab_met(FUNCODEREF(fun_function_loop_104),T30,LITREF(lit_234),LITREF(lit_235),sloc(209),YPsb((P)"(fun ((_x <ast-embodied-function>)) (prop-value _x function-loop))"));
  T32 = VARREF_OR(YevalSastYfunction_loop,YPfalse);
  T33 = fun_function_loop_104;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYfunction_loop,T31);
  lit_236 = YPPsym((P)"function-loop-setter");
  lit_237 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_loop_setter_105 = YPfab_met(FUNCODEREF(fun_function_loop_setter_105),T34,LITREF(lit_236),LITREF(lit_237),sloc(209),YPsb((P)"(fun ((_z <any>) (_x <ast-embodied-function>)) (prop-value-setter _z _x function-loop))"));
  T36 = VARREF_OR(YevalSastYfunction_loop_setter,YPfalse);
  T37 = fun_function_loop_setter_105;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYfunction_loop_setter,T35);
  lit_238 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T38,YPfalse,LITREF(lit_238),sloc(209),YPsb((P)"(fun ((_x <any>)) #f)"));
  T39 = fun_106;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_loop),VARREF(YevalSastYfunction_loop_setter),VARREF(YLanyG),T39);
  lit_239 = YPPsym((P)"function-source");
  lit_240 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_107 = YPfab_met(FUNCODEREF(fun_function_source_107),T40,LITREF(lit_239),LITREF(lit_240),sloc(210),YPsb((P)"(fun ((_x <ast-embodied-function>)) (prop-value _x function-source))"));
  T42 = VARREF_OR(YevalSastYfunction_source,YPfalse);
  T43 = fun_function_source_107;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYfunction_source,T41);
  lit_241 = YPPsym((P)"function-source-setter");
  lit_242 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_108 = YPfab_met(FUNCODEREF(fun_function_source_setter_108),T44,LITREF(lit_241),LITREF(lit_242),sloc(210),YPsb((P)"(fun ((_z <any>) (_x <ast-embodied-function>)) (prop-value-setter _z _x function-source))"));
  T46 = VARREF_OR(YevalSastYfunction_source_setter,YPfalse);
  T47 = fun_function_source_setter_108;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYfunction_source_setter,T45);
  lit_243 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPfab_met(FUNCODEREF(fun_109),T48,YPfalse,LITREF(lit_243),sloc(210),YPsb((P)"(fun ((_x <any>)) #f)"));
  T49 = fun_109;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T49);
  lit_244 = YPPsym((P)"function-frame-len");
  lit_245 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_110 = YPfab_met(FUNCODEREF(fun_function_frame_len_110),T50,LITREF(lit_244),LITREF(lit_245),sloc(211),YPsb((P)"(fun ((_x <ast-embodied-function>)) (prop-value _x function-frame-len))"));
  T52 = VARREF_OR(YevalSastYfunction_frame_len,YPfalse);
  T53 = fun_function_frame_len_110;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYfunction_frame_len,T51);
  lit_246 = YPPsym((P)"function-frame-len-setter");
  lit_247 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_111 = YPfab_met(FUNCODEREF(fun_function_frame_len_setter_111),T54,LITREF(lit_246),LITREF(lit_247),sloc(211),YPsb((P)"(fun ((_z <any>) (_x <ast-embodied-function>)) (prop-value-setter _z _x function-frame-len))"));
  T56 = VARREF_OR(YevalSastYfunction_frame_len_setter,YPfalse);
  T57 = fun_function_frame_len_setter_111;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYfunction_frame_len_setter,T55);
  lit_248 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPfab_met(FUNCODEREF(fun_112),T58,YPfalse,LITREF(lit_248),sloc(211),YPsb((P)"(fun ((_x <any>)) #f)"));
  T59 = fun_112;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T59);
  lit_249 = YPPsym((P)"<free-environment>");
  T62 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T61 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T62);
  T60 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_249),T61);
  VARSET(YevalSastYLfree_environmentG,T60);
  T63 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_nul,T63);
  lit_250 = YPPsym((P)"free-environment");
  lit_251 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPfab_met(FUNCODEREF(YevalSastYfree_environment),T64,LITREF(lit_250),LITREF(lit_251),sloc(213),YPsb((P)"(fun (h t) (new <free-environment> head h tail t))"));
  T65 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T65);
  lit_252 = YPPsym((P)"nul");
  lit_253 = YPPlist(1,YPPsym((P)"e"));
  T67 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T66 = YPfab_sig(YPPlist(1,T67),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_nul_114 = YPfab_met(FUNCODEREF(fun_nul_114),T66,LITREF(lit_252),LITREF(lit_253),sloc(213),YPsb((P)"(fun ((e (t= <free-environment>)) => <free-environment>) $free-environment-nul)"));
  T69 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T70 = fun_nul_114;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YgooScolsScolYnul,T68);
  lit_254 = YPPsym((P)"<ast-method>");
  T72 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T71 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_254),T72);
  VARSET(YevalSastYLast_methodG,T71);
  lit_255 = YPPsym((P)"function-ref-count");
  lit_256 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_ref_count_115 = YPfab_met(FUNCODEREF(fun_function_ref_count_115),T73,LITREF(lit_255),LITREF(lit_256),sloc(216),YPsb((P)"(fun ((_x <ast-method>)) (prop-value _x function-ref-count))"));
  T75 = VARREF_OR(YevalSastYfunction_ref_count,YPfalse);
  T76 = fun_function_ref_count_115;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYfunction_ref_count,T74);
  lit_257 = YPPsym((P)"function-ref-count-setter");
  lit_258 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_ref_count_setter_116 = YPfab_met(FUNCODEREF(fun_function_ref_count_setter_116),T77,LITREF(lit_257),LITREF(lit_258),sloc(216),YPsb((P)"(fun ((_z <int>) (_x <ast-method>)) (prop-value-setter _z _x function-ref-count))"));
  T79 = VARREF_OR(YevalSastYfunction_ref_count_setter,YPfalse);
  T80 = fun_function_ref_count_setter_116;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYfunction_ref_count_setter,T78);
  lit_259 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPfab_met(FUNCODEREF(fun_117),T81,YPfalse,LITREF(lit_259),sloc(216),YPsb((P)"(fun ((_x <any>)) 0)"));
  T82 = fun_117;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_ref_count),VARREF(YevalSastYfunction_ref_count_setter),VARREF(YLintG),T82);
  lit_260 = YPPsym((P)"function-free");
  lit_261 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_118 = YPfab_met(FUNCODEREF(fun_function_free_118),T83,LITREF(lit_260),LITREF(lit_261),sloc(217),YPsb((P)"(fun ((_x <ast-method>)) (prop-value _x function-free))"));
  T85 = VARREF_OR(YevalSastYfunction_free,YPfalse);
  T86 = fun_function_free_118;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYfunction_free,T84);
  lit_262 = YPPsym((P)"function-free-setter");
  lit_263 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_119 = YPfab_met(FUNCODEREF(fun_function_free_setter_119),T87,LITREF(lit_262),LITREF(lit_263),sloc(217),YPsb((P)"(fun ((_z <free-environment>) (_x <ast-method>)) (prop-value-setter _z _x function-free))"));
  T89 = VARREF_OR(YevalSastYfunction_free_setter,YPfalse);
  T90 = fun_function_free_setter_119;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_free_setter,T88);
  lit_264 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPfab_met(FUNCODEREF(fun_120),T91,YPfalse,LITREF(lit_264),sloc(217),YPsb((P)"(fun ((_x <any>)) (nul <free-environment>))"));
  T92 = fun_120;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T92);
  lit_265 = YPPsym((P)"incf-ref-count");
  lit_266 = YPPlist(1,YPPsym((P)"x"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_121 = YPfab_met(FUNCODEREF(fun_incf_ref_count_121),T93,LITREF(lit_265),LITREF(lit_266),sloc(220),YPsb((P)"(fun (x) x)"));
  T95 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T96 = fun_incf_ref_count_121;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYincf_ref_count,T94);
  lit_267 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_122 = YPfab_met(FUNCODEREF(fun_incf_ref_count_122),T97,LITREF(lit_265),LITREF(lit_267),sloc(221),YPsb((P)"(fun ((x <ast-method>)) (incf (function-ref-count x)))"));
  T99 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T100 = fun_incf_ref_count_122;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYincf_ref_count,T98);
  lit_268 = YPPlist(1,YPPsym((P)"x"));
  lit_269 = YPsb((P)"MET");
  T101 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_123 = YPfab_met(FUNCODEREF(fun_function_kind_123),T101,LITREF(lit_192),LITREF(lit_268),sloc(223),YPsb((P)"(fun ((x <ast-method>)) MET)"));
  T103 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T104 = fun_function_kind_123;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYfunction_kind,T102);
  lit_270 = YPPsym((P)"<ast-primitive>");
  T106 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T105 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_270),T106);
  VARSET(YevalSastYLast_primitiveG,T105);
  lit_271 = YPPsym((P)"function-adjectives");
  lit_272 = YPPlist(1,YPPsym((P)"_x"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_124 = YPfab_met(FUNCODEREF(fun_function_adjectives_124),T107,LITREF(lit_271),LITREF(lit_272),sloc(226),YPsb((P)"(fun ((_x <ast-primitive>)) (prop-value _x function-adjectives))"));
  T109 = VARREF_OR(YevalSastYfunction_adjectives,YPfalse);
  T110 = fun_function_adjectives_124;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYfunction_adjectives,T108);
  lit_273 = YPPsym((P)"function-adjectives-setter");
  lit_274 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T111 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_125 = YPfab_met(FUNCODEREF(fun_function_adjectives_setter_125),T111,LITREF(lit_273),LITREF(lit_274),sloc(226),YPsb((P)"(fun ((_z <lst>) (_x <ast-primitive>)) (prop-value-setter _z _x function-adjectives))"));
  T113 = VARREF_OR(YevalSastYfunction_adjectives_setter,YPfalse);
  T114 = fun_function_adjectives_setter_125;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSastYfunction_adjectives_setter,T112);
  lit_275 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPfab_met(FUNCODEREF(fun_126),T115,YPfalse,LITREF(lit_275),sloc(226),YPsb((P)"(fun ((_x <any>)) '())"));
  T116 = fun_126;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T116);
  lit_276 = YPPlist(1,YPPsym((P)"x"));
  lit_277 = YPsb((P)"PRM");
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_127 = YPfab_met(FUNCODEREF(fun_function_kind_127),T117,LITREF(lit_192),LITREF(lit_276),sloc(228),YPsb((P)"(fun ((x <ast-primitive>)) PRM)"));
  T119 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T120 = fun_function_kind_127;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYfunction_kind,T118);
  lit_278 = YPPsym((P)"<ast-generic>");
  T122 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_functionG),Ynil);
  T121 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_278),T122);
  VARSET(YevalSastYLast_genericG,T121);
  lit_279 = YPPlist(1,YPPsym((P)"x"));
  lit_280 = YPsb((P)"GEN");
  T123 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_128 = YPfab_met(FUNCODEREF(fun_function_kind_128),T123,LITREF(lit_192),LITREF(lit_279),sloc(232),YPsb((P)"(fun ((x <ast-generic>)) GEN)"));
  T125 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T126 = fun_function_kind_128;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSastYfunction_kind,T124);
  lit_281 = YPPsym((P)"<alternative>");
  T128 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T127 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_281),T128);
  VARSET(YevalSastYLalternativeG,T127);
  lit_282 = YPPsym((P)"alternative-condition");
  lit_283 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_129 = YPfab_met(FUNCODEREF(fun_alternative_condition_129),T129,LITREF(lit_282),LITREF(lit_283),sloc(235),YPsb((P)"(fun ((_x <alternative>)) (prop-value _x alternative-condition))"));
  T131 = VARREF_OR(YevalSastYalternative_condition,YPfalse);
  T132 = fun_alternative_condition_129;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYalternative_condition,T130);
  lit_284 = YPPsym((P)"alternative-condition-setter");
  lit_285 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_130 = YPfab_met(FUNCODEREF(fun_alternative_condition_setter_130),T133,LITREF(lit_284),LITREF(lit_285),sloc(235),YPsb((P)"(fun ((_z <any>) (_x <alternative>)) (prop-value-setter _z _x alternative-condition))"));
  T135 = VARREF_OR(YevalSastYalternative_condition_setter,YPfalse);
  T136 = fun_alternative_condition_setter_130;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSastYalternative_condition_setter,T134);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_286 = YPPsym((P)"alternative-consequent");
  lit_287 = YPPlist(1,YPPsym((P)"_x"));
  T137 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_131 = YPfab_met(FUNCODEREF(fun_alternative_consequent_131),T137,LITREF(lit_286),LITREF(lit_287),sloc(236),YPsb((P)"(fun ((_x <alternative>)) (prop-value _x alternative-consequent))"));
  T139 = VARREF_OR(YevalSastYalternative_consequent,YPfalse);
  T140 = fun_alternative_consequent_131;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSastYalternative_consequent,T138);
  lit_288 = YPPsym((P)"alternative-consequent-setter");
  lit_289 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T141 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_132 = YPfab_met(FUNCODEREF(fun_alternative_consequent_setter_132),T141,LITREF(lit_288),LITREF(lit_289),sloc(236),YPsb((P)"(fun ((_z <any>) (_x <alternative>)) (prop-value-setter _z _x alternative-consequent))"));
  T143 = VARREF_OR(YevalSastYalternative_consequent_setter,YPfalse);
  T144 = fun_alternative_consequent_setter_132;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSastYalternative_consequent_setter,T142);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_290 = YPPsym((P)"alternative-alternant");
  lit_291 = YPPlist(1,YPPsym((P)"_x"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_133 = YPfab_met(FUNCODEREF(fun_alternative_alternant_133),T145,LITREF(lit_290),LITREF(lit_291),sloc(237),YPsb((P)"(fun ((_x <alternative>)) (prop-value _x alternative-alternant))"));
  T147 = VARREF_OR(YevalSastYalternative_alternant,YPfalse);
  T148 = fun_alternative_alternant_133;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSastYalternative_alternant,T146);
  lit_292 = YPPsym((P)"alternative-alternant-setter");
  lit_293 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T149 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_134 = YPfab_met(FUNCODEREF(fun_alternative_alternant_setter_134),T149,LITREF(lit_292),LITREF(lit_293),sloc(237),YPsb((P)"(fun ((_z <any>) (_x <alternative>)) (prop-value-setter _z _x alternative-alternant))"));
  T151 = VARREF_OR(YevalSastYalternative_alternant_setter,YPfalse);
  T152 = fun_alternative_alternant_setter_134;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSastYalternative_alternant_setter,T150);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_294 = YPPsym((P)"<loop>");
  T156 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T155 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_294),T156);
  T154 = VARSET(YevalSastYLloopG,T155);
  T153 = T154;
  return T153;
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138;
DEFCREGS();
  lit_295 = YPPsym((P)"loop-bindings");
  lit_296 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_bindings_135 = YPfab_met(FUNCODEREF(fun_loop_bindings_135),T0,LITREF(lit_295),LITREF(lit_296),sloc(240),YPsb((P)"(fun ((_x <loop>)) (prop-value _x loop-bindings))"));
  T2 = VARREF_OR(YevalSastYloop_bindings,YPfalse);
  T3 = fun_loop_bindings_135;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYloop_bindings,T1);
  lit_297 = YPPsym((P)"loop-bindings-setter");
  lit_298 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_bindings_setter_136 = YPfab_met(FUNCODEREF(fun_loop_bindings_setter_136),T4,LITREF(lit_297),LITREF(lit_298),sloc(240),YPsb((P)"(fun ((_z <any>) (_x <loop>)) (prop-value-setter _z _x loop-bindings))"));
  T6 = VARREF_OR(YevalSastYloop_bindings_setter,YPfalse);
  T7 = fun_loop_bindings_setter_136;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYloop_bindings_setter,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),VARREF(YevalSastYloop_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_299 = YPPsym((P)"loop-body");
  lit_300 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_body_137 = YPfab_met(FUNCODEREF(fun_loop_body_137),T8,LITREF(lit_299),LITREF(lit_300),sloc(241),YPsb((P)"(fun ((_x <loop>)) (prop-value _x loop-body))"));
  T10 = VARREF_OR(YevalSastYloop_body,YPfalse);
  T11 = fun_loop_body_137;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYloop_body,T9);
  lit_301 = YPPsym((P)"loop-body-setter");
  lit_302 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_body_setter_138 = YPfab_met(FUNCODEREF(fun_loop_body_setter_138),T12,LITREF(lit_301),LITREF(lit_302),sloc(241),YPsb((P)"(fun ((_z <any>) (_x <loop>)) (prop-value-setter _z _x loop-body))"));
  T14 = VARREF_OR(YevalSastYloop_body_setter,YPfalse);
  T15 = fun_loop_body_setter_138;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYloop_body_setter,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_body),VARREF(YevalSastYloop_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_303 = YPPsym((P)"loop-continue");
  lit_304 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_continue_139 = YPfab_met(FUNCODEREF(fun_loop_continue_139),T16,LITREF(lit_303),LITREF(lit_304),sloc(242),YPsb((P)"(fun ((_x <loop>)) (prop-value _x loop-continue))"));
  T18 = VARREF_OR(YevalSastYloop_continue,YPfalse);
  T19 = fun_loop_continue_139;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYloop_continue,T17);
  lit_305 = YPPsym((P)"loop-continue-setter");
  lit_306 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_continue_setter_140 = YPfab_met(FUNCODEREF(fun_loop_continue_setter_140),T20,LITREF(lit_305),LITREF(lit_306),sloc(242),YPsb((P)"(fun ((_z <any>) (_x <loop>)) (prop-value-setter _z _x loop-continue))"));
  T22 = VARREF_OR(YevalSastYloop_continue_setter,YPfalse);
  T23 = fun_loop_continue_setter_140;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYloop_continue_setter,T21);
  lit_307 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPfab_met(FUNCODEREF(fun_141),T24,YPfalse,LITREF(lit_307),sloc(242),YPsb((P)"(fun ((_x <any>)) #f)"));
  T25 = fun_141;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_continue),VARREF(YevalSastYloop_continue_setter),VARREF(YLanyG),T25);
  lit_308 = YPPsym((P)"<sequential>");
  T28 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T27 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T28);
  T26 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_308),T27);
  VARSET(YevalSastYLsequentialG,T26);
  T29 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_nul,T29);
  lit_309 = YPPsym((P)"sequential");
  lit_310 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPfab_met(FUNCODEREF(YevalSastYsequential),T30,LITREF(lit_309),LITREF(lit_310),sloc(244),YPsb((P)"(fun (h t) (new <sequential> head h tail t))"));
  T31 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T31);
  lit_311 = YPPlist(1,YPPsym((P)"e"));
  T33 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T32 = YPfab_sig(YPPlist(1,T33),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_nul_143 = YPfab_met(FUNCODEREF(fun_nul_143),T32,LITREF(lit_252),LITREF(lit_311),sloc(244),YPsb((P)"(fun ((e (t= <sequential>)) => <sequential>) $sequential-nul)"));
  T35 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T36 = fun_nul_143;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsScolYnul,T34);
  lit_312 = YPPsym((P)"<constant>");
  T38 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLpassive_programG),Ynil);
  T37 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_312),T38);
  VARSET(YevalSastYLconstantG,T37);
  lit_313 = YPPsym((P)"constant-value");
  lit_314 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_144 = YPfab_met(FUNCODEREF(fun_constant_value_144),T39,LITREF(lit_313),LITREF(lit_314),sloc(247),YPsb((P)"(fun ((_x <constant>)) (prop-value _x constant-value))"));
  T41 = VARREF_OR(YevalSastYconstant_value,YPfalse);
  T42 = fun_constant_value_144;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSastYconstant_value,T40);
  lit_315 = YPPsym((P)"constant-value-setter");
  lit_316 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_145 = YPfab_met(FUNCODEREF(fun_constant_value_setter_145),T43,LITREF(lit_315),LITREF(lit_316),sloc(247),YPsb((P)"(fun ((_z <any>) (_x <constant>)) (prop-value-setter _z _x constant-value))"));
  T45 = VARREF_OR(YevalSastYconstant_value_setter,YPfalse);
  T46 = fun_constant_value_setter_145;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YevalSastYconstant_value_setter,T44);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_317 = YPPsym((P)"constant-index");
  lit_318 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_146 = YPfab_met(FUNCODEREF(fun_constant_index_146),T47,LITREF(lit_317),LITREF(lit_318),sloc(248),YPsb((P)"(fun ((_x <constant>)) (prop-value _x constant-index))"));
  T49 = VARREF_OR(YevalSastYconstant_index,YPfalse);
  T50 = fun_constant_index_146;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSastYconstant_index,T48);
  lit_319 = YPPsym((P)"constant-index-setter");
  lit_320 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_147 = YPfab_met(FUNCODEREF(fun_constant_index_setter_147),T51,LITREF(lit_319),LITREF(lit_320),sloc(248),YPsb((P)"(fun ((_z <any>) (_x <constant>)) (prop-value-setter _z _x constant-index))"));
  T53 = VARREF_OR(YevalSastYconstant_index_setter,YPfalse);
  T54 = fun_constant_index_setter_147;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSastYconstant_index_setter,T52);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_321 = YPPsym((P)"<raw-constant>");
  T56 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLconstantG),Ynil);
  T55 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_321),T56);
  VARSET(YevalSastYLraw_constantG,T55);
  lit_322 = YPPsym((P)"<immediate-constant>");
  T58 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLconstantG),Ynil);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_322),T58);
  VARSET(YevalSastYLimmediate_constantG,T57);
  lit_323 = YPPsym((P)"<application>");
  T60 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T59 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_323),T60);
  VARSET(YevalSastYLapplicationG,T59);
  lit_324 = YPPsym((P)"application-arguments");
  lit_325 = YPPlist(1,YPPsym((P)"_x"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_148 = YPfab_met(FUNCODEREF(fun_application_arguments_148),T61,LITREF(lit_324),LITREF(lit_325),sloc(255),YPsb((P)"(fun ((_x <application>)) (prop-value _x application-arguments))"));
  T63 = VARREF_OR(YevalSastYapplication_arguments,YPfalse);
  T64 = fun_application_arguments_148;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSastYapplication_arguments,T62);
  lit_326 = YPPsym((P)"application-arguments-setter");
  lit_327 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_149 = YPfab_met(FUNCODEREF(fun_application_arguments_setter_149),T65,LITREF(lit_326),LITREF(lit_327),sloc(255),YPsb((P)"(fun ((_z <any>) (_x <application>)) (prop-value-setter _z _x application-arguments))"));
  T67 = VARREF_OR(YevalSastYapplication_arguments_setter,YPfalse);
  T68 = fun_application_arguments_setter_149;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSastYapplication_arguments_setter,T66);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_328 = YPPsym((P)"application-tail?");
  lit_329 = YPPlist(1,YPPsym((P)"_x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_150 = YPfab_met(FUNCODEREF(fun_application_tailQ_150),T69,LITREF(lit_328),LITREF(lit_329),sloc(256),YPsb((P)"(fun ((_x <application>)) (prop-value _x application-tail?))"));
  T71 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T72 = fun_application_tailQ_150;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSastYapplication_tailQ,T70);
  lit_330 = YPPsym((P)"application-tail?-setter");
  lit_331 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_151 = YPfab_met(FUNCODEREF(fun_application_tailQ_setter_151),T73,LITREF(lit_330),LITREF(lit_331),sloc(256),YPsb((P)"(fun ((_z <any>) (_x <application>)) (prop-value-setter _z _x application-tail?))"));
  T75 = VARREF_OR(YevalSastYapplication_tailQ_setter,YPfalse);
  T76 = fun_application_tailQ_setter_151;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYapplication_tailQ_setter,T74);
  lit_332 = YPPlist(1,YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_152 = YPfab_met(FUNCODEREF(fun_152),T77,YPfalse,LITREF(lit_332),sloc(256),YPsb((P)"(fun ((_x <any>)) #f)"));
  T78 = fun_152;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T78);
  lit_333 = YPPsym((P)"<loop-application>");
  T80 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLapplicationG),Ynil);
  T79 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_333),T80);
  VARSET(YevalSastYLloop_applicationG,T79);
  lit_334 = YPPsym((P)"application-loop");
  lit_335 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_loop_153 = YPfab_met(FUNCODEREF(fun_application_loop_153),T81,LITREF(lit_334),LITREF(lit_335),sloc(259),YPsb((P)"(fun ((_x <loop-application>)) (prop-value _x application-loop))"));
  T83 = VARREF_OR(YevalSastYapplication_loop,YPfalse);
  T84 = fun_application_loop_153;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYapplication_loop,T82);
  lit_336 = YPPsym((P)"application-loop-setter");
  lit_337 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_loop_setter_154 = YPfab_met(FUNCODEREF(fun_application_loop_setter_154),T85,LITREF(lit_336),LITREF(lit_337),sloc(259),YPsb((P)"(fun ((_z <loop>) (_x <loop-application>)) (prop-value-setter _z _x application-loop))"));
  T87 = VARREF_OR(YevalSastYapplication_loop_setter,YPfalse);
  T88 = fun_application_loop_setter_154;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalSastYapplication_loop_setter,T86);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),VARREF(YevalSastYapplication_loop_setter),VARREF(YevalSastYLloopG),VARREF(YPprop_unbound_error));
  lit_338 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_tailQ_155 = YPfab_met(FUNCODEREF(fun_application_tailQ_155),T89,LITREF(lit_328),LITREF(lit_338),sloc(261),YPsb((P)"(fun ((x <loop-application>) => <log>) #t)"));
  T91 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T92 = fun_application_tailQ_155;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YevalSastYapplication_tailQ,T90);
  lit_339 = YPPsym((P)"<regular-application>");
  T94 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLapplicationG),Ynil);
  T93 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_339),T94);
  VARSET(YevalSastYLregular_applicationG,T93);
  lit_340 = YPPsym((P)"application-function");
  lit_341 = YPPlist(1,YPPsym((P)"_x"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_156 = YPfab_met(FUNCODEREF(fun_application_function_156),T95,LITREF(lit_340),LITREF(lit_341),sloc(264),YPsb((P)"(fun ((_x <regular-application>)) (prop-value _x application-function))"));
  T97 = VARREF_OR(YevalSastYapplication_function,YPfalse);
  T98 = fun_application_function_156;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSastYapplication_function,T96);
  lit_342 = YPPsym((P)"application-function-setter");
  lit_343 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T99 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_157 = YPfab_met(FUNCODEREF(fun_application_function_setter_157),T99,LITREF(lit_342),LITREF(lit_343),sloc(264),YPsb((P)"(fun ((_z <any>) (_x <regular-application>)) (prop-value-setter _z _x application-function))"));
  T101 = VARREF_OR(YevalSastYapplication_function_setter,YPfalse);
  T102 = fun_application_function_setter_157;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSastYapplication_function_setter,T100);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_344 = YPPsym((P)"application-known?");
  lit_345 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_158 = YPfab_met(FUNCODEREF(fun_application_knownQ_158),T103,LITREF(lit_344),LITREF(lit_345),sloc(265),YPsb((P)"(fun ((_x <regular-application>)) (prop-value _x application-known?))"));
  T105 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T106 = fun_application_knownQ_158;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYapplication_knownQ,T104);
  lit_346 = YPPsym((P)"application-known?-setter");
  lit_347 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_159 = YPfab_met(FUNCODEREF(fun_application_knownQ_setter_159),T107,LITREF(lit_346),LITREF(lit_347),sloc(265),YPsb((P)"(fun ((_z <any>) (_x <regular-application>)) (prop-value-setter _z _x application-known?))"));
  T109 = VARREF_OR(YevalSastYapplication_knownQ_setter,YPfalse);
  T110 = fun_application_knownQ_setter_159;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYapplication_knownQ_setter,T108);
  lit_348 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPfab_met(FUNCODEREF(fun_160),T111,YPfalse,LITREF(lit_348),sloc(265),YPsb((P)"(fun ((_x <any>)) #f)"));
  T112 = fun_160;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T112);
  lit_349 = YPPsym((P)"<method-application>");
  T114 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLregular_applicationG),Ynil);
  T113 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_349),T114);
  VARSET(YevalSastYLmethod_applicationG,T113);
  lit_350 = YPPsym((P)"application-next-methods");
  lit_351 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_161 = YPfab_met(FUNCODEREF(fun_application_next_methods_161),T115,LITREF(lit_350),LITREF(lit_351),sloc(268),YPsb((P)"(fun ((_x <method-application>)) (prop-value _x application-next-methods))"));
  T117 = VARREF_OR(YevalSastYapplication_next_methods,YPfalse);
  T118 = fun_application_next_methods_161;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSastYapplication_next_methods,T116);
  lit_352 = YPPsym((P)"application-next-methods-setter");
  lit_353 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T119 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_162 = YPfab_met(FUNCODEREF(fun_application_next_methods_setter_162),T119,LITREF(lit_352),LITREF(lit_353),sloc(268),YPsb((P)"(fun ((_z <any>) (_x <method-application>)) (prop-value-setter _z _x application-next-methods))"));
  T121 = VARREF_OR(YevalSastYapplication_next_methods_setter,YPfalse);
  T122 = fun_application_next_methods_setter_162;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSastYapplication_next_methods_setter,T120);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_354 = YPPlist(1,YPPsym((P)"x"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_knownQ_163 = YPfab_met(FUNCODEREF(fun_application_knownQ_163),T123,LITREF(lit_344),LITREF(lit_354),sloc(270),YPsb((P)"(fun ((x <method-application>) => <log>) #t)"));
  T125 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T126 = fun_application_knownQ_163;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSastYapplication_knownQ,T124);
  lit_355 = YPPsym((P)"<predefined-application>");
  T128 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLapplicationG),Ynil);
  T127 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_355),T128);
  VARSET(YevalSastYLpredefined_applicationG,T127);
  lit_356 = YPPsym((P)"application-binding");
  lit_357 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_164 = YPfab_met(FUNCODEREF(fun_application_binding_164),T129,LITREF(lit_356),LITREF(lit_357),sloc(273),YPsb((P)"(fun ((_x <predefined-application>)) (prop-value _x application-binding))"));
  T131 = VARREF_OR(YevalSastYapplication_binding,YPfalse);
  T132 = fun_application_binding_164;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYapplication_binding,T130);
  lit_358 = YPPsym((P)"application-binding-setter");
  lit_359 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_165 = YPfab_met(FUNCODEREF(fun_application_binding_setter_165),T133,LITREF(lit_358),LITREF(lit_359),sloc(273),YPsb((P)"(fun ((_z <any>) (_x <predefined-application>)) (prop-value-setter _z _x application-binding))"));
  T135 = VARREF_OR(YevalSastYapplication_binding_setter,YPfalse);
  T136 = fun_application_binding_setter_165;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSastYapplication_binding_setter,T134);
  T138 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T137 = T138;
  return T137;
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
  P T128,T129,T130,T131,T132,T133;
DEFCREGS();
  lit_360 = YPPsym((P)"<fix-let>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_360),T1);
  VARSET(YevalSastYLfix_letG,T0);
  lit_361 = YPPsym((P)"fix-let-bindings");
  lit_362 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_166 = YPfab_met(FUNCODEREF(fun_fix_let_bindings_166),T2,LITREF(lit_361),LITREF(lit_362),sloc(276),YPsb((P)"(fun ((_x <fix-let>)) (prop-value _x fix-let-bindings))"));
  T4 = VARREF_OR(YevalSastYfix_let_bindings,YPfalse);
  T5 = fun_fix_let_bindings_166;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSastYfix_let_bindings,T3);
  lit_363 = YPPsym((P)"fix-let-bindings-setter");
  lit_364 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_167 = YPfab_met(FUNCODEREF(fun_fix_let_bindings_setter_167),T6,LITREF(lit_363),LITREF(lit_364),sloc(276),YPsb((P)"(fun ((_z <any>) (_x <fix-let>)) (prop-value-setter _z _x fix-let-bindings))"));
  T8 = VARREF_OR(YevalSastYfix_let_bindings_setter,YPfalse);
  T9 = fun_fix_let_bindings_setter_167;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYfix_let_bindings_setter,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_365 = YPPsym((P)"fix-let-types");
  lit_366 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_168 = YPfab_met(FUNCODEREF(fun_fix_let_types_168),T10,LITREF(lit_365),LITREF(lit_366),sloc(277),YPsb((P)"(fun ((_x <fix-let>)) (prop-value _x fix-let-types))"));
  T12 = VARREF_OR(YevalSastYfix_let_types,YPfalse);
  T13 = fun_fix_let_types_168;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYfix_let_types,T11);
  lit_367 = YPPsym((P)"fix-let-types-setter");
  lit_368 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_169 = YPfab_met(FUNCODEREF(fun_fix_let_types_setter_169),T14,LITREF(lit_367),LITREF(lit_368),sloc(277),YPsb((P)"(fun ((_z <any>) (_x <fix-let>)) (prop-value-setter _z _x fix-let-types))"));
  T16 = VARREF_OR(YevalSastYfix_let_types_setter,YPfalse);
  T17 = fun_fix_let_types_setter_169;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYfix_let_types_setter,T15);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_369 = YPPsym((P)"fix-let-arguments");
  lit_370 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_170 = YPfab_met(FUNCODEREF(fun_fix_let_arguments_170),T18,LITREF(lit_369),LITREF(lit_370),sloc(278),YPsb((P)"(fun ((_x <fix-let>)) (prop-value _x fix-let-arguments))"));
  T20 = VARREF_OR(YevalSastYfix_let_arguments,YPfalse);
  T21 = fun_fix_let_arguments_170;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYfix_let_arguments,T19);
  lit_371 = YPPsym((P)"fix-let-arguments-setter");
  lit_372 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_171 = YPfab_met(FUNCODEREF(fun_fix_let_arguments_setter_171),T22,LITREF(lit_371),LITREF(lit_372),sloc(278),YPsb((P)"(fun ((_z <any>) (_x <fix-let>)) (prop-value-setter _z _x fix-let-arguments))"));
  T24 = VARREF_OR(YevalSastYfix_let_arguments_setter,YPfalse);
  T25 = fun_fix_let_arguments_setter_171;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYfix_let_arguments_setter,T23);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_373 = YPPsym((P)"fix-let-body");
  lit_374 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_172 = YPfab_met(FUNCODEREF(fun_fix_let_body_172),T26,LITREF(lit_373),LITREF(lit_374),sloc(279),YPsb((P)"(fun ((_x <fix-let>)) (prop-value _x fix-let-body))"));
  T28 = VARREF_OR(YevalSastYfix_let_body,YPfalse);
  T29 = fun_fix_let_body_172;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYfix_let_body,T27);
  lit_375 = YPPsym((P)"fix-let-body-setter");
  lit_376 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_173 = YPfab_met(FUNCODEREF(fun_fix_let_body_setter_173),T30,LITREF(lit_375),LITREF(lit_376),sloc(279),YPsb((P)"(fun ((_z <any>) (_x <fix-let>)) (prop-value-setter _z _x fix-let-body))"));
  T32 = VARREF_OR(YevalSastYfix_let_body_setter,YPfalse);
  T33 = fun_fix_let_body_setter_173;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYfix_let_body_setter,T31);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_377 = YPPsym((P)"<low-let>");
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLfix_letG),Ynil);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_377),T35);
  VARSET(YevalSastYLlow_letG,T34);
  lit_378 = YPPsym((P)"<fab-list>");
  T38 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T37 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T38);
  T36 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_378),T37);
  VARSET(YevalSastYLfab_listG,T36);
  T39 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_nul,T39);
  lit_379 = YPPsym((P)"fab-list");
  lit_380 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPfab_met(FUNCODEREF(YevalSastYfab_list),T40,LITREF(lit_379),LITREF(lit_380),sloc(282),YPsb((P)"(fun (h t) (new <fab-list> head h tail t))"));
  T41 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T41);
  lit_381 = YPPlist(1,YPPsym((P)"e"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T42 = YPfab_sig(YPPlist(1,T43),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_nul_175 = YPfab_met(FUNCODEREF(fun_nul_175),T42,LITREF(lit_252),LITREF(lit_381),sloc(282),YPsb((P)"(fun ((e (t= <fab-list>)) => <fab-list>) $fab-list-nul)"));
  T45 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T46 = fun_nul_175;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooScolsScolYnul,T44);
  lit_382 = YPPsym((P)"<arguments>");
  T49 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T48 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T49);
  T47 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_382),T48);
  VARSET(YevalSastYLargumentsG,T47);
  T50 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_nul,T50);
  lit_383 = YPPsym((P)"arguments");
  lit_384 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPfab_met(FUNCODEREF(YevalSastYarguments),T51,LITREF(lit_383),LITREF(lit_384),sloc(284),YPsb((P)"(fun (h t) (new <arguments> head h tail t))"));
  T52 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T52);
  lit_385 = YPPlist(1,YPPsym((P)"e"));
  T54 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T53 = YPfab_sig(YPPlist(1,T54),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_nul_177 = YPfab_met(FUNCODEREF(fun_nul_177),T53,LITREF(lit_252),LITREF(lit_385),sloc(284),YPsb((P)"(fun ((e (t= <arguments>)) => <arguments>) $arguments-nul)"));
  T56 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T57 = fun_nul_177;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolYnul,T55);
  lit_386 = YPPsym((P)"<locals>");
  T59 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T58 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_386),T59);
  VARSET(YevalSastYLlocalsG,T58);
  lit_387 = YPPsym((P)"locals-bindings");
  lit_388 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_178 = YPfab_met(FUNCODEREF(fun_locals_bindings_178),T60,LITREF(lit_387),LITREF(lit_388),sloc(287),YPsb((P)"(fun ((_x <locals>)) (prop-value _x locals-bindings))"));
  T62 = VARREF_OR(YevalSastYlocals_bindings,YPfalse);
  T63 = fun_locals_bindings_178;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYlocals_bindings,T61);
  lit_389 = YPPsym((P)"locals-bindings-setter");
  lit_390 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_179 = YPfab_met(FUNCODEREF(fun_locals_bindings_setter_179),T64,LITREF(lit_389),LITREF(lit_390),sloc(287),YPsb((P)"(fun ((_z <any>) (_x <locals>)) (prop-value-setter _z _x locals-bindings))"));
  T66 = VARREF_OR(YevalSastYlocals_bindings_setter,YPfalse);
  T67 = fun_locals_bindings_setter_179;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYlocals_bindings_setter,T65);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_391 = YPPsym((P)"locals-functions");
  lit_392 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_180 = YPfab_met(FUNCODEREF(fun_locals_functions_180),T68,LITREF(lit_391),LITREF(lit_392),sloc(288),YPsb((P)"(fun ((_x <locals>)) (prop-value _x locals-functions))"));
  T70 = VARREF_OR(YevalSastYlocals_functions,YPfalse);
  T71 = fun_locals_functions_180;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYlocals_functions,T69);
  lit_393 = YPPsym((P)"locals-functions-setter");
  lit_394 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_181 = YPfab_met(FUNCODEREF(fun_locals_functions_setter_181),T72,LITREF(lit_393),LITREF(lit_394),sloc(288),YPsb((P)"(fun ((_z <any>) (_x <locals>)) (prop-value-setter _z _x locals-functions))"));
  T74 = VARREF_OR(YevalSastYlocals_functions_setter,YPfalse);
  T75 = fun_locals_functions_setter_181;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYlocals_functions_setter,T73);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_395 = YPPsym((P)"locals-body");
  lit_396 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_182 = YPfab_met(FUNCODEREF(fun_locals_body_182),T76,LITREF(lit_395),LITREF(lit_396),sloc(289),YPsb((P)"(fun ((_x <locals>)) (prop-value _x locals-body))"));
  T78 = VARREF_OR(YevalSastYlocals_body,YPfalse);
  T79 = fun_locals_body_182;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYlocals_body,T77);
  lit_397 = YPPsym((P)"locals-body-setter");
  lit_398 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_183 = YPfab_met(FUNCODEREF(fun_locals_body_setter_183),T80,LITREF(lit_397),LITREF(lit_398),sloc(289),YPsb((P)"(fun ((_z <any>) (_x <locals>)) (prop-value-setter _z _x locals-body))"));
  T82 = VARREF_OR(YevalSastYlocals_body_setter,YPfalse);
  T83 = fun_locals_body_setter_183;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYlocals_body_setter,T81);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_399 = YPPsym((P)"<bind-exit>");
  T85 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T84 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_399),T85);
  VARSET(YevalSastYLbind_exitG,T84);
  lit_400 = YPPsym((P)"bind-exit-main-fun");
  lit_401 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_184 = YPfab_met(FUNCODEREF(fun_bind_exit_main_fun_184),T86,LITREF(lit_400),LITREF(lit_401),sloc(292),YPsb((P)"(fun ((_x <bind-exit>)) (prop-value _x bind-exit-main-fun))"));
  T88 = VARREF_OR(YevalSastYbind_exit_main_fun,YPfalse);
  T89 = fun_bind_exit_main_fun_184;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSastYbind_exit_main_fun,T87);
  lit_402 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_403 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_185 = YPfab_met(FUNCODEREF(fun_bind_exit_main_fun_setter_185),T90,LITREF(lit_402),LITREF(lit_403),sloc(292),YPsb((P)"(fun ((_z <any>) (_x <bind-exit>)) (prop-value-setter _z _x bind-exit-main-fun))"));
  T92 = VARREF_OR(YevalSastYbind_exit_main_fun_setter,YPfalse);
  T93 = fun_bind_exit_main_fun_setter_185;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYbind_exit_main_fun_setter,T91);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_404 = YPPsym((P)"bind-exit-light?");
  lit_405 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_186 = YPfab_met(FUNCODEREF(fun_bind_exit_lightQ_186),T94,LITREF(lit_404),LITREF(lit_405),sloc(293),YPsb((P)"(fun ((_x <bind-exit>)) (prop-value _x bind-exit-light?))"));
  T96 = VARREF_OR(YevalSastYbind_exit_lightQ,YPfalse);
  T97 = fun_bind_exit_lightQ_186;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSastYbind_exit_lightQ,T95);
  lit_406 = YPPsym((P)"bind-exit-light?-setter");
  lit_407 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T98 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_setter_187 = YPfab_met(FUNCODEREF(fun_bind_exit_lightQ_setter_187),T98,LITREF(lit_406),LITREF(lit_407),sloc(293),YPsb((P)"(fun ((_z <log>) (_x <bind-exit>)) (prop-value-setter _z _x bind-exit-light?))"));
  T100 = VARREF_OR(YevalSastYbind_exit_lightQ_setter,YPfalse);
  T101 = fun_bind_exit_lightQ_setter_187;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSastYbind_exit_lightQ_setter,T99);
  lit_408 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPfab_met(FUNCODEREF(fun_188),T102,YPfalse,LITREF(lit_408),sloc(293),YPsb((P)"(fun ((_x <any>)) #t)"));
  T103 = fun_188;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_lightQ),VARREF(YevalSastYbind_exit_lightQ_setter),VARREF(YLlogG),T103);
  lit_409 = YPPsym((P)"<unwind-protect>");
  T105 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T104 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_409),T105);
  VARSET(YevalSastYLunwind_protectG,T104);
  lit_410 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_411 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_189 = YPfab_met(FUNCODEREF(fun_unwind_protect_protected_thunk_189),T106,LITREF(lit_410),LITREF(lit_411),sloc(296),YPsb((P)"(fun ((_x <unwind-protect>)) (prop-value _x unwind-protect-protected-thunk))"));
  T108 = VARREF_OR(YevalSastYunwind_protect_protected_thunk,YPfalse);
  T109 = fun_unwind_protect_protected_thunk_189;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSastYunwind_protect_protected_thunk,T107);
  lit_412 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_413 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_190 = YPfab_met(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_190),T110,LITREF(lit_412),LITREF(lit_413),sloc(296),YPsb((P)"(fun ((_z <any>) (_x <unwind-protect>)) (prop-value-setter _z _x unwind-protect-protected-thunk))"));
  T112 = VARREF_OR(YevalSastYunwind_protect_protected_thunk_setter,YPfalse);
  T113 = fun_unwind_protect_protected_thunk_setter_190;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T111);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_414 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_415 = YPPlist(1,YPPsym((P)"_x"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_191 = YPfab_met(FUNCODEREF(fun_unwind_protect_cleanup_thunk_191),T114,LITREF(lit_414),LITREF(lit_415),sloc(297),YPsb((P)"(fun ((_x <unwind-protect>)) (prop-value _x unwind-protect-cleanup-thunk))"));
  T116 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk,YPfalse);
  T117 = fun_unwind_protect_cleanup_thunk_191;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T115);
  lit_416 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_417 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T118 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_192 = YPfab_met(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_192),T118,LITREF(lit_416),LITREF(lit_417),sloc(297),YPsb((P)"(fun ((_z <any>) (_x <unwind-protect>)) (prop-value-setter _z _x unwind-protect-cleanup-thunk))"));
  T120 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk_setter,YPfalse);
  T121 = fun_unwind_protect_cleanup_thunk_setter_192;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T119);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_418 = YPPsym((P)"<monitor>");
  T123 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T122 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_418),T123);
  VARSET(YevalSastYLmonitorG,T122);
  lit_419 = YPPsym((P)"monitor-type");
  lit_420 = YPPlist(1,YPPsym((P)"_x"));
  T124 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_193 = YPfab_met(FUNCODEREF(fun_monitor_type_193),T124,LITREF(lit_419),LITREF(lit_420),sloc(300),YPsb((P)"(fun ((_x <monitor>)) (prop-value _x monitor-type))"));
  T126 = VARREF_OR(YevalSastYmonitor_type,YPfalse);
  T127 = fun_monitor_type_193;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YevalSastYmonitor_type,T125);
  lit_421 = YPPsym((P)"monitor-type-setter");
  lit_422 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T128 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_194 = YPfab_met(FUNCODEREF(fun_monitor_type_setter_194),T128,LITREF(lit_421),LITREF(lit_422),sloc(300),YPsb((P)"(fun ((_z <any>) (_x <monitor>)) (prop-value-setter _z _x monitor-type))"));
  T130 = VARREF_OR(YevalSastYmonitor_type_setter,YPfalse);
  T131 = fun_monitor_type_setter_194;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSastYmonitor_type_setter,T129);
  T133 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T132 = T133;
  return T132;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188;
DEFCREGS();
  lit_423 = YPPsym((P)"monitor-info");
  lit_424 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_195 = YPfab_met(FUNCODEREF(fun_monitor_info_195),T0,LITREF(lit_423),LITREF(lit_424),sloc(301),YPsb((P)"(fun ((_x <monitor>)) (prop-value _x monitor-info))"));
  T2 = VARREF_OR(YevalSastYmonitor_info,YPfalse);
  T3 = fun_monitor_info_195;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYmonitor_info,T1);
  lit_425 = YPPsym((P)"monitor-info-setter");
  lit_426 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_196 = YPfab_met(FUNCODEREF(fun_monitor_info_setter_196),T4,LITREF(lit_425),LITREF(lit_426),sloc(301),YPsb((P)"(fun ((_z <any>) (_x <monitor>)) (prop-value-setter _z _x monitor-info))"));
  T6 = VARREF_OR(YevalSastYmonitor_info_setter,YPfalse);
  T7 = fun_monitor_info_setter_196;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYmonitor_info_setter,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_427 = YPPsym((P)"monitor-test");
  lit_428 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_197 = YPfab_met(FUNCODEREF(fun_monitor_test_197),T8,LITREF(lit_427),LITREF(lit_428),sloc(302),YPsb((P)"(fun ((_x <monitor>)) (prop-value _x monitor-test))"));
  T10 = VARREF_OR(YevalSastYmonitor_test,YPfalse);
  T11 = fun_monitor_test_197;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYmonitor_test,T9);
  lit_429 = YPPsym((P)"monitor-test-setter");
  lit_430 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_198 = YPfab_met(FUNCODEREF(fun_monitor_test_setter_198),T12,LITREF(lit_429),LITREF(lit_430),sloc(302),YPsb((P)"(fun ((_z <any>) (_x <monitor>)) (prop-value-setter _z _x monitor-test))"));
  T14 = VARREF_OR(YevalSastYmonitor_test_setter,YPfalse);
  T15 = fun_monitor_test_setter_198;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYmonitor_test_setter,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_431 = YPPsym((P)"monitor-handler");
  lit_432 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_199 = YPfab_met(FUNCODEREF(fun_monitor_handler_199),T16,LITREF(lit_431),LITREF(lit_432),sloc(303),YPsb((P)"(fun ((_x <monitor>)) (prop-value _x monitor-handler))"));
  T18 = VARREF_OR(YevalSastYmonitor_handler,YPfalse);
  T19 = fun_monitor_handler_199;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYmonitor_handler,T17);
  lit_433 = YPPsym((P)"monitor-handler-setter");
  lit_434 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_200 = YPfab_met(FUNCODEREF(fun_monitor_handler_setter_200),T20,LITREF(lit_433),LITREF(lit_434),sloc(303),YPsb((P)"(fun ((_z <any>) (_x <monitor>)) (prop-value-setter _z _x monitor-handler))"));
  T22 = VARREF_OR(YevalSastYmonitor_handler_setter,YPfalse);
  T23 = fun_monitor_handler_setter_200;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYmonitor_handler_setter,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_435 = YPPsym((P)"monitor-main-thunk");
  lit_436 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_201 = YPfab_met(FUNCODEREF(fun_monitor_main_thunk_201),T24,LITREF(lit_435),LITREF(lit_436),sloc(304),YPsb((P)"(fun ((_x <monitor>)) (prop-value _x monitor-main-thunk))"));
  T26 = VARREF_OR(YevalSastYmonitor_main_thunk,YPfalse);
  T27 = fun_monitor_main_thunk_201;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYmonitor_main_thunk,T25);
  lit_437 = YPPsym((P)"monitor-main-thunk-setter");
  lit_438 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_202 = YPfab_met(FUNCODEREF(fun_monitor_main_thunk_setter_202),T28,LITREF(lit_437),LITREF(lit_438),sloc(304),YPsb((P)"(fun ((_z <any>) (_x <monitor>)) (prop-value-setter _z _x monitor-main-thunk))"));
  T30 = VARREF_OR(YevalSastYmonitor_main_thunk_setter,YPfalse);
  T31 = fun_monitor_main_thunk_setter_202;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYmonitor_main_thunk_setter,T29);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_439 = YPPsym((P)"ast-walk!");
  lit_440 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_203 = YPfab_met(FUNCODEREF(fun_ast_walkX_203),T32,LITREF(lit_439),LITREF(lit_440),sloc(308),YPsb((P)"(fun (g o (args ...)) (for ((prop (props-of o))) (def getter (prop-getter prop)) (def setter (prop-setter prop)) (unless (or (== getter binding-value) (== getter application-loop)) (when (prop-bound? o getter) (def x (getter o)) (when (isa? x <program>) (setter (app g x args) o))))) o)"));
  T34 = VARREF_OR(YevalSastYast_walkX,YPfalse);
  T35 = fun_ast_walkX_203;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSastYast_walkX,T33);
  lit_441 = YPPsym((P)"ast-walk");
  lit_442 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_204 = YPfab_met(FUNCODEREF(fun_ast_walk_204),T36,LITREF(lit_441),LITREF(lit_442),sloc(323),YPsb((P)"(fun (g o (args ...)) (for ((prop (props-of o))) (def getter (prop-getter prop)) (unless (or (== getter binding-value) (== getter application-loop)) (when (prop-bound? o getter) (def x (getter o)) (when (isa? x <program>) (app g x args))))) o)"));
  T38 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T39 = fun_ast_walk_204;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYast_walk,T37);
  lit_443 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramsG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_205 = YPfab_met(FUNCODEREF(fun_ast_walk_205),T40,LITREF(lit_441),LITREF(lit_443),sloc(334),YPsb((P)"(fun (g (o <programs>) (args ...)) (rep walk ((x o)) (unless (nul? x) (let ((e (head x))) (when (isa? e <program>) (app g e args)) (walk (tail x))))))"));
  T42 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T43 = fun_ast_walk_205;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYast_walk,T41);
  lit_444 = YPPsym((P)"ast-copy");
  lit_445 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_206 = YPfab_met(FUNCODEREF(fun_ast_copy_206),T44,LITREF(lit_444),LITREF(lit_445),sloc(353),YPsb((P)"(fun ((x <program>) => <any>) (def copy (clone x)) (set (program-register copy) #f) (ast-walk! ast-copy copy))"));
  T46 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T47 = fun_ast_copy_206;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYast_copy,T45);
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_207 = YPfab_met(FUNCODEREF(fun_ast_copy_207),T48,LITREF(lit_444),LITREF(lit_446),sloc(358),YPsb((P)"(fun ((x <programs>) => <any>) (if (nul? x) x (sup x)))"));
  T50 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T51 = fun_ast_copy_207;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSastYast_copy,T49);
  lit_447 = YPPsym((P)"objectify");
  lit_448 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T52 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_208 = YPfab_met(FUNCODEREF(fun_objectify_208),T52,LITREF(lit_447),LITREF(lit_448),sloc(365),YPsb((P)"(fun ((e <lst>) (r <static-environment>) tail? => <any>) (if (isa? e <program>) e (objectify-list (objectify (head e) r #f) e r tail?)))"));
  T54 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T55 = fun_objectify_208;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSastYobjectify,T53);
  lit_449 = YPPsym((P)"objectify-list");
  lit_450 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_209 = YPfab_met(FUNCODEREF(fun_objectify_list_209),T56,LITREF(lit_449),LITREF(lit_450),sloc(370),YPsb((P)"(fun ((f <program>) (e <lst>) (r <static-environment>) tail? => <any>) (objectify-application f (tail e) r tail?))"));
  T58 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T59 = fun_objectify_list_209;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSastYobjectify_list,T57);
  lit_451 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T60 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_210 = YPfab_met(FUNCODEREF(fun_objectify_list_210),T60,LITREF(lit_449),LITREF(lit_451),sloc(374),YPsb((P)"(fun ((f <magic-reference>) (e <lst>) (r <static-environment>) tail? => <any>) ((binding-handler (reference-binding f)) e r tail?))"));
  T62 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T63 = fun_objectify_list_210;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYobjectify_list,T61);
  lit_452 = YPPsym((P)"maybe-log-dependency");
  lit_453 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPfab_met(FUNCODEREF(YevalSastYmaybe_log_dependency),T64,LITREF(lit_452),LITREF(lit_453),sloc(378),YPsb((P)"(fun ((dependable <dependable>) (dtype <dependency-type>)) (when *current-dependent* (log-dependency dependable *current-dependent* dtype) (transaction-register-dependent *current-dependent*)))"));
  T65 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T65);
  lit_454 = YPPsym((P)"macro-expander");
  lit_455 = YPPlist(1,YPPsym((P)"macro-binding"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPfab_met(FUNCODEREF(YevalSastYmacro_expander),T66,LITREF(lit_454),LITREF(lit_455),sloc(383),YPsb((P)"(fun ((macro-binding <module-binding>) => <fun>) (maybe-log-dependency macro-binding $expansion-parse-dependency) (binding-handler macro-binding))"));
  T67 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T67);
  lit_456 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_213 = YPfab_met(FUNCODEREF(fun_objectify_list_213),T68,LITREF(lit_449),LITREF(lit_456),sloc(387),YPsb((P)"(fun ((f <macro-reference>) (e <lst>) (r <static-environment>) tail? => <any>) (objectify ((macro-expander (reference-binding f)) e r tail?) r tail?))"));
  T70 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T71 = fun_objectify_list_213;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYobjectify_list,T69);
  lit_457 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T72 = YPfab_sig(YPPlist(3,VARREF(YLsymG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_214 = YPfab_met(FUNCODEREF(fun_objectify_214),T72,LITREF(lit_447),LITREF(lit_457),sloc(391),YPsb((P)"(fun ((e <sym>) (r <static-environment>) tail? => <any>) (objectify-symbol e r))"));
  T74 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T75 = fun_objectify_214;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYobjectify,T73);
  lit_458 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T76 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_215 = YPfab_met(FUNCODEREF(fun_objectify_215),T76,LITREF(lit_447),LITREF(lit_458),sloc(394),YPsb((P)"(fun ((e <module-binding>) (r <static-environment>) tail? => <any>) e)"));
  T78 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T79 = fun_objectify_215;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYobjectify,T77);
  lit_459 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T80 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_216 = YPfab_met(FUNCODEREF(fun_objectify_216),T80,LITREF(lit_447),LITREF(lit_459),sloc(397),YPsb((P)"(fun ((e <program>) (r <static-environment>) tail? => <any>) e)"));
  T82 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T83 = fun_objectify_216;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYobjectify,T81);
  lit_460 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T85 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T84 = YPfab_sig(YPPlist(3,T85,VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_217 = YPfab_met(FUNCODEREF(fun_objectify_217),T84,LITREF(lit_447),LITREF(lit_460),sloc(400),YPsb((P)"(fun ((e (t= '())) (r <static-environment>) tail? => <any>) (objectify-quotation e r))"));
  T87 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T88 = fun_objectify_217;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalSastYobjectify,T86);
  lit_461 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T89 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_218 = YPfab_met(FUNCODEREF(fun_objectify_218),T89,LITREF(lit_447),LITREF(lit_461),sloc(403),YPsb((P)"(fun (e (r <static-environment>) tail? => <any>) (objectify-quotation e r))"));
  T91 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T92 = fun_objectify_218;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YevalSastYobjectify,T90);
  lit_462 = YPPsym((P)"objectify-quotation");
  lit_463 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T93 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_219 = YPfab_met(FUNCODEREF(fun_objectify_quotation_219),T93,LITREF(lit_462),LITREF(lit_463),sloc(406),YPsb((P)"(fun (value r => <constant>) (new <constant> constant-value value))"));
  T95 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T96 = fun_objectify_quotation_219;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYobjectify_quotation,T94);
  lit_464 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_220 = YPfab_met(FUNCODEREF(fun_objectify_quotation_220),T97,LITREF(lit_462),LITREF(lit_464),sloc(409),YPsb((P)"(fun ((value <int>) r => <immediate-constant>) (new <immediate-constant> constant-value value))"));
  T99 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T100 = fun_objectify_quotation_220;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYobjectify_quotation,T98);
  lit_465 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_221 = YPfab_met(FUNCODEREF(fun_objectify_quotation_221),T101,LITREF(lit_462),LITREF(lit_465),sloc(412),YPsb((P)"(fun ((value <chr>) r => <immediate-constant>) (new <immediate-constant> constant-value value))"));
  T103 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T104 = fun_objectify_quotation_221;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYobjectify_quotation,T102);
  lit_466 = YPPsym((P)"objectify-raw");
  lit_467 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T105 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_222 = YPfab_met(FUNCODEREF(fun_objectify_raw_222),T105,LITREF(lit_466),LITREF(lit_467),sloc(415),YPsb((P)"(fun (value r => <raw-constant>) (new <raw-constant> constant-value value))"));
  T107 = VARREF_OR(YevalSastYobjectify_raw,YPfalse);
  T108 = fun_objectify_raw_222;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSastYobjectify_raw,T106);
  lit_468 = YPPsym((P)"objectify-bound?");
  lit_469 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"default"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T109 = YPfab_sig(YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_223 = YPfab_met(FUNCODEREF(fun_objectify_boundQ_223),T109,LITREF(lit_468),LITREF(lit_469),sloc(418),YPsb((P)"(fun ((e <sym>) default (r <static-environment>) tail? => <any>) (new <bound?> bound?-reference (objectify-symbol e r) bound?-default (objectify default r #f)))"));
  T111 = VARREF_OR(YevalSastYobjectify_boundQ,YPfalse);
  T112 = fun_objectify_boundQ_223;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSastYobjectify_boundQ,T110);
  lit_470 = YPPsym((P)"objectify-compile-time");
  lit_471 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T113 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_224 = YPfab_met(FUNCODEREF(fun_objectify_compile_time_224),T113,LITREF(lit_470),LITREF(lit_471),sloc(426),YPsb((P)"(fun (program r tail? rt? => <program>) (def mod (find-environment-module r)) (def syntax-env (module-syntax-environment mod)) (def target-env (module-target-environment mod)) (def ast (objectify program syntax-env tail?)) (ast-evaluate ast) (if (and rt? (~== syntax-env target-env)) (objectify program r tail?) (new <constant> constant-value #f)))"));
  T115 = VARREF_OR(YevalSastYobjectify_compile_time,YPfalse);
  T116 = fun_objectify_compile_time_224;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSastYobjectify_compile_time,T114);
  lit_472 = YPPsym((P)"objectify-alternative");
  lit_473 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T117 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_225 = YPfab_met(FUNCODEREF(fun_objectify_alternative_225),T117,LITREF(lit_472),LITREF(lit_473),sloc(442),YPsb((P)"(fun (t c a r tail? => <alternative>) (new <alternative> alternative-condition (objectify t r #f) alternative-consequent (objectify c r tail?) alternative-alternant (objectify a r tail?)))"));
  T119 = VARREF_OR(YevalSastYobjectify_alternative,YPfalse);
  T120 = fun_objectify_alternative_225;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYobjectify_alternative,T118);
  lit_474 = YPPsym((P)"sequentialize");
  lit_475 = YPPlist(1,YPPsym((P)"e*"));
  lit_476 = YPPsym((P)"loop");
  lit_477 = YPPlist(1,YPPsym((P)"e*"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_226 = YPfab_met(FUNCODEREF(fun_loop_226),T122,LITREF(lit_476),LITREF(lit_477),sloc(453),YPsb((P)"(fun (e* => #f) (if (nul? e*) (nul <sequential>) (sequential (head e*) (loop (tail e*)))))"));
  T121 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_227 = YPfab_met(FUNCODEREF(fun_sequentialize_227),T121,LITREF(lit_474),LITREF(lit_475),sloc(448),YPsb((P)"(fun ((e* <lst>) => <program>) (if (nul? e*) (new <constant> constant-value #f) (if (nul? (tail e*)) (head e*) (rep loop ((e* e*)) (if (nul? e*) (nul <sequential>) (sequential (head e*) (loop (tail e*))))))))"));
  T124 = VARREF_OR(YevalSastYsequentialize,YPfalse);
  T125 = fun_sequentialize_227;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSastYsequentialize,T123);
  lit_478 = YPPsym((P)"transform-defs");
  lit_479 = YPPlist(1,YPPsym((P)"e*"));
  T126 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_228 = YPfab_met(FUNCODEREF(fun_transform_defs_228),T126,LITREF(lit_478),LITREF(lit_479),sloc(458),YPsb((P)"(fun ((e* <lst>) => <lst>) (if (nul? e*) '() (let ((e (head e*))) (if (sexpr-def? e) (quasiquote ((let (((unquote (sexpr-def-variable e)) (unquote (sexpr-def-value e)))) (unquote-splicing (transform-defs (tail e*)))))) (quasiquote ((unquote e) (unquote-splicing (transform-defs (tail e*)))))))))"));
  T128 = VARREF_OR(YevalSastYtransform_defs,YPfalse);
  T129 = fun_transform_defs_228;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSastYtransform_defs,T127);
  lit_480 = YPPsym((P)"objectify-sequential");
  lit_481 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T130 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_229 = YPfab_met(FUNCODEREF(fun_objectify_sequential_229),T130,LITREF(lit_480),LITREF(lit_481),sloc(467),YPsb((P)"(fun ((e* <lst>) r tail? => <program>) (def asts (rep loop ((res '()) (e* (transform-defs e*))) (if (nul? e*) (rev! res) (let ((tail? (if (nul? (tail e*)) tail? #f)) (head (objectify (head e*) r tail?))) (loop (pair head res) (tail e*)))))) (sequentialize asts))"));
  T132 = VARREF_OR(YevalSastYobjectify_sequential,YPfalse);
  T133 = fun_objectify_sequential_229;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSastYobjectify_sequential,T131);
  lit_482 = YPPsym((P)"objectify-application");
  lit_483 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_484 = YPPlist(1,YPPsym((P)"e"));
  T135 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_230 = YPfab_met(FUNCODEREF(fun_230),T135,YPfalse,LITREF(lit_484),sloc(478),YPsb((P)"(fun (e) (objectify e r #f))"));
  T134 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_231 = YPfab_met(FUNCODEREF(fun_objectify_application_231),T134,LITREF(lit_482),LITREF(lit_483),sloc(477),YPsb((P)"(fun ((ff <ast-method>) e* r tail? => <program>) (def ee* (convert2arguments (map (fun (e) (objectify e r #f)) e*))) (process-closed-application ff ee* r tail?))"));
  T137 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T138 = fun_objectify_application_231;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YevalSastYobjectify_application,T136);
  lit_485 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_486 = YPPlist(1,YPPsym((P)"e"));
  T140 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPfab_met(FUNCODEREF(fun_232),T140,YPfalse,LITREF(lit_486),sloc(484),YPsb((P)"(fun (e) (objectify e r #f))"));
  T139 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_233 = YPfab_met(FUNCODEREF(fun_objectify_application_233),T139,LITREF(lit_482),LITREF(lit_485),sloc(483),YPsb((P)"(fun ((ff <predefined-reference>) e* r tail? => <program>) (def ee* (convert2arguments (map (fun (e) (objectify e r #f)) e*))) (def fvf (reference-binding ff)) (def prim (binding-prop fvf)) (if prim (process-closed-application (ast-copy prim) ee* r tail?) (new <predefined-application> application-binding fvf application-arguments ee* application-tail? tail?)))"));
  T142 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T143 = fun_objectify_application_233;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSastYobjectify_application,T141);
  lit_487 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_488 = YPPlist(1,YPPsym((P)"e"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_234 = YPfab_met(FUNCODEREF(fun_234),T145,YPfalse,LITREF(lit_488),sloc(495),YPsb((P)"(fun (e) (objectify e r #f))"));
  T144 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_235 = YPfab_met(FUNCODEREF(fun_objectify_application_235),T144,LITREF(lit_482),LITREF(lit_487),sloc(494),YPsb((P)"(fun (ff e* r tail? => <program>) (let ((ee* (convert2arguments (map (fun (e) (objectify e r #f)) e*)))) (when (isa? ff <local-reference>) (set (reference-called-function? ff) #t)) (new <regular-application> application-function ff application-arguments ee* application-tail? tail?)))"));
  T147 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T148 = fun_objectify_application_235;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSastYobjectify_application,T146);
  lit_489 = YPPsym((P)"process-closed-application");
  lit_490 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_491 = YPsb((P)"incorrect regular arity");
  T149 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_236 = YPfab_met(FUNCODEREF(fun_process_closed_application_236),T149,LITREF(lit_489),LITREF(lit_490),sloc(504),YPsb((P)"(fun ((f <ast-embodied-function>) e* r tail? => <fix-let>) (def v* (function-bindings f)) (def b (function-body f)) (if (function-nary? f) (process-nary-closed-application f e* r tail?) (if (= (len e*) (len (function-bindings f))) (new (if (isa? f <ast-primitive>) <low-let> <fix-let>) fix-let-bindings (function-bindings f) fix-let-types (function-specs f) fix-let-arguments e* fix-let-body (function-body f)) (ast-error incorrect regular arity f e*))))"));
  T151 = VARREF_OR(YevalSastYprocess_closed_application,YPfalse);
  T152 = fun_process_closed_application_236;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSastYprocess_closed_application,T150);
  lit_492 = YPPsym((P)"process-nary-closed-application");
  lit_493 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_494 = YPPsym((P)"pack-args");
  lit_495 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_496 = YPPsym((P)"<tup>");
  lit_497 = YPPsym((P)"tup");
  lit_498 = YPsb((P)"incorrect dotted arity");
  T154 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_237 = YPfab_met(FUNCODEREF(fun_pack_args_237),T154,LITREF(lit_494),LITREF(lit_495),sloc(519),YPsb((P)"(fun (e* v* t*) (def var (head v*)) (if (binding-dotted? var) (let ((dotted-type (objectify '<tup> r #f))) (set (binding-dotted? var) #f) (set (binding-type var) dotted-type) (set (head t*) dotted-type) (arguments (objectify (quasiquote (tup (unquote-splicing e*))) r #f) (nul <arguments>))) (if (nul? e*) (ast-error incorrect dotted arity f e*) (arguments (head e*) (pack-args (tail e*) (tail v*) (tail t*))))))"));
  T153 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_238 = YPfab_met(FUNCODEREF(fun_process_nary_closed_application_238),T153,LITREF(lit_492),LITREF(lit_493),sloc(518),YPsb((P)"(fun (f e* r tail? => <fix-let>) (loc ((pack-args (e* v* t*) (def var (head v*)) (if (binding-dotted? var) (let ((dotted-type (objectify '<tup> r #f))) (set (binding-dotted? var) #f) (set (binding-type var) dotted-type) (set (head t*) dotted-type) (arguments (objectify (quasiquote (tup (unquote-splicing e*))) r #f) (nul <arguments>))) (if (nul? e*) (ast-error incorrect dotted arity f e*) (arguments (head e*) (pack-args (tail e*) (tail v*) (tail t*))))))) (def v* (function-bindings f)) (def o (new <fix-let> fix-let-bindings v* fix-let-types (function-specs f) fix-let-arguments (pack-args e* v* (function-specs f)) fix-let-body (function-body f))) o))"));
  T156 = VARREF_OR(YevalSastYprocess_nary_closed_application,YPfalse);
  T157 = fun_process_nary_closed_application_238;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSastYprocess_nary_closed_application,T155);
  lit_499 = YPPsym((P)"convert2arguments");
  lit_500 = YPPlist(1,YPPsym((P)"e*"));
  T158 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_239 = YPfab_met(FUNCODEREF(fun_convert2arguments_239),T158,LITREF(lit_499),LITREF(lit_500),sloc(540),YPsb((P)"(fun ((e* <lst>) => <any>) (if (nul? e*) (nul <arguments>) (arguments (head e*) (convert2arguments (tail e*)))))"));
  T160 = VARREF_OR(YevalSastYconvert2arguments,YPfalse);
  T161 = fun_convert2arguments_239;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSastYconvert2arguments,T159);
  lit_501 = YPPsym((P)"objectify-assignment");
  lit_502 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_503 = YPsb((P)"Unsupported Set!: %=");
  T162 = YPfab_sig(YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_240 = YPfab_met(FUNCODEREF(fun_objectify_assignment_240),T162,LITREF(lit_501),LITREF(lit_502),sloc(549),YPsb((P)"(fun ((binding <lst>) e r tail? => <program>) (def op (sexpr-operator binding)) (if (sexpr-variable? op) (objectify (sexpr-make-application (objectify (sexpr-fab-setter-name op) r #f) (pair e (sexpr-operands binding))) r tail?) (syntax-error Unsupported Set!: %= e)))"));
  T164 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T165 = fun_objectify_assignment_240;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSastYobjectify_assignment,T163);
  lit_504 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T166 = YPfab_sig(YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_241 = YPfab_met(FUNCODEREF(fun_objectify_assignment_241),T166,LITREF(lit_501),LITREF(lit_504),sloc(559),YPsb((P)"(fun ((binding <sym>) e r tail? => <assignment>) (def ref (objectify binding r #f)) (def val (objectify e r #f)) (objectify-assignment-using ref val))"));
  T168 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T169 = fun_objectify_assignment_241;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSastYobjectify_assignment,T167);
  lit_505 = YPPsym((P)"objectify-assignment-using");
  lit_506 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T170 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_242 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_242),T170,LITREF(lit_505),LITREF(lit_506),sloc(564),YPsb((P)"(fun ((ref <local-reference>) (val <program>) => <local-assignment>) (set (binding-mutable? (reference-binding ref)) #t) (new <local-assignment> assignment-reference ref assignment-form val))"));
  T172 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T173 = fun_objectify_assignment_using_242;
  T171 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T172,T173);
  VARSET(YevalSastYobjectify_assignment_using,T171);
  lit_507 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T174 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_243 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_243),T174,LITREF(lit_505),LITREF(lit_507),sloc(571),YPsb((P)"(fun ((ref <global-reference>) (val <program>) => <global-assignment>) (new <global-assignment> assignment-binding (reference-binding ref) assignment-form val))"));
  T176 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T177 = fun_objectify_assignment_using_243;
  T175 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T176,T177);
  VARSET(YevalSastYobjectify_assignment_using,T175);
  lit_508 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T178 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_244 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_244),T178,LITREF(lit_505),LITREF(lit_508),sloc(577),YPsb((P)"(fun ((ref <dynamic-reference>) (val <program>) => <global-assignment>) (new <dynamic-assignment> assignment-binding (reference-binding ref) assignment-form val))"));
  T180 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T181 = fun_objectify_assignment_using_244;
  T179 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T180,T181);
  VARSET(YevalSastYobjectify_assignment_using,T179);
  lit_509 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T184 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  T183 = fun_objectify_assignment_using_245 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_245),T184,LITREF(lit_505),LITREF(lit_509),sloc(583),YPsb((P)"(fun ((ref <runtime-reference>) (val <program>) => <runtime-assignment>) (new <runtime-assignment> assignment-binding (reference-binding ref) assignment-form val))"));
  T187 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T188 = fun_objectify_assignment_using_245;
  T186 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T187,T188);
  T185 = VARSET(YevalSastYobjectify_assignment_using,T186);
  T182 = T185;
  return T182;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195;
DEFCREGS();
  lit_510 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_511 = YPsb((P)"Unable to assign to static module binding %=");
  T0 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_246 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_246),T0,LITREF(lit_505),LITREF(lit_510),sloc(589),YPsb((P)"(fun ((ref <static-module-binding-reference>) (val <program>) => <any>) (namespace-error Unable to assign to static module binding %= (reference-binding ref)))"));
  T2 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T3 = fun_objectify_assignment_using_246;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYobjectify_assignment_using,T1);
  lit_512 = YPPsym((P)"update-binding-kind");
  lit_513 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_514 = YPPsym((P)"runtime");
  lit_515 = YPPsym((P)"magic");
  lit_516 = YPPsym((P)"global");
  lit_517 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPfab_met(FUNCODEREF(YevalSastYupdate_binding_kind),T4,LITREF(lit_512),LITREF(lit_513),sloc(602),YPsb((P)"(fun (binding new-kind) (if (or (~== (binding-kind binding) 'runtime) (== new-kind 'magic)) (set (binding-kind binding) new-kind) (cond ((== new-kind 'runtime) #t) ((== new-kind 'global) #t) (#t (namespace-error Cannot set type of runtime binding %s to %s.\n (binding-name binding) new-kind)))))"));
  T5 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T5);
  lit_518 = YPPsym((P)"ast-define-binding");
  lit_519 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_520 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T6 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_248 = YPfab_met(FUNCODEREF(fun_ast_define_binding_248),T6,LITREF(lit_518),LITREF(lit_519),sloc(611),YPsb((P)"(fun (r name defining-method? kind => <any>) (def existing-binding (find-binding name r)) (def gr (find-static-global-environment r)) (def mod (environment-module gr)) (def binding (if existing-binding (let ((foreign? (not (or (binding-native-to? existing-binding mod) defining-method?)))) (if (binding-free? existing-binding) (seq (set (binding-free? existing-binding) #f) (when foreign? (transaction-register-implemented-binding existing-binding))) (when foreign? (msg out %s: warning: '%s' clobbers binding from %s.\n (module-name mod) name (binding-module-name existing-binding)))) (invalidate-dependents existing-binding $all-dependency-types) (update-binding-kind existing-binding kind) existing-binding) (let ((mod (find-environment-module r)) (binding (new <module-binding> binding-kind kind binding-name name binding-free? #f binding-module mod))) (insert-global! binding gr) binding))) (register-referenced-binding mod binding) binding)"));
  T8 = VARREF_OR(YevalSastYast_define_binding,YPfalse);
  T9 = fun_ast_define_binding_248;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYast_define_binding,T7);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_521 = YPPsym((P)"objectify-definition");
  lit_522 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T10 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_249 = YPfab_met(FUNCODEREF(fun_objectify_definition_249),T10,LITREF(lit_521),LITREF(lit_522),sloc(654),YPsb((P)"(fun (type kind var e r => <any>) (def name (sexpr-variable-name var)) (def binding (ast-define-binding r name #f kind)) (def defn (new type assignment-binding binding assignment-form (objectify e r #f))) defn)"));
  T12 = VARREF_OR(YevalSastYobjectify_definition,YPfalse);
  T13 = fun_objectify_definition_249;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYobjectify_definition,T11);
  lit_523 = YPPsym((P)"objectify-variable-definition");
  lit_524 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T14 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_250 = YPfab_met(FUNCODEREF(fun_objectify_variable_definition_250),T14,LITREF(lit_523),LITREF(lit_524),sloc(665),YPsb((P)"(fun (var e r => <any>) (objectify-definition <variable-definition> 'global var e r))"));
  T16 = VARREF_OR(YevalSastYobjectify_variable_definition,YPfalse);
  T17 = fun_objectify_variable_definition_250;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYobjectify_variable_definition,T15);
  lit_525 = YPPsym((P)"objectify-dynamic-definition");
  lit_526 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_527 = YPPsym((P)"dynamic");
  T18 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_251 = YPfab_met(FUNCODEREF(fun_objectify_dynamic_definition_251),T18,LITREF(lit_525),LITREF(lit_526),sloc(668),YPsb((P)"(fun (var e r => <any>) (objectify-definition <dynamic-definition> 'dynamic var e r))"));
  T20 = VARREF_OR(YevalSastYobjectify_dynamic_definition,YPfalse);
  T21 = fun_objectify_dynamic_definition_251;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYobjectify_dynamic_definition,T19);
  lit_528 = YPPsym((P)"%%%macro");
  lit_529 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"expander"));
  lit_530 = YPPsym((P)"expand");
  lit_531 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_532 = YPsb((P)"MACRO ");
  lit_533 = YPsb((P)"\n");
  lit_534 = YPsb((P)"  => ");
  lit_535 = YPsb((P)"\n");
  T23 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_252 = YPfab_met(FUNCODEREF(fun_expand_252),T23,LITREF(lit_530),LITREF(lit_531),sloc(673),YPsb((P)"(fun (x r tail?) (when *macro-tracing?* (msg out MACRO ) (write out x) (msg out \n)) (def exp (line-list-of x (expander x))) (when *macro-tracing?* (msg out   => ) (write out exp) (msg out \n)) exp)"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmodule_bindingG),Ynil);
  YevalSastYPPPmacro = YPfab_met(FUNCODEREF(YevalSastYPPPmacro),T22,LITREF(lit_528),LITREF(lit_529),sloc(671),YPsb((P)"(fun (binding expander => <module-binding>) (loc ((expand (x r tail?) (when *macro-tracing?* (msg out MACRO ) (write out x) (msg out \n)) (def exp (line-list-of x (expander x))) (when *macro-tracing?* (msg out   => ) (write out exp) (msg out \n)) exp)) (set (binding-handler binding) expand) binding))"));
  T24 = YevalSastYPPPmacro;
  VARSET(YevalSastYPPPmacro,T24);
  lit_536 = YPPsym((P)"%%macro");
  lit_537 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_538 = YPPsym((P)"macro");
  T25 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YPPmacro = YPfab_met(FUNCODEREF(YPPmacro),T25,LITREF(lit_536),LITREF(lit_537),sloc(684),YPsb((P)"(fun (modname name expander env-or-false => <any>) (def env (or env-or-false (unchecked-runtime-environment modname))) (def binding (ast-define-binding env name #f 'macro)) (%%%macro binding expander))"));
  T26 = YPPmacro;
  VARSET(YPPmacro,T26);
  lit_539 = YPPsym((P)"objectify-syntax-definition");
  lit_540 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T27 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_255 = YPfab_met(FUNCODEREF(fun_objectify_syntax_definition_255),T27,LITREF(lit_539),LITREF(lit_540),sloc(698),YPsb((P)"(fun (name e r rt? => <any>) (def sep-expander (sexpr-make-macro-function name e)) (def syntax-env (find-syntax-environment r)) (def ast-expander (objectify sep-expander syntax-env #f)) (def expander (ast-evaluate ast-expander)) (def modname (module-name (find-environment-module r))) (def binding (%%macro modname name expander (find-static-global-environment r))) (when (~== syntax-env (find-static-global-environment r)) (insert-global! binding syntax-env)) (if rt? (new <ast-macro-definition> assignment-binding binding assignment-form (objectify sep-expander r #f)) (objectify-quotation #f r)))"));
  T29 = VARREF_OR(YevalSastYobjectify_syntax_definition,YPfalse);
  T30 = fun_objectify_syntax_definition_255;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YevalSastYobjectify_syntax_definition,T28);
  lit_541 = YPPsym((P)"objectify-function-definition");
  lit_542 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  T31 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_256 = YPfab_met(FUNCODEREF(fun_objectify_function_definition_256),T31,LITREF(lit_541),LITREF(lit_542),sloc(727),YPsb((P)"(fun (name e r => <ast-function-definition>) (def binding (ast-define-binding r name #f 'global)) (def f (objectify e r #f)) (set (function-binding f) binding) (set (function-debug-name f) (objectify-quotation name r)) (def defn (new <ast-function-definition> assignment-binding binding assignment-form f)) defn)"));
  T33 = VARREF_OR(YevalSastYobjectify_function_definition,YPfalse);
  T34 = fun_objectify_function_definition_256;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSastYobjectify_function_definition,T32);
  lit_543 = YPPsym((P)"module-binding");
  lit_544 = YPPlist(1,YPPsym((P)"kind"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPfab_met(FUNCODEREF(YevalSastYmodule_binding),T35,LITREF(lit_543),LITREF(lit_544),sloc(736),YPsb((P)"(fun ((kind <sym>) => <module-binding>) (new <module-binding> binding-kind kind))"));
  T36 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T36);
  lit_545 = YPPsym((P)"objectify-primitive-definition");
  lit_546 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_547 = YPPsym((P)"predefined");
  lit_548 = YPPsym((P)"inline");
  T37 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_258 = YPfab_met(FUNCODEREF(fun_objectify_primitive_definition_258),T37,LITREF(lit_545),LITREF(lit_546),sloc(739),YPsb((P)"(fun (name mods sig body r => <ast-primitive-definition>) (def binding (ast-define-binding r name #f 'predefined)) (def signature (objectify-signature sig r)) (def new-r (r-extend* r (signature-bindings signature))) (def body (objectify-sequential body new-r #t)) (def form (new <ast-primitive> function-binding binding function-adjectives mods function-debug-name (objectify-quotation name r) function-signature signature function-body body)) (when (mem? mods 'inline) (set (binding-prop binding) form)) (def defn (new <ast-primitive-definition> assignment-binding binding assignment-form form)) defn)"));
  T39 = VARREF_OR(YevalSastYobjectify_primitive_definition,YPfalse);
  T40 = fun_objectify_primitive_definition_258;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSastYobjectify_primitive_definition,T38);
  lit_549 = YPPsym((P)"objectify-generic-definition");
  lit_550 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T41 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_259 = YPfab_met(FUNCODEREF(fun_objectify_generic_definition_259),T41,LITREF(lit_549),LITREF(lit_550),sloc(758),YPsb((P)"(fun (name sig r => <ast-generic-definition>) (def binding (ast-define-binding r name #f 'global)) (def signature (objectify-signature sig r)) (def form (new <ast-generic> function-binding binding function-debug-name (objectify-quotation name r) function-signature signature)) (def defn (new <ast-generic-definition> assignment-binding binding assignment-form form)) defn)"));
  T43 = VARREF_OR(YevalSastYobjectify_generic_definition,YPfalse);
  T44 = fun_objectify_generic_definition_259;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSastYobjectify_generic_definition,T42);
  lit_551 = YPPsym((P)"objectify-method-definition");
  lit_552 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_553 = YPPsym((P)"bound?");
  lit_554 = YPPsym((P)"%define-method");
  T45 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_260 = YPfab_met(FUNCODEREF(fun_objectify_method_definition_260),T45,LITREF(lit_551),LITREF(lit_552),sloc(770),YPsb((P)"(fun (name e r => <ast-method-definition>) (def binding (ast-define-binding r name #t 'global)) (def gen (quasiquote (bound? (unquote name) #f))) (def met (objectify e r #f)) (def call (lst '%define-method gen met)) (def form (objectify call r #f)) (def defn (new <ast-method-definition> assignment-binding binding assignment-form form)) (set (function-binding met) name) (set (function-debug-name met) (objectify-quotation name r)) defn)"));
  T47 = VARREF_OR(YevalSastYobjectify_method_definition,YPfalse);
  T48 = fun_objectify_method_definition_260;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalSastYobjectify_method_definition,T46);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_555 = YPPsym((P)"objectify-function-source");
  lit_556 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_557 = Ynil;
  lit_558 = YPsb((P)"%s");
  lit_559 = YPPsym((P)"fun");
  T53 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_261 = YPfab_met(FUNCODEREF(fun_261),T53,YPfalse,LITREF(lit_557),sloc(794),YPsb((P)"(fun () (seq (set *max-print-length* $max-int) (dlet () (objectify-quotation (and *record-source?* (msg-to-str %s (quasiquote (fun (unquote sig) (unquote-splicing body))))) r))))"));
  T52 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_262 = YPfab_met(FUNCODEREF(fun_262),T52,YPfalse,LITREF(lit_557),sloc(794),YPsb((P)"(fun () (set *max-print-length* x-1866))"));
  T51 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_263 = YPfab_met(FUNCODEREF(fun_263),T51,YPfalse,LITREF(lit_557),sloc(794),YPsb((P)"(fun () (seq (set *max-print-depth* $max-int) (dlet ((*max-print-length* $max-int)) (objectify-quotation (and *record-source?* (msg-to-str %s (quasiquote (fun (unquote sig) (unquote-splicing body))))) r))))"));
  T50 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_264 = YPfab_met(FUNCODEREF(fun_264),T50,YPfalse,LITREF(lit_557),sloc(794),YPsb((P)"(fun () (set *max-print-depth* x-1865))"));
  T49 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_265 = YPfab_met(FUNCODEREF(fun_objectify_function_source_265),T49,LITREF(lit_555),LITREF(lit_556),sloc(793),YPsb((P)"(fun (sig body r => <constant>) (dlet ((*max-print-depth* $max-int) (*max-print-length* $max-int)) (objectify-quotation (and *record-source?* (msg-to-str %s (quasiquote (fun (unquote sig) (unquote-splicing body))))) r)))"));
  T55 = VARREF_OR(YevalSastYobjectify_function_source,YPfalse);
  T56 = fun_objectify_function_source_265;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSastYobjectify_function_source,T54);
  lit_560 = YPPsym((P)"objectify-function-using");
  lit_561 = YPPlist(5,YPPsym((P)"met"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_266 = YPfab_met(FUNCODEREF(fun_266),T59,YPfalse,LITREF(lit_557),sloc(801),YPsb((P)"(fun () (seq (def signature (objectify-signature sig r)) (def new-r (r-extend* r (signature-bindings signature))) (def ast (objectify-sequential body new-r #t)) (set (function-debug-name met) (objectify-quotation #f r)) (set (function-signature met) signature) (set (function-body met) ast) (set (function-source met) (objectify-function-source sig body r)) met))"));
  T58 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_267 = YPfab_met(FUNCODEREF(fun_267),T58,YPfalse,LITREF(lit_557),sloc(801),YPsb((P)"(fun () (set *current-dependent* x-1867))"));
  T57 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_using_268 = YPfab_met(FUNCODEREF(fun_objectify_function_using_268),T57,LITREF(lit_560),LITREF(lit_561),sloc(799),YPsb((P)"(fun (met sig body r tail? => <ast-method>) (with-dependent met (def signature (objectify-signature sig r)) (def new-r (r-extend* r (signature-bindings signature))) (def ast (objectify-sequential body new-r #t)) (set (function-debug-name met) (objectify-quotation #f r)) (set (function-signature met) signature) (set (function-body met) ast) (set (function-source met) (objectify-function-source sig body r)) met))"));
  T61 = VARREF_OR(YevalSastYobjectify_function_using,YPfalse);
  T62 = fun_objectify_function_using_268;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSastYobjectify_function_using,T60);
  lit_562 = YPPsym((P)"objectify-function");
  lit_563 = YPPlist(5,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T63 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_269 = YPfab_met(FUNCODEREF(fun_objectify_function_269),T63,LITREF(lit_562),LITREF(lit_563),sloc(811),YPsb((P)"(fun (sig body line r tail? => <ast-method>) (objectify-function-using (new <ast-method> program-line line) sig body r tail?))"));
  T65 = VARREF_OR(YevalSastYobjectify_function,YPfalse);
  T66 = fun_objectify_function_269;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYobjectify_function,T64);
  lit_564 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_564));
  lit_565 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_565));
  lit_566 = YPPsym((P)"objectify-signature");
  lit_567 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  T67 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_270 = YPfab_met(FUNCODEREF(fun_objectify_signature_270),T67,LITREF(lit_566),LITREF(lit_567),sloc(818),YPsb((P)"(fun (sig r => <ast-signature>) (def sexpr-params (sexpr-signature-parameters sig)) (rep col ((params sexpr-params) (nary? #f) (bindings '()) (names (nul <fab-list>)) (types (nul <fab-list>))) (if (nul? params) (let ((sexpr-value (sexpr-signature-value sig)) (value (objectify (or sexpr-value (default-type r)) r #f)) (arity (- (len names) (if nary? 1 0)))) (new <ast-signature> signature-bindings (rev! bindings) signature-names (objectify-quotation (rev! names) r) signature-specs (rev! types) signature-nary? (objectify nary? r #f) signature-arity (objectify arity r #f) signature-value value)) (let ((param (head params)) (sname (sexpr-variable-name param)) (stype (sexpr-variable-type param)) (dotted? (== stype $sexpr-optionals-tag)) (stype (if dotted? $sexpr-optionals-type-name stype)) (type (objectify stype r #f)) (binding (new <local-binding> binding-name sname binding-type type binding-dotted? dotted?))) (col (tail params) dotted? (pair binding bindings) (new <fab-list> head sname tail names) (new <fab-list> head type tail types))))))"));
  T69 = VARREF_OR(YevalSastYobjectify_signature,YPfalse);
  T70 = fun_objectify_signature_270;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYobjectify_signature,T68);
  lit_568 = YPPsym((P)"compute-local-reference-offsets");
  lit_569 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_570 = YPsb((P)"didn't find local binding %= in %=");
  T72 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T71 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)2),T72,Ynil);
  fun_compute_local_reference_offsets_271 = YPfab_met(FUNCODEREF(fun_compute_local_reference_offsets_271),T71,LITREF(lit_568),LITREF(lit_569),sloc(849),YPsb((P)"(fun ((binding <local-binding>) (r <static-local-environment>) => (tup (frame-number <int>) (frame-offset <int>))) (rep loop ((i 0) (r r)) (if (isa? r <static-local-environment>) (rep find ((j 0) (bindings (environment-bindings r))) (if (nul? bindings) (loop (+ i 1) (environment-next r)) (if (== (head bindings) binding) (tup i j) (find (+ j 1) (tail bindings))))) (namespace-error didn't find local binding %= in %= (binding-name binding) r))))"));
  T74 = VARREF_OR(YevalSastYcompute_local_reference_offsets,YPfalse);
  T75 = fun_compute_local_reference_offsets_271;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYcompute_local_reference_offsets,T73);
  lit_571 = YPPsym((P)"objectify-binding");
  lit_572 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T76 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_272 = YPfab_met(FUNCODEREF(fun_objectify_binding_272),T76,LITREF(lit_571),LITREF(lit_572),sloc(863),YPsb((P)"(fun (n (b <local-binding>) r => <local-reference>) (def (tup i j) (compute-local-reference-offsets b r)) (incf-ref-count (binding-value b)) (new <local-reference> reference-binding b reference-frame-number i reference-frame-offset j))"));
  T78 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T79 = fun_objectify_binding_272;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYobjectify_binding,T77);
  lit_573 = YPPsym((P)"binding-reference-class");
  lit_574 = YPPlist(1,YPPsym((P)"b"));
  lit_575 = YPsb((P)"Unknown binding-kind %=");
  T80 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_273 = YPfab_met(FUNCODEREF(fun_binding_reference_class_273),T80,LITREF(lit_573),LITREF(lit_574),sloc(875),YPsb((P)"(fun ((b <module-binding>) => <type>) (case (binding-kind b) (('global) <global-reference>) (('predefined) <predefined-reference>) (('runtime) <runtime-reference>) (('dynamic) <dynamic-reference>) (('macro) <macro-reference>) (('magic) <magic-reference>) (#t (ast-error Unknown binding-kind %= (binding-kind b)))))"));
  T82 = VARREF_OR(YevalSastYbinding_reference_class,YPfalse);
  T83 = fun_binding_reference_class_273;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYbinding_reference_class,T81);
  lit_576 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T84 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_274 = YPfab_met(FUNCODEREF(fun_objectify_binding_274),T84,LITREF(lit_571),LITREF(lit_576),sloc(886),YPsb((P)"(fun (n (b <module-binding>) r => <any>) (register-referenced-binding r b) (def <ref> (binding-reference-class b)) (new <ref> reference-binding b))"));
  T86 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T87 = fun_objectify_binding_274;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSastYobjectify_binding,T85);
  lit_577 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T88 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_275 = YPfab_met(FUNCODEREF(fun_objectify_binding_275),T88,LITREF(lit_571),LITREF(lit_577),sloc(896),YPsb((P)"(fun (n b r => <reference>) (objectify-free-global-reference n r))"));
  T90 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T91 = fun_objectify_binding_275;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSastYobjectify_binding,T89);
  lit_578 = YPPsym((P)"default-type");
  lit_579 = YPPlist(1,YPPsym((P)"r"));
  lit_580 = YPPsym((P)"<any>");
  T92 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_276 = YPfab_met(FUNCODEREF(fun_default_type_276),T92,LITREF(lit_578),LITREF(lit_579),sloc(901),YPsb((P)"(fun (r) (objectify '<any> r #f))"));
  T94 = VARREF_OR(YevalSastYdefault_type,YPfalse);
  T95 = fun_default_type_276;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSastYdefault_type,T93);
  lit_581 = YPPsym((P)"objectify-free-global-reference");
  lit_582 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_277 = YPfab_met(FUNCODEREF(fun_objectify_free_global_reference_277),T96,LITREF(lit_581),LITREF(lit_582),sloc(906),YPsb((P)"(fun (name r => <reference>) (def gr (find-static-global-environment r)) (if (and (environment-allows-foreign-names? gr) (foreign-name? name)) (objectify-foreign-reference name r) (let ((b (new <module-binding> binding-free? #t binding-kind 'global binding-name name binding-module (find-environment-module r)))) (insert-global! b gr) (register-referenced-binding gr b) (new <global-reference> reference-binding b))))"));
  T98 = VARREF_OR(YevalSastYobjectify_free_global_reference,YPfalse);
  T99 = fun_objectify_free_global_reference_277;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSastYobjectify_free_global_reference,T97);
  lit_583 = YPPsym((P)"foreign-name?");
  lit_584 = YPPlist(1,YPPsym((P)"name"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPfab_met(FUNCODEREF(YevalSastYforeign_nameQ),T100,LITREF(lit_583),LITREF(lit_584),sloc(921),YPsb((P)"(fun ((name <sym>) => <log>) (~== (pos (as <str> name) :) #f))"));
  T101 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T101);
  lit_585 = YPPsym((P)"objectify-foreign-reference");
  lit_586 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_587 = YPsb((P)"Malformed foreign name %s.\n");
  lit_588 = YPsb((P)"No binding %s in %s.\n");
  T102 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_279 = YPfab_met(FUNCODEREF(fun_objectify_foreign_reference_279),T102,LITREF(lit_585),LITREF(lit_586),sloc(925),YPsb((P)"(fun (name r => <reference>) (def namestr (as <str> name)) (def break (pos namestr :)) (def modname (sub namestr 0 break)) (def varname (sub namestr (+ 1 break) (len namestr))) (unless (and (> (len modname) 0) (> (len varname) 0)) (syntax-error Malformed foreign name %s.\n name)) (def gr (find-static-global-environment r)) (def loader (environment-module-loader gr)) (def mod (probe-module loader (as <sym> modname))) (def binding (find-binding (as <sym> varname) (module-target-environment mod))) (insert-global! binding gr) (unless binding (namespace-error No binding %s in %s.\n varname modname)) (objectify-binding name binding r))"));
  T104 = VARREF_OR(YevalSastYobjectify_foreign_reference,YPfalse);
  T105 = fun_objectify_foreign_reference_279;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSastYobjectify_foreign_reference,T103);
  lit_589 = YPPsym((P)"objectify-symbol");
  lit_590 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_280 = YPfab_met(FUNCODEREF(fun_objectify_symbol_280),T106,LITREF(lit_589),LITREF(lit_590),sloc(943),YPsb((P)"(fun (name r => <any>) (objectify-binding name (find-binding name r) r))"));
  T108 = VARREF_OR(YevalSastYobjectify_symbol,YPfalse);
  T109 = fun_objectify_symbol_280;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSastYobjectify_symbol,T107);
  lit_591 = YPPsym((P)"ftype");
  lit_592 = YPPlist(1,YPPsym((P)"r"));
  lit_593 = YPPsym((P)"<fun>");
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_281 = YPfab_met(FUNCODEREF(fun_ftype_281),T110,LITREF(lit_591),LITREF(lit_592),sloc(946),YPsb((P)"(fun (r) (objectify '<fun> r #f))"));
  T112 = VARREF_OR(YevalSastYftype,YPfalse);
  T113 = fun_ftype_281;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSastYftype,T111);
  lit_594 = YPPsym((P)"<functions>");
  T116 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T115 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T116);
  T114 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_594),T115);
  VARSET(YevalSastYLfunctionsG,T114);
  T117 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_nul,T117);
  lit_595 = YPPsym((P)"functions");
  lit_596 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T118 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPfab_met(FUNCODEREF(YevalSastYfunctions),T118,LITREF(lit_595),LITREF(lit_596),sloc(949),YPsb((P)"(fun (h t) (new <functions> head h tail t))"));
  T119 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T119);
  lit_597 = YPPlist(1,YPPsym((P)"e"));
  T121 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T120 = YPfab_sig(YPPlist(1,T121),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_nul_283 = YPfab_met(FUNCODEREF(fun_nul_283),T120,LITREF(lit_252),LITREF(lit_597),sloc(949),YPsb((P)"(fun ((e (t= <functions>)) => <functions>) $functions-nul)"));
  T123 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T124 = fun_nul_283;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooScolsScolYnul,T122);
  lit_598 = YPPsym((P)"objectify-locals");
  lit_599 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_600 = YPPlist(1,YPPsym((P)"n"));
  lit_601 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"body"));
  lit_602 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPfab_met(FUNCODEREF(fun_284),T128,YPfalse,LITREF(lit_600),sloc(952),YPsb((P)"(fun (n) (new <local-binding> binding-name n binding-type (ftype r)))"));
  T127 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_285 = YPfab_met(FUNCODEREF(fun_285),T127,YPfalse,LITREF(lit_601),sloc(956),YPsb((P)"(fun (sig body) (def line (or (line-of sig) (line-of body))) (new <ast-method> program-line line))"));
  T126 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_286 = YPfab_met(FUNCODEREF(fun_286),T126,YPfalse,LITREF(lit_602),sloc(964),YPsb((P)"(fun (f b) (set (function-binding f) b) (set (function-debug-name f) (objectify-quotation (binding-name b) r)))"));
  T125 = YPfab_sig(YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_287 = YPfab_met(FUNCODEREF(fun_objectify_locals_287),T125,LITREF(lit_598),LITREF(lit_599),sloc(951),YPsb((P)"(fun (names sigs bodies body r tail? => <locals>) (def vars (map (fun (n) (new <local-binding> binding-name n binding-type (ftype r))) names)) (def new-r (r-extend* r vars)) (def mets (map2 (fun (sig body) (def line (or (line-of sig) (line-of body))) (new <ast-method> program-line line)) sigs bodies)) (for ((sig sigs) (body bodies) (met mets) (var vars)) (set (binding-value var) met) (objectify-function-using met sig body new-r #f)) (do2 (fun (f b) (set (function-binding f) b) (set (function-debug-name f) (objectify-quotation (binding-name b) r))) mets vars) (new <locals> locals-bindings vars locals-functions (app fabs <functions> mets) locals-body (objectify-sequential body new-r #t)))"));
  T130 = VARREF_OR(YevalSastYobjectify_locals,YPfalse);
  T131 = fun_objectify_locals_287;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSastYobjectify_locals,T129);
  lit_603 = YPPsym((P)"objectify-bind-exit");
  lit_604 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T132 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_288 = YPfab_met(FUNCODEREF(fun_objectify_bind_exit_288),T132,LITREF(lit_603),LITREF(lit_604),sloc(974),YPsb((P)"(fun (name body line r tail? => <bind-exit>) (new <bind-exit> bind-exit-main-fun (objectify (sexpr-make-anonymous-method (line-list line name) body) r #f)))"));
  T134 = VARREF_OR(YevalSastYobjectify_bind_exit,YPfalse);
  T135 = fun_objectify_bind_exit_288;
  T133 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T134,T135);
  VARSET(YevalSastYobjectify_bind_exit,T133);
  lit_605 = YPPsym((P)"objectify-unwind-protect");
  lit_606 = YPPlist(5,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T136 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_289 = YPfab_met(FUNCODEREF(fun_objectify_unwind_protect_289),T136,LITREF(lit_605),LITREF(lit_606),sloc(980),YPsb((P)"(fun (protected-form cleanup-forms line r tail? => <unwind-protect>) (new <unwind-protect> unwind-protect-protected-thunk (objectify (sexpr-make-anonymous-method '() (line-list line protected-form)) r #f) unwind-protect-cleanup-thunk (objectify (sexpr-make-anonymous-method '() cleanup-forms) r #f)))"));
  T138 = VARREF_OR(YevalSastYobjectify_unwind_protect,YPfalse);
  T139 = fun_objectify_unwind_protect_289;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YevalSastYobjectify_unwind_protect,T137);
  lit_607 = YPPsym((P)"objectify-monitor");
  lit_608 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T140 = YPfab_sig(YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_290 = YPfab_met(FUNCODEREF(fun_objectify_monitor_290),T140,LITREF(lit_607),LITREF(lit_608),sloc(992),YPsb((P)"(fun (type info test handler body r tail? => <monitor>) (new <monitor> monitor-type (objectify type r #f) monitor-info (objectify info r #f) monitor-test (objectify test r #f) monitor-handler (objectify handler r #f) monitor-main-thunk (objectify body r #f)))"));
  T142 = VARREF_OR(YevalSastYobjectify_monitor,YPfalse);
  T143 = fun_objectify_monitor_290;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSastYobjectify_monitor,T141);
  lit_609 = YPPsym((P)"objectify-export");
  lit_610 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_611 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_612 = YPPlist(1,YPPsym((P)"name"));
  lit_613 = YPPlist(1,YPPsym((P)"exit"));
  lit_614 = YPsb((P)"Continue without exporting %s");
  lit_615 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_616 = YPsb((P)"Can't export undefined binding %s.\n");
  T149 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_291 = YPfab_met(FUNCODEREF(fun_291),T149,YPfalse,LITREF(lit_557),YPfalse,YPsb((P)"(fun () #t)"));
  T148 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_292 = YPfab_met(FUNCODEREF(fun_292),T148,YPfalse,LITREF(lit_615),sloc(1013),YPsb((P)"(fun (c r) (exit #f))"));
  T147 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_293 = YPfab_met(FUNCODEREF(fun_293),T147,YPfalse,LITREF(lit_557),sloc(1014),YPsb((P)"(fun () (namespace-error Can't export undefined binding %s.\n name))"));
  T146 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPfab_met(FUNCODEREF(fun_294),T146,YPfalse,LITREF(lit_613),sloc(1010),YPsb((P)"(fun (exit) (try ((type <restart>) (description Continue without exporting %s name)) (fun (c r) (exit #f)) (namespace-error Can't export undefined binding %s.\n name)))"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPfab_met(FUNCODEREF(fun_295),T145,YPfalse,LITREF(lit_612),sloc(1007),YPsb((P)"(fun (name) (def binding (find-binding name env)) (if (== binding #f) (esc exit (try ((type <restart>) (description Continue without exporting %s name)) (fun (c r) (exit #f)) (namespace-error Can't export undefined binding %s.\n name))) (export-binding! module name binding)))"));
  T144 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_296 = YPfab_met(FUNCODEREF(fun_objectify_export_296),T144,LITREF(lit_609),LITREF(lit_610),sloc(1000),YPsb((P)"(fun (names r tail? => <program>) (def env (find-static-global-environment r)) (def module (find-environment-module r)) (unless (== env (module-target-environment module)) (namespace-error Can only export bindings from target environment.\n)) (do (fun (name) (def binding (find-binding name env)) (if (== binding #f) (esc exit (try ((type <restart>) (description Continue without exporting %s name)) (fun (c r) (exit #f)) (namespace-error Can't export undefined binding %s.\n name))) (export-binding! module name binding))) names) (new <constant> constant-value #f))"));
  T151 = VARREF_OR(YevalSastYobjectify_export,YPfalse);
  T152 = fun_objectify_export_296;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSastYobjectify_export,T150);
  lit_617 = YPPsym((P)"objectify-use/export-module");
  lit_618 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_619 = YPPlist(1,YPPsym((P)"b"));
  T154 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_297 = YPfab_met(FUNCODEREF(fun_297),T154,YPfalse,LITREF(lit_619),sloc(1025),YPsb((P)"(fun (b) (import-global! b env) (export-binding! module (binding-name b) b))"));
  T153 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_298 = YPfab_met(FUNCODEREF(fun_objectify_useSexport_module_298),T153,LITREF(lit_617),LITREF(lit_618),sloc(1019),YPsb((P)"(fun (name r tail? => <program>) (def env (find-static-global-environment r)) (def module (find-environment-module r)) (def loader (environment-module-loader env)) (def used-module (probe-module loader name)) (push! (environment-uses-modules env) used-module) (do (fun (b) (import-global! b env) (export-binding! module (binding-name b) b)) (module-exports used-module)) (new <constant> constant-value #f))"));
  T156 = VARREF_OR(YevalSastYobjectify_useSexport_module,YPfalse);
  T157 = fun_objectify_useSexport_module_298;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSastYobjectify_useSexport_module,T155);
  lit_620 = YPPsym((P)"objectify-use-include");
  lit_621 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_622 = YPPlist(1,YPPsym((P)"x"));
  T159 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPfab_met(FUNCODEREF(fun_299),T159,YPfalse,LITREF(lit_622),sloc(1034),YPsb((P)"(fun (x) (= x name))"));
  T158 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_300 = YPfab_met(FUNCODEREF(fun_objectify_use_include_300),T158,LITREF(lit_620),LITREF(lit_621),sloc(1031),YPsb((P)"(fun (name r tail? => <program>) (def env (find-static-global-environment r)) (def mod (environment-module env)) (unless (any? (fun (x) (= x name)) (module-uses-c-includes mod)) (push! (module-uses-c-includes mod) name)) (new <constant> constant-value #f))"));
  T161 = VARREF_OR(YevalSastYobjectify_use_include,YPfalse);
  T162 = fun_objectify_use_include_300;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YevalSastYobjectify_use_include,T160);
  lit_623 = YPPsym((P)"objectify-use-library");
  lit_624 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_625 = YPPlist(1,YPPsym((P)"x"));
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPfab_met(FUNCODEREF(fun_301),T164,YPfalse,LITREF(lit_625),sloc(1041),YPsb((P)"(fun (x) (= x name))"));
  T163 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_302 = YPfab_met(FUNCODEREF(fun_objectify_use_library_302),T163,LITREF(lit_623),LITREF(lit_624),sloc(1038),YPsb((P)"(fun (name r tail? => <program>) (def env (find-static-global-environment r)) (def mod (environment-module env)) (unless (any? (fun (x) (= x name)) (module-uses-c-libraries mod)) (push! (module-uses-c-libraries mod) name)) (new <constant> constant-value #f))"));
  T166 = VARREF_OR(YevalSastYobjectify_use_library,YPfalse);
  T167 = fun_objectify_use_library_302;
  T165 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T166,T167);
  VARSET(YevalSastYobjectify_use_library,T165);
  lit_626 = YPPsym((P)"objectify-use-module");
  lit_627 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_628 = YPPsym((P)"use-mod");
  lit_629 = YPPlist(1,YPPsym((P)"name"));
  lit_630 = YPPlist(1,YPPsym((P)"b"));
  lit_631 = YPPsym((P)"use-c-mod");
  lit_632 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_633 = YPsb((P)".c");
  lit_634 = YPsb((P)".h");
  lit_635 = YPsb((P)".swig");
  lit_636 = YPsb((P)".c");
  T171 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_303 = YPfab_met(FUNCODEREF(fun_303),T171,YPfalse,LITREF(lit_630),sloc(1052),YPsb((P)"(fun (b) (import-global! b env))"));
  T170 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_304 = YPfab_met(FUNCODEREF(fun_use_mod_304),T170,LITREF(lit_628),LITREF(lit_629),sloc(1048),YPsb((P)"(fun (name) (let ((loader (environment-module-loader env)) (used-module (probe-module loader name))) (push! (environment-uses-modules env) used-module) (do (fun (b) (import-global! b env)) (module-exports used-module)) used-module))"));
  T169 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_305 = YPfab_met(FUNCODEREF(fun_use_c_mod_305),T169,LITREF(lit_631),LITREF(lit_632),sloc(1055),YPsb((P)"(fun (mod name) (unless (mem? (module-uses-c-files mod) name) (push! (module-uses-c-files mod) name)))"));
  T168 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_306 = YPfab_met(FUNCODEREF(fun_objectify_use_module_306),T168,LITREF(lit_626),LITREF(lit_627),sloc(1045),YPsb((P)"(fun (name r tail? => <program>) (def env (find-static-global-environment r)) (def mod (environment-module env)) (loc ((use-mod (name) (let ((loader (environment-module-loader env)) (used-module (probe-module loader name))) (push! (environment-uses-modules env) used-module) (do (fun (b) (import-global! b env)) (module-exports used-module)) used-module)) (use-c-mod (mod name) (unless (mem? (module-uses-c-files mod) name) (push! (module-uses-c-files mod) name)))) (case-by (as <str> name) suffix? ((.c .h) (use-c-mod mod (as <sym> name))) ((.swig) (def swig-mod-name (as <sym> (1st (split (as <str> name) .)))) (def swig-mod (use-mod swig-mod-name)) (use-c-mod swig-mod (cat-sym name .c))) (#t (use-mod name)))) (new <constant> constant-value #f))"));
  T173 = VARREF_OR(YevalSastYobjectify_use_module,YPfalse);
  T174 = fun_objectify_use_module_306;
  T172 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T173,T174);
  VARSET(YevalSastYobjectify_use_module,T172);
  lit_637 = YPPsym((P)"objectify-use-mangle-module");
  lit_638 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_639 = YPPlist(1,YPPsym((P)"b"));
  T176 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_307 = YPfab_met(FUNCODEREF(fun_307),T176,YPfalse,LITREF(lit_639),sloc(1077),YPsb((P)"(fun (b) (import-and-mangle-global! b str-mangler env))"));
  T175 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_308 = YPfab_met(FUNCODEREF(fun_objectify_use_mangle_module_308),T175,LITREF(lit_637),LITREF(lit_638),sloc(1069),YPsb((P)"(fun (name mangler r tail? => <program>) (def env (find-static-global-environment r)) (def module (find-environment-module r)) (def loader (environment-module-loader env)) (def used-module (probe-module loader name)) (def str-mangler (as <str> mangler)) (push! (environment-uses-modules env) used-module) (do (fun (b) (import-and-mangle-global! b str-mangler env)) (module-exports used-module)) (new <constant> constant-value #f))"));
  T178 = VARREF_OR(YevalSastYobjectify_use_mangle_module,YPfalse);
  T179 = fun_objectify_use_mangle_module_308;
  T177 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T178,T179);
  VARSET(YevalSastYobjectify_use_mangle_module,T177);
  lit_640 = YPPsym((P)"expand-bind-list");
  lit_641 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_642 = YPsb((P)"Expected Pattern List %=\n");
  T180 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_309 = YPfab_met(FUNCODEREF(fun_expand_bind_list_309),T180,LITREF(lit_640),LITREF(lit_641),sloc(1083),YPsb((P)"(fun (pat var fail => <any>) (syntax-error Expected Pattern List %=\n pat))"));
  T182 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T183 = fun_expand_bind_list_309;
  T181 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T182,T183);
  VARSET(YevalSastYexpand_bind_list,T181);
  lit_643 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_644 = YPPsym((P)"match-nul-list");
  T185 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T184 = YPfab_sig(YPPlist(3,T185,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_310 = YPfab_met(FUNCODEREF(fun_expand_bind_list_310),T184,LITREF(lit_640),LITREF(lit_643),sloc(1086),YPsb((P)"(fun ((pat (t= '())) var fail => <lst>) (quasiquote (match-nul-list (unquote var) (unquote fail))))"));
  T187 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T188 = fun_expand_bind_list_310;
  T186 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T187,T188);
  VARSET(YevalSastYexpand_bind_list,T186);
  lit_645 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_646 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_647 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T191 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  T190 = fun_expand_bind_list_311 = YPfab_met(FUNCODEREF(fun_expand_bind_list_311),T191,LITREF(lit_640),LITREF(lit_645),sloc(1089),YPsb((P)"(fun ((pat <lst>) var fail => <lst>) (cond ((sexpr-unquote? pat) (syntax-error Unquote Unexpected Here %=\n pat)) ((sexpr-unquote-splicing? pat) (syntax-error Unquote Splicing Unexpected Here %=\n pat)) (#t (expand-bind-list* pat var fail))))"));
  T194 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T195 = fun_expand_bind_list_311;
  T193 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T194,T195);
  T192 = VARSET(YevalSastYexpand_bind_list,T193);
  T189 = T192;
  return T189;
}

P YevalSastY___main_8___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
DEFCREGS();
  lit_648 = YPPsym((P)"expand-bind-list*");
  lit_649 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T1 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T0 = YPfab_sig(YPPlist(3,T1,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_312 = YPfab_met(FUNCODEREF(fun_expand_bind_listT_312),T0,LITREF(lit_648),LITREF(lit_649),sloc(1098),YPsb((P)"(fun ((pat (t= '())) var fail => <any>) (quasiquote (match-nul-list (unquote var) (unquote fail))))"));
  T3 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T4 = fun_expand_bind_listT_312;
  T2 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T3,T4);
  VARSET(YevalSastYexpand_bind_listT,T2);
  lit_650 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T5 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_313 = YPfab_met(FUNCODEREF(fun_expand_bind_listT_313),T5,LITREF(lit_648),LITREF(lit_650),sloc(1101),YPsb((P)"(fun ((pat <lst>) var fail => <any>) (quasiquote (let (((unquote var) (unquote (expand-bind-element (head pat) var fail)))) (unquote (expand-bind-list* (tail pat) var fail)))))"));
  T7 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T8 = fun_expand_bind_listT_313;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YevalSastYexpand_bind_listT,T6);
  lit_651 = YPPsym((P)"expand-bind-element");
  lit_652 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_653 = YPPsym((P)"match-atom");
  lit_654 = YPPsym((P)"quote");
  T9 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_314 = YPfab_met(FUNCODEREF(fun_expand_bind_element_314),T9,LITREF(lit_651),LITREF(lit_652),sloc(1105),YPsb((P)"(fun (pat var fail => <any>) (quasiquote (match-atom (unquote var) '(unquote pat) (unquote fail))))"));
  T11 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T12 = fun_expand_bind_element_314;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSastYexpand_bind_element,T10);
  lit_655 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_656 = YPPsym((P)"match-unquote");
  lit_657 = YPPsym((P)"tail");
  lit_658 = YPPsym((P)"match-sublist");
  T13 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_315 = YPfab_met(FUNCODEREF(fun_expand_bind_element_315),T13,LITREF(lit_651),LITREF(lit_655),sloc(1108),YPsb((P)"(fun ((pat <lst>) var fail => <any>) (cond ((sexpr-unquote? pat) (quasiquote (seq (set (unquote (2nd pat)) (match-unquote (unquote var) (unquote fail))) (tail (unquote var))))) ((sexpr-unquote-splicing? pat) (quasiquote (seq (set (unquote (2nd pat)) (unquote var)) '()))) (#t (quasiquote (seq (let (((unquote var) (match-sublist (unquote var) (unquote fail)))) (unquote (expand-bind-list pat var fail))) (tail (unquote var)))))))"));
  T15 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T16 = fun_expand_bind_element_315;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSastYexpand_bind_element,T14);
  lit_659 = YPPsym((P)"expand-pattern");
  lit_660 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_661 = YPPsym((P)"if");
  lit_662 = YPPsym((P)"isa?");
  lit_663 = YPPsym((P)"<lst>");
  lit_664 = YPsb((P)"Match Pattern Failure");
  T17 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_316 = YPfab_met(FUNCODEREF(fun_expand_pattern_316),T17,LITREF(lit_659),LITREF(lit_660),sloc(1119),YPsb((P)"(fun ((pat <lst>) var fail => <any>) (quasiquote (if (isa? (unquote var) <lst>) (unquote (expand-bind-list pat var fail)) ((unquote fail) Match Pattern Failure (unquote var)))))"));
  T19 = VARREF_OR(YevalSastYexpand_pattern,YPfalse);
  T20 = fun_expand_pattern_316;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalSastYexpand_pattern,T18);
  lit_665 = YPPsym((P)"expand-syntax-if");
  lit_666 = YPPlist(1,YPPsym((P)"x"));
  lit_667 = YPPsym((P)"esc");
  lit_668 = YPPsym((P)"return");
  lit_669 = YPPsym((P)"loc");
  lit_670 = YPPsym((P)"msg");
  lit_671 = YPPsym((P)"<str>");
  lit_672 = YPPsym((P)"args");
  lit_673 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPfab_met(FUNCODEREF(fun_317),T22,YPfalse,LITREF(lit_673),YPfalse,YPsb((P)"(fun (x) (cat (lst x) (lst '#f) '()))"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_318 = YPfab_met(FUNCODEREF(fun_expand_syntax_if_318),T21,LITREF(lit_665),LITREF(lit_666),sloc(1124),YPsb((P)"(fun ((x <lst>) => <lst>) (def pat (sexpr-syntax-if-pattern x)) (def vars (sexpr-bind-pattern-variables pat)) (def value (sexpr-syntax-if-value x)) (def then (sexpr-syntax-if-then x)) (def else (sexpr-syntax-if-else x)) (def var (gensym)) (def fail (gensym)) (def epat (expand-pattern pat var fail)) (quasiquote (esc return (loc (((unquote fail) ((msg <str>) (args ...)) (return (unquote else)))) (let (((unquote var) (unquote value))) (let (unquote (map (fun (x) (quasiquote ((unquote x) #f))) vars)) (unquote epat) (unquote then)))))))"));
  T24 = VARREF_OR(YevalSastYexpand_syntax_if,YPfalse);
  T25 = fun_expand_syntax_if_318;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYexpand_syntax_if,T23);
  lit_674 = YPPsym((P)"r-extend*");
  lit_675 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLstatic_environmentG),Ynil);
  fun_r_extendT_319 = YPfab_met(FUNCODEREF(fun_r_extendT_319),T26,LITREF(lit_674),LITREF(lit_675),sloc(1148),YPsb((P)"(fun (r (bindings <lst>) => <static-environment>) (new <static-local-environment> environment-next r environment-bindings bindings))"));
  T28 = VARREF_OR(YevalSastYr_extendT,YPfalse);
  T29 = fun_r_extendT_319;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYr_extendT,T27);
  lit_676 = YPPsym((P)"find-binding");
  lit_677 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_320 = YPfab_met(FUNCODEREF(fun_find_binding_320),T30,LITREF(lit_676),LITREF(lit_677),sloc(1152),YPsb((P)"(fun (name (r <static-local-environment>) => <any>) (rep loop ((bindings (environment-bindings r))) (if (nul? bindings) (find-binding name (environment-next r)) (if (== name (binding-name (head bindings))) (head bindings) (loop (tail bindings))))))"));
  T32 = VARREF_OR(YevalSmoduleYfind_binding,YPfalse);
  T33 = fun_find_binding_320;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSmoduleYfind_binding,T31);
  lit_678 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_nul_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_321 = YPfab_met(FUNCODEREF(fun_find_binding_321),T34,LITREF(lit_676),LITREF(lit_678),sloc(1162),YPsb((P)"(fun (name (r <static-nul-environment>) => <any>) #f)"));
  T36 = VARREF_OR(YevalSmoduleYfind_binding,YPfalse);
  T37 = fun_find_binding_321;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSmoduleYfind_binding,T35);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_679 = YPPsym((P)"register-magic-binding");
  lit_680 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_322 = YPfab_met(FUNCODEREF(fun_register_magic_binding_322),T38,LITREF(lit_679),LITREF(lit_680),sloc(1169),YPsb((P)"(fun (name value) (set *magic-bindings* (add *magic-bindings* value)))"));
  T40 = VARREF_OR(YevalSastYregister_magic_binding,YPfalse);
  T41 = fun_register_magic_binding_322;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSastYregister_magic_binding,T39);
  lit_681 = YPPsym((P)"magic-bindings");
  T42 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_323 = YPfab_met(FUNCODEREF(fun_magic_bindings_323),T42,LITREF(lit_681),LITREF(lit_557),sloc(1172),YPsb((P)"(fun () *magic-bindings*)"));
  T44 = VARREF_OR(YevalSastYmagic_bindings,YPfalse);
  T45 = fun_magic_bindings_323;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSastYmagic_bindings,T43);
  lit_682 = YPPlist(1,YPPsym((P)"exp"));
  lit_683 = YPPlist(1,YPPsym((P)"return"));
  lit_684 = YPPsym((P)"x-1880");
  lit_685 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_686 = YPPsym((P)"define-magic-binding");
  lit_687 = YPsb((P)"special-");
  lit_688 = YPsb((P)"$sexpr-");
  lit_689 = YPsb((P)"-tag");
  lit_690 = YPPsym((P)"dv");
  lit_691 = YPPsym((P)"new");
  lit_692 = YPPsym((P)"<module-binding>");
  lit_693 = YPPsym((P)"binding-kind");
  lit_694 = YPPsym((P)"binding-name");
  lit_695 = YPPsym((P)"binding-module");
  lit_696 = YPPsym((P)"binding-handler");
  lit_697 = YPPsym((P)"binding-free?");
  T48 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1880_324 = YPfab_met(FUNCODEREF(fun_x_1880_324),T48,LITREF(lit_684),LITREF(lit_685),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'define-magic-binding exp)))"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_325 = YPfab_met(FUNCODEREF(fun_325),T47,YPfalse,LITREF(lit_683),YPfalse,YPsb((P)"(fun (return) (loc ((x-1880 ((msg <str>) (args ...)) (return (macro-error 'define-magic-binding exp)))) (let ((x-1879 exp)) (let ((name #f) (params #f) (body #f)) (if (isa? x-1879 <lst>) (let ((x-1879 (match-atom x-1879 'define-magic-binding x-1880))) (let ((x-1879 (seq (set name (match-unquote x-1879 x-1880)) (tail x-1879)))) (let ((x-1879 (seq (let ((x-1879 (match-sublist x-1879 x-1880))) (let ((x-1879 (seq (set params x-1879) '()))) (let ((x-1879 (seq (let ((x-1879 (match-sublist x-1879 x-1880))) (match-nul-list x-1879 x-1880)) (tail x-1879)))) (match-nul-list x-1879 x-1880)))) (tail x-1879)))) (let ((x-1879 (seq (set body x-1879) '()))) (let ((x-1879 (seq (let ((x-1879 (match-sublist x-1879 x-1880))) (match-nul-list x-1879 x-1880)) (tail x-1879)))) (match-nul-list x-1879 x-1880)))))) (x-1880 Match Pattern Failure x-1879)) (let ((special-name (cat-sym special- name)) (sexpr-name (cat-sym $sexpr- name -tag))) (quasiquote (seq (dv (unquote special-name) (new <module-binding> binding-kind 'magic binding-name (unquote sexpr-name) binding-module #f binding-handler (fun ((unquote-splicing params)) (unquote-splicing body)) binding-free? #f)) (register-magic-binding '(unquote name) (unquote special-name)))))))))"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_326 = YPfab_met(FUNCODEREF(fun_326),T46,YPfalse,LITREF(lit_682),YPfalse,YPsb((P)"(fun (exp) (mif ((define-magic-binding (unquote name) ((unquote-splicing params)) (unquote-splicing body)) exp) (let ((special-name (cat-sym special- name)) (sexpr-name (cat-sym $sexpr- name -tag))) (quasiquote (seq (dv (unquote special-name) (new <module-binding> binding-kind 'magic binding-name (unquote sexpr-name) binding-module #f binding-handler (fun ((unquote-splicing params)) (unquote-splicing body)) binding-free? #f)) (register-magic-binding '(unquote name) (unquote special-name))))) (macro-error 'define-magic-binding exp)))"));
  T49 = fun_326;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T49);
  lit_698 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T50 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_327 = YPfab_met(FUNCODEREF(fun_327),T50,YPfalse,LITREF(lit_698),sloc(1187),YPsb((P)"(fun (x r tail?) (objectify-alternative (sexpr-if-test x) (sexpr-if-then x) (sexpr-if-else x) r tail?))"));
  T52 = fun_327;
  T51 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T52,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T51);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_661),VARREF(YevalSastYspecial_if));
  lit_699 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T53 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_328 = YPfab_met(FUNCODEREF(fun_328),T53,YPfalse,LITREF(lit_699),sloc(1191),YPsb((P)"(fun (x r tail?) (objectify-sequential (tail x) r tail?))"));
  T55 = fun_328;
  T54 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T55,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T54);
  lit_700 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_700),VARREF(YevalSastYspecial_begin));
  lit_701 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_701));
  lit_702 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_329 = YPfab_met(FUNCODEREF(fun_329),T56,YPfalse,LITREF(lit_702),sloc(1196),YPsb((P)"(fun (x r tail?) (objectify-raw (2nd x) r))"));
  T58 = fun_329;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T58,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T57);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_701),VARREF(YevalSastYspecial_Praw));
  lit_703 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_330 = YPfab_met(FUNCODEREF(fun_330),T59,YPfalse,LITREF(lit_703),sloc(1199),YPsb((P)"(fun (x r tail?) (objectify-quotation (sexpr-text-of-quotation x) r))"));
  T61 = fun_330;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T61,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T60);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_654),VARREF(YevalSastYspecial_quote));
  lit_704 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T62 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_331 = YPfab_met(FUNCODEREF(fun_331),T62,YPfalse,LITREF(lit_704),sloc(1202),YPsb((P)"(fun (x r tail?) (objectify-assignment (sexpr-assignment-variable x) (sexpr-assignment-value x) r tail?))"));
  T64 = fun_331;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T64,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T63);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_9),VARREF(YevalSastYspecial_set));
  lit_705 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T65 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_332 = YPfab_met(FUNCODEREF(fun_332),T65,YPfalse,LITREF(lit_705),sloc(1206),YPsb((P)"(fun (x r tail?) (objectify-variable-definition (sexpr-definition-variable x) (sexpr-definition-value x) r))"));
  T67 = fun_332;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T67,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T66);
  lit_706 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_706),VARREF(YevalSastYspecial_define));
  lit_707 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_333 = YPfab_met(FUNCODEREF(fun_333),T68,YPfalse,LITREF(lit_707),sloc(1210),YPsb((P)"(fun (x r tail?) (objectify-variable-definition (sexpr-definition-variable x) (sexpr-definition-value x) r))"));
  T70 = fun_333;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_constant_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T70,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_constant,T69);
  lit_708 = YPPsym((P)"define-constant");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_708),VARREF(YevalSastYspecial_define_constant));
  lit_709 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_709));
  lit_710 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T71 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_334 = YPfab_met(FUNCODEREF(fun_334),T71,YPfalse,LITREF(lit_710),sloc(1216),YPsb((P)"(fun (x r tail?) (objectify-dynamic-definition (sexpr-definition-variable x) (sexpr-definition-value x) r))"));
  T73 = fun_334;
  T72 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T73,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T72);
  lit_711 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_711),VARREF(YevalSastYspecial_define_dynamic));
  lit_712 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T74 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_335 = YPfab_met(FUNCODEREF(fun_335),T74,YPfalse,LITREF(lit_712),sloc(1220),YPsb((P)"(fun (x r tail?) (objectify-syntax-definition (sexpr-syntax-definition-variable x) (sexpr-syntax-definition-value x) r #t))"));
  T76 = fun_335;
  T75 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T76,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T75);
  lit_713 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_713),VARREF(YevalSastYspecial_define_syntax));
  lit_714 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_714));
  lit_715 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T77 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_336 = YPfab_met(FUNCODEREF(fun_336),T77,YPfalse,LITREF(lit_715),sloc(1226),YPsb((P)"(fun (x r tail?) (objectify-syntax-definition (sexpr-syntax-definition-variable x) (sexpr-syntax-definition-value x) r #f))"));
  T79 = fun_336;
  T78 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T79,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T78);
  lit_716 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_716),VARREF(YevalSastYspecial_define_static_syntax));
  lit_717 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T80 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_337 = YPfab_met(FUNCODEREF(fun_337),T80,YPfalse,LITREF(lit_717),sloc(1230),YPsb((P)"(fun (x r tail?) (objectify-method-definition (sexpr-function-definition-variable x) (sexpr-function-definition-value x) r))"));
  T82 = fun_337;
  T81 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T82,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T81);
  lit_718 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_718),VARREF(YevalSastYspecial_define_method));
  lit_719 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T83 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_338 = YPfab_met(FUNCODEREF(fun_338),T83,YPfalse,LITREF(lit_719),sloc(1235),YPsb((P)"(fun (x r tail?) (objectify-generic-definition (sexpr-function-definition-variable x) (sexpr-function-signature x) r))"));
  T85 = fun_338;
  T84 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T85,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T84);
  lit_720 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_720),VARREF(YevalSastYspecial_define_generic));
  lit_721 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T86 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_339 = YPfab_met(FUNCODEREF(fun_339),T86,YPfalse,LITREF(lit_721),sloc(1239),YPsb((P)"(fun (x r tail?) (objectify-function-definition (sexpr-function-definition-variable x) (sexpr-function-definition-value x) r))"));
  T88 = fun_339;
  T87 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T88,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T87);
  lit_722 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_722),VARREF(YevalSastYspecial_define_function));
  lit_723 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T89 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_340 = YPfab_met(FUNCODEREF(fun_340),T89,YPfalse,LITREF(lit_723),sloc(1244),YPsb((P)"(fun (x r tail?) (objectify-function (sexpr-method-signature x) (sexpr-method-body x) (line-of x) r tail?))"));
  T91 = fun_340;
  T90 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T91,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T90);
  lit_724 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_724),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_553));
  lit_725 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T92 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_341 = YPfab_met(FUNCODEREF(fun_341),T92,YPfalse,LITREF(lit_725),sloc(1250),YPsb((P)"(fun (x r tail?) (objectify-bound? (2nd x) (3rd x) r tail?))"));
  T94 = fun_341;
  T93 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T94,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T93);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_553),VARREF(YevalSastYspecial_boundQ));
  lit_726 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T95 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_342 = YPfab_met(FUNCODEREF(fun_342),T95,YPfalse,LITREF(lit_726),sloc(1253),YPsb((P)"(fun (x r tail?) (objectify (sexpr-let->combination x) r tail?))"));
  T97 = fun_342;
  T96 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T97,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T96);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_6),VARREF(YevalSastYspecial_let));
  lit_727 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T100 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T99 = fun_343 = YPfab_met(FUNCODEREF(fun_343),T100,YPfalse,LITREF(lit_727),sloc(1259),YPsb((P)"(fun (x r tail?) (objectify (sexpr-def-value x) r tail?))"));
  T103 = fun_343;
  T102 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T103,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  T101 = VARSET(YevalSastYspecial_def,T102);
  T98 = T101;
  return T98;
}

P YevalSastY___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70;
DEFCREGS();
  lit_728 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_728),VARREF(YevalSastYspecial_def));
  lit_729 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_344 = YPfab_met(FUNCODEREF(fun_344),T0,YPfalse,LITREF(lit_729),sloc(1262),YPsb((P)"(fun (x r tail?) (objectify-locals (sexpr-loc-bound-names x) (sexpr-loc-bound-signatures x) (sexpr-loc-bound-bodies x) (sexpr-loc-raw-body x) r tail?))"));
  T2 = fun_344;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T2,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T1);
  lit_730 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_730),VARREF(YevalSastYspecial_locals));
  lit_731 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_345 = YPfab_met(FUNCODEREF(fun_345),T3,YPfalse,LITREF(lit_731),sloc(1267),YPsb((P)"(fun (x r tail?) (objectify (sexpr-iterate->loc x) r tail?))"));
  T5 = fun_345;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T5,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T4);
  lit_732 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_732),VARREF(YevalSastYspecial_iterate));
  lit_733 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_346 = YPfab_met(FUNCODEREF(fun_346),T6,YPfalse,LITREF(lit_733),sloc(1270),YPsb((P)"(fun (x r tail?) (objectify-bind-exit (sexpr-block-name x) (sexpr-block-body x) (line-of x) r tail?))"));
  T8 = fun_346;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T8,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T7);
  lit_734 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_734),VARREF(YevalSastYspecial_bind_exit));
  lit_735 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_347 = YPfab_met(FUNCODEREF(fun_347),T9,YPfalse,LITREF(lit_735),sloc(1274),YPsb((P)"(fun (x r tail?) (objectify-unwind-protect (sexpr-unwind-protect-protected-form x) (sexpr-unwind-protect-cleanup-forms x) (line-of x) r tail?))"));
  T11 = fun_347;
  T10 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T11,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T10);
  lit_736 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_736),VARREF(YevalSastYspecial_unwind_protect));
  lit_737 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T12 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_348 = YPfab_met(FUNCODEREF(fun_348),T12,YPfalse,LITREF(lit_737),sloc(1280),YPsb((P)"(fun (x r tail?) (def (tup type info test handler body) (sexpr-monitor-expand x)) (objectify-monitor type info test handler body r tail?))"));
  T14 = fun_348;
  T13 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T14,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T13);
  lit_738 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_738),VARREF(YevalSastYspecial_monitor));
  lit_739 = YPPsym((P)"pairize");
  lit_740 = YPPlist(1,YPPsym((P)"args"));
  lit_741 = YPPsym((P)"fab-pair");
  T15 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_349 = YPfab_met(FUNCODEREF(fun_pairize_349),T15,LITREF(lit_739),LITREF(lit_740),sloc(1284),YPsb((P)"(fun ((args <lst>) => <any>) (if (nul? args) (lst 'quote '()) (lst 'fab-pair (head args) (pairize (tail args)))))"));
  T17 = VARREF_OR(YevalSastYpairize,YPfalse);
  T18 = fun_pairize_349;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalSastYpairize,T16);
  lit_742 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_743 = YPPsym((P)"fab-class");
  T19 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_350 = YPfab_met(FUNCODEREF(fun_350),T19,YPfalse,LITREF(lit_742),sloc(1289),YPsb((P)"(fun (x r tail?) (def name (sexpr-definition-variable x)) (objectify-definition <variable-definition> 'global name (quasiquote (fab-class '(unquote name) (unquote (pairize (sexpr-define-class-parents x))))) r))"));
  T21 = fun_350;
  T20 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T21,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T20);
  lit_744 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_744),VARREF(YevalSastYspecial_define_class));
  lit_745 = YPPsym((P)"objectify-define-property");
  lit_746 = YPPlist(4,YPPsym((P)"x"),YPPsym((P)"setter?"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_747 = YPPsym((P)"%prop");
  lit_748 = YPPsym((P)"%prop-unbound-error");
  T22 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_define_property_351 = YPfab_met(FUNCODEREF(fun_objectify_define_property_351),T22,LITREF(lit_745),LITREF(lit_746),sloc(1294),YPsb((P)"(fun (x setter? r tail?) (def name (sexpr-prop-name x)) (def var (sexpr-prop-init-var x)) (def owner (sexpr-prop-owner x)) (def type (sexpr-prop-type x)) (def line (line-of x)) (def setter-name (and setter? (sexpr-fab-setter-name name))) (objectify (sexpr-make-begin (lst (sexpr-fab-getter name owner line) (and setter? (sexpr-fab-setter name owner type line)) (sexpr-make-application '%prop (lst owner name setter-name type (if (sexpr-prop-init? x) (sexpr-make-anonymous-method (quasiquote (((unquote var) <any>))) (line-list line (sexpr-prop-init x))) '%prop-unbound-error))))) r tail?))"));
  T24 = VARREF_OR(YevalSastYobjectify_define_property,YPfalse);
  T25 = fun_objectify_define_property_351;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYobjectify_define_property,T23);
  lit_749 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T26 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_352 = YPfab_met(FUNCODEREF(fun_352),T26,YPfalse,LITREF(lit_749),sloc(1315),YPsb((P)"(fun (x r tail?) (objectify-define-property x #t r tail?))"));
  T28 = fun_352;
  T27 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_propX_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T28,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_propX,T27);
  lit_750 = YPPsym((P)"prop!");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_750),VARREF(YevalSastYspecial_propX));
  lit_751 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T29 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_353 = YPfab_met(FUNCODEREF(fun_353),T29,YPfalse,LITREF(lit_751),sloc(1318),YPsb((P)"(fun (x r tail?) (objectify-define-property x #f r tail?))"));
  T31 = fun_353;
  T30 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T31,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T30);
  lit_752 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_752),VARREF(YevalSastYspecial_prop));
  lit_753 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_753));
  lit_754 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T32 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_354 = YPfab_met(FUNCODEREF(fun_354),T32,YPfalse,LITREF(lit_754),sloc(1323),YPsb((P)"(fun (x r tail?) (objectify-compile-time (head (tail x)) r tail? #f))"));
  T34 = fun_354;
  T33 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T34,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T33);
  lit_755 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_755),VARREF(YevalSastYspecial_compile_time));
  lit_756 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_756));
  lit_757 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T35 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_355 = YPfab_met(FUNCODEREF(fun_355),T35,YPfalse,LITREF(lit_757),sloc(1328),YPsb((P)"(fun (x r tail?) (objectify-compile-time (head (tail x)) r tail? #t))"));
  T37 = fun_355;
  T36 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T37,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T36);
  lit_758 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_758),VARREF(YevalSastYspecial_compile_time_also));
  lit_759 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_759));
  lit_760 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_356 = YPfab_met(FUNCODEREF(fun_356),T38,YPfalse,LITREF(lit_760),sloc(1333),YPsb((P)"(fun (x r tail?) (if (sexpr-forward-primitive? x) (seq (ast-define-binding r (sexpr-function-definition-variable x) #f 'predefined) (objectify #f r tail?)) (objectify-primitive-definition (sexpr-function-definition-variable x) (sexpr-function-definition-adjectives x) (sexpr-function-signature x) (sexpr-function-body x) r)))"));
  T40 = fun_356;
  T39 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T40,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T39);
  lit_761 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_761),VARREF(YevalSastYspecial_define_primitive));
  lit_762 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T41 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_357 = YPfab_met(FUNCODEREF(fun_357),T41,YPfalse,LITREF(lit_762),sloc(1343),YPsb((P)"(fun (x r tail?) (objectify (sexpr-expand-backquote x) r tail?))"));
  T43 = fun_357;
  T42 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T43,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T42);
  lit_763 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_763),VARREF(YevalSastYspecial_quasiquote));
  lit_764 = YPPsym((P)"ast-macro-expand");
  lit_765 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T44 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_358 = YPfab_met(FUNCODEREF(fun_ast_macro_expand_358),T44,LITREF(lit_764),LITREF(lit_765),sloc(1346),YPsb((P)"(fun (x r tail?) (def ast (objectify (head x) r tail?)) (if (isa? ast <macro-reference>) (let ((mac (reference-binding ast)) (res ((binding-handler mac) x r tail?))) res) #f))"));
  T46 = VARREF_OR(YevalSastYast_macro_expand,YPfalse);
  T47 = fun_ast_macro_expand_358;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYast_macro_expand,T45);
  lit_766 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T48 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_359 = YPfab_met(FUNCODEREF(fun_359),T48,YPfalse,LITREF(lit_766),sloc(1355),YPsb((P)"(fun (x r tail?) (objectify-quotation (ast-macro-expand (2nd x) r tail?) r))"));
  T50 = fun_359;
  T49 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T50,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T49);
  lit_767 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_767),VARREF(YevalSastYspecial_macro_expand));
  lit_768 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T51 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_360 = YPfab_met(FUNCODEREF(fun_360),T51,YPfalse,LITREF(lit_768),sloc(1359),YPsb((P)"(fun (x r tail?) (objectify (expand-syntax-if x) r tail?))"));
  T53 = fun_360;
  T52 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T53,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T52);
  lit_769 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_769),VARREF(YevalSastYspecial_syntax_if));
  lit_770 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_770));
  lit_771 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T54 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_361 = YPfab_met(FUNCODEREF(fun_361),T54,YPfalse,LITREF(lit_771),sloc(1369),YPsb((P)"(fun (x r tail?) (objectify-export (tail x) r tail?))"));
  T56 = fun_361;
  T55 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T56,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T55);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_770),VARREF(YevalSastYspecial_export));
  lit_772 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_772));
  lit_773 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T57 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_362 = YPfab_met(FUNCODEREF(fun_362),T57,YPfalse,LITREF(lit_773),sloc(1374),YPsb((P)"(fun (x r tail?) (objectify-use-module (2nd x) r tail?))"));
  T59 = fun_362;
  T58 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T59,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T58);
  lit_774 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_774),VARREF(YevalSastYspecial_use_module));
  lit_775 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_775));
  lit_776 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T60 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_363 = YPfab_met(FUNCODEREF(fun_363),T60,YPfalse,LITREF(lit_776),sloc(1379),YPsb((P)"(fun (x r tail?) (objectify-use-mangle-module (2nd x) r tail?))"));
  T62 = fun_363;
  T61 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T62,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T61);
  lit_777 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_777),VARREF(YevalSastYspecial_use_mangle_module));
  lit_778 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_778));
  lit_779 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T63 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_364 = YPfab_met(FUNCODEREF(fun_364),T63,YPfalse,LITREF(lit_779),sloc(1384),YPsb((P)"(fun (x r tail?) (objectify-use-include (2nd x) r tail?))"));
  T65 = fun_364;
  T64 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T65,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T64);
  lit_780 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_780),VARREF(YevalSastYspecial_use_include));
  lit_781 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_781));
  lit_782 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T66 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_365 = YPfab_met(FUNCODEREF(fun_365),T66,YPfalse,LITREF(lit_782),sloc(1389),YPsb((P)"(fun (x r tail?) (objectify-use-library (2nd x) r tail?))"));
  T68 = fun_365;
  T67 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T68,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T67);
  lit_783 = YPPsym((P)"use-library");
  T70 = XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_783),VARREF(YevalSastYspecial_use_library));
  T69 = T70;
  return T69;
}

P YevalSastY___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
DEFCREGS();
  lit_784 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_784));
  lit_785 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_366 = YPfab_met(FUNCODEREF(fun_366),T0,YPfalse,LITREF(lit_785),sloc(1394),YPsb((P)"(fun (x r tail?) (objectify-use/export-module (2nd x) r tail?))"));
  T2 = fun_366;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_515),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T2,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T1);
  lit_786 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_786),VARREF(YevalSastYspecial_useSexport_module));
  lit_787 = YPPsym((P)"install-initial-bindings");
  lit_788 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_789 = YPPlist(1,YPPsym((P)"name"));
  lit_790 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_367 = YPfab_met(FUNCODEREF(fun_367),T4,YPfalse,LITREF(lit_789),sloc(1429),YPsb((P)"(fun (name) (insert-global! (find-binding name bootenv) env))"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_install_initial_bindings_368 = YPfab_met(FUNCODEREF(fun_install_initial_bindings_368),T3,LITREF(lit_787),LITREF(lit_788),sloc(1425),YPsb((P)"(fun ((env <static-global-environment>) (loader <module-loader>)) (def bootmod (probe-module loader $goo-boot-module-name)) (def bootenv (module-target-environment bootmod)) (do (fun (name) (insert-global! (find-binding name bootenv) env)) '(seq use)))"));
  T6 = VARREF_OR(YevalSmoduleYinstall_initial_bindings,YPfalse);
  T7 = fun_install_initial_bindings_368;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSmoduleYinstall_initial_bindings,T5);
  lit_791 = YPPsym((P)"objectify-with-subtransaction");
  lit_792 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"dynamic-compilation?"),YPPsym((P)"tail?"));
  T9 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_369 = YPfab_met(FUNCODEREF(fun_369),T9,YPfalse,LITREF(lit_557),sloc(1445),YPsb((P)"(fun () (objectify e r tail?))"));
  T8 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPfab_met(FUNCODEREF(YevalSastYobjectify_with_subtransaction),T8,LITREF(lit_791),LITREF(lit_792),sloc(1443),YPsb((P)"(fun (e (r <static-environment>) dynamic-compilation? tail? => <any>) (with-subtransaction ((environment-module r)) (objectify e r tail?)))"));
  T10 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T10);
  lit_793 = YPPsym((P)"install-magic-bindings");
  lit_794 = YPPlist(1,YPPsym((P)"env"));
  lit_795 = YPPlist(1,YPPsym((P)"binding"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_371 = YPfab_met(FUNCODEREF(fun_371),T12,YPfalse,LITREF(lit_795),sloc(1456),YPsb((P)"(fun (binding) (def clone (ast-define-binding env (binding-name binding) #f 'magic)) (set (binding-handler clone) (binding-handler binding)))"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPfab_met(FUNCODEREF(YevalSastYinstall_magic_bindings),T11,LITREF(lit_793),LITREF(lit_794),sloc(1454),YPsb((P)"(fun (env) (do (fun (binding) (def clone (ast-define-binding env (binding-name binding) #f 'magic)) (set (binding-handler clone) (binding-handler binding))) (magic-bindings)))"));
  T13 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T13);
  lit_796 = YPPsym((P)"reload-macros");
  T14 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPfab_met(FUNCODEREF(YevalSastYreload_macros),T14,LITREF(lit_796),LITREF(lit_557),sloc(1462),YPsb((P)"(fun () (do3 (rcurry %%macro #f) *boot-macro-module-names* *boot-macro-names* *boot-macro-expanders*) (set *macros-ok?* #t))"));
  T15 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T15);
  lit_797 = YPPsym((P)"install-interpreter-hacks");
  lit_798 = YPPlist(1,YPPsym((P)"env"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPfab_met(FUNCODEREF(YevalSastYinstall_interpreter_hacks),T16,LITREF(lit_797),LITREF(lit_798),sloc(1469),YPsb((P)"(fun (env) (init-environment-for-eval env))"));
  T17 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T17);
  lit_799 = YPPsym((P)"init-runtime");
  T18 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPfab_met(FUNCODEREF(YevalSastYinit_runtime),T18,LITREF(lit_799),LITREF(lit_557),sloc(1472),YPsb((P)"(fun () (reload-modules) (def bootmod (probe-module (runtime-module-loader) $goo-boot-module-name)) (def bootenv (module-target-environment bootmod)) (install-magic-bindings bootenv) (reload-macros) (install-interpreter-hacks bootenv) #f)"));
  T19 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T19);
  lit_800 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_800));
  lit_801 = YPPsym((P)"fab-syntax-environment");
  lit_802 = YPPlist(1,YPPsym((P)"module"));
  lit_803 = YPPsym((P)"goo");
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPfab_met(FUNCODEREF(YevalSastYfab_syntax_environment),T20,LITREF(lit_801),LITREF(lit_802),sloc(1496),YPsb((P)"(fun ((module <module>) => <static-global-environment>) (fab-subset-environment module (runtime-module 'goo) syntax-environment-excluded-bindings))"));
  T21 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T21);
  lit_804 = YPPsym((P)"fab-g2c-module");
  lit_805 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPfab_met(FUNCODEREF(YevalSastYfab_g2c_module),T22,LITREF(lit_804),LITREF(lit_805),sloc(1501),YPsb((P)"(fun ((loader <module-loader>) (name <sym>) => <module>) (def type (module-loader-module-type loader)) (def module (new type module-name name)) (def syntax-env (fab-syntax-environment module)) (def target-env (fab-static-global-environment module loader #f)) (set-module-environments module syntax-env target-env) (if (== name $goo-boot-module-name) (init-g2c-boot-environment target-env) (init-g2c-regular-environment target-env loader)) module)"));
  T23 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T23);
  lit_806 = YPPsym((P)"init-g2c-boot-environment");
  lit_807 = YPPlist(1,YPPsym((P)"env"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPfab_met(FUNCODEREF(YevalSastYinit_g2c_boot_environment),T24,LITREF(lit_806),LITREF(lit_807),sloc(1514),YPsb((P)"(fun ((env <static-global-environment>)) (insert-globals! (magic-bindings) env))"));
  T25 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T25);
  lit_808 = YPPsym((P)"init-g2c-regular-environment");
  lit_809 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPfab_met(FUNCODEREF(YevalSastYinit_g2c_regular_environment),T26,LITREF(lit_808),LITREF(lit_809),sloc(1520),YPsb((P)"(fun ((env <static-global-environment>) (loader <module-loader>)) (install-initial-bindings env loader))"));
  T27 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T27);
  lit_810 = YPPsym((P)"init-ast");
  T28 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPfab_met(FUNCODEREF(YevalSastYinit_ast),T28,LITREF(lit_810),LITREF(lit_557),sloc(1529),YPsb((P)"(fun () (init-runtime))"));
  T29 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T29);
  lit_811 = YPPsym((P)"ast-contains-fun?");
  lit_812 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_381 = YPfab_met(FUNCODEREF(fun_ast_contains_funQ_381),T30,LITREF(lit_811),LITREF(lit_812),sloc(1535),YPsb((P)"(fun ((x <ast-method>) => <log>) #t)"));
  T32 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T33 = fun_ast_contains_funQ_381;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYast_contains_funQ,T31);
  lit_813 = YPPlist(1,YPPsym((P)"x"));
  lit_814 = YPPlist(1,YPPsym((P)"return"));
  lit_815 = YPPsym((P)"walk");
  lit_816 = YPPlist(1,YPPsym((P)"y"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_382 = YPfab_met(FUNCODEREF(fun_walk_382),T36,LITREF(lit_815),LITREF(lit_816),sloc(1540),YPsb((P)"(fun (y) (if (isa? y <ast-method>) (return #t) (ast-walk walk y)))"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_383 = YPfab_met(FUNCODEREF(fun_383),T35,YPfalse,LITREF(lit_814),sloc(1539),YPsb((P)"(fun (return) (loc ((walk (y) (if (isa? y <ast-method>) (return #t) (ast-walk walk y)))) (ast-walk walk x)) #f)"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_384 = YPfab_met(FUNCODEREF(fun_ast_contains_funQ_384),T34,LITREF(lit_811),LITREF(lit_813),sloc(1538),YPsb((P)"(fun (x => <log>) (esc return (loc ((walk (y) (if (isa? y <ast-method>) (return #t) (ast-walk walk y)))) (ast-walk walk x)) #f))"));
  T38 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T39 = fun_ast_contains_funQ_384;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYast_contains_funQ,T37);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T40 = YPfalse;
  return T40;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSloc;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSsystem},
  {&module_info_gooScolsSlst},
  {&module_info_gooSioSread},
  {&module_info_evalSsyntax},
  {&module_info_evalSdependency},
  {&module_info_evalSmodule},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"$nul-dependency", &module_info_evalSdependency, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"dependency-nul?", &module_info_evalSdependency, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"---main-6---", PVAR, NULL},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"loop-body", CVAR, &YevalSastYloop_body},
  {"loop-continue", CVAR, &YevalSastYloop_continue},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"<loop>", CVAR, &YevalSastYLloopG},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"%%%macro", CVAR, &YevalSastYPPPmacro},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"application-loop-setter", CVAR, &YevalSastYapplication_loop_setter},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"program-line-setter", CVAR, &YevalSastYprogram_line_setter},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"arguments", CVAR, &YevalSastYarguments},
  {"bound?-default-setter", CVAR, &YevalSastYboundQ_default_setter},
  {"---main-8---", PVAR, NULL},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"function-loop-setter", CVAR, &YevalSastYfunction_loop_setter},
  {"special-define-constant", CVAR, &YevalSastYspecial_define_constant},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"$fab-list-nul", CVAR, &YevalSastYDfab_list_nul},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"objectify-function-using", CVAR, &YevalSastYobjectify_function_using},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"pairize", CVAR, &YevalSastYpairize},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"<loop-application>", CVAR, &YevalSastYLloop_applicationG},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"---main-0---", PVAR, NULL},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"req-sig-specs", CVAR, &YevalSastYreq_sig_specs},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"binding-closed-over?-setter", CVAR, &YevalSastYbinding_closed_overQ_setter},
  {"$arguments-nul", CVAR, &YevalSastYDarguments_nul},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"$free-environment-nul", CVAR, &YevalSastYDfree_environment_nul},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"ftype", CVAR, &YevalSastYftype},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"---main-7---", PVAR, NULL},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"---main-2---", PVAR, NULL},
  {"bound?-default", CVAR, &YevalSastYboundQ_default},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"loop-continue-setter", CVAR, &YevalSastYloop_continue_setter},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"loop-bindings-setter", CVAR, &YevalSastYloop_bindings_setter},
  {"function-names", CVAR, &YevalSastYfunction_names},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"loop-body-setter", CVAR, &YevalSastYloop_body_setter},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"application-loop", CVAR, &YevalSastYapplication_loop},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"incf-ref-count", CVAR, &YevalSastYincf_ref_count},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"program-line", CVAR, &YevalSastYprogram_line},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"function-loop", CVAR, &YevalSastYfunction_loop},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"with-dependent", PVAR, NULL},
  {"binding-closed-over?", CVAR, &YevalSastYbinding_closed_overQ},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"---main-3---", PVAR, NULL},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"$sequential-nul", CVAR, &YevalSastYDsequential_nul},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"loop-bindings", CVAR, &YevalSastYloop_bindings},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"---main-4---", PVAR, NULL},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"sequential", CVAR, &YevalSastYsequential},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"function-ref-count", CVAR, &YevalSastYfunction_ref_count},
  {"def-programs", PVAR, NULL},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"function-ref-count-setter", CVAR, &YevalSastYfunction_ref_count_setter},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"bind-exit-light?-setter", CVAR, &YevalSastYbind_exit_lightQ_setter},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"---main-10---", PVAR, NULL},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"bind-exit-light?", CVAR, &YevalSastYbind_exit_lightQ},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"function-arity", CVAR, &YevalSastYfunction_arity},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"---main-5---", PVAR, NULL},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"ast-contains-fun?", CVAR, &YevalSastYast_contains_funQ},
  {"---main-9---", PVAR, NULL},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"$functions-nul", CVAR, &YevalSastYDfunctions_nul},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"special-prop!", CVAR, &YevalSastYspecial_propX},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"define-magic-binding", PVAR, NULL},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"objectify-define-property", CVAR, &YevalSastYobjectify_define_property},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"---main-1---", PVAR, NULL},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"functions", CVAR, &YevalSastYfunctions},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"module-syntax-environment", NULL},
  {"binding-name", NULL},
  {"environment-module", NULL},
  {"<sequential>", NULL},
  {"<ast-primitive>", NULL},
  {"runtime-module", NULL},
  {"binding-prop-setter", NULL},
  {"<arguments>", NULL},
  {"binding-kind-setter", NULL},
  {"module-data-processed?-setter", NULL},
  {"module-mangled-string-name", NULL},
  {"transaction-register-implemented-binding", NULL},
  {"function-nary?", NULL},
  {"<real-reference>", NULL},
  {"init-ast", NULL},
  {"function-frame-len", NULL},
  {"%%%macro", NULL},
  {"binding-module", NULL},
  {"<global-assignment>", NULL},
  {"binding-locative", NULL},
  {"def-list", NULL},
  {"function-adjectives", NULL},
  {"<static-nul-environment>", NULL},
  {"assignment-form-setter", NULL},
  {"<immediate-constant>", NULL},
  {"module-runtime-data", NULL},
  {"<ast-method>", NULL},
  {"<module-loader>", NULL},
  {"find-environment-module", NULL},
  {"<functions>", NULL},
  {"ensure-module-data", NULL},
  {"global-box-value", NULL},
  {"<regular-application>", NULL},
  {"function-source", NULL},
  {"function-binding", NULL},
  {"import-and-mangle-global!", NULL},
  {"binding-mangled-name-setter", NULL},
  {"function-index-setter", NULL},
  {"runtime-module-loader", NULL},
  {"module-name-to-relpath", NULL},
  {"reference-called-function?-setter", NULL},
  {"signature-arity-setter", NULL},
  {"module-loader-module-type", NULL},
  {"signature-value", NULL},
  {"objectify-signature", NULL},
  {"program-line", NULL},
  {"<programs>", NULL},
  {"reference-frame-number", NULL},
  {"as-lst", NULL},
  {"function-body", NULL},
  {"assignment-reference", NULL},
  {"<fab-list>", NULL},
  {"module-mangled-name", NULL},
  {"environment-module-loader", NULL},
  {"insert-globals!", NULL},
  {"function-debug-name", NULL},
  {"<loop-application>", NULL},
  {"binding-inferred-type-setter", NULL},
  {"load-module", NULL},
  {"function-specs", NULL},
  {"ast-walk", NULL},
  {"signature-value-setter", NULL},
  {"<free-environment>", NULL},
  {"<dynamic-assignment>", NULL},
  {"function-registers", NULL},
  {"<predefined-application>", NULL},
  {"roll-back-transaction", NULL},
  {"function-loop-setter", NULL},
  {"environment-allows-foreign-names?", NULL},
  {"binding-index", NULL},
  {"<ast-primitive-definition>", NULL},
  {"binding-closed-over?-setter", NULL},
  {"binding-type", NULL},
  {"<bound?>", NULL},
  {"environment-next", NULL},
  {"binding-prop", NULL},
  {"process-closed-application", NULL},
  {"binding-kind", NULL},
  {"module-data-processed?", NULL},
  {"bound?-reference", NULL},
  {"function-index", NULL},
  {"frame-bindings", NULL},
  {"with-subtransaction", NULL},
  {"<assignment>", NULL},
  {"<constant>", NULL},
  {"binding-info-setter", NULL},
  {"assignment-form", NULL},
  {"environment-uses-modules", NULL},
  {"<magic-reference>", NULL},
  {"bound?-default", NULL},
  {"loop-continue-setter", NULL},
  {"module-uses-c-libraries", NULL},
  {"loop-bindings-setter", NULL},
  {"%%macro", NULL},
  {"fab-subset-environment", NULL},
  {"find-syntax-environment", NULL},
  {"function-names", NULL},
  {"<static-local-environment>", NULL},
  {"signature-nary?-setter", NULL},
  {"<local-assignment>", NULL},
  {"<ast-embodied-function>", NULL},
  {"$bot", NULL},
  {"<runtime-reference>", NULL},
  {"loop-body-setter", NULL},
  {"binding-global-box", NULL},
  {"function-free-setter", NULL},
  {"<raw-constant>", NULL},
  {"binding-mangled-name", NULL},
  {"constant-value", NULL},
  {"remove-modules-by-name!", NULL},
  {"reference-called-function?", NULL},
  {"sequentialize", NULL},
  {"binding-dotted?-setter", NULL},
  {"<ast-generic>", NULL},
  {"signature-arity", NULL},
  {"<reference>", NULL},
  {"<passive-program>", NULL},
  {"insert-global!", NULL},
  {"application-known?-setter", NULL},
  {"<binding>", NULL},
  {"<module-binding-reference>", NULL},
  {"binding-value-setter", NULL},
  {"<module-binding>", NULL},
  {"binding-inferred-type", NULL},
  {"function-body-setter", NULL},
  {"ast-walk!", NULL},
  {"free-environment", NULL},
  {"program-register", NULL},
  {"<computed-program>", NULL},
  {"<dynamic-definition>", NULL},
  {"<program>", NULL},
  {"*current-subtransaction*", NULL},
  {"binding-locative-setter", NULL},
  {"objectify-with-subtransaction", NULL},
  {"function-loop", NULL},
  {"binding-closed-over?", NULL},
  {"do-module-loader-modules", NULL},
  {"signature-specs-setter", NULL},
  {"fix-let-body-setter", NULL},
  {"function-ref-count-setter", NULL},
  {"ast-contains-fun?", NULL},
  {"function-bindings", NULL},
  {"function-signature-setter", NULL},
  {"module-uses-c-includes", NULL},
  {"function-temporaries-setter", NULL},
  {"<ast-macro-definition>", NULL},
  {"function-source-setter", NULL},
  {"export-binding!", NULL},
  {"binding-dynamic-extent?-setter", NULL},
  {"objectify-quotation", NULL},
  {"<method-application>", NULL},
  {"<global-box>", NULL},
  {"<loop>", NULL},
  {"environment-bindings", NULL},
  {"unchecked-runtime-environment", NULL},
  {"signature-names-setter", NULL},
  {"constant-index", NULL},
  {"def-programs", NULL},
  {"fix-let-arguments-setter", NULL},
  {"binding-info", NULL},
  {"fix-let-bindings-setter", NULL},
  {"<ast-function>", NULL},
  {"<module>", NULL},
  {"install-initial-bindings", NULL},
  {"<alternative>", NULL},
  {"loop-continue", NULL},
  {"module-uses-c-files", NULL},
  {"loop-bindings", NULL},
  {"fix-let-types-setter", NULL},
  {"report-undefined-global-bindings", NULL},
  {"program-type-setter", NULL},
  {"probe-module", NULL},
  {"signature-nary?", NULL},
  {"module-name", NULL},
  {"function-debug-name-setter", NULL},
  {"do-named-static-global-bindings", NULL},
  {"loop-body", NULL},
  {"binding-free?-setter", NULL},
  {"function-free", NULL},
  {"alternative-alternant", NULL},
  {"<local-binding>", NULL},
  {"<static-module-binding-reference>", NULL},
  {"module-referenced-bindings", NULL},
  {"alternative-condition", NULL},
  {"binding-dotted?", NULL},
  {"env-object-name", NULL},
  {"<static-environment>", NULL},
  {"signature-bindings", NULL},
  {"application-known?", NULL},
  {"monitor-main-thunk", NULL},
  {"alternative-consequent", NULL},
  {"fab-static-global-environment", NULL},
  {"*dynamic-compilation?*", NULL},
  {"register-referenced-binding", NULL},
  {"<definition>", NULL},
  {"<bot>", NULL},
  {"binding-handler-setter", NULL},
  {"<dynamic-reference>", NULL},
  {"import-global!", NULL},
  {"<static-global-environment>", NULL},
  {"fix-let-body", NULL},
  {"application-next-methods", NULL},
  {"find-static-global-environment", NULL},
  {"function-value", NULL},
  {"locals-body-setter", NULL},
  {"locals-bindings-setter", NULL},
  {"<binding-name>", NULL},
  {"<runtime-assignment>", NULL},
  {"namespace-error", NULL},
  {"signature-specs", NULL},
  {"function-ref-count", NULL},
  {"init-environment-for-eval", NULL},
  {"function-signature", NULL},
  {"locals-functions-setter", NULL},
  {"function-temporaries", NULL},
  {"program-register-setter", NULL},
  {"ast-define-binding", NULL},
  {"binding-dynamic-extent?", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"<ast-signature>", NULL},
  {"binding-native-to?", NULL},
  {"<unwind-protect>", NULL},
  {"signature-names", NULL},
  {"function-frame-len-setter", NULL},
  {"reload-modules", NULL},
  {"<application>", NULL},
  {"monitor-handler", NULL},
  {"fab-g2c-module", NULL},
  {"fix-let-arguments", NULL},
  {"assignment-binding", NULL},
  {"application-function", NULL},
  {"fix-let-bindings", NULL},
  {"req-sig-specs", NULL},
  {"module-target-environment", NULL},
  {"walk-bindings", NULL},
  {"module-runtime-data-setter", NULL},
  {"application-arguments", NULL},
  {"reference-frame-offset", NULL},
  {"<namespace-error>", NULL},
  {"monitor-test", NULL},
  {"<local-reference>", NULL},
  {"binding-mutable?", NULL},
  {"binding-value", NULL},
  {"binding-handler", NULL},
  {"find-binding", NULL},
  {"fix-let-types", NULL},
  {"program-type", NULL},
  {"unwind-protect-protected-thunk", NULL},
  {"unwind-protect-cleanup-thunk", NULL},
  {"module-loader-stack", NULL},
  {"runtime-environment", NULL},
  {"global-box-value-setter", NULL},
  {"application-tail?", NULL},
  {"reference-binding", NULL},
  {"<monitor>", NULL},
  {"bind-exit-light?", NULL},
  {"monitor-type", NULL},
  {"binding-free?", NULL},
  {"locals-functions", NULL},
  {"transaction-register-dependent", NULL},
  {"locals-body", NULL},
  {"function-arity", NULL},
  {"load-in", NULL},
  {"$goo-boot-module-name", NULL},
  {"register-module!", NULL},
  {"<low-let>", NULL},
  {"binding-module-name", NULL},
  {"signature-bindings-setter", NULL},
  {"<bind-exit>", NULL},
  {"call-with-subtransaction", NULL},
  {"binding-global-box-setter", NULL},
  {"set-module-environments", NULL},
  {"application-binding", NULL},
  {"<compile-time>", NULL},
  {"module-mangled-name-setter", NULL},
  {"do-static-global-bindings", NULL},
  {"ast-evaluate", NULL},
  {"bind-exit-main-fun", NULL},
  {"monitor-info", NULL},
  {"<fix-let>", NULL},
  {"compile-time-program", NULL},
  {"<locals>", NULL},
  {"module-transaction", NULL},
  {"module-exports", NULL},
  {"application-loop", NULL},
  {"function-registers-setter", NULL},
  {"<macro-reference>", NULL},
  {"<global-reference>", NULL},
  {"zap-referenced-bindings!", NULL},
  {"locals-bindings", NULL},
  {"binding-index-setter", NULL},
  {"binding-type-setter", NULL},
  {"ast-error", NULL},
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
extern void load_module_gooStypes (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooSioSread (void);
extern void load_module_evalSsyntax (void);
extern void load_module_evalSdependency (void);
extern void load_module_evalSmodule (void);

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
  load_module_gooStypes();
  load_module_gooSsystem();
  load_module_gooScolsSlst();
  load_module_gooSioSread();
  load_module_evalSsyntax();
  load_module_evalSdependency();
  load_module_evalSmodule();

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
